#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0045[1023] = {
    1, 0, 0, 0, 0, 2, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0,
    0, 24, 0, 25, 26, 0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0,
    66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74,
    0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0,
    97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116,
    0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167,
    0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0,
    0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185,
    0, 186, 0, 0, 187, 188, 0, 189, 0, 0, 190, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196,
};
void recomp_unit_0045_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08831000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0045[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08831000;
    case 2u: goto L_08831014;
    case 3u: goto L_08831018;
    case 4u: goto L_08831020;
    case 5u: goto L_08831060;
    case 6u: goto L_08831064;
    case 7u: goto L_08831080;
    case 8u: goto L_08831090;
    case 9u: goto L_088310A0;
    case 10u: goto L_088310A8;
    case 11u: goto L_088310EC;
    case 12u: goto L_088310F8;
    case 13u: goto L_0883110C;
    case 14u: goto L_08831140;
    case 15u: goto L_08831148;
    case 16u: goto L_08831150;
    case 17u: goto L_08831170;
    case 18u: goto L_08831194;
    case 19u: goto L_088311AC;
    case 20u: goto L_088311B8;
    case 21u: goto L_088311C4;
    case 22u: goto L_088311E0;
    case 23u: goto L_088311E8;
    case 24u: goto L_08831204;
    case 25u: goto L_0883120C;
    case 26u: goto L_08831210;
    case 27u: goto L_08831218;
    case 28u: goto L_0883122C;
    case 29u: goto L_08831234;
    case 30u: goto L_0883123C;
    case 31u: goto L_08831244;
    case 32u: goto L_08831248;
    case 33u: goto L_08831260;
    case 34u: goto L_08831280;
    case 35u: goto L_088312C8;
    case 36u: goto L_088312D4;
    case 37u: goto L_08831304;
    case 38u: goto L_08831318;
    case 39u: goto L_08831338;
    case 40u: goto L_0883134C;
    case 41u: goto L_08831358;
    case 42u: goto L_08831370;
    case 43u: goto L_0883137C;
    case 44u: goto L_088313A8;
    case 45u: goto L_088313B0;
    case 46u: goto L_088313F8;
    case 47u: goto L_08831404;
    case 48u: goto L_0883141C;
    case 49u: goto L_08831428;
    case 50u: goto L_0883144C;
    case 51u: goto L_08831458;
    case 52u: goto L_08831478;
    case 53u: goto L_08831498;
    case 54u: goto L_088314AC;
    case 55u: goto L_088314B8;
    case 56u: goto L_088314DC;
    case 57u: goto L_08831500;
    case 58u: goto L_08831510;
    case 59u: goto L_0883151C;
    case 60u: goto L_08831540;
    case 61u: goto L_08831548;
    case 62u: goto L_08831550;
    case 63u: goto L_08831560;
    case 64u: goto L_08831568;
    case 65u: goto L_08831578;
    case 66u: goto L_08831580;
    case 67u: goto L_08831590;
    case 68u: goto L_088315A0;
    case 69u: goto L_088315B8;
    case 70u: goto L_088315C0;
    case 71u: goto L_088315CC;
    case 72u: goto L_088315E0;
    case 73u: goto L_088315F0;
    case 74u: goto L_088315FC;
    case 75u: goto L_08831604;
    case 76u: goto L_08831610;
    case 77u: goto L_08831618;
    case 78u: goto L_08831644;
    case 79u: goto L_0883167C;
    case 80u: goto L_088316AC;
    case 81u: goto L_08831708;
    case 82u: goto L_08831760;
    case 83u: goto L_0883177C;
    case 84u: goto L_08831788;
    case 85u: goto L_088317A8;
    case 86u: goto L_088317B4;
    case 87u: goto L_088317C0;
    case 88u: goto L_088317D4;
    case 89u: goto L_088317E0;
    case 90u: goto L_088317E8;
    case 91u: goto L_088317FC;
    case 92u: goto L_0883181C;
    case 93u: goto L_0883182C;
    case 94u: goto L_08831838;
    case 95u: goto L_08831864;
    case 96u: goto L_08831870;
    case 97u: goto L_08831880;
    case 98u: goto L_0883188C;
    case 99u: goto L_088318A0;
    case 100u: goto L_088318AC;
    case 101u: goto L_088318C4;
    case 102u: goto L_08831978;
    case 103u: goto L_08831990;
    case 104u: goto L_088319A0;
    case 105u: goto L_088319B4;
    case 106u: goto L_088319BC;
    case 107u: goto L_088319DC;
    case 108u: goto L_088319E4;
    case 109u: goto L_088319EC;
    case 110u: goto L_088319F4;
    case 111u: goto L_08831A14;
    case 112u: goto L_08831A40;
    case 113u: goto L_08831A48;
    case 114u: goto L_08831A60;
    case 115u: goto L_08831A6C;
    case 116u: goto L_08831A7C;
    case 117u: goto L_08831A88;
    case 118u: goto L_08831A94;
    case 119u: goto L_08831AA0;
    case 120u: goto L_08831AB0;
    case 121u: goto L_08831ABC;
    case 122u: goto L_08831AC8;
    case 123u: goto L_08831ACC;
    case 124u: goto L_08831ADC;
    case 125u: goto L_08831AE8;
    case 126u: goto L_08831B04;
    case 127u: goto L_08831B10;
    case 128u: goto L_08831B30;
    case 129u: goto L_08831B3C;
    case 130u: goto L_08831B54;
    case 131u: goto L_08831B70;
    case 132u: goto L_08831B7C;
    case 133u: goto L_08831B9C;
    case 134u: goto L_08831BA4;
    case 135u: goto L_08831BAC;
    case 136u: goto L_08831C00;
    case 137u: goto L_08831C18;
    case 138u: goto L_08831C34;
    case 139u: goto L_08831C4C;
    case 140u: goto L_08831C64;
    case 141u: goto L_08831C7C;
    case 142u: goto L_08831C94;
    case 143u: goto L_08831CA8;
    case 144u: goto L_08831CB0;
    case 145u: goto L_08831CC0;
    case 146u: goto L_08831CEC;
    case 147u: goto L_08831D10;
    case 148u: goto L_08831D2C;
    case 149u: goto L_08831D58;
    case 150u: goto L_08831D80;
    case 151u: goto L_08831D98;
    case 152u: goto L_08831DA4;
    case 153u: goto L_08831DAC;
    case 154u: goto L_08831DB4;
    case 155u: goto L_08831DBC;
    case 156u: goto L_08831DC4;
    case 157u: goto L_08831DCC;
    case 158u: goto L_08831DF0;
    case 159u: goto L_08831E00;
    case 160u: goto L_08831E14;
    case 161u: goto L_08831E38;
    case 162u: goto L_08831E40;
    case 163u: goto L_08831E4C;
    case 164u: goto L_08831E54;
    case 165u: goto L_08831E64;
    case 166u: goto L_08831E6C;
    case 167u: goto L_08831E7C;
    case 168u: goto L_08831E84;
    case 169u: goto L_08831E94;
    case 170u: goto L_08831EA4;
    case 171u: goto L_08831EAC;
    case 172u: goto L_08831EC4;
    case 173u: goto L_08831EE4;
    case 174u: goto L_08831EF0;
    case 175u: goto L_08831F04;
    case 176u: goto L_08831F0C;
    case 177u: goto L_08831F14;
    case 178u: goto L_08831F1C;
    case 179u: goto L_08831F2C;
    case 180u: goto L_08831F34;
    case 181u: goto L_08831F3C;
    case 182u: goto L_08831F54;
    case 183u: goto L_08831F5C;
    case 184u: goto L_08831F70;
    case 185u: goto L_08831F7C;
    case 186u: goto L_08831F84;
    case 187u: goto L_08831F90;
    case 188u: goto L_08831F94;
    case 189u: goto L_08831F9C;
    case 190u: goto L_08831FA8;
    case 191u: goto L_08831FAC;
    case 192u: goto L_08831FC0;
    case 193u: goto L_08831FCC;
    case 194u: goto L_08831FE4;
    case 195u: goto L_08831FF0;
    case 196u: goto L_08831FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08831000:
    aot_fpr[19] = aot_fpr[19] + aot_fpr[16];
    aot_fpr[19] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[19]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[11]));
      if (branch_taken) {
          goto L_08831018;
      }
      goto L_08831014;
    }
