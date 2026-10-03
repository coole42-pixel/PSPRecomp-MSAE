#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0054[1017] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0,
    0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33,
    0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42,
    0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0,
    0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135,
    0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 141, 0, 142,
    0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 148, 0, 149, 0, 0, 150, 0, 0,
    151, 0, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 158, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0,
    0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
};
void recomp_unit_0054_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0883A000u;
        entry_id = (entry_delta < 4068u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0054[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0883A000;
    case 2u: goto L_0883A00C;
    case 3u: goto L_0883A014;
    case 4u: goto L_0883A02C;
    case 5u: goto L_0883A034;
    case 6u: goto L_0883A03C;
    case 7u: goto L_0883A044;
    case 8u: goto L_0883A064;
    case 9u: goto L_0883A078;
    case 10u: goto L_0883A0A0;
    case 11u: goto L_0883A0C0;
    case 12u: goto L_0883A110;
    case 13u: goto L_0883A128;
    case 14u: goto L_0883A13C;
    case 15u: goto L_0883A174;
    case 16u: goto L_0883A18C;
    case 17u: goto L_0883A19C;
    case 18u: goto L_0883A1A8;
    case 19u: goto L_0883A1E4;
    case 20u: goto L_0883A1F0;
    case 21u: goto L_0883A208;
    case 22u: goto L_0883A214;
    case 23u: goto L_0883A220;
    case 24u: goto L_0883A228;
    case 25u: goto L_0883A240;
    case 26u: goto L_0883A264;
    case 27u: goto L_0883A274;
    case 28u: goto L_0883A284;
    case 29u: goto L_0883A2A0;
    case 30u: goto L_0883A2B4;
    case 31u: goto L_0883A2E4;
    case 32u: goto L_0883A2F0;
    case 33u: goto L_0883A2FC;
    case 34u: goto L_0883A304;
    case 35u: goto L_0883A318;
    case 36u: goto L_0883A3A4;
    case 37u: goto L_0883A3BC;
    case 38u: goto L_0883A3CC;
    case 39u: goto L_0883A3D4;
    case 40u: goto L_0883A3E0;
    case 41u: goto L_0883A3E8;
    case 42u: goto L_0883A3FC;
    case 43u: goto L_0883A404;
    case 44u: goto L_0883A40C;
    case 45u: goto L_0883A468;
    case 46u: goto L_0883A480;
    case 47u: goto L_0883A4CC;
    case 48u: goto L_0883A50C;
    case 49u: goto L_0883A534;
    case 50u: goto L_0883A53C;
    case 51u: goto L_0883A54C;
    case 52u: goto L_0883A560;
    case 53u: goto L_0883A568;
    case 54u: goto L_0883A578;
    case 55u: goto L_0883A588;
    case 56u: goto L_0883A5A4;
    case 57u: goto L_0883A5B0;
    case 58u: goto L_0883A5BC;
    case 59u: goto L_0883A5C8;
    case 60u: goto L_0883A5E4;
    case 61u: goto L_0883A60C;
    case 62u: goto L_0883A61C;
    case 63u: goto L_0883A648;
    case 64u: goto L_0883A650;
    case 65u: goto L_0883A664;
    case 66u: goto L_0883A66C;
    case 67u: goto L_0883A6A4;
    case 68u: goto L_0883A720;
    case 69u: goto L_0883A740;
    case 70u: goto L_0883A748;
    case 71u: goto L_0883A75C;
    case 72u: goto L_0883A764;
    case 73u: goto L_0883A780;
    case 74u: goto L_0883A790;
    case 75u: goto L_0883A7A0;
    case 76u: goto L_0883A7CC;
    case 77u: goto L_0883A7D4;
    case 78u: goto L_0883A7DC;
    case 79u: goto L_0883A7E4;
    case 80u: goto L_0883A81C;
    case 81u: goto L_0883A898;
    case 82u: goto L_0883A8BC;
    case 83u: goto L_0883A8C4;
    case 84u: goto L_0883A8D0;
    case 85u: goto L_0883A8D8;
    case 86u: goto L_0883A8F4;
    case 87u: goto L_0883A904;
    case 88u: goto L_0883A914;
    case 89u: goto L_0883A92C;
    case 90u: goto L_0883A934;
    case 91u: goto L_0883A958;
    case 92u: goto L_0883A9D4;
    case 93u: goto L_0883A9F8;
    case 94u: goto L_0883AA00;
    case 95u: goto L_0883AA1C;
    case 96u: goto L_0883AA2C;
    case 97u: goto L_0883AA3C;
    case 98u: goto L_0883AA58;
    case 99u: goto L_0883AA60;
    case 100u: goto L_0883AA84;
    case 101u: goto L_0883AB00;
    case 102u: goto L_0883AB20;
    case 103u: goto L_0883AB28;
    case 104u: goto L_0883AB44;
    case 105u: goto L_0883AB54;
    case 106u: goto L_0883AB64;
    case 107u: goto L_0883AB6C;
    case 108u: goto L_0883AB78;
    case 109u: goto L_0883AB88;
    case 110u: goto L_0883AB98;
    case 111u: goto L_0883ABA0;
    case 112u: goto L_0883ABAC;
    case 113u: goto L_0883ABBC;
    case 114u: goto L_0883ABE0;
    case 115u: goto L_0883ABE8;
    case 116u: goto L_0883ABF0;
    case 117u: goto L_0883AC00;
    case 118u: goto L_0883AC30;
    case 119u: goto L_0883AC38;
    case 120u: goto L_0883AC40;
    case 121u: goto L_0883AC48;
    case 122u: goto L_0883AC50;
    case 123u: goto L_0883AC5C;
    case 124u: goto L_0883AC68;
    case 125u: goto L_0883AC98;
    case 126u: goto L_0883ACA0;
    case 127u: goto L_0883ACB0;
    case 128u: goto L_0883ACF4;
    case 129u: goto L_0883AD08;
    case 130u: goto L_0883AD10;
    case 131u: goto L_0883AD1C;
    case 132u: goto L_0883AD24;
    case 133u: goto L_0883AD50;
    case 134u: goto L_0883AD74;
    case 135u: goto L_0883AD7C;
    case 136u: goto L_0883AD88;
    case 137u: goto L_0883ADB8;
    case 138u: goto L_0883ADC8;
    case 139u: goto L_0883ADCC;
    case 140u: goto L_0883ADF0;
    case 141u: goto L_0883ADF4;
    case 142u: goto L_0883ADFC;
    case 143u: goto L_0883AE08;
    case 144u: goto L_0883AE14;
    case 145u: goto L_0883AE34;
    case 146u: goto L_0883AE44;
    case 147u: goto L_0883AE5C;
    case 148u: goto L_0883AE60;
    case 149u: goto L_0883AE68;
    case 150u: goto L_0883AE74;
    case 151u: goto L_0883AE80;
    case 152u: goto L_0883AE8C;
    case 153u: goto L_0883AE94;
    case 154u: goto L_0883AEA0;
    case 155u: goto L_0883AEA8;
    case 156u: goto L_0883AEB0;
    case 157u: goto L_0883AEB8;
    case 158u: goto L_0883AEC4;
    case 159u: goto L_0883AEC8;
    case 160u: goto L_0883AEE4;
    case 161u: goto L_0883AF08;
    case 162u: goto L_0883AF14;
    case 163u: goto L_0883AF38;
    case 164u: goto L_0883AF44;
    case 165u: goto L_0883AF5C;
    case 166u: goto L_0883AF64;
    case 167u: goto L_0883AF70;
    case 168u: goto L_0883AF88;
    case 169u: goto L_0883AF94;
    case 170u: goto L_0883AFAC;
    case 171u: goto L_0883AFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0883A000:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883A00Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883A00Cu) goto L_0883A00C;
    return;
L_0883A00C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0883A03C;
      }
      goto L_0883A014;
    }
