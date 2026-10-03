#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0556[959] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47,
    0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 55, 0, 0, 0, 56, 0, 0, 57, 0,
    58, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0,
    0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 97, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0,
    0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0,
    114, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 124, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 131, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0,
    136, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 155, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0,
    164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0,
    0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180,
};
void recomp_unit_0556_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A30000u;
        entry_id = (entry_delta < 3836u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0556[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A30000;
    case 2u: goto L_08A30024;
    case 3u: goto L_08A3002C;
    case 4u: goto L_08A30040;
    case 5u: goto L_08A30054;
    case 6u: goto L_08A3005C;
    case 7u: goto L_08A30070;
    case 8u: goto L_08A30094;
    case 9u: goto L_08A300A0;
    case 10u: goto L_08A300A8;
    case 11u: goto L_08A300BC;
    case 12u: goto L_08A300CC;
    case 13u: goto L_08A300D4;
    case 14u: goto L_08A300F0;
    case 15u: goto L_08A301D0;
    case 16u: goto L_08A301D8;
    case 17u: goto L_08A301E4;
    case 18u: goto L_08A301F0;
    case 19u: goto L_08A302CC;
    case 20u: goto L_08A302D8;
    case 21u: goto L_08A302F4;
    case 22u: goto L_08A303C4;
    case 23u: goto L_08A303F8;
    case 24u: goto L_08A30404;
    case 25u: goto L_08A30418;
    case 26u: goto L_08A30428;
    case 27u: goto L_08A30504;
    case 28u: goto L_08A30508;
    case 29u: goto L_08A3050C;
    case 30u: goto L_08A30530;
    case 31u: goto L_08A30574;
    case 32u: goto L_08A30594;
    case 33u: goto L_08A3059C;
    case 34u: goto L_08A30654;
    case 35u: goto L_08A30668;
    case 36u: goto L_08A30690;
    case 37u: goto L_08A30698;
    case 38u: goto L_08A306A0;
    case 39u: goto L_08A306A8;
    case 40u: goto L_08A30708;
    case 41u: goto L_08A3073C;
    case 42u: goto L_08A30748;
    case 43u: goto L_08A30754;
    case 44u: goto L_08A30764;
    case 45u: goto L_08A3076C;
    case 46u: goto L_08A30774;
    case 47u: goto L_08A3077C;
    case 48u: goto L_08A3078C;
    case 49u: goto L_08A30794;
    case 50u: goto L_08A307A0;
    case 51u: goto L_08A307A8;
    case 52u: goto L_08A307B0;
    case 53u: goto L_08A307C8;
    case 54u: goto L_08A307D8;
    case 55u: goto L_08A307DC;
    case 56u: goto L_08A307EC;
    case 57u: goto L_08A307F8;
    case 58u: goto L_08A30800;
    case 59u: goto L_08A30808;
    case 60u: goto L_08A30810;
    case 61u: goto L_08A30820;
    case 62u: goto L_08A30828;
    case 63u: goto L_08A3083C;
    case 64u: goto L_08A30844;
    case 65u: goto L_08A30850;
    case 66u: goto L_08A30860;
    case 67u: goto L_08A30878;
    case 68u: goto L_08A30890;
    case 69u: goto L_08A30898;
    case 70u: goto L_08A308A0;
    case 71u: goto L_08A308A8;
    case 72u: goto L_08A308B0;
    case 73u: goto L_08A308B8;
    case 74u: goto L_08A308C4;
    case 75u: goto L_08A308CC;
    case 76u: goto L_08A308D4;
    case 77u: goto L_08A308DC;
    case 78u: goto L_08A308E4;
    case 79u: goto L_08A30904;
    case 80u: goto L_08A30928;
    case 81u: goto L_08A30930;
    case 82u: goto L_08A30938;
    case 83u: goto L_08A30940;
    case 84u: goto L_08A30948;
    case 85u: goto L_08A30960;
    case 86u: goto L_08A30968;
    case 87u: goto L_08A30970;
    case 88u: goto L_08A30988;
    case 89u: goto L_08A30990;
    case 90u: goto L_08A309A4;
    case 91u: goto L_08A309BC;
    case 92u: goto L_08A309D4;
    case 93u: goto L_08A309DC;
    case 94u: goto L_08A309F4;
    case 95u: goto L_08A30A18;
    case 96u: goto L_08A30A2C;
    case 97u: goto L_08A30A30;
    case 98u: goto L_08A30A38;
    case 99u: goto L_08A30A44;
    case 100u: goto L_08A30A50;
    case 101u: goto L_08A30A58;
    case 102u: goto L_08A30A6C;
    case 103u: goto L_08A30A78;
    case 104u: goto L_08A30A84;
    case 105u: goto L_08A30A9C;
    case 106u: goto L_08A30AA8;
    case 107u: goto L_08A30AB4;
    case 108u: goto L_08A30AC0;
    case 109u: goto L_08A30ACC;
    case 110u: goto L_08A30AD8;
    case 111u: goto L_08A30AE4;
    case 112u: goto L_08A30AEC;
    case 113u: goto L_08A30AF4;
    case 114u: goto L_08A30B00;
    case 115u: goto L_08A30B08;
    case 116u: goto L_08A30B10;
    case 117u: goto L_08A30B20;
    case 118u: goto L_08A30B3C;
    case 119u: goto L_08A30B54;
    case 120u: goto L_08A30B5C;
    case 121u: goto L_08A30B68;
    case 122u: goto L_08A30B74;
    case 123u: goto L_08A30B84;
    case 124u: goto L_08A30B9C;
    case 125u: goto L_08A30BA0;
    case 126u: goto L_08A30BA8;
    case 127u: goto L_08A30BC8;
    case 128u: goto L_08A30BDC;
    case 129u: goto L_08A30C24;
    case 130u: goto L_08A30C34;
    case 131u: goto L_08A30C38;
    case 132u: goto L_08A30C3C;
    case 133u: goto L_08A30C64;
    case 134u: goto L_08A30C6C;
    case 135u: goto L_08A30C74;
    case 136u: goto L_08A30C80;
    case 137u: goto L_08A30C84;
    case 138u: goto L_08A30C8C;
    case 139u: goto L_08A30C94;
    case 140u: goto L_08A30C9C;
    case 141u: goto L_08A30CA4;
    case 142u: goto L_08A30CB0;
    case 143u: goto L_08A30CB8;
    case 144u: goto L_08A30CC0;
    case 145u: goto L_08A30CD0;
    case 146u: goto L_08A30CDC;
    case 147u: goto L_08A30D10;
    case 148u: goto L_08A30D18;
    case 149u: goto L_08A30D40;
    case 150u: goto L_08A30D48;
    case 151u: goto L_08A30D50;
    case 152u: goto L_08A30D58;
    case 153u: goto L_08A30D60;
    case 154u: goto L_08A30D68;
    case 155u: goto L_08A30D78;
    case 156u: goto L_08A30D8C;
    case 157u: goto L_08A30DA0;
    case 158u: goto L_08A30DBC;
    case 159u: goto L_08A30DC4;
    case 160u: goto L_08A30DD0;
    case 161u: goto L_08A30DD8;
    case 162u: goto L_08A30DE0;
    case 163u: goto L_08A30DF4;
    case 164u: goto L_08A30E00;
    case 165u: goto L_08A30E08;
    case 166u: goto L_08A30E10;
    case 167u: goto L_08A30E18;
    case 168u: goto L_08A30E20;
    case 169u: goto L_08A30E30;
    case 170u: goto L_08A30E38;
    case 171u: goto L_08A30E40;
    case 172u: goto L_08A30E4C;
    case 173u: goto L_08A30E60;
    case 174u: goto L_08A30E68;
    case 175u: goto L_08A30E74;
    case 176u: goto L_08A30E84;
    case 177u: goto L_08A30E98;
    case 178u: goto L_08A30ECC;
    case 179u: goto L_08A30EE4;
    case 180u: goto L_08A30EF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A30000:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(6888)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(6892)));
    ctx.set_fpu_condition((aot_fpr[21] < aot_fpr[23]));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 212u, 0x08A2FDE0u>(ctx, &aot_mem); return;
      }
      goto L_08A30024;
    }
