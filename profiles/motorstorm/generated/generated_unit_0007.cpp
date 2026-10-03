#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0007[1023] = {
    1, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0,
    28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 43, 0, 0, 0, 44, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0,
    54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 63, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0,
    94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 107,
    0, 108, 0, 0, 0, 0, 0, 0, 109, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 114, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 121, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131,
    0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140,
    0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 151, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 153, 154, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 159, 0, 0, 0, 0, 160, 0, 161, 0, 162,
    0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0,
    176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 196, 197, 0, 0, 198, 0, 199, 0, 0, 200, 201, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209,
};
void recomp_unit_0007_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0880B000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0007[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0880B000;
    case 2u: goto L_0880B010;
    case 3u: goto L_0880B014;
    case 4u: goto L_0880B038;
    case 5u: goto L_0880B04C;
    case 6u: goto L_0880B054;
    case 7u: goto L_0880B05C;
    case 8u: goto L_0880B070;
    case 9u: goto L_0880B078;
    case 10u: goto L_0880B0A0;
    case 11u: goto L_0880B0B8;
    case 12u: goto L_0880B0CC;
    case 13u: goto L_0880B0D4;
    case 14u: goto L_0880B0E0;
    case 15u: goto L_0880B0F4;
    case 16u: goto L_0880B0FC;
    case 17u: goto L_0880B124;
    case 18u: goto L_0880B13C;
    case 19u: goto L_0880B150;
    case 20u: goto L_0880B184;
    case 21u: goto L_0880B1B8;
    case 22u: goto L_0880B1C0;
    case 23u: goto L_0880B1CC;
    case 24u: goto L_0880B1E0;
    case 25u: goto L_0880B1E8;
    case 26u: goto L_0880B1F0;
    case 27u: goto L_0880B1F8;
    case 28u: goto L_0880B200;
    case 29u: goto L_0880B214;
    case 30u: goto L_0880B21C;
    case 31u: goto L_0880B230;
    case 32u: goto L_0880B240;
    case 33u: goto L_0880B248;
    case 34u: goto L_0880B25C;
    case 35u: goto L_0880B274;
    case 36u: goto L_0880B290;
    case 37u: goto L_0880B298;
    case 38u: goto L_0880B2A8;
    case 39u: goto L_0880B2BC;
    case 40u: goto L_0880B2D8;
    case 41u: goto L_0880B2F0;
    case 42u: goto L_0880B300;
    case 43u: goto L_0880B308;
    case 44u: goto L_0880B318;
    case 45u: goto L_0880B31C;
    case 46u: goto L_0880B324;
    case 47u: goto L_0880B370;
    case 48u: goto L_0880B3A8;
    case 49u: goto L_0880B3BC;
    case 50u: goto L_0880B3C0;
    case 51u: goto L_0880B3D0;
    case 52u: goto L_0880B3E4;
    case 53u: goto L_0880B3F4;
    case 54u: goto L_0880B400;
    case 55u: goto L_0880B414;
    case 56u: goto L_0880B420;
    case 57u: goto L_0880B430;
    case 58u: goto L_0880B444;
    case 59u: goto L_0880B470;
    case 60u: goto L_0880B484;
    case 61u: goto L_0880B494;
    case 62u: goto L_0880B4A4;
    case 63u: goto L_0880B4A8;
    case 64u: goto L_0880B4AC;
    case 65u: goto L_0880B52C;
    case 66u: goto L_0880B550;
    case 67u: goto L_0880B55C;
    case 68u: goto L_0880B56C;
    case 69u: goto L_0880B574;
    case 70u: goto L_0880B58C;
    case 71u: goto L_0880B5A8;
    case 72u: goto L_0880B5B0;
    case 73u: goto L_0880B5C0;
    case 74u: goto L_0880B5C8;
    case 75u: goto L_0880B5F8;
    case 76u: goto L_0880B604;
    case 77u: goto L_0880B61C;
    case 78u: goto L_0880B628;
    case 79u: goto L_0880B63C;
    case 80u: goto L_0880B648;
    case 81u: goto L_0880B66C;
    case 82u: goto L_0880B67C;
    case 83u: goto L_0880B69C;
    case 84u: goto L_0880B6C8;
    case 85u: goto L_0880B708;
    case 86u: goto L_0880B710;
    case 87u: goto L_0880B73C;
    case 88u: goto L_0880B744;
    case 89u: goto L_0880B758;
    case 90u: goto L_0880B760;
    case 91u: goto L_0880B768;
    case 92u: goto L_0880B770;
    case 93u: goto L_0880B778;
    case 94u: goto L_0880B780;
    case 95u: goto L_0880B788;
    case 96u: goto L_0880B7A0;
    case 97u: goto L_0880B7C0;
    case 98u: goto L_0880B7CC;
    case 99u: goto L_0880B7D4;
    case 100u: goto L_0880B7F0;
    case 101u: goto L_0880B800;
    case 102u: goto L_0880B810;
    case 103u: goto L_0880B828;
    case 104u: goto L_0880B858;
    case 105u: goto L_0880B86C;
    case 106u: goto L_0880B874;
    case 107u: goto L_0880B87C;
    case 108u: goto L_0880B884;
    case 109u: goto L_0880B8A0;
    case 110u: goto L_0880B8A4;
    case 111u: goto L_0880B8CC;
    case 112u: goto L_0880B8D8;
    case 113u: goto L_0880B8E0;
    case 114u: goto L_0880B8E4;
    case 115u: goto L_0880B900;
    case 116u: goto L_0880B910;
    case 117u: goto L_0880B92C;
    case 118u: goto L_0880B938;
    case 119u: goto L_0880B944;
    case 120u: goto L_0880B950;
    case 121u: goto L_0880B954;
    case 122u: goto L_0880B95C;
    case 123u: goto L_0880B96C;
    case 124u: goto L_0880B978;
    case 125u: goto L_0880B998;
    case 126u: goto L_0880B9B0;
    case 127u: goto L_0880B9C0;
    case 128u: goto L_0880B9C8;
    case 129u: goto L_0880B9DC;
    case 130u: goto L_0880B9F4;
    case 131u: goto L_0880B9FC;
    case 132u: goto L_0880BA04;
    case 133u: goto L_0880BA10;
    case 134u: goto L_0880BA1C;
    case 135u: goto L_0880BA2C;
    case 136u: goto L_0880BA3C;
    case 137u: goto L_0880BA4C;
    case 138u: goto L_0880BA5C;
    case 139u: goto L_0880BA6C;
    case 140u: goto L_0880BA7C;
    case 141u: goto L_0880BA8C;
    case 142u: goto L_0880BA9C;
    case 143u: goto L_0880BAAC;
    case 144u: goto L_0880BABC;
    case 145u: goto L_0880BAD0;
    case 146u: goto L_0880BAE4;
    case 147u: goto L_0880BAF8;
    case 148u: goto L_0880BB0C;
    case 149u: goto L_0880BB20;
    case 150u: goto L_0880BB58;
    case 151u: goto L_0880BB5C;
    case 152u: goto L_0880BB78;
    case 153u: goto L_0880BB8C;
    case 154u: goto L_0880BB90;
    case 155u: goto L_0880BB94;
    case 156u: goto L_0880BB9C;
    case 157u: goto L_0880BBC4;
    case 158u: goto L_0880BBD4;
    case 159u: goto L_0880BBD8;
    case 160u: goto L_0880BBEC;
    case 161u: goto L_0880BBF4;
    case 162u: goto L_0880BBFC;
    case 163u: goto L_0880BC18;
    case 164u: goto L_0880BC20;
    case 165u: goto L_0880BC28;
    case 166u: goto L_0880BC30;
    case 167u: goto L_0880BC38;
    case 168u: goto L_0880BC40;
    case 169u: goto L_0880BC48;
    case 170u: goto L_0880BC50;
    case 171u: goto L_0880BC58;
    case 172u: goto L_0880BC60;
    case 173u: goto L_0880BC68;
    case 174u: goto L_0880BC70;
    case 175u: goto L_0880BC78;
    case 176u: goto L_0880BC80;
    case 177u: goto L_0880BC8C;
    case 178u: goto L_0880BCAC;
    case 179u: goto L_0880BCC0;
    case 180u: goto L_0880BCD0;
    case 181u: goto L_0880BCD8;
    case 182u: goto L_0880BCEC;
    case 183u: goto L_0880BD04;
    case 184u: goto L_0880BD0C;
    case 185u: goto L_0880BD14;
    case 186u: goto L_0880BD20;
    case 187u: goto L_0880BD30;
    case 188u: goto L_0880BD7C;
    case 189u: goto L_0880BDF0;
    case 190u: goto L_0880BDF8;
    case 191u: goto L_0880BE00;
    case 192u: goto L_0880BE24;
    case 193u: goto L_0880BE48;
    case 194u: goto L_0880BE50;
    case 195u: goto L_0880BE80;
    case 196u: goto L_0880BEA0;
    case 197u: goto L_0880BEA4;
    case 198u: goto L_0880BEB0;
    case 199u: goto L_0880BEB8;
    case 200u: goto L_0880BEC4;
    case 201u: goto L_0880BEC8;
    case 202u: goto L_0880BED0;
    case 203u: goto L_0880BEEC;
    case 204u: goto L_0880BEF4;
    case 205u: goto L_0880BEFC;
    case 206u: goto L_0880BF18;
    case 207u: goto L_0880BF80;
    case 208u: goto L_0880BFD0;
    case 209u: goto L_0880BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0880B000:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880B014;
      }
      goto L_0880B010;
    }