L_0883A014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0883A02Cu);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 196u, 0x088D9DECu>(ctx, &aot_mem) && ctx.pc == 0x0883A02Cu) goto L_0883A02C;
    return;
L_0883A02C:
    aot_gpr[31] = (0x0883A034u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 20u, 0x088DB26Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A034u) goto L_0883A034;
    return;
L_0883A034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A078;
      }
      goto L_0883A03C;
    }
L_0883A03C:
    aot_gpr[31] = (0x0883A044u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883A044u) goto L_0883A044;
    return;
L_0883A044:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(-2));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x0883A064u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 197u, 0x088D9E00u>(ctx, &aot_mem) && ctx.pc == 0x0883A064u) goto L_0883A064;
    return;
L_0883A064:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0883A078u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 27u, 0x088DB31Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A078u) goto L_0883A078;
    return;
L_0883A078:
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
L_0883A0A0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23728), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A0C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[18] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-8208));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[31] = (0x0883A110u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8180));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A110u) goto L_0883A110;
    return;
L_0883A110:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883A128u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8148));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A128u) goto L_0883A128;
    return;
L_0883A128:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883A13Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8116));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0883A13Cu) goto L_0883A13C;
    return;
L_0883A13C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (17332u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (2214u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-8096));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0883A240;
      }
      goto L_0883A174;
    }