L_08A30024:
    aot_gpr[31] = (0x08A3002Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A3002Cu) goto L_08A3002C;
    return;
L_08A3002C:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08A30040u);
    aot_gpr[17] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 51u, 0x08A32558u>(ctx, &aot_mem) && ctx.pc == 0x08A30040u) goto L_08A30040;
    return;
L_08A30040:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A30054u);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 164u, 0x08A3FC08u>(ctx, &aot_mem) && ctx.pc == 0x08A30054u) goto L_08A30054;
    return;
L_08A30054:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 213u, 0x08A2FDE4u>(ctx, &aot_mem); return;
      }
      goto L_08A3005C;
    }
L_08A3005C:
    aot_gpr[4] = (32768u << 16u);
    aot_gpr[3] = (aot_gpr[21] ^ aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 213u, 0x08A2FDE4u>(ctx, &aot_mem); return;
L_08A30070:
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (16256u << 16u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08A301D0;
      }
      goto L_08A30094;
    }
L_08A30094:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (16127u << 16u);
      if (branch_taken) {
          goto L_08A300BC;
      }
      goto L_08A300A0;
    }
L_08A300A0:
    aot_fpr[0] = aot_fpr[12] - aot_fpr[12];
    aot_fpr[0] = aot_fpr[0] / aot_fpr[0];
    goto L_08A300A8;