L_0880B010:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    goto L_0880B014;
L_0880B014:
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[31] = (0x0880B038u);
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 158u, 0x088B4CD0u>(ctx, &aot_mem) && ctx.pc == 0x0880B038u) goto L_0880B038;
    return;
L_0880B038:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 195u, 0x0880AE10u>(ctx, &aot_mem); return;
      }
      goto L_0880B04C;
    }
L_0880B04C:
    aot_gpr[31] = (0x0880B054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 7u, 0x0880A06Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B054u) goto L_0880B054;
    return;
L_0880B054:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B0CC;
      }
      goto L_0880B05C;
    }
L_0880B05C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B0CC;
      }
      goto L_0880B070;
    }
L_0880B070:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_0880B078;
L_0880B078:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(196)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(732)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] ^ 1u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B0B8;
      }
      goto L_0880B0A0;
    }
L_0880B0A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(384), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0880B0B8;
L_0880B0B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B078;
      }
      goto L_0880B0CC;
    }
L_0880B0CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B150;
      }
      goto L_0880B0D4;
    }
L_0880B0D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(564)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B150;
      }
      goto L_0880B0E0;
    }
L_0880B0E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B150;
      }
      goto L_0880B0F4;
    }
L_0880B0F4:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_0880B0FC;
L_0880B0FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(196)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(732)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] ^ 1u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B13C;
      }
      goto L_0880B124;
    }
