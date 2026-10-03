#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0099[1023] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 24, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 48,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 143, 0, 144, 0,
    0, 0, 145, 0, 0, 0, 146, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0,
    0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 162, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 167, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175,
};
void recomp_unit_0099_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08867000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0099[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08867000;
    case 2u: goto L_08867008;
    case 3u: goto L_08867018;
    case 4u: goto L_08867020;
    case 5u: goto L_08867060;
    case 6u: goto L_08867068;
    case 7u: goto L_08867080;
    case 8u: goto L_088670B4;
    case 9u: goto L_088670BC;
    case 10u: goto L_088670CC;
    case 11u: goto L_088670D0;
    case 12u: goto L_088670E0;
    case 13u: goto L_08867128;
    case 14u: goto L_08867138;
    case 15u: goto L_08867158;
    case 16u: goto L_08867170;
    case 17u: goto L_08867190;
    case 18u: goto L_088671A4;
    case 19u: goto L_088671B0;
    case 20u: goto L_088671BC;
    case 21u: goto L_088671CC;
    case 22u: goto L_088671E4;
    case 23u: goto L_08867220;
    case 24u: goto L_08867224;
    case 25u: goto L_08867228;
    case 26u: goto L_08867248;
    case 27u: goto L_08867258;
    case 28u: goto L_08867278;
    case 29u: goto L_08867284;
    case 30u: goto L_08867298;
    case 31u: goto L_088672A4;
    case 32u: goto L_088672AC;
    case 33u: goto L_088672B8;
    case 34u: goto L_088672D0;
    case 35u: goto L_088672E8;
    case 36u: goto L_08867300;
    case 37u: goto L_08867328;
    case 38u: goto L_08867348;
    case 39u: goto L_08867350;
    case 40u: goto L_08867358;
    case 41u: goto L_08867378;
    case 42u: goto L_08867384;
    case 43u: goto L_088673A4;
    case 44u: goto L_088673D0;
    case 45u: goto L_088673D8;
    case 46u: goto L_088673E0;
    case 47u: goto L_088673F4;
    case 48u: goto L_088673FC;
    case 49u: goto L_08867404;
    case 50u: goto L_08867430;
    case 51u: goto L_0886744C;
    case 52u: goto L_08867454;
    case 53u: goto L_0886745C;
    case 54u: goto L_08867464;
    case 55u: goto L_08867470;
    case 56u: goto L_08867488;
    case 57u: goto L_08867498;
    case 58u: goto L_088674A4;
    case 59u: goto L_088674AC;
    case 60u: goto L_088674BC;
    case 61u: goto L_088674C8;
    case 62u: goto L_088674D8;
    case 63u: goto L_088674E0;
    case 64u: goto L_08867500;
    case 65u: goto L_08867510;
    case 66u: goto L_0886751C;
    case 67u: goto L_08867534;
    case 68u: goto L_08867540;
    case 69u: goto L_08867554;
    case 70u: goto L_0886756C;
    case 71u: goto L_08867580;
    case 72u: goto L_0886758C;
    case 73u: goto L_088675A4;
    case 74u: goto L_088675B8;
    case 75u: goto L_088675C4;
    case 76u: goto L_088675DC;
    case 77u: goto L_088675F0;
    case 78u: goto L_088675FC;
    case 79u: goto L_08867614;
    case 80u: goto L_08867628;
    case 81u: goto L_08867634;
    case 82u: goto L_0886764C;
    case 83u: goto L_0886765C;
    case 84u: goto L_08867668;
    case 85u: goto L_08867678;
    case 86u: goto L_08867694;
    case 87u: goto L_0886769C;
    case 88u: goto L_088676BC;
    case 89u: goto L_088676DC;
    case 90u: goto L_08867778;
    case 91u: goto L_08867808;
    case 92u: goto L_0886782C;
    case 93u: goto L_08867854;
    case 94u: goto L_08867860;
    case 95u: goto L_08867904;
    case 96u: goto L_08867914;
    case 97u: goto L_08867924;
    case 98u: goto L_0886792C;
    case 99u: goto L_08867940;
    case 100u: goto L_08867958;
    case 101u: goto L_08867960;
    case 102u: goto L_08867968;
    case 103u: goto L_08867974;
    case 104u: goto L_088679E0;
    case 105u: goto L_08867A08;
    case 106u: goto L_08867A28;
    case 107u: goto L_08867A30;
    case 108u: goto L_08867A38;
    case 109u: goto L_08867A50;
    case 110u: goto L_08867A5C;
    case 111u: goto L_08867A6C;
    case 112u: goto L_08867A94;
    case 113u: goto L_08867A9C;
    case 114u: goto L_08867AA8;
    case 115u: goto L_08867AC0;
    case 116u: goto L_08867AC8;
    case 117u: goto L_08867AF4;
    case 118u: goto L_08867B14;
    case 119u: goto L_08867B50;
    case 120u: goto L_08867B74;
    case 121u: goto L_08867B9C;
    case 122u: goto L_08867BB0;
    case 123u: goto L_08867BC4;
    case 124u: goto L_08867BCC;
    case 125u: goto L_08867BF0;
    case 126u: goto L_08867C0C;
    case 127u: goto L_08867C20;
    case 128u: goto L_08867C30;
    case 129u: goto L_08867C38;
    case 130u: goto L_08867C58;
    case 131u: goto L_08867C68;
    case 132u: goto L_08867C78;
    case 133u: goto L_08867C90;
    case 134u: goto L_08867CF4;
    case 135u: goto L_08867D04;
    case 136u: goto L_08867D20;
    case 137u: goto L_08867D34;
    case 138u: goto L_08867D3C;
    case 139u: goto L_08867D44;
    case 140u: goto L_08867D4C;
    case 141u: goto L_08867D60;
    case 142u: goto L_08867D6C;
    case 143u: goto L_08867D70;
    case 144u: goto L_08867D78;
    case 145u: goto L_08867D88;
    case 146u: goto L_08867D98;
    case 147u: goto L_08867D9C;
    case 148u: goto L_08867DBC;
    case 149u: goto L_08867DD4;
    case 150u: goto L_08867DEC;
    case 151u: goto L_08867DF8;
    case 152u: goto L_08867E0C;
    case 153u: goto L_08867E1C;
    case 154u: goto L_08867E54;
    case 155u: goto L_08867E5C;
    case 156u: goto L_08867E7C;
    case 157u: goto L_08867E84;
    case 158u: goto L_08867EA4;
    case 159u: goto L_08867EB8;
    case 160u: goto L_08867EE4;
    case 161u: goto L_08867EEC;
    case 162u: goto L_08867EF0;
    case 163u: goto L_08867F10;
    case 164u: goto L_08867F30;
    case 165u: goto L_08867F48;
    case 166u: goto L_08867F58;
    case 167u: goto L_08867F5C;
    case 168u: goto L_08867F6C;
    case 169u: goto L_08867F8C;
    case 170u: goto L_08867FB0;
    case 171u: goto L_08867FBC;
    case 172u: goto L_08867FCC;
    case 173u: goto L_08867FE8;
    case 174u: goto L_08867FF0;
    case 175u: goto L_08867FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08867000:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_08867020;
      }
      goto L_08867008;
    }