L_08A300A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A300BC:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (8960u << 16u);
      if (branch_taken) {
          goto L_08A301E4;
      }
      goto L_08A300CC;
    }
L_08A300CC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A302D8;
      }
      goto L_08A300D4;
    }
L_08A300D4:
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20556)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20568)));
    aot_fpr[20] = aot_fpr[21] - aot_fpr[12];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_gpr[31] = (0x08A300F0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 59u, 0x08A31714u>(ctx, &aot_mem) && ctx.pc == 0x08A300F0u) goto L_08A300F0;
    return;
L_08A300F0:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20516)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20520)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20540)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20524)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[1] = aot_fpr[1] - aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20544)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[4] = aot_fpr[4] - aot_fpr[2];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20528)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20548)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[4] = aot_fpr[4] + aot_fpr[2];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20532)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] - aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20552)));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[4] = aot_fpr[4] - aot_fpr[2];
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    aot_fpr[5] = __builtin_bit_cast(float, aot_gpr[2]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20536)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[3];
    aot_fpr[3] = aot_fpr[0] + aot_fpr[5];
    aot_fpr[4] = aot_fpr[4] + aot_fpr[21];
    aot_fpr[2] = aot_fpr[20] - aot_fpr[2];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[2] = aot_fpr[2] / aot_fpr[3];
    aot_fpr[20] = aot_fpr[20] / aot_fpr[4];
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_fpr[2] = aot_fpr[2] + aot_fpr[0];
    aot_fpr[5] = aot_fpr[5] + aot_fpr[2];
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[5] + aot_fpr[5];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A301D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A300A8;
      }
      goto L_08A301D8;
    }
L_08A301D8:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20508)));
    goto L_08A300A8;
L_08A301E4:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A302CC;
      }
      goto L_08A301F0;
    }
L_08A301F0:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20516)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20520)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20540)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20524)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20544)));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_fpr[1] = aot_fpr[1] - aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20528)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20548)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20532)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20552)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = aot_fpr[1] - aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20536)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20556)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20560)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[3] = aot_fpr[3] / aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20564)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[3];
    aot_fpr[0] = aot_fpr[12] - aot_fpr[0];
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[1] - aot_fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A302CC:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20512)));
    goto L_08A300A8;
L_08A302D8:
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20556)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20568)));
    aot_fpr[20] = aot_fpr[12] + aot_fpr[21];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_gpr[31] = (0x08A302F4u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 59u, 0x08A31714u>(ctx, &aot_mem) && ctx.pc == 0x08A302F4u) goto L_08A302F4;
    return;
L_08A302F4:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20516)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20520)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20540)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20524)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = aot_fpr[1] - aot_fpr[3];
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20544)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = aot_fpr[2] - aot_fpr[3];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20528)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[3];
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20548)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = aot_fpr[2] + aot_fpr[3];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20532)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] - aot_fpr[3];
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20552)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = aot_fpr[2] - aot_fpr[3];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20536)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[3];
    aot_fpr[2] = aot_fpr[2] + aot_fpr[21];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20560)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[20] = aot_fpr[20] / aot_fpr[2];
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_fpr[20] = aot_fpr[20] - aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20572)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[20];
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20576)));
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    goto L_08A300A8;
L_08A303C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = ((aot_gpr[16] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[18] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08A30530;
      }
      goto L_08A303F8;
    }
L_08A303F8:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_fpr[0] = aot_fpr[12] - aot_fpr[12];
        goto L_08A30504;
    }
    goto L_08A30404;
L_08A30404:
    aot_gpr[2] = (16127u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (12799u << 16u);
      if (branch_taken) {
          goto L_08A306A0;
      }
      goto L_08A30418;
    }
L_08A30418:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A30574;
      }
      goto L_08A30428;
    }
L_08A30428:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20596)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20600)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20620)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20604)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20624)));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[1] = aot_fpr[1] - aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20608)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20628)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20612)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20632)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[1] = aot_fpr[1] - aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20616)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20592)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[3] = aot_fpr[3] / aot_fpr[1];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[3];
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30504:
    aot_fpr[12] = aot_fpr[0] / aot_fpr[0];
    goto L_08A30508;
L_08A30508:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08A3050C;
L_08A3050C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30530:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20580)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20584)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[1] + aot_fpr[0];
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30574:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20588)));
    aot_gpr[17] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20592)));
    aot_fpr[0] = aot_fpr[12] + aot_fpr[0];
    ctx.set_fpu_condition((aot_fpr[1] < aot_fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A3050C;
      }
      goto L_08A30594;
    }
