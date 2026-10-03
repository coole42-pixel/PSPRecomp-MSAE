#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0129[1021] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0,
    28, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0,
    0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 61,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 83, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 164,
};
void recomp_unit_0129_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08885000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0129[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08885000;
    case 2u: goto L_0888500C;
    case 3u: goto L_08885028;
    case 4u: goto L_08885034;
    case 5u: goto L_08885064;
    case 6u: goto L_08885078;
    case 7u: goto L_08885094;
    case 8u: goto L_088850A4;
    case 9u: goto L_088850BC;
    case 10u: goto L_088850D8;
    case 11u: goto L_088850E8;
    case 12u: goto L_088850FC;
    case 13u: goto L_08885114;
    case 14u: goto L_08885174;
    case 15u: goto L_08885188;
    case 16u: goto L_088851A4;
    case 17u: goto L_088851B4;
    case 18u: goto L_088851CC;
    case 19u: goto L_088851E8;
    case 20u: goto L_088851F8;
    case 21u: goto L_0888520C;
    case 22u: goto L_08885224;
    case 23u: goto L_08885230;
    case 24u: goto L_08885240;
    case 25u: goto L_088852D4;
    case 26u: goto L_088852E0;
    case 27u: goto L_088852F4;
    case 28u: goto L_08885300;
    case 29u: goto L_0888530C;
    case 30u: goto L_08885314;
    case 31u: goto L_0888531C;
    case 32u: goto L_08885330;
    case 33u: goto L_0888533C;
    case 34u: goto L_08885340;
    case 35u: goto L_08885368;
    case 36u: goto L_08885378;
    case 37u: goto L_08885388;
    case 38u: goto L_0888539C;
    case 39u: goto L_088853D0;
    case 40u: goto L_088853DC;
    case 41u: goto L_0888540C;
    case 42u: goto L_08885428;
    case 43u: goto L_08885444;
    case 44u: goto L_08885458;
    case 45u: goto L_088854A0;
    case 46u: goto L_088854CC;
    case 47u: goto L_088854DC;
    case 48u: goto L_088854F0;
    case 49u: goto L_08885504;
    case 50u: goto L_08885514;
    case 51u: goto L_0888552C;
    case 52u: goto L_08885544;
    case 53u: goto L_08885554;
    case 54u: goto L_08885568;
    case 55u: goto L_0888557C;
    case 56u: goto L_088855B0;
    case 57u: goto L_088855C0;
    case 58u: goto L_088855D0;
    case 59u: goto L_088855D8;
    case 60u: goto L_088855E8;
    case 61u: goto L_088855FC;
    case 62u: goto L_08885600;
    case 63u: goto L_0888563C;
    case 64u: goto L_08885668;
    case 65u: goto L_08885694;
    case 66u: goto L_088856CC;
    case 67u: goto L_088856E8;
    case 68u: goto L_08885704;
    case 69u: goto L_08885744;
    case 70u: goto L_08885758;
    case 71u: goto L_08885770;
    case 72u: goto L_08885780;
    case 73u: goto L_08885798;
    case 74u: goto L_088857B0;
    case 75u: goto L_088857C0;
    case 76u: goto L_088857D4;
    case 77u: goto L_088857E8;
    case 78u: goto L_08885834;
    case 79u: goto L_08885844;
    case 80u: goto L_0888584C;
    case 81u: goto L_0888585C;
    case 82u: goto L_08885870;
    case 83u: goto L_08885874;
    case 84u: goto L_08885884;
    case 85u: goto L_088858BC;
    case 86u: goto L_088858D0;
    case 87u: goto L_08885900;
    case 88u: goto L_08885928;
    case 89u: goto L_08885948;
    case 90u: goto L_08885994;
    case 91u: goto L_0888599C;
    case 92u: goto L_088859D0;
    case 93u: goto L_088859D8;
    case 94u: goto L_08885A20;
    case 95u: goto L_08885A2C;
    case 96u: goto L_08885A44;
    case 97u: goto L_08885A50;
    case 98u: goto L_08885A6C;
    case 99u: goto L_08885A78;
    case 100u: goto L_08885A98;
    case 101u: goto L_08885AB8;
    case 102u: goto L_08885AF8;
    case 103u: goto L_08885B08;
    case 104u: goto L_08885B1C;
    case 105u: goto L_08885B38;
    case 106u: goto L_08885B6C;
    case 107u: goto L_08885B88;
    case 108u: goto L_08885B90;
    case 109u: goto L_08885BA0;
    case 110u: goto L_08885BB0;
    case 111u: goto L_08885BCC;
    case 112u: goto L_08885BD8;
    case 113u: goto L_08885BEC;
    case 114u: goto L_08885C08;
    case 115u: goto L_08885C14;
    case 116u: goto L_08885C28;
    case 117u: goto L_08885C48;
    case 118u: goto L_08885C50;
    case 119u: goto L_08885C70;
    case 120u: goto L_08885C90;
    case 121u: goto L_08885CA4;
    case 122u: goto L_08885CB4;
    case 123u: goto L_08885CC4;
    case 124u: goto L_08885CE8;
    case 125u: goto L_08885CF4;
    case 126u: goto L_08885D1C;
    case 127u: goto L_08885D24;
    case 128u: goto L_08885D2C;
    case 129u: goto L_08885D38;
    case 130u: goto L_08885D48;
    case 131u: goto L_08885D50;
    case 132u: goto L_08885D5C;
    case 133u: goto L_08885D74;
    case 134u: goto L_08885D84;
    case 135u: goto L_08885D8C;
    case 136u: goto L_08885D9C;
    case 137u: goto L_08885DAC;
    case 138u: goto L_08885DC4;
    case 139u: goto L_08885DD4;
    case 140u: goto L_08885DE4;
    case 141u: goto L_08885DEC;
    case 142u: goto L_08885E00;
    case 143u: goto L_08885E10;
    case 144u: goto L_08885E18;
    case 145u: goto L_08885E28;
    case 146u: goto L_08885E50;
    case 147u: goto L_08885E70;
    case 148u: goto L_08885E84;
    case 149u: goto L_08885E94;
    case 150u: goto L_08885E9C;
    case 151u: goto L_08885EB4;
    case 152u: goto L_08885EBC;
    case 153u: goto L_08885EC0;
    case 154u: goto L_08885ED4;
    case 155u: goto L_08885EF4;
    case 156u: goto L_08885F24;
    case 157u: goto L_08885F3C;
    case 158u: goto L_08885F60;
    case 159u: goto L_08885F7C;
    case 160u: goto L_08885F98;
    case 161u: goto L_08885FC8;
    case 162u: goto L_08885FE4;
    case 163u: goto L_08885FEC;
    case 164u: goto L_08885FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08885000:
    aot_gpr[7] = (20352u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    goto L_0888500C;
L_0888500C:
    aot_gpr[7] = (255u << 16u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[6] = (aot_gpr[6] >> 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
      if (branch_taken) {
          goto L_08885034;
      }
      goto L_08885028;
    }
L_08885028:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    goto L_08885034;
L_08885034:
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08885078;
      }
      goto L_08885064;
    }
L_08885064:
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] << 16u);
      if (branch_taken) {
          goto L_08885094;
      }
      goto L_08885078;
    }