L_08867008:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(89)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08867020;
      }
      goto L_08867018;
    }
L_08867018:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(148))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08867020;
L_08867020:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[5]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(292)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(264)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_fpr[15] = aot_fpr[15] - aot_fpr[16];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(264)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[17];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (15820u << 16u);
      if (branch_taken) {
          goto L_08867068;
      }
      goto L_08867060;
    }
L_08867060:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08867080;
      }
      goto L_08867068;
    }
L_08867068:
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
        goto L_08867080;
    }
    goto L_08867080;
L_08867080:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (15523u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[6] | 55050u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088670BC;
      }
      goto L_088670B4;
    }
L_088670B4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088670CC;
      }
      goto L_088670BC;
    }
L_088670BC:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088670CC;
    }
    goto L_088670CC;
L_088670CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088670D0;
L_088670D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088670E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(148))))));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1828)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088671CC;
      }
      goto L_08867128;
    }
L_08867128:
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (aot_gpr[7] << 2u);
      if (branch_taken) {
          goto L_08867170;
      }
      goto L_08867138;
    }
L_08867138:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(240)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(756)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[13])) && aot_fpr[14] == aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088671A4;
      }
      goto L_08867158;
    }
L_08867158:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(240)));
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(756)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088671A4;
      }
      goto L_08867170;
    }
L_08867170:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(240)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(760)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[13])) && aot_fpr[14] == aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088671A4;
      }
      goto L_08867190;
    }
L_08867190:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(240)));
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(744)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_088671A4;
L_088671A4:
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088671BC;
      }
      goto L_088671B0;
    }