L_08A30594:
    aot_gpr[31] = (0x08A3059Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 43u, 0x08A2F3C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3059Cu) goto L_08A3059C;
    return;
L_08A3059C:
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20592)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20636)));
    aot_fpr[0] = aot_fpr[3] - aot_fpr[0];
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20596)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20600)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20620)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20624)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] - aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20604)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20628)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20608)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20632)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] - aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20612)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[22] = aot_fpr[1] + aot_fpr[3];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20616)));
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_gpr[31] = (0x08A30654u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[21] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[21] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 59u, 0x08A31714u>(ctx, &aot_mem) && ctx.pc == 0x08A30654u) goto L_08A30654;
    return;
L_08A30654:
    aot_gpr[2] = (16249u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 39321u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[5] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A306A8;
      }
      goto L_08A30668;
    }
L_08A30668:
    aot_fpr[0] = aot_fpr[21] / aot_fpr[22];
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20640)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[5] + aot_fpr[0];
    aot_fpr[0] = aot_fpr[0] + aot_fpr[0];
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20580)));
    aot_fpr[0] = aot_fpr[1] - aot_fpr[0];
    goto L_08A30690;
L_08A30690:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) > 0;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A30508;
      }
      goto L_08A30698;
    }
L_08A30698:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
    goto L_08A30508;
L_08A306A0:
    aot_gpr[17] = (2215u << 16u);
    goto L_08A30594;
L_08A306A8:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[6] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20644)));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[3] = aot_fpr[21] / aot_fpr[22];
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20648)));
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[5] + aot_fpr[2];
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[5] = aot_fpr[5] + aot_fpr[5];
    aot_fpr[0] = aot_fpr[20] - aot_fpr[0];
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] / aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20640)));
    aot_fpr[2] = aot_fpr[2] + aot_fpr[4];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    aot_fpr[3] = aot_fpr[3] - aot_fpr[0];
    aot_fpr[3] = aot_fpr[3] - aot_fpr[2];
    aot_fpr[0] = aot_fpr[4] - aot_fpr[3];
    goto L_08A30690;
L_08A30708:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[3] = (32640u << 16u);
    aot_gpr[4] = ((aot_gpr[4] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = ((aot_gpr[7] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
      if (branch_taken) {
          goto L_08A307D8;
      }
      goto L_08A3073C;
    }
L_08A3073C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_fpr[0] = aot_fpr[0] + aot_fpr[13];
        goto L_08A307DC;
    }
    goto L_08A30748;
L_08A30748:
    aot_gpr[2] = (16256u << 16u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 30u));
      if (branch_taken) {
          goto L_08A30850;
      }
      goto L_08A30754;
    }
L_08A30754:
    aot_gpr[2] = (aot_gpr[2] & 2u);
    aot_gpr[3] = (aot_gpr[6] >> 31u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[3] | aot_gpr[2]);
      if (branch_taken) {
          goto L_08A307EC;
      }
      goto L_08A30764;
    }
L_08A30764:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (32640u << 16u);
      if (branch_taken) {
          goto L_08A30820;
      }
      goto L_08A3076C;
    }
L_08A3076C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A30890;
      }
      goto L_08A30774;
    }
L_08A30774:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[7] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08A30820;
      }
      goto L_08A3077C;
    }
L_08A3077C:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 23u));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[2]) < 61 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A308C4;
      }
      goto L_08A3078C;
    }
L_08A3078C:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20688)));
    goto L_08A30794;
L_08A30794:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A308E4;
      }
      goto L_08A307A0;
    }
L_08A307A0:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A30904;
      }
      goto L_08A307A8;
    }
L_08A307A8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
      if (branch_taken) {
          goto L_08A307C8;
      }
      goto L_08A307B0;
    }
L_08A307B0:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20692)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[1] - aot_fpr[0];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20652)));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    goto L_08A307C8;
L_08A307C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A307D8:
    aot_fpr[0] = aot_fpr[0] + aot_fpr[13];
    goto L_08A307DC;
L_08A307DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A307EC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A30860;
      }
      goto L_08A307F8;
    }
L_08A307F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A3083C;
      }
      goto L_08A30800;
    }
L_08A30800:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A30764;
      }
      goto L_08A30808;
    }
L_08A30808:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20656)));
    goto L_08A30810;
L_08A30810:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30820:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A30878;
      }
      goto L_08A30828;
    }
L_08A30828:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20664)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3083C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A30764;
      }
      goto L_08A30844;
    }
L_08A30844:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30850:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 2u, 0x08A2F008u>(ctx, &aot_mem); return;
L_08A30860:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20652)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30878:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20660)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30890:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A30928;
      }
      goto L_08A30898;
    }
