#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0177[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0,
    29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 36,
    0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0,
    44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63,
    0, 64, 0, 0, 0, 65, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 79, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 83, 0, 0, 0, 84, 0,
    85, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 96, 0, 97, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 103, 104, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107,
    0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0,
    122, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 131,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 138, 139, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178,
};
void recomp_unit_0177_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088B5000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0177[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B5000;
    case 2u: goto L_088B5034;
    case 3u: goto L_088B503C;
    case 4u: goto L_088B504C;
    case 5u: goto L_088B5054;
    case 6u: goto L_088B5064;
    case 7u: goto L_088B5074;
    case 8u: goto L_088B5090;
    case 9u: goto L_088B5098;
    case 10u: goto L_088B50A8;
    case 11u: goto L_088B50C4;
    case 12u: goto L_088B50D8;
    case 13u: goto L_088B50E8;
    case 14u: goto L_088B5110;
    case 15u: goto L_088B5120;
    case 16u: goto L_088B5128;
    case 17u: goto L_088B5144;
    case 18u: goto L_088B5164;
    case 19u: goto L_088B5188;
    case 20u: goto L_088B5198;
    case 21u: goto L_088B51A8;
    case 22u: goto L_088B51B8;
    case 23u: goto L_088B51D4;
    case 24u: goto L_088B51F0;
    case 25u: goto L_088B51F8;
    case 26u: goto L_088B5208;
    case 27u: goto L_088B5260;
    case 28u: goto L_088B5278;
    case 29u: goto L_088B5280;
    case 30u: goto L_088B5290;
    case 31u: goto L_088B52A4;
    case 32u: goto L_088B52AC;
    case 33u: goto L_088B52BC;
    case 34u: goto L_088B52E0;
    case 35u: goto L_088B52E8;
    case 36u: goto L_088B52FC;
    case 37u: goto L_088B530C;
    case 38u: goto L_088B5320;
    case 39u: goto L_088B533C;
    case 40u: goto L_088B534C;
    case 41u: goto L_088B5354;
    case 42u: goto L_088B5364;
    case 43u: goto L_088B5378;
    case 44u: goto L_088B5380;
    case 45u: goto L_088B5390;
    case 46u: goto L_088B5398;
    case 47u: goto L_088B53C4;
    case 48u: goto L_088B53DC;
    case 49u: goto L_088B53EC;
    case 50u: goto L_088B5400;
    case 51u: goto L_088B541C;
    case 52u: goto L_088B543C;
    case 53u: goto L_088B5444;
    case 54u: goto L_088B5454;
    case 55u: goto L_088B545C;
    case 56u: goto L_088B546C;
    case 57u: goto L_088B5488;
    case 58u: goto L_088B5498;
    case 59u: goto L_088B54B8;
    case 60u: goto L_088B54C0;
    case 61u: goto L_088B54D0;
    case 62u: goto L_088B54E8;
    case 63u: goto L_088B54FC;
    case 64u: goto L_088B5504;
    case 65u: goto L_088B5514;
    case 66u: goto L_088B5518;
    case 67u: goto L_088B5544;
    case 68u: goto L_088B554C;
    case 69u: goto L_088B555C;
    case 70u: goto L_088B5578;
    case 71u: goto L_088B558C;
    case 72u: goto L_088B55D4;
    case 73u: goto L_088B55DC;
    case 74u: goto L_088B55EC;
    case 75u: goto L_088B5604;
    case 76u: goto L_088B560C;
    case 77u: goto L_088B561C;
    case 78u: goto L_088B562C;
    case 79u: goto L_088B5630;
    case 80u: goto L_088B564C;
    case 81u: goto L_088B5654;
    case 82u: goto L_088B5664;
    case 83u: goto L_088B5668;
    case 84u: goto L_088B5678;
    case 85u: goto L_088B5680;
    case 86u: goto L_088B5694;
    case 87u: goto L_088B56A4;
    case 88u: goto L_088B56B8;
    case 89u: goto L_088B56F0;
    case 90u: goto L_088B5704;
    case 91u: goto L_088B5718;
    case 92u: goto L_088B5734;
    case 93u: goto L_088B573C;
    case 94u: goto L_088B574C;
    case 95u: goto L_088B5768;
    case 96u: goto L_088B576C;
    case 97u: goto L_088B5774;
    case 98u: goto L_088B5784;
    case 99u: goto L_088B579C;
    case 100u: goto L_088B57A4;
    case 101u: goto L_088B57B4;
    case 102u: goto L_088B57CC;
    case 103u: goto L_088B57D0;
    case 104u: goto L_088B57D4;
    case 105u: goto L_088B57E4;
    case 106u: goto L_088B57EC;
    case 107u: goto L_088B57FC;
    case 108u: goto L_088B5808;
    case 109u: goto L_088B5810;
    case 110u: goto L_088B5828;
    case 111u: goto L_088B5894;
    case 112u: goto L_088B59B4;
    case 113u: goto L_088B59BC;
    case 114u: goto L_088B59CC;
    case 115u: goto L_088B59DC;
    case 116u: goto L_088B5A04;
    case 117u: goto L_088B5A18;
    case 118u: goto L_088B5A2C;
    case 119u: goto L_088B5A50;
    case 120u: goto L_088B5A70;
    case 121u: goto L_088B5A78;
    case 122u: goto L_088B5A80;
    case 123u: goto L_088B5A84;
    case 124u: goto L_088B5A90;
    case 125u: goto L_088B5AB4;
    case 126u: goto L_088B5AB8;
    case 127u: goto L_088B5AC8;
    case 128u: goto L_088B5AE8;
    case 129u: goto L_088B5AF0;
    case 130u: goto L_088B5AF8;
    case 131u: goto L_088B5AFC;
    case 132u: goto L_088B5B08;
    case 133u: goto L_088B5B2C;
    case 134u: goto L_088B5B30;
    case 135u: goto L_088B5B40;
    case 136u: goto L_088B5B60;
    case 137u: goto L_088B5B68;
    case 138u: goto L_088B5B70;
    case 139u: goto L_088B5B74;
    case 140u: goto L_088B5B80;
    case 141u: goto L_088B5BA4;
    case 142u: goto L_088B5BAC;
    case 143u: goto L_088B5BD4;
    case 144u: goto L_088B5BE0;
    case 145u: goto L_088B5C04;
    case 146u: goto L_088B5C34;
    case 147u: goto L_088B5C3C;
    case 148u: goto L_088B5C8C;
    case 149u: goto L_088B5CBC;
    case 150u: goto L_088B5CD8;
    case 151u: goto L_088B5CF4;
    case 152u: goto L_088B5D10;
    case 153u: goto L_088B5D1C;
    case 154u: goto L_088B5D28;
    case 155u: goto L_088B5D4C;
    case 156u: goto L_088B5D54;
    case 157u: goto L_088B5D60;
    case 158u: goto L_088B5D68;
    case 159u: goto L_088B5D78;
    case 160u: goto L_088B5DA8;
    case 161u: goto L_088B5DCC;
    case 162u: goto L_088B5DD4;
    case 163u: goto L_088B5DDC;
    case 164u: goto L_088B5DE4;
    case 165u: goto L_088B5DEC;
    case 166u: goto L_088B5DFC;
    case 167u: goto L_088B5E30;
    case 168u: goto L_088B5E34;
    case 169u: goto L_088B5E48;
    case 170u: goto L_088B5E68;
    case 171u: goto L_088B5E80;
    case 172u: goto L_088B5EF4;
    case 173u: goto L_088B5F08;
    case 174u: goto L_088B5F2C;
    case 175u: goto L_088B5F7C;
    case 176u: goto L_088B5F80;
    case 177u: goto L_088B5FBC;
    case 178u: goto L_088B5FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B5000:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (15322u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 29710u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B503C;
      }
      goto L_088B5034;
    }