L_0880B124:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(384), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0880B13C;
L_0880B13C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B0FC;
      }
      goto L_0880B150;
    }
L_0880B150:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B184:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28636)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0880B200;
      }
      goto L_0880B1B8;
    }
L_0880B1B8:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0880B200;
      }
      goto L_0880B1C0;
    }
L_0880B1C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0880B200;
      }
      goto L_0880B1CC;
    }
L_0880B1CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B200;
      }
      goto L_0880B1E0;
    }
L_0880B1E0:
    aot_gpr[31] = (0x0880B1E8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 143u, 0x08809CB4u>(ctx, &aot_mem) && ctx.pc == 0x0880B1E8u) goto L_0880B1E8;
    return;
L_0880B1E8:
    aot_gpr[31] = (0x0880B1F0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 156u, 0x08809DF4u>(ctx, &aot_mem) && ctx.pc == 0x0880B1F0u) goto L_0880B1F0;
    return;
L_0880B1F0:
    aot_gpr[31] = (0x0880B1F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 182u, 0x08809FC4u>(ctx, &aot_mem) && ctx.pc == 0x0880B1F8u) goto L_0880B1F8;
    return;
L_0880B1F8:
    aot_gpr[31] = (0x0880B200u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 146u, 0x0880A9C4u>(ctx, &aot_mem) && ctx.pc == 0x0880B200u) goto L_0880B200;
    return;