L_08831014:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    goto L_08831018;
L_08831018:
    if (aot_gpr[23] == 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[18]));
        goto L_08831060;
    }
    goto L_08831020;
L_08831020:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(24)));
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_fpr[19] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
    aot_fpr[19] = aot_fpr[19] + aot_fpr[16];
    aot_fpr[19] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[19]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(26)));
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[16];
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[11]));
      if (branch_taken) {
          goto L_08831064;
      }
      goto L_08831060;
    }
L_08831060:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    goto L_08831064;
L_08831064:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[17];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[18];
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[9]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 142u, 0x08830E78u>(ctx, &aot_mem); return;
      }
      goto L_08831080;
    }
L_08831080:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 141u, 0x08830E54u>(ctx, &aot_mem); return;
      }
      goto L_08831090;
    }
L_08831090:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088310A0u);
    aot_gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x088310A0u) goto L_088310A0;
    return;
L_088310A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883110C;
      }
      goto L_088310A8;
    }
L_088310A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(412));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (0u | 371u);
    aot_gpr[31] = (0x088310ECu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088310ECu) goto L_088310EC;
    return;
L_088310EC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088310F8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088310F8u) goto L_088310F8;
    return;
L_088310F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883110Cu);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883110Cu) goto L_0883110C;
    return;