L_08885078:
    aot_fpr[16] = aot_fpr[16] - aot_fpr[12];
    aot_gpr[6] = (32768u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    goto L_08885094;
L_08885094:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
        goto L_088850BC;
    }
    goto L_088850A4;
L_088850A4:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (aot_gpr[7] << 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
      if (branch_taken) {
          goto L_088850D8;
      }
      goto L_088850BC;
    }
L_088850BC:
    aot_gpr[7] = (32768u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (aot_gpr[7] << 8u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    goto L_088850D8;
L_088850D8:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
        goto L_088850FC;
    }
    goto L_088850E8;
L_088850E8:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
      if (branch_taken) {
          goto L_08885114;
      }
      goto L_088850FC;
    }
L_088850FC:
    aot_gpr[7] = (32768u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    goto L_08885114;
L_08885114:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (aot_gpr[7] << 4u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    aot_gpr[8] = (aot_gpr[5] & 255u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[8] << 2u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr[6]));
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08885188;
      }
      goto L_08885174;
    }
L_08885174:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] << 16u);
      if (branch_taken) {
          goto L_088851A4;
      }
      goto L_08885188;
    }
L_08885188:
    aot_fpr[13] = aot_fpr[16] - aot_fpr[12];
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    goto L_088851A4;
L_088851A4:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = aot_fpr[15] - aot_fpr[12];
        goto L_088851CC;
    }
    goto L_088851B4;