L_088B5034:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088B504C;
      }
      goto L_088B503C;
    }
L_088B503C:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
        goto L_088B504C;
    }
    goto L_088B504C;
L_088B504C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_fpr[24] = aot_fpr[26] - aot_fpr[12];
      if (branch_taken) {
          goto L_088B5074;
      }
      goto L_088B5054;
    }
L_088B5054:
    ctx.set_fpu_condition((aot_fpr[24] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B5074;
      }
      goto L_088B5064;
    }
L_088B5064:
    aot_gpr[4] = (15897u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    goto L_088B5074;
L_088B5074:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(408), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(380)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[20] = aot_fpr[12] - aot_fpr[20];
      if (branch_taken) {
          goto L_088B51F8;
      }
      goto L_088B5090;
    }
L_088B5090:
    aot_gpr[31] = (0x088B5098u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 135u, 0x0880BA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088B5098u) goto L_088B5098;
    return;
L_088B5098:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088B51F8;
      }
      goto L_088B50A8;
    }
L_088B50A8:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]) & 0x7FFFFFFFu);
    aot_gpr[4] = (16968u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B51A8;
      }
      goto L_088B50C4;
    }
L_088B50C4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[28]));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[30];
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B5128;
      }
      goto L_088B50D8;
    }
L_088B50D8:
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16000u << 16u);
      if (branch_taken) {
          goto L_088B5110;
      }
      goto L_088B50E8;
    }