L_0883110C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(568)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(572)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(576)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(580)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(584)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(588)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(592)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(596)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831140:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831148:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831150:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23552), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831170:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08831194u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08831194u) goto L_08831194;
    return;
L_08831194:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088311ACu);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 165u, 0x0881CB9Cu>(ctx, &aot_mem) && ctx.pc == 0x088311ACu) goto L_088311AC;
    return;
L_088311AC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088311B8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 201u, 0x08874B54u>(ctx, &aot_mem) && ctx.pc == 0x088311B8u) goto L_088311B8;
    return;
L_088311B8:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831204;
      }
      goto L_088311C4;
    }
L_088311C4:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11400));
    aot_gpr[31] = (0x088311E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11380));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088311E0u) goto L_088311E0;
    return;
L_088311E0:
    aot_gpr[31] = (0x088311E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 76u, 0x0888D4E8u>(ctx, &aot_mem) && ctx.pc == 0x088311E8u) goto L_088311E8;
    return;
L_088311E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[4]);
      if (branch_taken) {
          goto L_08831210;
      }
      goto L_08831204;
    }
L_08831204:
    aot_gpr[31] = (0x0883120Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 178u, 0x0881CC80u>(ctx, &aot_mem) && ctx.pc == 0x0883120Cu) goto L_0883120C;
    return;
L_0883120C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_08831210;
L_08831210:
    aot_gpr[31] = (0x08831218u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 165u, 0x0881CB9Cu>(ctx, &aot_mem) && ctx.pc == 0x08831218u) goto L_08831218;
    return;
L_08831218:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3732)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08831234;
      }
      goto L_0883122C;
    }
L_0883122C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3772)));
    goto L_08831234;
L_08831234:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08831244;
      }
      goto L_0883123C;
    }
L_0883123C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08831248;
      }
      goto L_08831244;
    }
L_08831244:
    aot_gpr[2] = (0u | 1u);
    goto L_08831248;
L_08831248:
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
L_08831260:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23560), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831280:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-11352));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088312C8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11332));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088312C8u) goto L_088312C8;
    return;
L_088312C8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088312D4u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088312D4u) goto L_088312D4;
    return;
L_088312D4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4624)));
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4088)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08831304u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2152)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 169u, 0x0881CC0Cu>(ctx, &aot_mem) && ctx.pc == 0x08831304u) goto L_08831304;
    return;
L_08831304:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[5] != aot_gpr[6]) {
    aot_gpr[4] = (aot_gpr[5] | 0u);
        goto L_08831318;
    }
    goto L_08831318;
L_08831318:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08831338u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-11316));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x08831338u) goto L_08831338;
    return;
L_08831338:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0883134Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11288));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883134Cu) goto L_0883134C;
    return;
L_0883134C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08831358u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08831358u) goto L_08831358;
    return;
L_08831358:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08831370u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11256));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831370u) goto L_08831370;
    return;
L_08831370:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883137Cu);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883137Cu) goto L_0883137C;
    return;
L_0883137C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088313A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088313B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-11352));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x088313F8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11332));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088313F8u) goto L_088313F8;
    return;
L_088313F8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08831404u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08831404u) goto L_08831404;
    return;
L_08831404:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883141Cu);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 165u, 0x0881CB9Cu>(ctx, &aot_mem) && ctx.pc == 0x0883141Cu) goto L_0883141C;
    return;