L_0883A174:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x0883A18Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 198u, 0x088D9E2Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A18Cu) goto L_0883A18C;
    return;
L_0883A18C:
    aot_gpr[22] = (0u | 100u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883A19Cu);
    aot_gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x0883A19Cu) goto L_0883A19C;
    return;
L_0883A19C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0883A1A8u);
    aot_gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x0883A1A8u) goto L_0883A1A8;
    return;
L_0883A1A8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (17096u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[22]));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[20] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0883A1E4u);
    aot_gpr[22] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A1E4u) goto L_0883A1E4;
    return;
L_0883A1E4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883A1F0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A1F0u) goto L_0883A1F0;
    return;
L_0883A1F0:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883A208u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A208u) goto L_0883A208;
    return;
L_0883A208:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883A214u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883A214u) goto L_0883A214;
    return;
L_0883A214:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A228;
      }
      goto L_0883A220;
    }
L_0883A220:
    aot_gpr[4] = (0u | 167u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0883A228;
L_0883A228:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0883A318;
      }
      goto L_0883A240;
    }
L_0883A240:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0883A264u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 199u, 0x088D9E50u>(ctx, &aot_mem) && ctx.pc == 0x0883A264u) goto L_0883A264;
    return;
L_0883A264:
    aot_gpr[22] = (0u | 255u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883A274u);
    aot_gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x0883A274u) goto L_0883A274;
    return;
L_0883A274:
    aot_gpr[23] = (0u | 127u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0883A284u);
    aot_gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x0883A284u) goto L_0883A284;
    return;
L_0883A284:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[22]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[23]));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883A2A0u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A2A0u) goto L_0883A2A0;
    return;
L_0883A2A0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[31] = (0x0883A2B4u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A2B4u) goto L_0883A2B4;
    return;
L_0883A2B4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0883A2E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A2E4u) goto L_0883A2E4;
    return;
L_0883A2E4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883A2F0u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883A2F0u) goto L_0883A2F0;
    return;
L_0883A2F0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A304;
      }
      goto L_0883A2FC;
    }
L_0883A2FC:
    aot_gpr[4] = (0u | 165u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0883A304;
L_0883A304:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_0883A318;
L_0883A318:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[6] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[20] / aot_fpr[12];
    aot_gpr[6] = (16128u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(2244), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A3A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(32))))));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883A3D4;
      }
      goto L_0883A3BC;
    }
L_0883A3BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0883A3CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0883A3CCu) goto L_0883A3CC;
    return;
L_0883A3CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0883A3D4;
L_0883A3D4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883A3E8;
      }
      goto L_0883A3E0;
    }
L_0883A3E0:
    aot_gpr[31] = (0x0883A3E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0883A3E8u) goto L_0883A3E8;
    return;
L_0883A3E8:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2244), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A3FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A404:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A40C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16384u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[19] = (aot_gpr[5] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0883A468u);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x0883A468u) goto L_0883A468;
    return;