L_08A30898:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A30970;
      }
      goto L_08A308A0;
    }
L_08A308A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A30988;
      }
      goto L_08A308A8;
    }
L_08A308A8:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A30860;
      }
      goto L_08A308B0;
    }
L_08A308B0:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[2] = (32640u << 16u);
      if (branch_taken) {
          goto L_08A30774;
      }
      goto L_08A308B8;
    }
L_08A308B8:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20656)));
    goto L_08A30810;
L_08A308C4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < -60 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A30960;
      }
      goto L_08A308CC;
    }
L_08A308CC:
    aot_gpr[31] = (0x08A308D4u);
    aot_fpr[12] = aot_fpr[0] / aot_fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 43u, 0x08A2F3C4u>(ctx, &aot_mem) && ctx.pc == 0x08A308D4u) goto L_08A308D4;
    return;
L_08A308D4:
    aot_gpr[31] = (0x08A308DCu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 2u, 0x08A2F008u>(ctx, &aot_mem) && ctx.pc == 0x08A308DCu) goto L_08A308DC;
    return;
L_08A308DC:
    aot_fpr[1] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A30794;
L_08A308E4:
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_gpr[2] = (32768u << 16u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] ^ aot_gpr[2]);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[3]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30904:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20692)));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[0] = aot_fpr[1] - aot_fpr[0];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20652)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[1] - aot_fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30928:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A309A4;
      }
      goto L_08A30930;
    }
L_08A30930:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A309D4;
      }
      goto L_08A30938;
    }
L_08A30938:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A309BC;
      }
      goto L_08A30940;
    }
L_08A30940:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[2] = (32640u << 16u);
      if (branch_taken) {
          goto L_08A30774;
      }
      goto L_08A30948;
    }
L_08A30948:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20672)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30960:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[1] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A30794;
      }
      goto L_08A30968;
    }
L_08A30968:
    // nop
    goto L_08A308CC;
L_08A30970:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20684)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30988:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[2] = (32640u << 16u);
      if (branch_taken) {
          goto L_08A30774;
      }
      goto L_08A30990;
    }
L_08A30990:
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A309A4:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20680)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A309BC:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20668)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A309D4:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[2] = (32640u << 16u);
      if (branch_taken) {
          goto L_08A30774;
      }
      goto L_08A309DC;
    }
L_08A309DC:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20676)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A309F4:
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = ((aot_gpr[9] & ~0x7FFFFFFFu) | ((0u & 0x7FFFFFFFu) << 0u));
    aot_gpr[4] = ((aot_gpr[4] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[2] ^ aot_gpr[9]);
      if (branch_taken) {
          goto L_08A30A2C;
      }
      goto L_08A30A18;
    }
L_08A30A18:
    aot_gpr[2] = (32639u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (32640u << 16u);
      if (branch_taken) {
          goto L_08A30A38;
      }
      goto L_08A30A2C;
    }
L_08A30A2C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    goto L_08A30A30;
L_08A30A30:
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[0] / aot_fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30A38:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
        goto L_08A30A30;
    }
    goto L_08A30A44;
L_08A30A44:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30B54;
      }
      goto L_08A30A50;
    }
L_08A30A50:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[2] = (127u << 16u);
      if (branch_taken) {
          goto L_08A30B20;
      }
      goto L_08A30A58;
    }
L_08A30A58:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 23u));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[3] + static_cast<std::uint32_t>(-127));
      if (branch_taken) {
          goto L_08A30A84;
      }
      goto L_08A30A6C;
    }
L_08A30A6C:
    aot_gpr[2] = (aot_gpr[5] << 8u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-126));
      if (branch_taken) {
          goto L_08A30A84;
      }
      goto L_08A30A78;
    }
L_08A30A78:
    aot_gpr[2] = (aot_gpr[2] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A30A78;
      }
      goto L_08A30A84;
    }
L_08A30A84:
    aot_gpr[2] = (127u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 23u));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[3] + static_cast<std::uint32_t>(-127));
      if (branch_taken) {
          goto L_08A30AB4;
      }
      goto L_08A30A9C;
    }
L_08A30A9C:
    aot_gpr[2] = (aot_gpr[4] << 8u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-126));
      if (branch_taken) {
          goto L_08A30AB4;
      }
      goto L_08A30AA8;
    }
L_08A30AA8:
    aot_gpr[2] = (aot_gpr[2] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A30AA8;
      }
      goto L_08A30AB4;
    }
L_08A30AB4:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < -126 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-126));
      if (branch_taken) {
          goto L_08A30B5C;
      }
      goto L_08A30AC0;
    }