L_088B50E8:
    aot_gpr[4] = (15395u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16179u << 16u);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
      if (branch_taken) {
          goto L_088B5120;
      }
      goto L_088B5110;
    }
L_088B5110:
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    goto L_088B5120;
L_088B5120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5144;
      }
      goto L_088B5128;
    }
L_088B5128:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16192u << 16u);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    goto L_088B5144;
L_088B5144:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(224)));
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (17096u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_088B5208;
      }
      goto L_088B5164;
    }
L_088B5164:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(216)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(220)));
    aot_gpr[4] = (16800u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_088B5208;
      }
      goto L_088B5188;
    }
L_088B5188:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x088B5198u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 143u, 0x088FCB28u>(ctx, &aot_mem) && ctx.pc == 0x088B5198u) goto L_088B5198;
    return;
L_088B5198:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[0] + aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B5208;
      }
      goto L_088B51A8;
    }
L_088B51A8:
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (15733u << 16u);
      if (branch_taken) {
          goto L_088B51D4;
      }
      goto L_088B51B8;
    }
L_088B51B8:
    aot_gpr[4] = (15605u << 16u);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 49807u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
      if (branch_taken) {
          goto L_088B51F0;
      }
      goto L_088B51D4;
    }
L_088B51D4:
    aot_gpr[4] = (aot_gpr[4] | 49807u);
    aot_gpr[5] = (16448u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    goto L_088B51F0;
L_088B51F0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B5208;
      }
      goto L_088B51F8;
    }
L_088B51F8:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B5208;
L_088B5208:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27912)));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27916)));
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (15897u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16179u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[5] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16128u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[4] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088B52E8;
      }
      goto L_088B5260;
    }
L_088B5260:
    aot_gpr[4] = (17174u << 16u);
    aot_fpr[3] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[30] < aot_fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B53DC;
      }
      goto L_088B5278;
    }
L_088B5278:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5290;
      }
      goto L_088B5280;
    }
L_088B5280:
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[16] = aot_fpr[16] + aot_fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
      if (branch_taken) {
          goto L_088B52E0;
      }
      goto L_088B5290;
    }
L_088B5290:
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
        goto L_088B52AC;
    }
    goto L_088B52A4;
L_088B52A4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088B52BC;
      }
      goto L_088B52AC;
    }
L_088B52AC:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
        goto L_088B52BC;
    }
    goto L_088B52BC;
L_088B52BC:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (15948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[16] = aot_fpr[16] + aot_fpr[13];
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
    goto L_088B52E0;
L_088B52E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B53DC;
      }
      goto L_088B52E8;
    }
L_088B52E8:
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (17174u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[3] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_088B5380;
      }
      goto L_088B52FC;
    }
L_088B52FC:
    ctx.set_fpu_condition((aot_fpr[30] < aot_fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16051u << 16u);
      if (branch_taken) {
          goto L_088B53DC;
      }
      goto L_088B530C;
    }
L_088B530C:
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_fpr[13] = aot_fpr[16] + aot_fpr[13];
      if (branch_taken) {
          goto L_088B533C;
      }
      goto L_088B5320;
    }
L_088B5320:
    aot_gpr[4] = (16025u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
      if (branch_taken) {
          goto L_088B5378;
      }
      goto L_088B533C;
    }
L_088B533C:
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
        goto L_088B5354;
    }
    goto L_088B534C;
L_088B534C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088B5364;
      }
      goto L_088B5354;
    }