L_0880B200:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880B230;
      }
      goto L_0880B214;
    }
L_0880B214:
    aot_gpr[31] = (0x0880B21Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 189u, 0x08804DE4u>(ctx, &aot_mem) && ctx.pc == 0x0880B21Cu) goto L_0880B21C;
    return;
L_0880B21C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B214;
      }
      goto L_0880B230;
    }
L_0880B230:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880B25C;
      }
      goto L_0880B240;
    }
L_0880B240:
    aot_gpr[31] = (0x0880B248u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 128u, 0x08804984u>(ctx, &aot_mem) && ctx.pc == 0x0880B248u) goto L_0880B248;
    return;
L_0880B248:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B240;
      }
      goto L_0880B25C;
    }
L_0880B25C:
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
L_0880B274:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(448), 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    goto L_0880B290;
L_0880B290:
    aot_gpr[31] = (0x0880B298u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 53u, 0x08804408u>(ctx, &aot_mem) && ctx.pc == 0x0880B298u) goto L_0880B298;
    return;
L_0880B298:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0880B290;
      }
      goto L_0880B2A8;
    }
L_0880B2A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B2BC:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0880B318;
      }
      goto L_0880B2D8;
    }
L_0880B2D8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B308;
      }
      goto L_0880B2F0;
    }
L_0880B2F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880B308;
      }
      goto L_0880B300;
    }
L_0880B300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B31C;
      }
      goto L_0880B308;
    }
L_0880B308:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B2D8;
      }
      goto L_0880B318;
    }
L_0880B318:
    aot_gpr[2] = (0u | 0u);
    goto L_0880B31C;
L_0880B31C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B324:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0880B3A8;
      }
      goto L_0880B370;
    }
L_0880B370:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(432), aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(436), aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B370;
      }
      goto L_0880B3A8;
    }
L_0880B3A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_0880B444;
      }
      goto L_0880B3BC;
    }
L_0880B3BC:
    aot_gpr[19] = (0u | 0u);
    goto L_0880B3C0;
L_0880B3C0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[19]);
    aot_gpr[31] = (0x0880B3D0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 118u, 0x088B49F0u>(ctx, &aot_mem) && ctx.pc == 0x0880B3D0u) goto L_0880B3D0;
    return;
L_0880B3D0:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28), aot_gpr[18]);
      if (branch_taken) {
          goto L_0880B430;
      }
      goto L_0880B3E4;
    }
L_0880B3E4:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[22]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x0880B3F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880B2BC;
L_0880B3F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B420;
      }
      goto L_0880B400;
    }
L_0880B400:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_0880B420;
      }
      goto L_0880B414;
    }
L_0880B414:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0880B420u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 128u, 0x088B4AA0u>(ctx, &aot_mem) && ctx.pc == 0x0880B420u) goto L_0880B420;
    return;
L_0880B420:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B3E4;
      }
      goto L_0880B430;
    }
L_0880B430:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0880B3C0;
      }
      goto L_0880B444;
    }
L_0880B444:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7488)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(460)));
    aot_gpr[7] = (aot_gpr[6] ^ 2u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(464)));
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(468)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(472)));
      if (branch_taken) {
          goto L_0880B4A8;
      }
      goto L_0880B470;
    }
L_0880B470:
    aot_gpr[7] = (aot_gpr[6] ^ 7u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (aot_gpr[6] ^ 5u);
      if (branch_taken) {
          goto L_0880B4A8;
      }
      goto L_0880B484;
    }