L_088671B0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
      if (branch_taken) {
          goto L_088671CC;
      }
      goto L_088671BC;
    }
L_088671BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088671CC;
L_088671CC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(40))))));
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08867224;
      }
      goto L_088671E4;
    }
L_088671E4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(96));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[7] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
        goto L_08867228;
    }
    goto L_08867220;
L_08867220:
    aot_gpr[6] = (0u | 1u);
    goto L_08867224;
L_08867224:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    goto L_08867228;
L_08867228:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[13])) && aot_fpr[14] == aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_08867248;
    }
    goto L_08867248;
L_08867248:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[31] = (0x08867258u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 19u, 0x0886A138u>(ctx, &aot_mem) && ctx.pc == 0x08867258u) goto L_08867258;
    return;
L_08867258:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08867278u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 179u, 0x08869EACu>(ctx, &aot_mem) && ctx.pc == 0x08867278u) goto L_08867278;
    return;
L_08867278:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08867284u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 207u, 0x08866EBCu>(ctx, &aot_mem) && ctx.pc == 0x08867284u) goto L_08867284;
    return;
L_08867284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08867298u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 103u, 0x0886A704u>(ctx, &aot_mem) && ctx.pc == 0x08867298u) goto L_08867298;
    return;
L_08867298:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088672B8;
      }
      goto L_088672A4;
    }
L_088672A4:
    aot_gpr[31] = (0x088672ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 160u, 0x08866B84u>(ctx, &aot_mem) && ctx.pc == 0x088672ACu) goto L_088672AC;
    return;
L_088672AC:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08867300;
      }
      goto L_088672B8;
    }
L_088672B8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08867300;
      }
      goto L_088672D0;
    }
L_088672D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088672E8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 34u, 0x088681B8u>(ctx, &aot_mem) && ctx.pc == 0x088672E8u) goto L_088672E8;
    return;
L_088672E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088672D0;
      }
      goto L_08867300;
    }
L_08867300:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867328:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088673D8;
      }
      goto L_08867348;
    }
L_08867348:
    aot_gpr[31] = (0x08867350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 32u, 0x088CC2F8u>(ctx, &aot_mem) && ctx.pc == 0x08867350u) goto L_08867350;
    return;
L_08867350:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088673D8;
      }
      goto L_08867358;
    }
L_08867358:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] & 8192u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088673D8;
      }
      goto L_08867378;
    }
L_08867378:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(5368)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088673D8;
      }
      goto L_08867384;
    }
L_08867384:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(47))))));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088673A4u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 133u, 0x088639ACu>(ctx, &aot_mem) && ctx.pc == 0x088673A4u) goto L_088673A4;
    return;
L_088673A4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(47))))));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088673E0;
      }
      goto L_088673D0;
    }
L_088673D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088673FC;
      }
      goto L_088673D8;
    }
L_088673D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867540;
      }
      goto L_088673E0;
    }
L_088673E0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088673FC;
      }
      goto L_088673F4;
    }
L_088673F4:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088673FC;
L_088673FC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08867454;
      }
      goto L_08867404;
    }
L_08867404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08867430u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 86u, 0x08944C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08867430u) goto L_08867430;
    return;
L_08867430:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_0886745C;
      }
      goto L_0886744C;
    }
L_0886744C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867464;
      }
      goto L_08867454;
    }
L_08867454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867540;
      }
      goto L_0886745C;
    }
L_0886745C:
    aot_gpr[31] = (0x08867464u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 197u, 0x08866DBCu>(ctx, &aot_mem) && ctx.pc == 0x08867464u) goto L_08867464;
    return;
L_08867464:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867498;
      }
      goto L_08867470;
    }
L_08867470:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867498;
      }
      goto L_08867488;
    }
L_08867488:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08867498u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(47))))));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 190u, 0x0886BE98u>(ctx, &aot_mem) && ctx.pc == 0x08867498u) goto L_08867498;
    return;
L_08867498:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088674BC;
      }
      goto L_088674A4;
    }
L_088674A4:
    aot_gpr[31] = (0x088674ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 227u, 0x0886AFF4u>(ctx, &aot_mem) && ctx.pc == 0x088674ACu) goto L_088674AC;
    return;
L_088674AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088674BC;
L_088674BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867510;
      }
      goto L_088674C8;
    }
L_088674C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867510;
      }
      goto L_088674D8;
    }