L_08A30AC0:
    aot_gpr[5] = ((aot_gpr[5] & ~0xFF800000u) | ((0u & 0x000001FFu) << 23u));
    aot_gpr[2] = (128u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[2]);
    goto L_08A30ACC;
L_08A30ACC:
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < -126 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-126));
      if (branch_taken) {
          goto L_08A30B68;
      }
      goto L_08A30AD8;
    }
L_08A30AD8:
    aot_gpr[6] = ((aot_gpr[6] & ~0xFF800000u) | ((0u & 0x000001FFu) << 23u));
    aot_gpr[2] = (128u << 16u);
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[2]);
    goto L_08A30AE4;
L_08A30AE4:
    aot_gpr[3] = (aot_gpr[7] - aot_gpr[8]);
    aot_gpr[6] = (0u + 0u);
    goto L_08A30AEC;
L_08A30AEC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[6];
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[2]);
      if (branch_taken) {
          goto L_08A30B10;
      }
      goto L_08A30AF4;
    }
L_08A30AF4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[5] = (aot_gpr[5] << 1u);
      if (branch_taken) {
          goto L_08A30AEC;
      }
      goto L_08A30B00;
    }
L_08A30B00:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] << 1u);
      if (branch_taken) {
          goto L_08A30B3C;
      }
      goto L_08A30B08;
    }
L_08A30B08:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[2]);
      if (branch_taken) {
          goto L_08A30AF4;
      }
      goto L_08A30B10;
    }
L_08A30B10:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < 0 ? 1u : 0u);
    if (aot_gpr[2] == 0u) aot_gpr[5] = (aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (127u << 16u);
      if (branch_taken) {
          goto L_08A30B74;
      }
      goto L_08A30B20;
    }
L_08A30B20:
    aot_gpr[3] = (aot_gpr[9] >> 31u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5876));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30B3C:
    aot_gpr[3] = (aot_gpr[9] >> 31u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5876));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08A30B54;
L_08A30B54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30B5C:
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] << (aot_gpr[2] & 31u));
    goto L_08A30ACC;
L_08A30B68:
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[4] << (aot_gpr[2] & 31u));
    goto L_08A30AE4;
L_08A30B74:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30BA0;
      }
      goto L_08A30B84;
    }
L_08A30B84:
    aot_gpr[2] = (127u << 16u);
    aot_gpr[5] = (aot_gpr[5] << 1u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A30B84;
      }
      goto L_08A30B9C;
    }
L_08A30B9C:
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < -126 ? 1u : 0u);
    goto L_08A30BA0;
L_08A30BA0:
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-126));
      if (branch_taken) {
          goto L_08A30BC8;
      }
      goto L_08A30BA8;
    }
L_08A30BA8:
    aot_gpr[3] = (aot_gpr[8] + static_cast<std::uint32_t>(127));
    aot_gpr[2] = (65408u << 16u);
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] << 23u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30BC8:
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[8]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> (aot_gpr[2] & 31u)));
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30BDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = ((aot_gpr[16] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[19] = ((aot_gpr[19] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[18] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
      if (branch_taken) {
          goto L_08A30CDC;
      }
      goto L_08A30C24;
    }
L_08A30C24:
    aot_gpr[3] = (32640u << 16u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A30C64;
      }
      goto L_08A30C34;
    }
L_08A30C34:
    aot_fpr[21] = aot_fpr[21] + aot_fpr[20];
    goto L_08A30C38;
L_08A30C38:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    goto L_08A30C3C;
L_08A30C3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30C64:
    if (aot_gpr[2] != 0u) {
    aot_fpr[21] = aot_fpr[21] + aot_fpr[20];
        goto L_08A30C38;
    }
    goto L_08A30C6C;
L_08A30C6C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_08A30D78;
      }
      goto L_08A30C74;
    }
L_08A30C74:
    aot_gpr[2] = (32640u << 16u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A30D40;
      }
      goto L_08A30C80;
    }
L_08A30C80:
    aot_gpr[2] = (16256u << 16u);
    goto L_08A30C84;
L_08A30C84:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (16384u << 16u);
      if (branch_taken) {
          goto L_08A30D60;
      }
      goto L_08A30C8C;
    }
L_08A30C8C:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A30E00;
      }
      goto L_08A30C94;
    }
L_08A30C94:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A30D10;
      }
      goto L_08A30C9C;
    }
L_08A30C9C:
    aot_gpr[31] = (0x08A30CA4u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 43u, 0x08A2F3C4u>(ctx, &aot_mem) && ctx.pc == 0x08A30CA4u) goto L_08A30CA4;
    return;
L_08A30CA4:
    aot_gpr[2] = (32640u << 16u);
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_fpr[1] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A30DD0;
      }
      goto L_08A30CB0;
    }