L_0883141C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08831428u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 201u, 0x08874B54u>(ctx, &aot_mem) && ctx.pc == 0x08831428u) goto L_08831428;
    return;
L_08831428:
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-11224));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-11216));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-11204));
      if (branch_taken) {
          goto L_088314AC;
      }
      goto L_0883144C;
    }
L_0883144C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08831458u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831458u) goto L_08831458;
    return;
L_08831458:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08831478u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831478u) goto L_08831478;
    return;
L_08831478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08831498u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831498u) goto L_08831498;
    return;
L_08831498:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08831510;
      }
      goto L_088314AC;
    }
L_088314AC:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088314B8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088314B8u) goto L_088314B8;
    return;
L_088314B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088314DCu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088314DCu) goto L_088314DC;
    return;
L_088314DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08831500u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831500u) goto L_08831500;
    return;
L_08831500:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    goto L_08831510;
L_08831510:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883151Cu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883151Cu) goto L_0883151C;
    return;
L_0883151C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088315FC;
      }
      goto L_08831540;
    }
L_08831540:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088315FC;
      }
      goto L_08831548;
    }
L_08831548:
    aot_gpr[31] = (0x08831550u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 166u, 0x0881CBB8u>(ctx, &aot_mem) && ctx.pc == 0x08831550u) goto L_08831550;
    return;
L_08831550:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08831560u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2848));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08831560u) goto L_08831560;
    return;
L_08831560:
    aot_gpr[31] = (0x08831568u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 167u, 0x0881CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08831568u) goto L_08831568;
    return;
L_08831568:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08831578u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2592));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08831578u) goto L_08831578;
    return;
L_08831578:
    aot_gpr[31] = (0x08831580u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 165u, 0x0881CB9Cu>(ctx, &aot_mem) && ctx.pc == 0x08831580u) goto L_08831580;
    return;
L_08831580:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2152), aot_gpr[2]);
    aot_gpr[31] = (0x08831590u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 165u, 0x0881CB9Cu>(ctx, &aot_mem) && ctx.pc == 0x08831590u) goto L_08831590;
    return;
L_08831590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7924), aot_gpr[2]);
    aot_gpr[31] = (0x088315A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x088315A0u) goto L_088315A0;
    return;
L_088315A0:
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-11184));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088315B8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088315B8u) goto L_088315B8;
    return;
L_088315B8:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_088315E0;
      }
      goto L_088315C0;
    }
L_088315C0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088315CCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088315CCu) goto L_088315CC;
    return;
L_088315CC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088315FC;
      }
      goto L_088315E0;
    }
L_088315E0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088315F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11172));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088315F0u) goto L_088315F0;
    return;
L_088315F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_088315FC;
L_088315FC:
    aot_gpr[31] = (0x08831604u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 165u, 0x0881CB9Cu>(ctx, &aot_mem) && ctx.pc == 0x08831604u) goto L_08831604;
    return;
L_08831604:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08831610u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 58u, 0x08823970u>(ctx, &aot_mem) && ctx.pc == 0x08831610u) goto L_08831610;
    return;
L_08831610:
    aot_gpr[31] = (0x08831618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 62u, 0x088239C4u>(ctx, &aot_mem) && ctx.pc == 0x08831618u) goto L_08831618;
    return;
L_08831618:
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
L_08831644:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[16]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[16]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_0883167C;
L_0883167C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[29] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883167C;
      }
      goto L_088316AC;
    }
L_088316AC:
    aot_gpr[4] = (32u << 16u);
    aot_gpr[5] = (16220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8224));
    aot_gpr[5] = (aot_gpr[5] | 10486u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (48896u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (48972u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[31] = (0x08831708u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 38u, 0x08935400u>(ctx, &aot_mem) && ctx.pc == 0x08831708u) goto L_08831708;
    return;
L_08831708:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16390u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 26214u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[31] = (0x08831760u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 146u, 0x08918D74u>(ctx, &aot_mem) && ctx.pc == 0x08831760u) goto L_08831760;
    return;
L_08831760:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6932)));
    aot_gpr[5] = (16948u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[31] = (0x0883177Cu);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 158u, 0x08918FB8u>(ctx, &aot_mem) && ctx.pc == 0x0883177Cu) goto L_0883177C;
    return;
L_0883177C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08831788u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x08831788u) goto L_08831788;
    return;