L_088B5354:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
        goto L_088B5364;
    }
    goto L_088B5364;
L_088B5364:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
    goto L_088B5378;
L_088B5378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B53DC;
      }
      goto L_088B5380;
    }
L_088B5380:
    ctx.set_fpu_condition((aot_fpr[30] < aot_fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B53DC;
      }
      goto L_088B5390;
    }
L_088B5390:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_088B53C4;
      }
      goto L_088B5398;
    }
L_088B5398:
    aot_gpr[4] = (16076u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16153u << 16u);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[16] = aot_fpr[16] + aot_fpr[13];
      if (branch_taken) {
          goto L_088B53DC;
      }
      goto L_088B53C4;
    }
L_088B53C4:
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
    aot_fpr[16] = aot_fpr[16] + aot_fpr[13];
    goto L_088B53DC;
L_088B53DC:
    ctx.set_fpu_condition((aot_fpr[30] < aot_fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
      if (branch_taken) {
          goto L_088B5578;
      }
      goto L_088B53EC;
    }
L_088B53EC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B545C;
      }
      goto L_088B5400;
    }
L_088B5400:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B545C;
      }
      goto L_088B541C;
    }
L_088B541C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27920)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B5444;
      }
      goto L_088B543C;
    }
L_088B543C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088B5454;
      }
      goto L_088B5444;
    }
L_088B5444:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
        goto L_088B5454;
    }
    goto L_088B5454;
L_088B5454:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088B545C;
L_088B545C:
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B5578;
      }
      goto L_088B546C;
    }
L_088B546C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (49648u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B5578;
      }
      goto L_088B5488;
    }
L_088B5488:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_088B5578;
      }
      goto L_088B5498;
    }
L_088B5498:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(400)));
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B54C0;
      }
      goto L_088B54B8;
    }
L_088B54B8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088B54D0;
      }
      goto L_088B54C0;
    }
L_088B54C0:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
        goto L_088B54D0;
    }
    goto L_088B54D0;
L_088B54D0:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B5578;
      }
      goto L_088B54E8;
    }
L_088B54E8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(376)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B5504;
      }
      goto L_088B54FC;
    }
L_088B54FC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088B5518;
      }
      goto L_088B5504;
    }
L_088B5504:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
        goto L_088B5514;
    }
    goto L_088B5514;
L_088B5514:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B5518;
L_088B5518:
    { const std::uint32_t vfpu_address = aot_gpr[22] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B554C;
      }
      goto L_088B5544;
    }
L_088B5544:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088B555C;
      }
      goto L_088B554C;
    }
L_088B554C:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
        goto L_088B555C;
    }
    goto L_088B555C;
L_088B555C:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    goto L_088B5578;
L_088B5578:
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((aot_fpr[24] < aot_fpr[4]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16040u << 16u);
      if (branch_taken) {
          goto L_088B5630;
      }
      goto L_088B558C;
    }
L_088B558C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (16230u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 26214u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(152)));
    aot_gpr[4] = (15368u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 34953u);
    aot_fpr[14] = aot_fpr[26] - aot_fpr[14];
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = aot_fpr[13] + aot_fpr[2];
      if (branch_taken) {
          goto L_088B55DC;
      }
      goto L_088B55D4;
    }
L_088B55D4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088B55EC;
      }
      goto L_088B55DC;
    }
L_088B55DC:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
        goto L_088B55EC;
    }
    goto L_088B55EC;
L_088B55EC:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_088B560C;
    }
    goto L_088B5604;
L_088B5604:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088B561C;
      }
      goto L_088B560C;
    }
L_088B560C:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088B561C;
    }
    goto L_088B561C;
L_088B561C:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B5630;
      }
      goto L_088B562C;
    }
L_088B562C:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B5630;
L_088B5630:
    aot_gpr[4] = (48588u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
        goto L_088B5654;
    }
    goto L_088B564C;
L_088B564C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B5668;
      }
      goto L_088B5654;
    }
L_088B5654:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
        goto L_088B5664;
    }
    goto L_088B5664;
L_088B5664:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B5668;
L_088B5668:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088B5680;
      }
      goto L_088B5678;
    }
L_088B5678:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088B5694;
      }
      goto L_088B5680;
    }