L_088674D8:
    aot_gpr[31] = (0x088674E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 89u, 0x0886A5ACu>(ctx, &aot_mem) && ctx.pc == 0x088674E0u) goto L_088674E0;
    return;
L_088674E0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08867500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 106u, 0x08869804u>(ctx, &aot_mem) && ctx.pc == 0x08867500u) goto L_08867500;
    return;
L_08867500:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08867510u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088670E0;
L_08867510:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867540;
      }
      goto L_0886751C;
    }
L_0886751C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[5] & 4u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867540;
      }
      goto L_08867534;
    }
L_08867534:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08867540u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(47))))));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 130u, 0x0886B9E0u>(ctx, &aot_mem) && ctx.pc == 0x08867540u) goto L_08867540;
    return;
L_08867540:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867554:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08867580;
      }
      goto L_0886756C;
    }
L_0886756C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08867580u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 42u, 0x0886B2E0u>(ctx, &aot_mem) && ctx.pc == 0x08867580u) goto L_08867580;
    return;
L_08867580:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886758C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088675B8;
      }
      goto L_088675A4;
    }
L_088675A4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088675B8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 42u, 0x0886B2E0u>(ctx, &aot_mem) && ctx.pc == 0x088675B8u) goto L_088675B8;
    return;
L_088675B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088675C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088675F0;
      }
      goto L_088675DC;
    }
L_088675DC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088675F0u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 42u, 0x0886B2E0u>(ctx, &aot_mem) && ctx.pc == 0x088675F0u) goto L_088675F0;
    return;
L_088675F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088675FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08867628;
      }
      goto L_08867614;
    }
L_08867614:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08867628u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 42u, 0x0886B2E0u>(ctx, &aot_mem) && ctx.pc == 0x08867628u) goto L_08867628;
    return;
L_08867628:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867634:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0886765C;
      }
      goto L_0886764C;
    }
L_0886764C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0886765Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 27u, 0x0886B140u>(ctx, &aot_mem) && ctx.pc == 0x0886765Cu) goto L_0886765C;
    return;
L_0886765C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867668:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(47))))));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08867694;
      }
      goto L_08867678;
    }
L_08867678:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_gpr[6] = (16800u << 16u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08867694;
L_08867694:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886769C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24936), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088676BC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24960), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088676DC:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (16256u << 16u);
    aot_gpr[5] = (16448u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[5] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[5] = fs * ft; }
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[5] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[5] = fs * ft; }
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[16];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[17];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[19];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    aot_fpr[14] = aot_fpr[14] + aot_fpr[1];
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867778:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[10] = (2216u << 16u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(27024));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (16124u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] | 60817u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (15920u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 8389u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16206u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] | 5243u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16057u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 22544u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[13] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[12] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (16752u << 16u);
    aot_fpr[6] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[10]);
    goto L_08867808;
L_08867808:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[13]);
    aot_gpr[4] = (aot_gpr[12] | 0u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[6];
    aot_gpr[6] = (aot_gpr[3] | 0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0886782Cu);
    aot_gpr[8] = (aot_gpr[11] | 0u);
    goto L_088676DC;
L_0886782C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[13]) < 16 ? 1u : 0u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08867808;
      }
      goto L_08867854;
    }
L_08867854:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867860:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[14] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24972));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (17008u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16204u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16076u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (16896u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[14] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16153u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(84), 0u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    PSPRECOMP_AOT_STORE8(aot_gpr[14] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[14] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(104), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(132), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08867904u);
    aot_gpr[4] = (aot_gpr[14] | 0u);
    goto L_08867778;
L_08867904:
    aot_gpr[2] = (aot_gpr[14] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867914:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08867968;
      }
      goto L_08867924;
    }
L_08867924:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867968;
      }
      goto L_0886792C;
    }
L_0886792C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867960;
      }
      goto L_08867940;
    }
L_08867940:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08867958u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867958u) goto L_08867958;
    return;
L_08867958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867968;
      }
      goto L_08867960;
    }
L_08867960:
    aot_gpr[31] = (0x08867968u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08867968u) goto L_08867968;
    return;
L_08867968:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867974:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), 0u);
    aot_gpr[5] = (16153u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16250u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    aot_gpr[5] = (aot_gpr[5] | 57672u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088679E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(129)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867A30;
      }
      goto L_08867A08;
    }
L_08867A08:
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25088)));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25084)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08867A38;
      }
      goto L_08867A28;
    }