L_08A30CB0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A30DD0;
      }
      goto L_08A30CB8;
    }
L_08A30CB8:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    aot_gpr[2] = (aot_gpr[18] >> 31u);
      if (branch_taken) {
          goto L_08A30DD0;
      }
      goto L_08A30CC0;
    }
L_08A30CC0:
    aot_gpr[9] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[9] | aot_gpr[20]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (19712u << 16u);
      if (branch_taken) {
          goto L_08A30E40;
      }
      goto L_08A30CD0;
    }
L_08A30CD0:
    aot_fpr[0] = aot_fpr[20] - aot_fpr[20];
    aot_fpr[21] = aot_fpr[0] / aot_fpr[0];
    goto L_08A30C38;
L_08A30CDC:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20696)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30D10:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08A30C9C;
      }
      goto L_08A30D18;
    }
L_08A30D18:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    (void)rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 59u, 0x08A31714u>(ctx, &aot_mem); return;
L_08A30D40:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A30E18;
      }
      goto L_08A30D48;
    }
L_08A30D48:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E08;
      }
      goto L_08A30D50;
    }
L_08A30D50:
    if (static_cast<std::int32_t>(aot_gpr[17]) < 0) {
    aot_fpr[21] = __builtin_bit_cast(float, 0u);
        goto L_08A30C38;
    }
    goto L_08A30D58;
L_08A30D58:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    goto L_08A30C3C;
L_08A30D60:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08A30C38;
      }
      goto L_08A30D68;
    }
L_08A30D68:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20696)));
    aot_fpr[21] = aot_fpr[0] / aot_fpr[20];
    goto L_08A30C38;
L_08A30D78:
    aot_gpr[2] = (19327u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A30C74;
      }
      goto L_08A30D8C;
    }
L_08A30D8C:
    aot_gpr[2] = (16255u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_08A30C80;
      }
      goto L_08A30DA0;
    }
L_08A30DA0:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 23u));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(150));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> (aot_gpr[2] & 31u)));
    aot_gpr[2] = (aot_gpr[3] << (aot_gpr[2] & 31u));
    if (aot_gpr[16] == aot_gpr[2]) {
    aot_gpr[3] = (aot_gpr[3] & 1u);
        goto L_08A30DC4;
    }
    goto L_08A30DBC;
L_08A30DBC:
    aot_gpr[2] = (16256u << 16u);
    goto L_08A30C84;
L_08A30DC4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[20] = (aot_gpr[2] - aot_gpr[3]);
    goto L_08A30C80;
L_08A30DD0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
      if (branch_taken) {
          goto L_08A30E20;
      }
      goto L_08A30DD8;
    }
L_08A30DD8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) >= 0;
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A30C38;
      }
      goto L_08A30DE0;
    }
L_08A30DE0:
    aot_gpr[2] = (49280u << 16u);
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[20]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A30E30;
      }
      goto L_08A30DF4;
    }
L_08A30DF4:
    aot_fpr[0] = aot_fpr[0] - aot_fpr[0];
    aot_fpr[21] = aot_fpr[0] / aot_fpr[0];
    goto L_08A30C38;
L_08A30E00:
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[21] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[21] = fs * ft; }
    goto L_08A30C38;
L_08A30E08:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[21]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A30C38;
      }
      goto L_08A30E10;
    }
L_08A30E10:
    aot_fpr[21] = __builtin_bit_cast(float, 0u);
    goto L_08A30C38;
L_08A30E18:
    aot_fpr[21] = aot_fpr[21] - aot_fpr[21];
    goto L_08A30C38;
L_08A30E20:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20696)));
    aot_fpr[0] = aot_fpr[0] / aot_fpr[1];
    goto L_08A30DD8;
L_08A30E30:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A30C38;
      }
      goto L_08A30E38;
    }
L_08A30E38:
    aot_fpr[21] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A30C38;
L_08A30E40:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (127u << 16u);
      if (branch_taken) {
          goto L_08A30E74;
      }
      goto L_08A30E4C;
    }
L_08A30E4C:
    aot_gpr[2] = (16255u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65527u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[4] | 7u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 18u, 0x08A312A8u>(ctx, &aot_mem); return;
      }
      goto L_08A30E60;
    }
L_08A30E60:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_fpr[21] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A30C38;
      }
      goto L_08A30E68;
    }
L_08A30E68:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20700)));
    goto L_08A30C38;
L_08A30E74:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08A30E98;
      }
      goto L_08A30E84;
    }