L_0883A468:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x0883A480u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x0883A480u) goto L_0883A480;
    return;
L_0883A480:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
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
L_0883A4CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x0883A50Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x0883A50Cu) goto L_0883A50C;
    return;
L_0883A50C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16128u << 16u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(325)));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-6976));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (2218u << 16u);
      if (branch_taken) {
          goto L_0883A578;
      }
      goto L_0883A534;
    }
L_0883A534:
    aot_gpr[31] = (0x0883A53Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x0883A53Cu) goto L_0883A53C;
    return;
L_0883A53C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[31] = (0x0883A54Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 26u, 0x088E01F8u>(ctx, &aot_mem) && ctx.pc == 0x0883A54Cu) goto L_0883A54C;
    return;
L_0883A54C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0883A560u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 151u, 0x088D7D00u>(ctx, &aot_mem) && ctx.pc == 0x0883A560u) goto L_0883A560;
    return;
L_0883A560:
    aot_gpr[31] = (0x0883A568u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x0883A568u) goto L_0883A568;
    return;
L_0883A568:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(325), static_cast<std::uint8_t>(0u));
    goto L_0883A578;
L_0883A578:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883A588u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8116));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0883A588u) goto L_0883A588;
    return;
L_0883A588:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_0883A5BC;
      }
      goto L_0883A5A4;
    }
L_0883A5A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x0883A5B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x0883A5B0u) goto L_0883A5B0;
    return;
L_0883A5B0:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(6))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    goto L_0883A5BC;
L_0883A5BC:
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x0883A5C8u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 25u, 0x088DA1D8u>(ctx, &aot_mem) && ctx.pc == 0x0883A5C8u) goto L_0883A5C8;
    return;
L_0883A5C8:
    aot_gpr[4] = (16230u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 26214u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[31] = (0x0883A5E4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 100u, 0x0885A63Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A5E4u) goto L_0883A5E4;
    return;
L_0883A5E4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(30))))));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_0883A780;
      }
      goto L_0883A60C;
    }
L_0883A60C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (0u | 1u);
    if (aot_gpr[4] != aot_gpr[23]) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
        goto L_0883A720;
    }
    goto L_0883A61C;
L_0883A61C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26))))));
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 16u));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (0u - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0883A650;
      }
      goto L_0883A648;
    }
L_0883A648:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0883A780;
      }
      goto L_0883A650;
    }
L_0883A650:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_0883A66C;
    }
    goto L_0883A664;
L_0883A664:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0883A780;
      }
      goto L_0883A66C;
    }
L_0883A66C:
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 16u));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (49280u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[31] = (0x0883A6A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0883A40C;
L_0883A6A4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[16];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[30] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[16] - aot_fpr[17];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0883A780;
      }
      goto L_0883A720;
    }
L_0883A720:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(14))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A748;
      }
      goto L_0883A740;
    }
L_0883A740:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_0883A780;
      }
      goto L_0883A748;
    }
L_0883A748:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u - aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A764;
      }
      goto L_0883A75C;
    }
L_0883A75C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0883A780;
      }
      goto L_0883A764;
    }
L_0883A764:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2202), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0883A780;
L_0883A780:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(31))))));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A8F4;
      }
      goto L_0883A790;
    }
L_0883A790:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[23];
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_0883A898;
      }
      goto L_0883A7A0;
    }
L_0883A7A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26))))));
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 16u));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(26))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A7D4;
      }
      goto L_0883A7CC;
    }
L_0883A7CC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_0883A8F4;
      }
      goto L_0883A7D4;
    }
L_0883A7D4:
    if (static_cast<std::int32_t>(aot_gpr[4]) >= 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_0883A7E4;
    }
    goto L_0883A7DC;
L_0883A7DC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0883A8F4;
      }
      goto L_0883A7E4;
    }
L_0883A7E4:
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 16u));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (16512u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[31] = (0x0883A81Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0883A40C;
L_0883A81C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[16];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[30] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[16] - aot_fpr[17];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0883A8F4;
      }
      goto L_0883A898;
    }
L_0883A898:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(14))))));
    aot_gpr[6] = (0u - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A8C4;
      }
      goto L_0883A8BC;
    }