L_088851B4:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
      if (branch_taken) {
          goto L_088851E8;
      }
      goto L_088851CC;
    }
L_088851CC:
    aot_gpr[6] = (32768u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    goto L_088851E8;
L_088851E8:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
        goto L_0888520C;
    }
    goto L_088851F8;
L_088851F8:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
      if (branch_taken) {
          goto L_08885224;
      }
      goto L_0888520C;
    }
L_0888520C:
    aot_gpr[6] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    goto L_08885224;
L_08885224:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885230:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885240:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[23]);
    aot_gpr[23] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[21]);
    aot_gpr[21] = (0u | 2u);
    aot_gpr[8] = (aot_gpr[23] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0888539C;
      }
      goto L_088852D4;
    }
L_088852D4:
    aot_gpr[4] = (16256u << 16u);
    aot_gpr[20] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_088852E0;
L_088852E0:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[20]);
    aot_gpr[31] = (0x088852F4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_088859D8;
L_088852F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08885314;
      }
      goto L_08885300;
    }
L_08885300:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888530Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08885948;
L_0888530C:
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    goto L_08885314;
L_08885314:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0888531C;
L_0888531C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((aot_fpr[24] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08885378;
      }
      goto L_08885330;
    }
L_08885330:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08885368;
      }
      goto L_0888533C;
    }
L_0888533C:
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    goto L_08885340;
L_08885340:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-4)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08885340;
      }
      goto L_08885368;
    }
L_08885368:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_08885388;
      }
      goto L_08885378;
    }
L_08885378:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888531C;
      }
      goto L_08885388;
    }
L_08885388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088852E0;
      }
      goto L_0888539C;
    }
L_0888539C:
    aot_gpr[5] = (15232u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 32897u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (20224u << 16u);
    aot_gpr[11] = (0u | 1u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (255u << 16u);
    aot_gpr[10] = (32768u << 16u);
    goto L_088853D0;
L_088853D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088855B0;
      }
      goto L_088853DC;
    }
L_088853DC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
        goto L_0888540C;
    }
    goto L_0888540C;
L_0888540C:
    aot_gpr[2] = (aot_gpr[7] & 65280u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[2] = (aot_gpr[2] >> 8u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
        goto L_08885428;
    }
    goto L_08885428;
L_08885428:
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (aot_gpr[7] >> 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    if (static_cast<std::int32_t>(aot_gpr[7]) < 0) {
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
        goto L_08885444;
    }
    goto L_08885444;
L_08885444:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    if (aot_gpr[5] != aot_gpr[21]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(1)));
        goto L_088854A0;
    }
    goto L_08885458;
L_08885458:
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 21u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088854CC;
      }
      goto L_088854A0;
    }
L_088854A0:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    goto L_088854CC;
L_088854CC:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[15] = aot_fpr[15] - aot_fpr[17];
        goto L_088854F0;
    }
    goto L_088854DC;
L_088854DC:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] << 16u);
      if (branch_taken) {
          goto L_08885504;
      }
      goto L_088854F0;
    }
L_088854F0:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    goto L_08885504;
L_08885504:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[14] = aot_fpr[14] - aot_fpr[17];
        goto L_0888552C;
    }
    goto L_08885514;
L_08885514:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (aot_gpr[7] << 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
      if (branch_taken) {
          goto L_08885544;
      }
      goto L_0888552C;
    }
L_0888552C:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (aot_gpr[7] << 8u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    goto L_08885544;
L_08885544:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = aot_fpr[13] - aot_fpr[17];
        goto L_08885568;
    }
    goto L_08885554;
L_08885554:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
      if (branch_taken) {
          goto L_0888557C;
      }
      goto L_08885568;
    }
L_08885568:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    goto L_0888557C;
L_0888557C:
    aot_gpr[7] = (aot_gpr[9] & 255u);
    aot_gpr[2] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[7] & 255u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] & 255u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr[11]));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_088855B0;
L_088855B0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088853D0;
      }
      goto L_088855C0;
    }
L_088855C0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25884)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[9] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08885600;
      }
      goto L_088855D0;
    }
L_088855D0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885600;
      }
      goto L_088855D8;
    }