L_08A30E84:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20728)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-24));
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_gpr[19] = (__builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    goto L_08A30E98;
L_08A30E98:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 23u));
    aot_gpr[8] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[3] = (28u << 16u);
    aot_gpr[5] = ((aot_gpr[5] & ~0xFF800000u) | ((0u & 0x000001FFu) << 23u));
    aot_gpr[3] = (aot_gpr[3] | 50289u);
    aot_gpr[2] = (16256u << 16u);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[5] | aot_gpr[2]);
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(-127));
    aot_gpr[4] = (0u + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08A30EF8;
      }
      goto L_08A30ECC;
    }
L_08A30ECC:
    aot_gpr[2] = (93u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 46038u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (32u << 16u);
      if (branch_taken) {
          goto L_08A30EF8;
      }
      goto L_08A30EE4;
    }
L_08A30EE4:
    aot_gpr[2] = (65408u << 16u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(-126));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    goto L_08A30EF8;
L_08A30EF8:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5900));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr[5] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[8] = (2215u << 16u);
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20696)));
    aot_fpr[0] = aot_fpr[5] + aot_fpr[1];
    aot_fpr[9] = aot_fpr[5] - aot_fpr[1];
    aot_gpr[3] = (8192u << 16u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    aot_fpr[3] = aot_fpr[3] / aot_fpr[0];
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[3] = (4u << 16u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_fpr[7] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5892));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20732)));
    aot_fpr[1] = aot_fpr[7] - aot_fpr[1];
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[10] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20752)));
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[5] = aot_fpr[5] - aot_fpr[1];
    { const float fs = aot_fpr[9]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[8] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[8] = fs * ft; }
    { const float fs = aot_fpr[8]; const float ft = aot_fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[8]));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    aot_fpr[6] = __builtin_bit_cast(float, aot_gpr[2]);
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20736)));
    { const float fs = aot_fpr[6]; const float ft = aot_fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[7] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[7] = fs * ft; }
    { const float fs = aot_fpr[6]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[5] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[5] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20740)));
    aot_fpr[9] = aot_fpr[9] - aot_fpr[7];
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5884));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_fpr[9] = aot_fpr[9] - aot_fpr[5];
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[5] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[1])));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20716)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[11] = aot_fpr[8] + aot_fpr[6];
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20744)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[6]; const float ft = aot_fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[11] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[11] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[7] = aot_fpr[13] + aot_fpr[10];
    ctx.pc = 0x08A31000u; return;
}

void recomp_unit_0556(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0556_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_556(Runtime &runtime) {
    runtime.register_generated_unit(556u, 0x08A30000u, 4096u, &recomp_unit_0556, &recomp_unit_0556_entry);
    runtime.register_function(0x08A30000u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30024u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A3002Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30040u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30054u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A3005Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30070u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30094u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A300A0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A300A8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A300BCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A300CCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A300D4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A300F0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A301D0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A301D8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A301E4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A301F0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A302CCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A302D8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A302F4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A303C4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A303F8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30404u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30418u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30428u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30504u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30508u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A3050Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30530u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30574u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30594u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A3059Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30654u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30668u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30690u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30698u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A306A0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A306A8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30708u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A3073Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30748u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30754u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30764u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A3076Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30774u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A3077Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A3078Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30794u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A307A0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A307A8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A307B0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A307C8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A307D8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A307DCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A307ECu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A307F8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30800u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30808u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30810u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30820u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30828u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A3083Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30844u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30850u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30860u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30878u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30890u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30898u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A308A0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A308A8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A308B0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A308B8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A308C4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A308CCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A308D4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A308DCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A308E4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30904u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30928u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30930u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30938u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30940u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30948u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30960u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30968u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30970u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30988u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30990u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A309A4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A309BCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A309D4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A309DCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A309F4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30A18u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30A2Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30A30u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30A38u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30A44u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30A50u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30A58u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30A6Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30A78u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30A84u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30A9Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30AA8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30AB4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30AC0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30ACCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30AD8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30AE4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30AECu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30AF4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30B00u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30B08u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30B10u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30B20u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30B3Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30B54u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30B5Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30B68u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30B74u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30B84u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30B9Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30BA0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30BA8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30BC8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30BDCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C24u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C34u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C38u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C3Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C64u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C6Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C74u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C80u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C84u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C8Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C94u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30C9Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30CA4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30CB0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30CB8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30CC0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30CD0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30CDCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30D10u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30D18u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30D40u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30D48u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30D50u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30D58u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30D60u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30D68u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30D78u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30D8Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30DA0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30DBCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30DC4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30DD0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30DD8u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30DE0u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30DF4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E00u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E08u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E10u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E18u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E20u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E30u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E38u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E40u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E4Cu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E60u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E68u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E74u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E84u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30E98u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30ECCu, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30EE4u, &recomp_unit_0556, "recomp_unit_0556");
    runtime.register_function(0x08A30EF8u, &recomp_unit_0556, "recomp_unit_0556");
}
} // namespace psprecomp