L_0883A8BC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
      if (branch_taken) {
          goto L_0883A8F4;
      }
      goto L_0883A8C4;
    }
L_0883A8C4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A8D8;
      }
      goto L_0883A8D0;
    }
L_0883A8D0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_0883A8F4;
      }
      goto L_0883A8D8;
    }
L_0883A8D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2202), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0883A8F4;
L_0883A8F4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(32))))));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AA1C;
      }
      goto L_0883A904;
    }
L_0883A904:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (0u | 1u);
    if (aot_gpr[4] != aot_gpr[23]) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
        goto L_0883A9D4;
    }
    goto L_0883A914;
L_0883A914:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0883A934;
      }
      goto L_0883A92C;
    }
L_0883A92C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0883AA1C;
      }
      goto L_0883A934;
    }
L_0883A934:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (16512u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883A958u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0883A40C;
L_0883A958:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_fpr[14] = aot_fpr[16] + aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[19] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[19];
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[30] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[15] - aot_fpr[16];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0883AA1C;
      }
      goto L_0883A9D4;
    }
L_0883A9D4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(13))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_gpr[4] = (0u - aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AA00;
      }
      goto L_0883A9F8;
    }
L_0883A9F8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0883AA1C;
      }
      goto L_0883AA00;
    }
L_0883AA00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2202), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0883AA1C;
L_0883AA1C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(33))))));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AB44;
      }
      goto L_0883AA2C;
    }
L_0883AA2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[23];
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(10))))));
      if (branch_taken) {
          goto L_0883AB00;
      }
      goto L_0883AA3C;
    }
L_0883AA3C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AA60;
      }
      goto L_0883AA58;
    }
L_0883AA58:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0883AB44;
      }
      goto L_0883AA60;
    }
L_0883AA60:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (16512u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883AA84u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0883A40C;
L_0883AA84:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_fpr[14] = aot_fpr[16] + aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[19] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[19];
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[30] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[15] - aot_fpr[16];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0883AB44;
      }
      goto L_0883AB00;
    }
L_0883AB00:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(13))))));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AB28;
      }
      goto L_0883AB20;
    }
L_0883AB20:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0883AB44;
      }
      goto L_0883AB28;
    }
L_0883AB28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2202), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0883AB44;
L_0883AB44:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(28))))));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0883AB78;
      }
      goto L_0883AB54;
    }
L_0883AB54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (0u | 1u);
    if (aot_gpr[5] != aot_gpr[23]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10));
        goto L_0883AB6C;
    }
    goto L_0883AB64;
L_0883AB64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_0883AB6C;
      }
      goto L_0883AB6C;
    }
L_0883AB6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_0883AB78;
L_0883AB78:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(29))))));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0883ABAC;
      }
      goto L_0883AB88;
    }
L_0883AB88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (0u | 1u);
    if (aot_gpr[5] != aot_gpr[23]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10));
        goto L_0883ABA0;
    }
    goto L_0883AB98;
L_0883AB98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0883ABA0;
      }
      goto L_0883ABA0;
    }
L_0883ABA0:
    aot_gpr[21] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[21] | 0u);
    goto L_0883ABAC;
L_0883ABAC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(26))))));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (15692u << 16u);
      if (branch_taken) {
          goto L_0883ABF0;
      }
      goto L_0883ABBC;
    }
L_0883ABBC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[23] = (0u | 1u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0883ABE8;
      }
      goto L_0883ABE0;
    }
L_0883ABE0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_0883ABF0;
      }
      goto L_0883ABE8;
    }
L_0883ABE8:
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_0883ABF0;
L_0883ABF0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(27))))));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (15692u << 16u);
      if (branch_taken) {
          goto L_0883AC40;
      }
      goto L_0883AC00;
    }
L_0883AC00:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[23] = (0u | 1u);
    aot_fpr[13] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[5] = (16281u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0883AC38;
      }
      goto L_0883AC30;
    }
L_0883AC30:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0883AC40;
      }
      goto L_0883AC38;
    }