L_088B5680:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
        goto L_088B5694;
    }
    goto L_088B5694;
L_088B5694:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B56B8;
      }
      goto L_088B56A4;
    }
L_088B56A4:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088B56B8;
    }
    goto L_088B56B8;
L_088B56B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_gpr[31] = (0x088B56F0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 71u, 0x088EB668u>(ctx, &aot_mem) && ctx.pc == 0x088B56F0u) goto L_088B56F0;
    return;
L_088B56F0:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088B5774;
    }
    goto L_088B5704;
L_088B5704:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16040u << 16u);
      if (branch_taken) {
          goto L_088B573C;
      }
      goto L_088B5718;
    }
L_088B5718:
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B576C;
      }
      goto L_088B5734;
    }
L_088B5734:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_088B576C;
      }
      goto L_088B573C;
    }
L_088B573C:
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16040u << 16u);
      if (branch_taken) {
          goto L_088B576C;
      }
      goto L_088B574C;
    }
L_088B574C:
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B576C;
      }
      goto L_088B5768;
    }
L_088B5768:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_088B576C;
L_088B576C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088B57D4;
      }
      goto L_088B5774;
    }
L_088B5774:
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16000u << 16u);
      if (branch_taken) {
          goto L_088B57A4;
      }
      goto L_088B5784;
    }
L_088B5784:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_088B57D4;
    }
    goto L_088B579C;
L_088B579C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_088B57D0;
      }
      goto L_088B57A4;
    }
L_088B57A4:
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16000u << 16u);
      if (branch_taken) {
          goto L_088B57D0;
      }
      goto L_088B57B4;
    }
L_088B57B4:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_088B57D4;
    }
    goto L_088B57CC;
L_088B57CC:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_088B57D0;
L_088B57D0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088B57D4;
L_088B57D4:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B57EC;
      }
      goto L_088B57E4;
    }
L_088B57E4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088B57FC;
      }
      goto L_088B57EC;
    }
L_088B57EC:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
        goto L_088B57FC;
    }
    goto L_088B57FC;
L_088B57FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(384), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_088B5810;
      }
      goto L_088B5808;
    }
L_088B5808:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(384), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(132)));
    goto L_088B5810;
L_088B5810:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[30]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 160u, 0x088B4E84u>(ctx, &aot_mem); return;
      }
      goto L_088B5828;
    }
L_088B5828:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(156)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(140)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5894:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (49216u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27588), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27584), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16776u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(27588));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16448u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (49376u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (16688u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (16608u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (49456u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(104));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B59B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B59BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B59CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088B59CCu) goto L_088B59CC;
    return;
L_088B59CC:
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B59DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088B5A04u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 91u, 0x088C0738u>(ctx, &aot_mem) && ctx.pc == 0x088B5A04u) goto L_088B5A04;
    return;
L_088B5A04:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088B5A18u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x088B5A18u) goto L_088B5A18;
    return;
L_088B5A18:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088B5A2Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29712));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 96u, 0x08877624u>(ctx, &aot_mem) && ctx.pc == 0x088B5A2Cu) goto L_088B5A2C;
    return;
L_088B5A2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29336)));
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088B5A78;
      }
      goto L_088B5A50;
    }
L_088B5A50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B5A70u);
    aot_gpr[6] = (0u | 44u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B5A70u) goto L_088B5A70;
    return;
L_088B5A70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B5A84;
      }
      goto L_088B5A78;
    }
L_088B5A78:
    aot_gpr[31] = (0x088B5A80u);
    aot_gpr[4] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088B5A80u) goto L_088B5A80;
    return;
L_088B5A80:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_088B5A84;
L_088B5A84:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5AB8;
      }
      goto L_088B5A90;
    }
L_088B5A90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (0u | 512u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (0u | 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088B5AB4u);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0289_entry, 289u, 83u, 0x08925C50u>(ctx, &aot_mem) && ctx.pc == 0x088B5AB4u) goto L_088B5AB4;
    return;
L_088B5AB4:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    goto L_088B5AB8;
L_088B5AB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5AF0;
      }
      goto L_088B5AC8;
    }
L_088B5AC8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088B5AE8u);
    aot_gpr[6] = (0u | 44u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B5AE8u) goto L_088B5AE8;
    return;