L_088855D8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(1)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 255 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885600;
      }
      goto L_088855E8;
    }
L_088855E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x088855FCu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 138u, 0x08884F34u>(ctx, &aot_mem) && ctx.pc == 0x088855FCu) goto L_088855FC;
    return;
L_088855FC:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08885600;
L_08885600:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(88), aot_gpr[9]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888563C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08885834;
      }
      goto L_08885668;
    }
L_08885668:
    aot_gpr[8] = (15232u << 16u);
    aot_gpr[8] = (aot_gpr[8] | 32897u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[8] = (20224u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[11] = (255u << 16u);
    aot_gpr[8] = (32768u << 16u);
    goto L_08885694;
L_08885694:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(16)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[3] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(8)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[13]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    if (static_cast<std::int32_t>(aot_gpr[13]) < 0) {
    aot_fpr[15] = aot_fpr[15] + aot_fpr[14];
        goto L_088856CC;
    }
    goto L_088856CC;
L_088856CC:
    aot_gpr[12] = (aot_gpr[3] & 65280u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[12] = (aot_gpr[12] >> 8u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[12]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    if (static_cast<std::int32_t>(aot_gpr[12]) < 0) {
    aot_fpr[15] = aot_fpr[15] + aot_fpr[14];
        goto L_088856E8;
    }
    goto L_088856E8;
L_088856E8:
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[3] = (aot_gpr[3] >> 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[3]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    if (static_cast<std::int32_t>(aot_gpr[3]) < 0) {
    aot_fpr[15] = aot_fpr[15] + aot_fpr[14];
        goto L_08885704;
    }
    goto L_08885704;
L_08885704:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(1)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[3]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[3]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08885758;
      }
      goto L_08885744;
    }
L_08885744:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[3] = (aot_gpr[3] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[3] = (aot_gpr[3] << 16u);
      if (branch_taken) {
          goto L_08885770;
      }
      goto L_08885758;
    }
L_08885758:
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[8]);
    aot_gpr[3] = (aot_gpr[3] & 255u);
    aot_gpr[3] = (aot_gpr[3] << 16u);
    goto L_08885770;
L_08885770:
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[15] = aot_fpr[16] - aot_fpr[12];
        goto L_08885798;
    }
    goto L_08885780;
L_08885780:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[12] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[12] = (aot_gpr[12] & 255u);
    aot_gpr[12] = (aot_gpr[12] << 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[12]);
      if (branch_taken) {
          goto L_088857B0;
      }
      goto L_08885798;
    }
L_08885798:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[12] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[8]);
    aot_gpr[12] = (aot_gpr[12] & 255u);
    aot_gpr[12] = (aot_gpr[12] << 8u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[12]);
    goto L_088857B0;
L_088857B0:
    ctx.set_fpu_condition((aot_fpr[17] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[15] = aot_fpr[17] - aot_fpr[12];
        goto L_088857D4;
    }
    goto L_088857C0;
L_088857C0:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_gpr[12] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[12] = (aot_gpr[12] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[12]);
      if (branch_taken) {
          goto L_088857E8;
      }
      goto L_088857D4;
    }
L_088857D4:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[12] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[8]);
    aot_gpr[12] = (aot_gpr[12] & 255u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[12]);
    goto L_088857E8;
L_088857E8:
    aot_gpr[12] = (aot_gpr[5] & 255u);
    aot_gpr[13] = (aot_gpr[12] & 255u);
    aot_gpr[13] = (aot_gpr[13] << 2u);
    aot_gpr[13] = (aot_gpr[9] + aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[12] & 255u);
    aot_gpr[3] = (aot_gpr[3] << 4u);
    aot_gpr[3] = (aot_gpr[9] + aot_gpr[3]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[3] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[12] & 255u);
    aot_gpr[3] = (aot_gpr[9] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08885694;
      }
      goto L_08885834;
    }
L_08885834:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25884)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[10] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08885874;
      }
      goto L_08885844;
    }
L_08885844:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885874;
      }
      goto L_0888584C;
    }
L_0888584C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(1)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 255 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885874;
      }
      goto L_0888585C;
    }
L_0888585C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08885870u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 138u, 0x08884F34u>(ctx, &aot_mem) && ctx.pc == 0x08885870u) goto L_08885870;
    return;