L_0880B484:
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] ^ 6u);
      if (branch_taken) {
          goto L_0880B4A8;
      }
      goto L_0880B494;
    }
L_0880B494:
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (aot_gpr[6] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(564), static_cast<std::uint8_t>(aot_gpr[5]));
        goto L_0880B4AC;
    }
    goto L_0880B4A4;
L_0880B4A4:
    aot_gpr[5] = (0u | 1u);
    goto L_0880B4A8;
L_0880B4A8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(564), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0880B4AC;
L_0880B4AC:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(565), static_cast<std::uint8_t>(0u));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(552), aot_gpr[17]);
    aot_fpr[16] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(556), aot_gpr[17]);
    aot_gpr[5] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(488), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(492), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(516), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(568), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(508), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(500), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(512), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(560), aot_gpr[4]);
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
L_0880B52C:
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(456)));
    aot_gpr[9] = (18804u << 16u);
    aot_gpr[9] = (aot_gpr[9] | 9216u);
    aot_gpr[8] = (0u | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880B5C0;
      }
      goto L_0880B550;
    }
L_0880B550:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    goto L_0880B55C;
L_0880B55C:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[10] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0880B5B0;
      }
      goto L_0880B56C;
    }
L_0880B56C:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B58C;
      }
      goto L_0880B574;
    }
L_0880B574:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(132)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[11]);
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[10]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B5B0;
      }
      goto L_0880B58C;
    }
L_0880B58C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(136)));
    aot_fpr[13] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880B5B0;
      }
      goto L_0880B5A8;
    }
L_0880B5A8:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[2] = (aot_gpr[8] | 0u);
    goto L_0880B5B0;
L_0880B5B0:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0880B55C;
      }
      goto L_0880B5C0;
    }
L_0880B5C0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B5C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (aot_gpr[16] | 0u);
    goto L_0880B5F8;
L_0880B5F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B66C;
      }
      goto L_0880B604;
    }
L_0880B604:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0880B66C;
      }
      goto L_0880B61C;
    }
L_0880B61C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0880B66C;
      }
      goto L_0880B628;
    }
L_0880B628:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(388)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0880B63Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0880B52C;
L_0880B63C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880B66C;
      }
      goto L_0880B648;
    }
L_0880B648:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[31] = (0x0880B66Cu);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 128u, 0x088B4AA0u>(ctx, &aot_mem) && ctx.pc == 0x0880B66Cu) goto L_0880B66C;
    return;
L_0880B66C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B5F8;
      }
      goto L_0880B67C;
    }
L_0880B67C:
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
L_0880B69C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(456)));
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (0u | 0u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0880B708;
      }
      goto L_0880B6C8;
    }
L_0880B6C8:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(524)));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(528)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[14];
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[14] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(456)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0880B6C8;
      }
      goto L_0880B708;
    }
L_0880B708:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B710:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880B758;
      }
      goto L_0880B73C;
    }
L_0880B73C:
    aot_gpr[31] = (0x0880B744u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 175u, 0x08804CF8u>(ctx, &aot_mem) && ctx.pc == 0x0880B744u) goto L_0880B744;
    return;
L_0880B744:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B73C;
      }
      goto L_0880B758;
    }
L_0880B758:
    aot_gpr[31] = (0x0880B760u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880B274;
L_0880B760:
    aot_gpr[31] = (0x0880B768u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 119u, 0x08809A60u>(ctx, &aot_mem) && ctx.pc == 0x0880B768u) goto L_0880B768;
    return;
L_0880B768:
    aot_gpr[31] = (0x0880B770u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880B324;
L_0880B770:
    aot_gpr[31] = (0x0880B778u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880B5C8;
L_0880B778:
    aot_gpr[31] = (0x0880B780u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880B69C;
L_0880B780:
    aot_gpr[31] = (0x0880B788u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 123u, 0x08809AFCu>(ctx, &aot_mem) && ctx.pc == 0x0880B788u) goto L_0880B788;
    return;
L_0880B788:
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
L_0880B7A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0880B7C0;
L_0880B7C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B7F0;
      }
      goto L_0880B7CC;
    }
L_0880B7CC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B7F0;
      }
      goto L_0880B7D4;
    }