L_08831788:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (0u | 64u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11352));
    aot_gpr[31] = (0x088317A8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11152));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088317A8u) goto L_088317A8;
    return;
L_088317A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088317B4u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088317B4u) goto L_088317B4;
    return;
L_088317B4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088317D4;
      }
      goto L_088317C0;
    }
L_088317C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (65280u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] >> 24u);
    aot_gpr[16] = (aot_gpr[16] & 255u);
    goto L_088317D4;
L_088317D4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088317E8;
      }
      goto L_088317E0;
    }
L_088317E0:
    aot_gpr[31] = (0x088317E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 96u, 0x08823CD8u>(ctx, &aot_mem) && ctx.pc == 0x088317E8u) goto L_088317E8;
    return;
L_088317E8:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088317FC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23568), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883181C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0883182Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 65u, 0x08827960u>(ctx, &aot_mem) && ctx.pc == 0x0883182Cu) goto L_0883182C;
    return;
L_0883182C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831838:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[16] = (aot_gpr[5] - aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088318A0;
      }
      goto L_08831864;
    }
L_08831864:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08831880;
      }
      goto L_08831870;
    }
L_08831870:
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08831870;
      }
      goto L_08831880;
    }
L_08831880:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088318A0;
      }
      goto L_0883188C;
    }
L_0883188C:
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883188C;
      }
      goto L_088318A0;
    }
L_088318A0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088318ACu);
    aot_gpr[5] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088318ACu) goto L_088318AC;
    return;
L_088318AC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088318C4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 179u, 0x0885AADCu>(ctx, &aot_mem) && ctx.pc == 0x088318C4u) goto L_088318C4;
    return;
L_088318C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[6] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 8u));
    aot_gpr[6] = (aot_gpr[6] >> 24u);
    aot_gpr[7] = (aot_gpr[5] << 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 8u));
    aot_gpr[8] = (aot_gpr[6] << 7u);
    aot_gpr[7] = (aot_gpr[7] >> 24u);
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 8u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 8u));
    aot_gpr[7] = (aot_gpr[7] >> 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 8u));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 8u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (65280u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831978:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08831990u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08831990u) goto L_08831990;
    return;
L_08831990:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088319A0u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088319A0u) goto L_088319A0;
    return;
L_088319A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088319B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088319BC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23576), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088319DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088319E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088319EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088319F4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23584), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831A14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-11136));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08831A40u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08831A40u) goto L_08831A40;
    return;
L_08831A40:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831B3C;
      }
      goto L_08831A48;
    }
L_08831A48:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_08831A94;
      }
      goto L_08831A60;
    }
L_08831A60:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831AA0;
      }
      goto L_08831A6C;
    }
L_08831A6C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08831A7Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11120));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831A7Cu) goto L_08831A7C;
    return;
L_08831A7C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08831A88u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08831A88u) goto L_08831A88;
    return;
L_08831A88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1904)));
      if (branch_taken) {
          goto L_08831ACC;
      }
      goto L_08831A94;
    }
L_08831A94:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831AC8;
      }
      goto L_08831AA0;
    }
L_08831AA0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08831AB0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11120));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831AB0u) goto L_08831AB0;
    return;
L_08831AB0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08831ABCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08831ABCu) goto L_08831ABC;
    return;
L_08831ABC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1904)));
      if (branch_taken) {
          goto L_08831ACC;
      }
      goto L_08831AC8;
    }
L_08831AC8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1904)));
    goto L_08831ACC;
L_08831ACC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08831ADCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11104));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831ADCu) goto L_08831ADC;
    return;
L_08831ADC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08831AE8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08831AE8u) goto L_08831AE8;
    return;
L_08831AE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2168)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08831B04u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11088));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831B04u) goto L_08831B04;
    return;
L_08831B04:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08831B10u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08831B10u) goto L_08831B10;
    return;
L_08831B10:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08831B30u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11076));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831B30u) goto L_08831B30;
    return;
L_08831B30:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08831B3Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08831B3Cu) goto L_08831B3C;
    return;
L_08831B3C:
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
L_08831B54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08831B70u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11136));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08831B70u) goto L_08831B70;
    return;
L_08831B70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831B7C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23592), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831B9C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831BA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831BAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    aot_gpr[30] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-11056));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x08831C00u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11040));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831C00u) goto L_08831C00;
    return;