L_088B5AE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B5AFC;
      }
      goto L_088B5AF0;
    }
L_088B5AF0:
    aot_gpr[31] = (0x088B5AF8u);
    aot_gpr[4] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088B5AF8u) goto L_088B5AF8;
    return;
L_088B5AF8:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_088B5AFC;
L_088B5AFC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5B30;
      }
      goto L_088B5B08;
    }
L_088B5B08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (0u | 64u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (0u | 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088B5B2Cu);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0289_entry, 289u, 83u, 0x08925C50u>(ctx, &aot_mem) && ctx.pc == 0x088B5B2Cu) goto L_088B5B2C;
    return;
L_088B5B2C:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    goto L_088B5B30;
L_088B5B30:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5B68;
      }
      goto L_088B5B40;
    }
L_088B5B40:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088B5B60u);
    aot_gpr[6] = (0u | 44u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B5B60u) goto L_088B5B60;
    return;
L_088B5B60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B5B74;
      }
      goto L_088B5B68;
    }
L_088B5B68:
    aot_gpr[31] = (0x088B5B70u);
    aot_gpr[4] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088B5B70u) goto L_088B5B70;
    return;
L_088B5B70:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_088B5B74;
L_088B5B74:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[18]);
        goto L_088B5BAC;
    }
    goto L_088B5B80;
L_088B5B80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (0u | 208u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (0u | 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088B5BA4u);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0289_entry, 289u, 83u, 0x08925C50u>(ctx, &aot_mem) && ctx.pc == 0x088B5BA4u) goto L_088B5BA4;
    return;
L_088B5BA4:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    goto L_088B5BAC;
L_088B5BAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088B5BD4u);
    aot_gpr[6] = (0u | 96u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B5BD4u) goto L_088B5BD4;
    return;
L_088B5BD4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (65409u << 16u);
        goto L_088B5C3C;
    }
    goto L_088B5BE0;
L_088B5BE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    goto L_088B5C04;
L_088B5C04:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(64), aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B5C04;
      }
      goto L_088B5C34;
    }
L_088B5C34:
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (65409u << 16u);
    goto L_088B5C3C;
L_088B5C3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32640));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (65344u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16448));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088B5C8Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x088B5C8Cu) goto L_088B5C8C;
    return;
L_088B5C8C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[4]));
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
L_088B5CBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088B5CD8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 121u, 0x08884E14u>(ctx, &aot_mem) && ctx.pc == 0x088B5CD8u) goto L_088B5CD8;
    return;
L_088B5CD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
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
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5CF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B5D10u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0289_entry, 289u, 113u, 0x08925F98u>(ctx, &aot_mem) && ctx.pc == 0x088B5D10u) goto L_088B5D10;
    return;
L_088B5D10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088B5D1Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0289_entry, 289u, 113u, 0x08925F98u>(ctx, &aot_mem) && ctx.pc == 0x088B5D1Cu) goto L_088B5D1C;
    return;
L_088B5D1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x088B5D28u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0289_entry, 289u, 113u, 0x08925F98u>(ctx, &aot_mem) && ctx.pc == 0x088B5D28u) goto L_088B5D28;
    return;
L_088B5D28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B5D4Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B5D4Cu) goto L_088B5D4C;
    return;
L_088B5D4C:
    aot_gpr[31] = (0x088B5D54u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x088B5D54u) goto L_088B5D54;
    return;
L_088B5D54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x088B5D60u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 3u, 0x0891C030u>(ctx, &aot_mem) && ctx.pc == 0x088B5D60u) goto L_088B5D60;
    return;
L_088B5D60:
    aot_gpr[31] = (0x088B5D68u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 95u, 0x088C07A4u>(ctx, &aot_mem) && ctx.pc == 0x088B5D68u) goto L_088B5D68;
    return;
L_088B5D68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5D78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5DCC;
      }
      goto L_088B5DA8;
    }
L_088B5DA8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B5DA8;
      }
      goto L_088B5DCC;
    }
L_088B5DCC:
    aot_gpr[31] = (0x088B5DD4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 13u, 0x089260B8u>(ctx, &aot_mem) && ctx.pc == 0x088B5DD4u) goto L_088B5DD4;
    return;