L_0880B7D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0880B7F0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880B7F0u) goto L_0880B7F0;
    return;
L_0880B7F0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B7C0;
      }
      goto L_0880B800;
    }
L_0880B800:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0880B810u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(452));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0880B810u) goto L_0880B810;
    return;
L_0880B810:
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
L_0880B828:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (0u | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880B874;
      }
      goto L_0880B858;
    }
L_0880B858:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880B87C;
      }
      goto L_0880B86C;
    }
L_0880B86C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0880B8A4;
      }
      goto L_0880B874;
    }
L_0880B874:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880B910;
      }
      goto L_0880B87C;
    }
L_0880B87C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B8A0;
      }
      goto L_0880B884;
    }
L_0880B884:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0880B8A0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880B8A0u) goto L_0880B8A0;
    return;
L_0880B8A0:
    aot_gpr[4] = (2216u << 16u);
    goto L_0880B8A4;
L_0880B8A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0880B8CCu);
    aot_gpr[6] = (0u | 432u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880B8CCu) goto L_0880B8CC;
    return;
L_0880B8CC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B8E4;
      }
      goto L_0880B8D8;
    }
L_0880B8D8:
    aot_gpr[31] = (0x0880B8E0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 77u, 0x088045B8u>(ctx, &aot_mem) && ctx.pc == 0x0880B8E0u) goto L_0880B8E0;
    return;
L_0880B8E0:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_0880B8E4;
L_0880B8E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[31] = (0x0880B900u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 93u, 0x088046BCu>(ctx, &aot_mem) && ctx.pc == 0x0880B900u) goto L_0880B900;
    return;
L_0880B900:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    goto L_0880B910;
L_0880B910:
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
L_0880B92C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(564)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_0880B954;
      }
      goto L_0880B938;
    }
L_0880B938:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(560)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880B954;
      }
      goto L_0880B944;
    }
L_0880B944:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0880B954;
      }
      goto L_0880B950;
    }
L_0880B950:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(484)));
    goto L_0880B954;
L_0880B954:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B95C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0880B96Cu);
    aot_gpr[5] = (0u | 592u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x0880B96Cu) goto L_0880B96C;
    return;
L_0880B96C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B978:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B998:
    aot_gpr[5] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B9B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0880BA04;
      }
      goto L_0880B9C0;
    }
L_0880B9C0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BA04;
      }
      goto L_0880B9C8;
    }
L_0880B9C8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880B9FC;
      }
      goto L_0880B9DC;
    }
L_0880B9DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0880B9F4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880B9F4u) goto L_0880B9F4;
    return;
L_0880B9F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BA04;
      }
      goto L_0880B9FC;
    }
L_0880B9FC:
    aot_gpr[31] = (0x0880BA04u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0880BA04u) goto L_0880BA04;
    return;
L_0880BA04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] & 2u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] & 4u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] & 8u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] & 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] & 32u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] & 1024u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] & 128u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] & 256u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BA9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] & 2048u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BAAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] & 512u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BABC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BAD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BAE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BAF8:
    aot_gpr[5] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BB0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0880BB20u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    goto L_0880BAF8;
L_0880BB20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(348)));
    aot_gpr[5] = (0u | 10000u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(352)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(356)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[8] = (16544u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
      if (branch_taken) {
          goto L_0880BBEC;
      }
      goto L_0880BB58;
    }
L_0880BB58:
    aot_gpr[9] = (0u | 0u);
    goto L_0880BB5C;
L_0880BB5C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0880BB90;
      }
      goto L_0880BB78;
    }
L_0880BB78:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[10] = (aot_gpr[10] & 255u);
      if (branch_taken) {
          goto L_0880BB94;
      }
      goto L_0880BB8C;
    }