L_08831C00:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08831C18u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11028));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831C18u) goto L_08831C18;
    return;
L_08831C18:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-11016));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08831C34u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831C34u) goto L_08831C34;
    return;
L_08831C34:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08831C4Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-11000));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831C4Cu) goto L_08831C4C;
    return;
L_08831C4C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08831C64u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10984));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831C64u) goto L_08831C64;
    return;
L_08831C64:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08831C7Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10972));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831C7Cu) goto L_08831C7C;
    return;
L_08831C7C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08831C94u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10960));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831C94u) goto L_08831C94;
    return;
L_08831C94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08831CA8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831CA8u) goto L_08831CA8;
    return;
L_08831CA8:
    aot_gpr[31] = (0x08831CB0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08831CB0u) goto L_08831CB0;
    return;
L_08831CB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08831D2C;
      }
      goto L_08831CC0;
    }
L_08831CC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[30]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[23] = (aot_gpr[5] + static_cast<std::uint32_t>(-11056));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08831CECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10944));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831CECu) goto L_08831CEC;
    return;
L_08831CEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08831D10u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10984));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831D10u) goto L_08831D10;
    return;
L_08831D10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08831D98;
      }
      goto L_08831D2C;
    }
L_08831D2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[30]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[23] = (aot_gpr[5] + static_cast<std::uint32_t>(-11056));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08831D58u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10944));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831D58u) goto L_08831D58;
    return;
L_08831D58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08831D80u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10984));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08831D80u) goto L_08831D80;
    return;
L_08831D80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08831D98;
L_08831D98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08831DB4;
      }
      goto L_08831DA4;
    }
L_08831DA4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 11u, 0x08832084u>(ctx, &aot_mem); return;
      }
      goto L_08831DAC;
    }
L_08831DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831DCC;
      }
      goto L_08831DB4;
    }
L_08831DB4:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08831F14;
      }
      goto L_08831DBC;
    }
L_08831DBC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831FF8;
      }
      goto L_08831DC4;
    }
L_08831DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 11u, 0x08832084u>(ctx, &aot_mem); return;
      }
      goto L_08831DCC;
    }
L_08831DCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831E14;
      }
      goto L_08831DF0;
    }
L_08831DF0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08831E00u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10936));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08831E00u) goto L_08831E00;
    return;
L_08831E00:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08831F0C;
      }
      goto L_08831E14;
    }
L_08831E14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F0C;
      }
      goto L_08831E38;
    }
L_08831E38:
    aot_gpr[31] = (0x08831E40u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08831E40u) goto L_08831E40;
    return;
L_08831E40:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) > 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08831E64;
      }
      goto L_08831E4C;
    }
L_08831E4C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08831E7C;
      }
      goto L_08831E54;
    }
L_08831E54:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7488), aot_gpr[4]);
      if (branch_taken) {
          goto L_08831E7C;
      }
      goto L_08831E64;
    }
L_08831E64:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831E7C;
      }
      goto L_08831E6C;
    }
L_08831E6C:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[5] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7488), aot_gpr[4]);
      if (branch_taken) {
          goto L_08831E7C;
      }
      goto L_08831E7C;
    }
L_08831E7C:
    aot_gpr[31] = (0x08831E84u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08831E84u) goto L_08831E84;
    return;
L_08831E84:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1904), aot_gpr[2]);
    aot_gpr[31] = (0x08831E94u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08831E94u) goto L_08831E94;
    return;
L_08831E94:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2168), aot_gpr[2]);
    aot_gpr[31] = (0x08831EA4u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08831EA4u) goto L_08831EA4;
    return;
L_08831EA4:
    aot_gpr[31] = (0x08831EACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x0881CA68u>(ctx, &aot_mem) && ctx.pc == 0x08831EACu) goto L_08831EAC;
    return;
L_08831EAC:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25340), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2176), aot_gpr[2]);
    aot_gpr[31] = (0x08831EC4u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08831EC4u) goto L_08831EC4;
    return;
L_08831EC4:
    aot_gpr[4] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2172), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[31] = (0x08831EE4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2192), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 175u, 0x0889AAA0u>(ctx, &aot_mem) && ctx.pc == 0x08831EE4u) goto L_08831EE4;
    return;
L_08831EE4:
    aot_gpr[4] = (0u | 182u);
    aot_gpr[31] = (0x08831EF0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08831EF0u) goto L_08831EF0;
    return;