L_0883AC38:
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_0883AC40;
L_0883AC40:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0883AC50;
      }
      goto L_0883AC48;
    }
L_0883AC48:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(360));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_0883AC50;
L_0883AC50:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 360 ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
        goto L_0883AC68;
    }
    goto L_0883AC5C;
L_0883AC5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_0883AC68;
L_0883AC68:
    aot_gpr[4] = (17332u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0883AE68;
      }
      goto L_0883AC98;
    }
L_0883AC98:
    aot_gpr[31] = (0x0883ACA0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 22u, 0x088D51E8u>(ctx, &aot_mem) && ctx.pc == 0x0883ACA0u) goto L_0883ACA0;
    return;
L_0883ACA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_0883AD7C;
      }
      goto L_0883ACB0;
    }
L_0883ACB0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17096u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = aot_fpr[12] / aot_fpr[14];
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_gpr[6] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = aot_fpr[16] / aot_fpr[14];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x0883ACF4u);
    aot_fpr[15] = aot_fpr[17] - aot_fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 196u, 0x088D9DECu>(ctx, &aot_mem) && ctx.pc == 0x0883ACF4u) goto L_0883ACF4;
    return;
L_0883ACF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x0883AD08u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x0883AD08u) goto L_0883AD08;
    return;
L_0883AD08:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_0883AD24;
      }
      goto L_0883AD10;
    }
L_0883AD10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x0883AD1Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x0883AD1Cu) goto L_0883AD1C;
    return;
L_0883AD1C:
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(11))))));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    goto L_0883AD24;
L_0883AD24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (aot_gpr[30] | aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[21] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0883AD50u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 95u, 0x088D77F0u>(ctx, &aot_mem) && ctx.pc == 0x0883AD50u) goto L_0883AD50;
    return;
L_0883AD50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x0883AD74u);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 115u, 0x088D79B8u>(ctx, &aot_mem) && ctx.pc == 0x0883AD74u) goto L_0883AD74;
    return;
L_0883AD74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_0883ADF4;
      }
      goto L_0883AD7C;
    }
L_0883AD7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x0883AD88u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x0883AD88u) goto L_0883AD88;
    return;
L_0883AD88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[31] = (0x0883ADB8u);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 197u, 0x088D9E00u>(ctx, &aot_mem) && ctx.pc == 0x0883ADB8u) goto L_0883ADB8;
    return;
L_0883ADB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_0883ADCC;
      }
      goto L_0883ADC8;
    }
L_0883ADC8:
    aot_gpr[4] = (0u | 0u);
    goto L_0883ADCC;
L_0883ADCC:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(11))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x0883ADF0u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 115u, 0x088D79B8u>(ctx, &aot_mem) && ctx.pc == 0x0883ADF0u) goto L_0883ADF0;
    return;
L_0883ADF0:
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(32))))));
    goto L_0883ADF4;
L_0883ADF4:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0883AE60;
      }
      goto L_0883ADFC;
    }
L_0883ADFC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0883AE60;
      }
      goto L_0883AE08;
    }
L_0883AE08:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x0883AE14u);
    aot_gpr[5] = (0u | 62u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0883AE14u) goto L_0883AE14;
    return;
L_0883AE14:
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x0883AE34u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0883AE34u) goto L_0883AE34;
    return;
L_0883AE34:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x0883AE44u);
    aot_gpr[5] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0883AE44u) goto L_0883AE44;
    return;
L_0883AE44:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0883AE5Cu);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0883AE5Cu) goto L_0883AE5C;
    return;
L_0883AE5C:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_0883AE60;
L_0883AE60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AE8C;
      }
      goto L_0883AE68;
    }
L_0883AE68:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(32))))));
    aot_gpr[31] = (0x0883AE74u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0883AE74u) goto L_0883AE74;
    return;
L_0883AE74:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(34))))));
    aot_gpr[31] = (0x0883AE80u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0883AE80u) goto L_0883AE80;
    return;
L_0883AE80:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_0883AE8C;
L_0883AE8C:
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883AEA8;
      }
      goto L_0883AE94;
    }
L_0883AE94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AEA8;
      }
      goto L_0883AEA0;
    }