L_08867A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867A9C;
      }
      goto L_08867A30;
    }
L_08867A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867C78;
      }
      goto L_08867A38;
    }
L_08867A38:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08867A5C;
      }
      goto L_08867A50;
    }
L_08867A50:
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08867A5C;
L_08867A5C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x08867A6Cu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08867A6Cu) goto L_08867A6C;
    return;
L_08867A6C:
    aot_gpr[4] = (16076u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08867C78;
      }
      goto L_08867A94;
    }
L_08867A94:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_08867C78;
      }
      goto L_08867A9C;
    }
L_08867A9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (15395u << 16u);
      if (branch_taken) {
          goto L_08867BCC;
      }
      goto L_08867AA8;
    }
L_08867AA8:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867BC4;
      }
      goto L_08867AC0;
    }
L_08867AC0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (16268u << 16u);
      if (branch_taken) {
          goto L_08867AF4;
      }
      goto L_08867AC8;
    }
L_08867AC8:
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08867B9C;
      }
      goto L_08867AF4;
    }
L_08867AF4:
    aot_gpr[4] = (16153u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2214u << 16u);
      if (branch_taken) {
          goto L_08867B74;
      }
      goto L_08867B14;
    }
L_08867B14:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[16] = aot_fpr[15] - aot_fpr[14];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4808)));
    aot_gpr[4] = (16253u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 28836u);
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[16];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08867B9C;
      }
      goto L_08867B50;
    }
L_08867B50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4816)));
    aot_gpr[4] = (0u | 1u);
    aot_fpr[15] = aot_fpr[12] + aot_fpr[15];
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_08867B9C;
      }
      goto L_08867B74;
    }
L_08867B74:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4812)));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = aot_fpr[16] - aot_fpr[15];
    aot_fpr[14] = aot_fpr[14] - aot_fpr[13];
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[13] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_08867B9C;
L_08867B9C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08867C78;
      }
      goto L_08867BB0;
    }
L_08867BB0:
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08867C78;
      }
      goto L_08867BC4;
    }
L_08867BC4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08867C78;
      }
      goto L_08867BCC;
    }
L_08867BCC:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[16];
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (16153u << 16u);
      if (branch_taken) {
          goto L_08867C68;
      }
      goto L_08867BF0;
    }
L_08867BF0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C68;
      }
      goto L_08867C0C;
    }
L_08867C0C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C78;
      }
      goto L_08867C20;
    }
L_08867C20:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08867C58;
      }
      goto L_08867C30;
    }
L_08867C30:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867C58;
      }
      goto L_08867C38;
    }
L_08867C38:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4816)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08867C78;
      }
      goto L_08867C58;
    }
L_08867C58:
    aot_fpr[12] = aot_fpr[15] + aot_fpr[12];
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08867C78;
      }
      goto L_08867C68;
    }
L_08867C68:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08867C78;
L_08867C78:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867C90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_gpr[8] = (16256u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[8]);
      if (branch_taken) {
          goto L_08867D04;
      }
      goto L_08867CF4;
    }
L_08867CF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08867D4C;
      }
      goto L_08867D04;
    }
L_08867D04:
    aot_gpr[7] = (15820u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 52429u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867D44;
      }
      goto L_08867D20;
    }
L_08867D20:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867D44;
      }
      goto L_08867D34;
    }
L_08867D34:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08867D44;
      }
      goto L_08867D3C;
    }
L_08867D3C:
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08867D44;
L_08867D44:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    goto L_08867D4C;
L_08867D4C:
    aot_fpr[16] = aot_fpr[20] - aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_08867D6C;
    }
    goto L_08867D60;
L_08867D60:
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_08867D70;
      }
      goto L_08867D6C;
    }
L_08867D6C:
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_08867D70;
L_08867D70:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08867D88;
      }
      goto L_08867D78;
    }
L_08867D78:
    aot_gpr[5] = (15948u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    goto L_08867D88;
L_08867D88:
    ctx.set_fpu_condition((aot_fpr[17] < aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867D9C;
      }
      goto L_08867D98;
    }
L_08867D98:
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    goto L_08867D9C;
L_08867D9C:
    aot_fpr[16] = aot_fpr[16] / aot_fpr[17];
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    aot_gpr[31] = (0x08867DBCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_088679E0;
L_08867DBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[22])) && aot_fpr[12] == aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08867EEC;
      }
      goto L_08867DD4;
    }
L_08867DD4:
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867EEC;
      }
      goto L_08867DEC;
    }