L_0880BB8C:
    aot_gpr[10] = (0u | 1u);
    goto L_0880BB90;
L_0880BB90:
    aot_gpr[10] = (aot_gpr[10] & 255u);
    goto L_0880BB94;
L_0880BB94:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BBD8;
      }
      goto L_0880BB9C;
    }
L_0880BB9C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (aot_gpr[10] & 128u);
    aot_gpr[10] = (0u < aot_gpr[10] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BBD8;
      }
      goto L_0880BBC4;
    }
L_0880BBC4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BBD8;
      }
      goto L_0880BBD4;
    }
L_0880BBD4:
    aot_gpr[5] = (aot_gpr[8] | 0u);
    goto L_0880BBD8;
L_0880BBD8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880BB5C;
      }
      goto L_0880BBEC;
    }
L_0880BBEC:
    aot_gpr[31] = (0x0880BBF4u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0880BA7C;
L_0880BBF4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BC18;
      }
      goto L_0880BBFC;
    }
L_0880BBFC:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (16100u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (aot_gpr[4] | 57967u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0880BC18;
L_0880BC18:
    aot_gpr[31] = (0x0880BC20u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0880BA1C;
L_0880BC20:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880BC30;
      }
      goto L_0880BC28;
    }
L_0880BC28:
    aot_gpr[31] = (0x0880BC30u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0880BABC;
L_0880BC30:
    aot_gpr[31] = (0x0880BC38u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0880BA4C;
L_0880BC38:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BC50;
      }
      goto L_0880BC40;
    }
L_0880BC40:
    aot_gpr[31] = (0x0880BC48u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0880BABC;
L_0880BC48:
    aot_gpr[31] = (0x0880BC50u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0880BAD0;
L_0880BC50:
    aot_gpr[31] = (0x0880BC58u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0880BA2C;
L_0880BC58:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BC68;
      }
      goto L_0880BC60;
    }
L_0880BC60:
    aot_gpr[31] = (0x0880BC68u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0880BAD0;
L_0880BC68:
    aot_gpr[31] = (0x0880BC70u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0880BA9C;
L_0880BC70:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880BC80;
      }
      goto L_0880BC78;
    }
L_0880BC78:
    aot_gpr[31] = (0x0880BC80u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0880BAE4;
L_0880BC80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BC8C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BCAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BCC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0880BD14;
      }
      goto L_0880BCD0;
    }
L_0880BCD0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BD14;
      }
      goto L_0880BCD8;
    }
L_0880BCD8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BD0C;
      }
      goto L_0880BCEC;
    }
L_0880BCEC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0880BD04u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880BD04u) goto L_0880BD04;
    return;
L_0880BD04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BD14;
      }
      goto L_0880BD0C;
    }
L_0880BD0C:
    aot_gpr[31] = (0x0880BD14u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0880BD14u) goto L_0880BD14;
    return;
L_0880BD14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BD20:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BD30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0880BDF8;
      }
      goto L_0880BD7C;
    }
L_0880BD7C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(200)));
    aot_gpr[5] = (16416u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<22u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(364)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_0880BE00;
      }
      goto L_0880BDF0;
    }
L_0880BDF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BE24;
      }
      goto L_0880BDF8;
    }
L_0880BDF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BE48;
      }
      goto L_0880BE00;
    }
L_0880BE00:
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0880BE24;
L_0880BE24:
    ctx.execute_vfpu_vdot_ct<16u, 21u, 21u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(100)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_0880BE48;
L_0880BE48:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BE50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0880BEFC;
      }
      goto L_0880BE80;
    }
L_0880BE80:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(180)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(156)));
    aot_gpr[7] = (aot_gpr[7] & 65535u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[7] = (aot_gpr[7] & 65535u);
      if (branch_taken) {
          goto L_0880BEC4;
      }
      goto L_0880BEA0;
    }
L_0880BEA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(152)));
    goto L_0880BEA4;
L_0880BEA4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[7];
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880BEB8;
      }
      goto L_0880BEB0;
    }