L_0883AEA0:
    aot_gpr[31] = (0x0883AEA8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 20u, 0x088DB26Cu>(ctx, &aot_mem) && ctx.pc == 0x0883AEA8u) goto L_0883AEA8;
    return;
L_0883AEA8:
    { const bool branch_taken = aot_gpr[23] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr[23]));
      if (branch_taken) {
          goto L_0883AEB8;
      }
      goto L_0883AEB0;
    }
L_0883AEB0:
    aot_gpr[31] = (0x0883AEB8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 22u, 0x088D51E8u>(ctx, &aot_mem) && ctx.pc == 0x0883AEB8u) goto L_0883AEB8;
    return;
L_0883AEB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883AEC8;
      }
      goto L_0883AEC4;
    }
L_0883AEC4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_0883AEC8;
L_0883AEC8:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8208));
    aot_gpr[31] = (0x0883AEE4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8096));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883AEE4u) goto L_0883AEE4;
    return;
L_0883AEE4:
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
          goto L_0883AFAC;
      }
      goto L_0883AF08;
    }
L_0883AF08:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883AF14u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x0883AF14u) goto L_0883AF14;
    return;
L_0883AF14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (16256u << 16u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_0883AF64;
      }
      goto L_0883AF38;
    }
L_0883AF38:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0883AF44u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0883AF44u) goto L_0883AF44;
    return;
L_0883AF44:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x0883AF5Cu);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0883AF5Cu) goto L_0883AF5C;
    return;
L_0883AF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AFAC;
      }
      goto L_0883AF64;
    }
L_0883AF64:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x0883AF70u);
    aot_gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0883AF70u) goto L_0883AF70;
    return;
L_0883AF70:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x0883AF88u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0883AF88u) goto L_0883AF88;
    return;
L_0883AF88:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x0883AF94u);
    aot_gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0883AF94u) goto L_0883AF94;
    return;
L_0883AF94:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0883AFACu);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0883AFACu) goto L_0883AFAC;
    return;
L_0883AFAC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883AFE0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23736), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0054(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0054_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_54(Runtime &runtime) {
    runtime.register_generated_unit(54u, 0x0883A000u, 4096u, &recomp_unit_0054, &recomp_unit_0054_entry);
    runtime.register_function(0x0883A000u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A00Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A014u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A02Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A034u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A03Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A044u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A064u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A078u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A0A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A0C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A110u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A128u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A13Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A174u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A18Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A19Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A1A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A1E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A1F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A208u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A214u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A220u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A228u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A240u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A264u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A274u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A284u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A2A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A2B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A2E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A2F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A2FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A304u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A318u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A3A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A3BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A3CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A3D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A3E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A3E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A3FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A404u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A40Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A468u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A480u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A4CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A50Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A534u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A53Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A54Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A560u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A568u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A578u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A588u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A5A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A5B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A5BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A5C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A5E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A60Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A61Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A648u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A650u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A664u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A66Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A6A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A720u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A740u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A748u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A75Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A764u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A780u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A790u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A7A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A7CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A7D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A7DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A7E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A81Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A898u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A8BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A8C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A8D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A8D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A8F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A904u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A914u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A92Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A934u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A958u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A9D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883A9F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AA00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AA1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AA2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AA3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AA58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AA60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AA84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AB00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AB20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AB28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AB44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AB54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AB64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AB6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AB78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AB88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AB98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ABA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ABACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ABBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ABE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ABE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ABF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AC00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AC30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AC38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AC40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AC48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AC50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AC5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AC68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AC98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ACA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ACB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ACF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AD08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AD10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AD1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AD24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AD50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AD74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AD7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AD88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ADB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ADC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ADCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ADF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ADF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883ADFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AE08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AE14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AE34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AE44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AE5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AE60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AE68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AE74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AE80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AE8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AE94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AEA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AEA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AEB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AEB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AEC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AEC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AEE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AF08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AF14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AF38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AF44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AF5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AF64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AF70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AF88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AF94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AFACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x0883AFE0u, &recomp_unit_0054, "recomp_unit_0054");
}
} // namespace psprecomp