L_08885870:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08885874;
L_08885874:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(88), aot_gpr[10]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088858BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088858D0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25884), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25892), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25896), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25888), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885900:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25884), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25888), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25892), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25896), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885928:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25880), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885948:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888599C;
      }
      goto L_08885994;
    }
L_08885994:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_088859D0;
      }
      goto L_0888599C;
    }
L_0888599C:
    aot_fpr[13] = std::sqrt(aot_fpr[13]);
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16448u << 16u);
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    goto L_088859D0;
L_088859D0:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088859D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (14938u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 29710u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (15159u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 56400u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (14740u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 15719u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08885A2C;
      }
      goto L_08885A20;
    }
L_08885A20:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08885A2C;
L_08885A2C:
    aot_gpr[5] = (aot_gpr[4] & 65280u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08885A50;
      }
      goto L_08885A44;
    }
L_08885A44:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08885A50;
L_08885A50:
    aot_gpr[5] = (255u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] >> 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08885A78;
      }
      goto L_08885A6C;
    }
L_08885A6C:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08885A78;
L_08885A78:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885A98:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25904), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885AB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08885B1C;
      }
      goto L_08885AF8;
    }
L_08885AF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08885B08u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    goto L_08885230;
L_08885B08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08885AF8;
      }
      goto L_08885B1C;
    }
L_08885B1C:
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
L_08885B38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] << 4u);
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(6)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08885B90;
      }
      goto L_08885B6C;
    }
L_08885B6C:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08885B88u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08885240;
L_08885B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08885BA0;
      }
      goto L_08885B90;
    }
L_08885B90:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08885BA0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0888563C;
L_08885BA0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885BB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08885BCCu);
    aot_gpr[5] = (0u | 0u);
    goto L_08885884;
L_08885BCC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885BD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885BEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08885C08u);
    aot_gpr[5] = (0u | 0u);
    goto L_088858BC;
L_08885C08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885C14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08885C48;
      }
      goto L_08885C28;
    }
L_08885C28:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08885C28;
      }
      goto L_08885C48;
    }
L_08885C48:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885C50:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25912), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885C70:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25920), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885C90:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6596));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885CA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08885CE8;
      }
      goto L_08885CB4;
    }
L_08885CB4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6596));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08885CE8;
      }
      goto L_08885CC4;
    }
L_08885CC4:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08885CE8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885CE8u) goto L_08885CE8;
    return;
L_08885CE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885CF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-29124), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08885D1Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x08885D1Cu) goto L_08885D1C;
    return;
L_08885D1C:
    aot_gpr[31] = (0x08885D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 146u, 0x08931E90u>(ctx, &aot_mem) && ctx.pc == 0x08885D24u) goto L_08885D24;
    return;
L_08885D24:
    aot_gpr[31] = (0x08885D2Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x08885D2Cu) goto L_08885D2C;
    return;
L_08885D2C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08885D38u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08885D38u) goto L_08885D38;
    return;
L_08885D38:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08885D48u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x08885D48u) goto L_08885D48;
    return;
L_08885D48:
    aot_gpr[31] = (0x08885D50u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x08885D50u) goto L_08885D50;
    return;
L_08885D50:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08885D5Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08885D5Cu) goto L_08885D5C;
    return;
L_08885D5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08885D74u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885D74u) goto L_08885D74;
    return;
L_08885D74:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08885D84u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x08885D84u) goto L_08885D84;
    return;
L_08885D84:
    aot_gpr[31] = (0x08885D8Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x08885D8Cu) goto L_08885D8C;
    return;
L_08885D8C:
    aot_gpr[4] = (2184u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08885D9Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24144));
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 167u, 0x08931FE4u>(ctx, &aot_mem) && ctx.pc == 0x08885D9Cu) goto L_08885D9C;
    return;
L_08885D9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885DAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08885DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 2u, 0x08932008u>(ctx, &aot_mem) && ctx.pc == 0x08885DC4u) goto L_08885DC4;
    return;
L_08885DC4:
    aot_gpr[16] = (0u | 1u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08885DD4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08885DD4u) goto L_08885DD4;
    return;
L_08885DD4:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08885DE4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x08885DE4u) goto L_08885DE4;
    return;
L_08885DE4:
    aot_gpr[31] = (0x08885DECu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x08885DECu) goto L_08885DEC;
    return;