L_0880BEB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0880BEC8;
      }
      goto L_0880BEB8;
    }
L_0880BEB8:
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880BEA4;
      }
      goto L_0880BEC4;
    }
L_0880BEC4:
    aot_gpr[6] = (0u | 0u);
    goto L_0880BEC8;
L_0880BEC8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BEFC;
      }
      goto L_0880BED0;
    }
L_0880BED0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0880BEECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 25u, 0x088BE0E4u>(ctx, &aot_mem) && ctx.pc == 0x0880BEECu) goto L_0880BEEC;
    return;
L_0880BEEC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880BEFC;
      }
      goto L_0880BEF4;
    }
L_0880BEF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[18] = (0u | 1u);
    goto L_0880BEFC;
L_0880BEFC:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_0880BF18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-224));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[18]);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(156)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[22]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[7];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 1u, 0x0880C000u>(ctx, &aot_mem); return;
      }
      goto L_0880BF80;
    }
L_0880BF80:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[8]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(424)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7520)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (aot_gpr[4] ^ 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[6]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (aot_gpr[20] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(348)));
    aot_gpr[30] = (0u | 0u);
    aot_gpr[31] = (0x0880BFD0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 7u, 0x0880A06Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BFD0u) goto L_0880BFD0;
    return;
L_0880BFD0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-7484)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-7483)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (0u < aot_gpr[19] ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 2u, 0x0880C028u>(ctx, &aot_mem); return;
      }
      goto L_0880BFF8;
    }
L_0880BFF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (15624u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 10u, 0x0880C0B8u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 1u, 0x0880C000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0007(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0007_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_7(Runtime &runtime) {
    runtime.register_generated_unit(7u, 0x0880B000u, 4096u, &recomp_unit_0007, &recomp_unit_0007_entry);
    runtime.register_function(0x0880B000u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B010u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B014u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B038u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B04Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B054u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B05Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B070u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B078u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B0A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B0B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B0CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B0D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B0E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B0F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B0FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B124u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B13Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B150u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B184u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B1B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B1C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B1CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B1E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B1E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B1F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B1F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B200u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B214u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B21Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B230u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B240u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B248u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B25Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B274u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B290u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B298u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B2A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B2BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B2D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B2F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B300u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B308u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B318u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B31Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B324u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B370u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B3A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B3BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B3C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B3D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B3E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B3F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B400u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B414u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B420u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B430u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B444u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B470u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B484u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B494u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B4A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B4A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B4ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B52Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B550u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B55Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B56Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B574u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B58Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B5A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B5B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B5C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B5C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B5F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B604u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B61Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B628u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B63Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B648u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B66Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B67Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B69Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B6C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B708u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B710u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B73Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B744u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B758u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B760u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B768u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B770u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B778u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B780u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B788u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B7A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B7C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B7CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B7D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B7F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B800u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B810u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B828u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B858u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B86Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B874u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B87Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B884u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B8A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B8A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B8CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B8D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B8E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B8E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B900u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B910u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B92Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B938u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B944u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B950u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B954u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B95Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B96Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B978u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B998u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B9B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B9C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B9C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B9DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B9F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880B9FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BA04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BA10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BA1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BA2Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BA3Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BA4Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BA5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BA6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BA7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BA8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BA9Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BAACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BABCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BAD0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BAE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BAF8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BB0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BB20u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BB58u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BB5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BB78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BB8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BB90u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BB94u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BB9Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BBC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BBD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BBD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BBECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BBF4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BBFCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC18u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC20u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC30u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC58u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC60u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC68u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC70u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BC8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BCACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BCC0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BCD0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BCD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BCECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BD04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BD0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BD14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BD20u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BD30u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BD7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BDF0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BDF8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BE00u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BE24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BE48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BE50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BE80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BEA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BEA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BEB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BEB8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BEC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BEC8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BED0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BEECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BEF4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BEFCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BF18u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BF80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BFD0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0880BFF8u, &recomp_unit_0007, "recomp_unit_0007");
}
} // namespace psprecomp