L_08831EF0:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08831F04u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08831F04u) goto L_08831F04;
    return;
L_08831F04:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08831F0C;
L_08831F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 11u, 0x08832084u>(ctx, &aot_mem); return;
      }
      goto L_08831F14;
    }
L_08831F14:
    aot_gpr[31] = (0x08831F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x08831F1Cu) goto L_08831F1C;
    return;
L_08831F1C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 66u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08831FCC;
      }
      goto L_08831F2C;
    }
L_08831F2C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08831FCC;
      }
      goto L_08831F34;
    }
L_08831F34:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08831FF0;
      }
      goto L_08831F3C;
    }
L_08831F3C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26520)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08831F9C;
      }
      goto L_08831F54;
    }
L_08831F54:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F9C;
      }
      goto L_08831F5C;
    }
L_08831F5C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2200)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-975));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08831F84;
      }
      goto L_08831F70;
    }
L_08831F70:
    aot_gpr[4] = (0u | 73u);
    aot_gpr[31] = (0x08831F7Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08831F7Cu) goto L_08831F7C;
    return;
L_08831F7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08831F94;
      }
      goto L_08831F84;
    }
L_08831F84:
    aot_gpr[4] = (0u | 73u);
    aot_gpr[31] = (0x08831F90u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08831F90u) goto L_08831F90;
    return;
L_08831F90:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08831F94;
L_08831F94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831FAC;
      }
      goto L_08831F9C;
    }
L_08831F9C:
    aot_gpr[4] = (0u | 73u);
    aot_gpr[31] = (0x08831FA8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08831FA8u) goto L_08831FA8;
    return;
L_08831FA8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08831FAC;
L_08831FAC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08831FC0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08831FC0u) goto L_08831FC0;
    return;
L_08831FC0:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08831FF0;
      }
      goto L_08831FCC;
    }
L_08831FCC:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08831FE4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10920));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08831FE4u) goto L_08831FE4;
    return;
L_08831FE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08831FF0;
L_08831FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 11u, 0x08832084u>(ctx, &aot_mem); return;
      }
      goto L_08831FF8;
    }
L_08831FF8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    ctx.pc = 0x08832000u; return;
}

void recomp_unit_0045(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0045_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_45(Runtime &runtime) {
    runtime.register_generated_unit(45u, 0x08831000u, 4096u, &recomp_unit_0045, &recomp_unit_0045_entry);
    runtime.register_function(0x08831000u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831014u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831018u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831020u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831060u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831064u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831080u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831090u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088310A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088310A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088310ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088310F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883110Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831140u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831148u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831150u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831170u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831194u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088311ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088311B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088311C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088311E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088311E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831204u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883120Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831210u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831218u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883122Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831234u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883123Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831244u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831248u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831260u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831280u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088312C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088312D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831304u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831318u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831338u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883134Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831358u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831370u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883137Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088313A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088313B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088313F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831404u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883141Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831428u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883144Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831458u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831478u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831498u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088314ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088314B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088314DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831500u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831510u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883151Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831540u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831548u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831550u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831560u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831568u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831578u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831580u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831590u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088315A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088315B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088315C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088315CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088315E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088315F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088315FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831604u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831610u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831618u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831644u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883167Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088316ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831708u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831760u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883177Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831788u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088317A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088317B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088317C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088317D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088317E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088317E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088317FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883181Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883182Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831838u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831864u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831870u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831880u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x0883188Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088318A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088318ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088318C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831978u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831990u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088319A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088319B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088319BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088319DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088319E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088319ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088319F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831A14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831A40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831A48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831A60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831A6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831A7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831A88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831A94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831AA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831AB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831ABCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831AC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831ACCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831ADCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831AE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831B04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831B10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831B30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831B3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831B54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831B70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831B7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831B9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831BA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831BACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831C00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831C18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831C34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831C4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831C64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831C7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831C94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831CA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831CB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831CC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831CECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831D10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831D2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831D58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831D80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831D98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831DA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831DACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831DB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831DBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831DC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831DCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831DF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831E00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831E14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831E38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831E40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831E4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831E54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831E64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831E6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831E7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831E84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831E94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831EA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831EACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831EC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831EE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831EF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831F9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831FA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831FACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831FC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831FCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831FE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831FF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x08831FF8u, &recomp_unit_0045, "recomp_unit_0045");
}
} // namespace psprecomp