L_088B5DD4:
    aot_gpr[31] = (0x088B5DDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 13u, 0x089260B8u>(ctx, &aot_mem) && ctx.pc == 0x088B5DDCu) goto L_088B5DDC;
    return;
L_088B5DDC:
    aot_gpr[31] = (0x088B5DE4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 13u, 0x089260B8u>(ctx, &aot_mem) && ctx.pc == 0x088B5DE4u) goto L_088B5DE4;
    return;
L_088B5DE4:
    aot_gpr[31] = (0x088B5DECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 111u, 0x088C08D8u>(ctx, &aot_mem) && ctx.pc == 0x088B5DECu) goto L_088B5DEC;
    return;
L_088B5DEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5DFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B5E34;
      }
      goto L_088B5E30;
    }
L_088B5E30:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    goto L_088B5E34;
L_088B5E34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (15232u << 16u);
      if (branch_taken) {
          goto L_088B5F08;
      }
      goto L_088B5E48;
    }
L_088B5E48:
    aot_gpr[4] = (aot_gpr[4] | 32897u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), ctx.vfpu_scalar_bits_ct<16u>());
    goto L_088B5E68;
L_088B5E68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5EF4;
      }
      goto L_088B5E80;
    }
L_088B5E80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    ctx.execute_vfpu_vx2i(20u, 16u, 1u, 0u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    ctx.set_vfpu_scalar_bits_ct<16u>(PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 4u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088B5EF4u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 160u, 0x08924E84u>(ctx, &aot_mem) && ctx.pc == 0x088B5EF4u) goto L_088B5EF4;
    return;
L_088B5EF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B5E68;
      }
      goto L_088B5F08;
    }
L_088B5F08:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5F2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7652)));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B5F80;
      }
      goto L_088B5F7C;
    }
L_088B5F7C:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    goto L_088B5F80;
L_088B5F80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B5FBCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 30u, 0x089261ECu>(ctx, &aot_mem) && ctx.pc == 0x088B5FBCu) goto L_088B5FBC;
    return;
L_088B5FBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B5FF4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 30u, 0x089261ECu>(ctx, &aot_mem) && ctx.pc == 0x088B5FF4u) goto L_088B5FF4;
    return;
L_088B5FF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.pc = 0x088B6000u; return;
}

void recomp_unit_0177(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0177_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_177(Runtime &runtime) {
    runtime.register_generated_unit(177u, 0x088B5000u, 4096u, &recomp_unit_0177, &recomp_unit_0177_entry);
    runtime.register_function(0x088B5000u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5034u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B503Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B504Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5054u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5064u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5074u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5090u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5098u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B50A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B50C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B50D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B50E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5110u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5120u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5128u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5144u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5164u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5188u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5198u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B51A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B51B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B51D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B51F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B51F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5208u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5260u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5278u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5280u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5290u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B52A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B52ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B52BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B52E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B52E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B52FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B530Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5320u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B533Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B534Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5354u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5364u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5378u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5380u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5390u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5398u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B53C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B53DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B53ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5400u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B541Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B543Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5444u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5454u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B545Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B546Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5488u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5498u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B54B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B54C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B54D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B54E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B54FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5504u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5514u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5518u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5544u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B554Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B555Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5578u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B558Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B55D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B55DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B55ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5604u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B560Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B561Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B562Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5630u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B564Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5654u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5664u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5668u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5678u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5680u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5694u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B56A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B56B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B56F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5704u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5718u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5734u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B573Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B574Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5768u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B576Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5774u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5784u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B579Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B57A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B57B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B57CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B57D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B57D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B57E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B57ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B57FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5808u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5810u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5828u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5894u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B59B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B59BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B59CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B59DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5A04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5A18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5A2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5A50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5A70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5A78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5A80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5A84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5A90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5AB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5AB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5AC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5AE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5AF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5AF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5AFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5B08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5B2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5B30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5B40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5B60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5B68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5B70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5B74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5B80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5BA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5BACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5BD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5BE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5C04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5C34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5C3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5C8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5CBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5CD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5CF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5D10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5D1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5D28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5D4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5D54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5D60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5D68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5D78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5DA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5DCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5DD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5DDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5DE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5DECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5DFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5E30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5E34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5E48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5E68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5E80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5EF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5F08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5F2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5F7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5F80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5FBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x088B5FF4u, &recomp_unit_0177, "recomp_unit_0177");
}
} // namespace psprecomp