L_08885DEC:
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08885E00u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08885E00u) goto L_08885E00;
    return;
L_08885E00:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08885E10u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x08885E10u) goto L_08885E10;
    return;
L_08885E10:
    aot_gpr[31] = (0x08885E18u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x08885E18u) goto L_08885E18;
    return;
L_08885E18:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08885E28u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08885E28u) goto L_08885E28;
    return;
L_08885E28:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-29123)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-29124), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885E50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(25932)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08885EC0;
      }
      goto L_08885E70;
    }
L_08885E70:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(25932), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08885E84u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08885E84u) goto L_08885E84;
    return;
L_08885E84:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08885E94u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x08885E94u) goto L_08885E94;
    return;
L_08885E94:
    aot_gpr[31] = (0x08885E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 164u, 0x08943B64u>(ctx, &aot_mem) && ctx.pc == 0x08885E9Cu) goto L_08885E9C;
    return;
L_08885E9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08885EB4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885EB4u) goto L_08885EB4;
    return;
L_08885EB4:
    aot_gpr[31] = (0x08885EBCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x08885EBCu) goto L_08885EBC;
    return;
L_08885EBC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(25932), static_cast<std::uint8_t>(0u));
    goto L_08885EC0;
L_08885EC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885ED4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25928), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885EF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08885F24u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08885C90;
L_08885F24:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6556));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08885F3Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x08885F3Cu) goto L_08885F3C;
    return;
L_08885F3C:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-30480), aot_gpr[2]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08885F60u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11560));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x08885F60u) goto L_08885F60;
    return;
L_08885F60:
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08885F7Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11608));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x08885F7Cu) goto L_08885F7C;
    return;
L_08885F7C:
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08885F98u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11664));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x08885F98u) goto L_08885F98;
    return;
L_08885F98:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08885FC8u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885FC8u) goto L_08885FC8;
    return;
L_08885FC8:
    aot_gpr[20] = (256u << 16u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u | 2u);
    aot_gpr[21] = (0u | 10u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08885FF0;
      }
      goto L_08885FE4;
    }
L_08885FE4:
    aot_gpr[31] = (0x08885FECu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08885FECu) goto L_08885FEC;
    return;
L_08885FEC:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_08885FF0;
L_08885FF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 2u, 0x0888600Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 1u, 0x08886000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0129(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0129_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_129(Runtime &runtime) {
    runtime.register_generated_unit(129u, 0x08885000u, 4096u, &recomp_unit_0129, &recomp_unit_0129_entry);
    runtime.register_function(0x08885000u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888500Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885028u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885034u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885064u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885078u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885094u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088850A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088850BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088850D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088850E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088850FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885114u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885174u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885188u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088851A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088851B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088851CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088851E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088851F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888520Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885224u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885230u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885240u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088852D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088852E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088852F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885300u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888530Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885314u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888531Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885330u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888533Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885340u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885368u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885378u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885388u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888539Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088853D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088853DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888540Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885428u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885444u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885458u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088854A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088854CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088854DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088854F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885504u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885514u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888552Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885544u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885554u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885568u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888557Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088855B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088855C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088855D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088855D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088855E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088855FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885600u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888563Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885668u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885694u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088856CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088856E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885704u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885744u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885758u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885770u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885780u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885798u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088857B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088857C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088857D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088857E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885834u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885844u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888584Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888585Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885870u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885874u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885884u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088858BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088858D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885900u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885928u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885948u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885994u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x0888599Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088859D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x088859D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885A20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885A2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885A44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885A50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885A6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885A78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885A98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885AB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885AF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885B08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885B1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885B38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885B6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885B88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885B90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885BA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885BB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885BCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885BD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885BECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885C08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885C14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885C28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885C48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885C50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885C70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885C90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885CA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885CB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885CC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885CE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885CF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885D1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885D24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885D2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885D38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885D48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885D50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885D5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885D74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885D84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885D8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885D9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885DACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885DC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885DD4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885DE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885DECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885E00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885E10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885E18u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885E28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885E50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885E70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885E84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885E94u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885E9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885EB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885EBCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885EC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885ED4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885EF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885F24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885F3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885F60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885F7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885F98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885FC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885FE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885FECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08885FF0u, &recomp_unit_0129, "recomp_unit_0129");
}
} // namespace psprecomp