L_08867DEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867EEC;
      }
      goto L_08867DF8;
    }
L_08867DF8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08867EB8;
      }
      goto L_08867E0C;
    }
L_08867E0C:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x08867E1Cu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08867E1Cu) goto L_08867E1C;
    return;
L_08867E1C:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (16025u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08867E7C;
      }
      goto L_08867E54;
    }
L_08867E54:
    aot_gpr[31] = (0x08867E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08867E5Cu) goto L_08867E5C;
    return;
L_08867E5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = aot_fpr[20] + aot_fpr[14];
      if (branch_taken) {
          goto L_08867EA4;
      }
      goto L_08867E7C;
    }
L_08867E7C:
    aot_gpr[31] = (0x08867E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08867E84u) goto L_08867E84;
    return;
L_08867E84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(112)));
    aot_fpr[20] = aot_fpr[20] + aot_fpr[14];
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    goto L_08867EA4;
L_08867EA4:
    aot_fpr[12] = aot_fpr[24] / aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08867EE4;
      }
      goto L_08867EB8;
    }
L_08867EB8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] + aot_fpr[12];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[20] = aot_fpr[20] + aot_fpr[16];
    goto L_08867EE4;
L_08867EE4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08867EF0;
      }
      goto L_08867EEC;
    }
L_08867EEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08867EF0;
L_08867EF0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867F10:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24968), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867F30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(240)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08867F5C;
      }
      goto L_08867F48;
    }
L_08867F48:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08867F58u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 84u, 0x08A4D690u>(ctx, &aot_mem) && ctx.pc == 0x08867F58u) goto L_08867F58;
    return;
L_08867F58:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(240), aot_gpr[2]);
    goto L_08867F5C;
L_08867F5C:
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867F6C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25096), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867F8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 33u, 0x0886819Cu>(ctx, &aot_mem); return;
      }
      goto L_08867FB0;
    }
L_08867FB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867FF8;
      }
      goto L_08867FBC;
    }
L_08867FBC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08867FF0;
      }
      goto L_08867FCC;
    }
L_08867FCC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08867FE8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08867FE8u) goto L_08867FE8;
    return;
L_08867FE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867FF8;
      }
      goto L_08867FF0;
    }
L_08867FF0:
    aot_gpr[31] = (0x08867FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08867FF8u) goto L_08867FF8;
    return;
L_08867FF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 5u, 0x08868040u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 1u, 0x08868004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0099(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0099_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_99(Runtime &runtime) {
    runtime.register_generated_unit(99u, 0x08867000u, 4096u, &recomp_unit_0099, &recomp_unit_0099_entry);
    runtime.register_function(0x08867000u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867008u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867018u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867020u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867060u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867068u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867080u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088670B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088670BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088670CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088670D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088670E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867128u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867138u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867158u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867170u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867190u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088671A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088671B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088671BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088671CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088671E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867220u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867224u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867228u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867248u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867258u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867278u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867284u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867298u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088672A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088672ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088672B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088672D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088672E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867300u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867328u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867348u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867350u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867358u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867378u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867384u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088673A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088673D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088673D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088673E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088673F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088673FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867404u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867430u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0886744Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867454u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0886745Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867464u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867470u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867488u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867498u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088674A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088674ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088674BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088674C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088674D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088674E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867500u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867510u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0886751Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867534u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867540u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867554u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0886756Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867580u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0886758Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088675A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088675B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088675C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088675DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088675F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088675FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867614u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867628u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867634u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0886764Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0886765Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867668u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867678u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867694u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0886769Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088676BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088676DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867778u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867808u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0886782Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867854u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867860u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867904u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867914u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867924u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0886792Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867940u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867958u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867960u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867968u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867974u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x088679E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867A08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867A28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867A30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867A38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867A50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867A5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867A6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867A94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867A9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867AA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867AC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867AC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867AF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867B14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867B50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867B74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867B9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867BB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867BC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867BCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867BF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867C0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867C20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867C30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867C38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867C58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867C68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867C78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867C90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867CF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867D9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867DBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867DD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867DECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867DF8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867E0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867E1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867E54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867E5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867E7Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867E84u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867EA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867EB8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867EE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867EECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867EF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867F10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867F30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867F48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867F58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867F5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867F6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867F8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867FB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867FBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867FCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867FE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867FF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08867FF8u, &recomp_unit_0099, "recomp_unit_0099");
}
} // namespace psprecomp
