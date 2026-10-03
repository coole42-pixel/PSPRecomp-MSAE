#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0229[1019] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0,
    0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 46, 0,
    0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 55, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 70, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 89, 0, 90, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 102, 0, 0, 0, 103, 0, 104, 105, 0, 0, 0,
    106, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 137, 0, 138, 0, 0, 139, 0, 0,
    0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168,
};
void recomp_unit_0229_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088E9000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0229[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E9000;
    case 2u: goto L_088E9008;
    case 3u: goto L_088E9018;
    case 4u: goto L_088E902C;
    case 5u: goto L_088E9044;
    case 6u: goto L_088E907C;
    case 7u: goto L_088E909C;
    case 8u: goto L_088E90B0;
    case 9u: goto L_088E90D0;
    case 10u: goto L_088E9124;
    case 11u: goto L_088E915C;
    case 12u: goto L_088E9184;
    case 13u: goto L_088E919C;
    case 14u: goto L_088E91A8;
    case 15u: goto L_088E91C4;
    case 16u: goto L_088E91D0;
    case 17u: goto L_088E91DC;
    case 18u: goto L_088E91FC;
    case 19u: goto L_088E920C;
    case 20u: goto L_088E9214;
    case 21u: goto L_088E9228;
    case 22u: goto L_088E9234;
    case 23u: goto L_088E9274;
    case 24u: goto L_088E92D0;
    case 25u: goto L_088E9300;
    case 26u: goto L_088E930C;
    case 27u: goto L_088E9354;
    case 28u: goto L_088E9370;
    case 29u: goto L_088E93A0;
    case 30u: goto L_088E93C0;
    case 31u: goto L_088E93D0;
    case 32u: goto L_088E93E4;
    case 33u: goto L_088E93F4;
    case 34u: goto L_088E9404;
    case 35u: goto L_088E9410;
    case 36u: goto L_088E9418;
    case 37u: goto L_088E9434;
    case 38u: goto L_088E943C;
    case 39u: goto L_088E9450;
    case 40u: goto L_088E9470;
    case 41u: goto L_088E94B4;
    case 42u: goto L_088E94C4;
    case 43u: goto L_088E94E4;
    case 44u: goto L_088E94EC;
    case 45u: goto L_088E94F4;
    case 46u: goto L_088E94F8;
    case 47u: goto L_088E9504;
    case 48u: goto L_088E9514;
    case 49u: goto L_088E9534;
    case 50u: goto L_088E953C;
    case 51u: goto L_088E9560;
    case 52u: goto L_088E95C0;
    case 53u: goto L_088E95D4;
    case 54u: goto L_088E95E4;
    case 55u: goto L_088E95E8;
    case 56u: goto L_088E9600;
    case 57u: goto L_088E9610;
    case 58u: goto L_088E9630;
    case 59u: goto L_088E9638;
    case 60u: goto L_088E9640;
    case 61u: goto L_088E9644;
    case 62u: goto L_088E9650;
    case 63u: goto L_088E9660;
    case 64u: goto L_088E9690;
    case 65u: goto L_088E9698;
    case 66u: goto L_088E96CC;
    case 67u: goto L_088E973C;
    case 68u: goto L_088E9750;
    case 69u: goto L_088E9764;
    case 70u: goto L_088E9768;
    case 71u: goto L_088E9780;
    case 72u: goto L_088E9790;
    case 73u: goto L_088E97B0;
    case 74u: goto L_088E97B8;
    case 75u: goto L_088E97C0;
    case 76u: goto L_088E97C4;
    case 77u: goto L_088E97D0;
    case 78u: goto L_088E97E0;
    case 79u: goto L_088E980C;
    case 80u: goto L_088E9814;
    case 81u: goto L_088E9844;
    case 82u: goto L_088E989C;
    case 83u: goto L_088E98B0;
    case 84u: goto L_088E98C0;
    case 85u: goto L_088E98C4;
    case 86u: goto L_088E98DC;
    case 87u: goto L_088E98EC;
    case 88u: goto L_088E990C;
    case 89u: goto L_088E9914;
    case 90u: goto L_088E991C;
    case 91u: goto L_088E9920;
    case 92u: goto L_088E992C;
    case 93u: goto L_088E993C;
    case 94u: goto L_088E9980;
    case 95u: goto L_088E9988;
    case 96u: goto L_088E99B8;
    case 97u: goto L_088E99C4;
    case 98u: goto L_088E99DC;
    case 99u: goto L_088E99FC;
    case 100u: goto L_088E9A48;
    case 101u: goto L_088E9A50;
    case 102u: goto L_088E9A54;
    case 103u: goto L_088E9A64;
    case 104u: goto L_088E9A6C;
    case 105u: goto L_088E9A70;
    case 106u: goto L_088E9A80;
    case 107u: goto L_088E9A8C;
    case 108u: goto L_088E9A94;
    case 109u: goto L_088E9A9C;
    case 110u: goto L_088E9AB8;
    case 111u: goto L_088E9B50;
    case 112u: goto L_088E9B5C;
    case 113u: goto L_088E9B68;
    case 114u: goto L_088E9B78;
    case 115u: goto L_088E9B84;
    case 116u: goto L_088E9BC0;
    case 117u: goto L_088E9BC8;
    case 118u: goto L_088E9C04;
    case 119u: goto L_088E9C14;
    case 120u: goto L_088E9C24;
    case 121u: goto L_088E9C2C;
    case 122u: goto L_088E9C34;
    case 123u: goto L_088E9C3C;
    case 124u: goto L_088E9C68;
    case 125u: goto L_088E9C84;
    case 126u: goto L_088E9C94;
    case 127u: goto L_088E9CA4;
    case 128u: goto L_088E9CC8;
    case 129u: goto L_088E9CD4;
    case 130u: goto L_088E9CF4;
    case 131u: goto L_088E9D00;
    case 132u: goto L_088E9D08;
    case 133u: goto L_088E9D34;
    case 134u: goto L_088E9D4C;
    case 135u: goto L_088E9D54;
    case 136u: goto L_088E9D5C;
    case 137u: goto L_088E9D60;
    case 138u: goto L_088E9D68;
    case 139u: goto L_088E9D74;
    case 140u: goto L_088E9D84;
    case 141u: goto L_088E9D94;
    case 142u: goto L_088E9DA8;
    case 143u: goto L_088E9DB4;
    case 144u: goto L_088E9DDC;
    case 145u: goto L_088E9DF0;
    case 146u: goto L_088E9E04;
    case 147u: goto L_088E9E0C;
    case 148u: goto L_088E9E80;
    case 149u: goto L_088E9E8C;
    case 150u: goto L_088E9E98;
    case 151u: goto L_088E9EA8;
    case 152u: goto L_088E9EB0;
    case 153u: goto L_088E9EC4;
    case 154u: goto L_088E9EE4;
    case 155u: goto L_088E9EEC;
    case 156u: goto L_088E9EF4;
    case 157u: goto L_088E9F04;
    case 158u: goto L_088E9F1C;
    case 159u: goto L_088E9F28;
    case 160u: goto L_088E9F3C;
    case 161u: goto L_088E9F4C;
    case 162u: goto L_088E9F5C;
    case 163u: goto L_088E9F80;
    case 164u: goto L_088E9F98;
    case 165u: goto L_088E9FB0;
    case 166u: goto L_088E9FC8;
    case 167u: goto L_088E9FDC;
    case 168u: goto L_088E9FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E9000:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(304), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1084)));
    goto L_088E9008;
L_088E9008:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 158u, 0x088E8F80u>(ctx, &aot_mem); return;
      }
      goto L_088E9018;
    }
L_088E9018:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 157u, 0x088E8F70u>(ctx, &aot_mem); return;
      }
      goto L_088E902C;
    }
L_088E902C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(289)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088E9044u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0224_entry, 224u, 173u, 0x088E4D38u>(ctx, &aot_mem) && ctx.pc == 0x088E9044u) goto L_088E9044;
    return;
L_088E9044:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E907C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32744), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E909C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088E90B0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 199u, 0x088E1FC8u>(ctx, &aot_mem) && ctx.pc == 0x088E90B0u) goto L_088E90B0;
    return;
L_088E90B0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-840));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(972), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E90D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-840));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(972), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088E9124u);
    aot_gpr[6] = (0u | 1040u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E9124u) goto L_088E9124;
    return;
L_088E9124:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1040));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(972)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x088E915Cu);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E915Cu) goto L_088E915C;
    return;
L_088E915C:
    aot_gpr[2] = (aot_gpr[21] | 0u);
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
L_088E9184:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1040));
    aot_gpr[31] = (0x088E919Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 90u, 0x088E2538u>(ctx, &aot_mem) && ctx.pc == 0x088E919Cu) goto L_088E919C;
    return;
L_088E919C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E91A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088E91C4u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0224_entry, 224u, 173u, 0x088E4D38u>(ctx, &aot_mem) && ctx.pc == 0x088E91C4u) goto L_088E91C4;
    return;
L_088E91C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[31] = (0x088E91D0u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E91D0u) goto L_088E91D0;
    return;
L_088E91D0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E91FC;
      }
      goto L_088E91DC;
    }
L_088E91DC:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(976);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(992);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(1008);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(1024);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088E91FC;
L_088E91FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E920C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9214:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088E9228u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 131u, 0x088E5964u>(ctx, &aot_mem) && ctx.pc == 0x088E9228u) goto L_088E9228;
    return;
L_088E9228:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9234:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1912));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (0u | 18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[31]);
    aot_gpr[31] = (0x088E9274u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9274u) goto L_088E9274;
    return;
L_088E9274:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), ctx.vfpu_scalar_bits_ct<16u>());
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[17]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 19u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088E92D0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E92D0u) goto L_088E92D0;
    return;
L_088E92D0:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[17]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088E9300u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9300u) goto L_088E9300;
    return;
L_088E9300:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9354;
      }
      goto L_088E930C;
    }
L_088E930C:
    ctx.set_vfpu_scalar_bits_ct<16u>(PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(976);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(992);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(1008);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(1024);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 0u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 40u, 4u);
      ctx.eat_vfpu_prefixes(); }
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[17]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088E9354;
L_088E9354:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9370:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(432));
    aot_gpr[7] = (16000u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(816)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088E93A0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 53u, 0x088E64BCu>(ctx, &aot_mem) && ctx.pc == 0x088E93A0u) goto L_088E93A0;
    return;
L_088E93A0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(824)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[4] = (16928u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E93E4;
      }
      goto L_088E93C0;
    }
L_088E93C0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088E93D0u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 209u, 0x088E5F58u>(ctx, &aot_mem) && ctx.pc == 0x088E93D0u) goto L_088E93D0;
    return;
L_088E93D0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_088E9404;
      }
      goto L_088E93E4;
    }
L_088E93E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E93F4u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 209u, 0x088E5F58u>(ctx, &aot_mem) && ctx.pc == 0x088E93F4u) goto L_088E93F4;
    return;
L_088E93F4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    goto L_088E9404;
L_088E9404:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E9410u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E9410u) goto L_088E9410;
    return;
L_088E9410:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E943C;
      }
      goto L_088E9418;
    }
L_088E9418:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088E9434u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E9434u) goto L_088E9434;
    return;
L_088E9434:
    aot_gpr[31] = (0x088E943Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 135u, 0x0891F9A8u>(ctx, &aot_mem) && ctx.pc == 0x088E943Cu) goto L_088E943C;
    return;
L_088E943C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9450:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32736), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[31] = (0x088E94B4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32248));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088E94B4u) goto L_088E94B4;
    return;
L_088E94B4:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088E94EC;
      }
      goto L_088E94C4;
    }
L_088E94C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088E94E4u);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E94E4u) goto L_088E94E4;
    return;
L_088E94E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E94F8;
      }
      goto L_088E94EC;
    }
L_088E94EC:
    aot_gpr[31] = (0x088E94F4u);
    aot_gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088E94F4u) goto L_088E94F4;
    return;
L_088E94F4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_088E94F8;
L_088E94F8:
    aot_gpr[21] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088E9534;
      }
      goto L_088E9504;
    }
L_088E9504:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E9514u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 132u, 0x0891D91Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9514u) goto L_088E9514;
    return;
L_088E9514:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1288));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088E9534;
L_088E9534:
    aot_gpr[31] = (0x088E953Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 192u, 0x08A4AE78u>(ctx, &aot_mem) && ctx.pc == 0x088E953Cu) goto L_088E953C;
    return;
L_088E953C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9560:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088E95D4;
      }
      goto L_088E95C0;
    }
L_088E95C0:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088E95D4;
    }
    goto L_088E95D4;
L_088E95D4:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E95E8;
      }
      goto L_088E95E4;
    }
L_088E95E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088E95E8;
L_088E95E8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E9600u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32248));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088E9600u) goto L_088E9600;
    return;
L_088E9600:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088E9638;
      }
      goto L_088E9610;
    }
L_088E9610:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088E9630u);
    aot_gpr[6] = (0u | 44u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E9630u) goto L_088E9630;
    return;
L_088E9630:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E9644;
      }
      goto L_088E9638;
    }
L_088E9638:
    aot_gpr[31] = (0x088E9640u);
    aot_gpr[4] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088E9640u) goto L_088E9640;
    return;
L_088E9640:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_088E9644;
L_088E9644:
    aot_gpr[21] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088E9690;
      }
      goto L_088E9650;
    }
L_088E9650:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E9660u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 132u, 0x0891D91Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9660u) goto L_088E9660;
    return;
L_088E9660:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1448));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[19] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    goto L_088E9690;
L_088E9690:
    aot_gpr[31] = (0x088E9698u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 192u, 0x08A4AE78u>(ctx, &aot_mem) && ctx.pc == 0x088E9698u) goto L_088E9698;
    return;
L_088E9698:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E96CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[8] | 0u);
    aot_gpr[20] = (aot_gpr[9] | 0u);
    aot_gpr[21] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_088E9750;
      }
      goto L_088E973C;
    }
L_088E973C:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088E9750;
    }
    goto L_088E9750;
L_088E9750:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E9768;
      }
      goto L_088E9764;
    }
L_088E9764:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_088E9768;
L_088E9768:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088E9780u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32248));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088E9780u) goto L_088E9780;
    return;
L_088E9780:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088E97B8;
      }
      goto L_088E9790;
    }
L_088E9790:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088E97B0u);
    aot_gpr[6] = (0u | 40u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E97B0u) goto L_088E97B0;
    return;
L_088E97B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E97C4;
      }
      goto L_088E97B8;
    }
L_088E97B8:
    aot_gpr[31] = (0x088E97C0u);
    aot_gpr[4] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088E97C0u) goto L_088E97C0;
    return;
L_088E97C0:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    goto L_088E97C4;
L_088E97C4:
    aot_gpr[30] = (aot_gpr[23] | 0u);
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088E980C;
      }
      goto L_088E97D0;
    }
L_088E97D0:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E97E0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 132u, 0x0891D91Cu>(ctx, &aot_mem) && ctx.pc == 0x088E97E0u) goto L_088E97E0;
    return;
L_088E97E0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1368));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    aot_gpr[22] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
    goto L_088E980C;
L_088E980C:
    aot_gpr[31] = (0x088E9814u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 192u, 0x08A4AE78u>(ctx, &aot_mem) && ctx.pc == 0x088E9814u) goto L_088E9814;
    return;
L_088E9814:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9844:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[19]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[19] = (aot_gpr[5] | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088E98B0;
      }
      goto L_088E989C;
    }
L_088E989C:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088E98B0;
    }
    goto L_088E98B0;
L_088E98B0:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E98C4;
      }
      goto L_088E98C0;
    }
L_088E98C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088E98C4;
L_088E98C4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E98DCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32248));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088E98DCu) goto L_088E98DC;
    return;
L_088E98DC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088E9914;
      }
      goto L_088E98EC;
    }
L_088E98EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088E990Cu);
    aot_gpr[6] = (0u | 44u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E990Cu) goto L_088E990C;
    return;
L_088E990C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E9920;
      }
      goto L_088E9914;
    }
L_088E9914:
    aot_gpr[31] = (0x088E991Cu);
    aot_gpr[4] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088E991Cu) goto L_088E991C;
    return;
L_088E991C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_088E9920;
L_088E9920:
    aot_gpr[21] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088E9980;
      }
      goto L_088E992C;
    }
L_088E992C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E993Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 132u, 0x0891D91Cu>(ctx, &aot_mem) && ctx.pc == 0x088E993Cu) goto L_088E993C;
    return;
L_088E993C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1528));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6832)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    goto L_088E9980;
L_088E9980:
    aot_gpr[31] = (0x088E9988u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 192u, 0x08A4AE78u>(ctx, &aot_mem) && ctx.pc == 0x088E9988u) goto L_088E9988;
    return;
L_088E9988:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E99B8:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E99C4:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E99DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    aot_gpr[31] = (0x088E99FCu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 68u, 0x0894B4D0u>(ctx, &aot_mem) && ctx.pc == 0x088E99FCu) goto L_088E99FC;
    return;
L_088E99FC:
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[17] = aot_fpr[17] - aot_fpr[13];
    aot_fpr[16] = aot_fpr[16] - aot_fpr[14];
    aot_fpr[18] = aot_fpr[18] - aot_fpr[12];
    aot_gpr[4] = (15948u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088E9A50;
      }
      goto L_088E9A48;
    }
L_088E9A48:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_088E9A54;
      }
      goto L_088E9A50;
    }
L_088E9A50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    goto L_088E9A54;
L_088E9A54:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E9A6C;
      }
      goto L_088E9A64;
    }
L_088E9A64:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088E9A70;
      }
      goto L_088E9A6C;
    }
L_088E9A6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    goto L_088E9A70;
L_088E9A70:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E9A8C;
      }
      goto L_088E9A80;
    }
L_088E9A80:
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
      if (branch_taken) {
          goto L_088E9A94;
      }
      goto L_088E9A8C;
    }
L_088E9A8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    goto L_088E9A94;
L_088E9A94:
    if (aot_gpr[4] == 0u) {
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
        goto L_088E9AB8;
    }
    goto L_088E9A9C;
L_088E9A9C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2256)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2260)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2264)));
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_088E9AB8;
L_088E9AB8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (16704u << 16u);
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[19] = aot_fpr[12] + aot_fpr[14];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[14] = aot_fpr[18] + aot_fpr[14];
    aot_fpr[16] = aot_fpr[17] / aot_fpr[15];
    aot_gpr[4] = (16128u << 16u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] / aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[12] = aot_fpr[18] + aot_fpr[12];
    aot_fpr[19] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] / aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088E9B50u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 96u, 0x0894B684u>(ctx, &aot_mem) && ctx.pc == 0x088E9B50u) goto L_088E9B50;
    return;
L_088E9B50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x088E9B5Cu);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 94u, 0x0894B664u>(ctx, &aot_mem) && ctx.pc == 0x088E9B5Cu) goto L_088E9B5C;
    return;
L_088E9B5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x088E9B68u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(224));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 101u, 0x0894B704u>(ctx, &aot_mem) && ctx.pc == 0x088E9B68u) goto L_088E9B68;
    return;
L_088E9B68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9B78:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (2215u << 16u);
    goto L_088E9B84;
L_088E9B84:
    aot_gpr[8] = (aot_gpr[7] & 15u);
    aot_gpr[10] = (aot_gpr[8] << 5u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(23380)));
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[8] = (aot_gpr[10] - aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2292)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 16 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2784), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E9B84;
      }
      goto L_088E9BC0;
    }
L_088E9BC0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9BC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-720));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2996), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3020), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(372)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088E9C04u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 29u, 0x0894B1B8u>(ctx, &aot_mem) && ctx.pc == 0x088E9C04u) goto L_088E9C04;
    return;
L_088E9C04:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7344)));
    aot_gpr[31] = (0x088E9C14u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 45u, 0x0894B31Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9C14u) goto L_088E9C14;
    return;
L_088E9C14:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), aot_gpr[2]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[31] = (0x088E9C24u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 143u, 0x0894BAECu>(ctx, &aot_mem) && ctx.pc == 0x088E9C24u) goto L_088E9C24;
    return;
L_088E9C24:
    aot_gpr[31] = (0x088E9C2Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088E99DC;
L_088E9C2C:
    aot_gpr[31] = (0x088E9C34u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088E9B78;
L_088E9C34:
    aot_gpr[31] = (0x088E9C3Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 165u, 0x0894BC10u>(ctx, &aot_mem) && ctx.pc == 0x088E9C3Cu) goto L_088E9C3C;
    return;
L_088E9C3C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2784));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    aot_gpr[4] = (0u | 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(112), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(404), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3016), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9C68:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-720));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3020), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2996), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3016), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9C84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_088E9CC8;
      }
      goto L_088E9C94;
    }
L_088E9C94:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-720));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3020), aot_gpr[6]);
      if (branch_taken) {
          goto L_088E9CC8;
      }
      goto L_088E9CA4;
    }
L_088E9CA4:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088E9CC8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E9CC8u) goto L_088E9CC8;
    return;
L_088E9CC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9CD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088E9CF4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 41u, 0x0894B2BCu>(ctx, &aot_mem) && ctx.pc == 0x088E9CF4u) goto L_088E9CF4;
    return;
L_088E9CF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), aot_gpr[2]);
    aot_gpr[31] = (0x088E9D00u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088E9B78;
L_088E9D00:
    aot_gpr[31] = (0x088E9D08u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 165u, 0x0894BC10u>(ctx, &aot_mem) && ctx.pc == 0x088E9D08u) goto L_088E9D08;
    return;
L_088E9D08:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2784));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    aot_gpr[4] = (0u | 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(112), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9D34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088E9D4Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x088E9D4Cu) goto L_088E9D4C;
    return;
L_088E9D4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
      if (branch_taken) {
          goto L_088E9D60;
      }
      goto L_088E9D54;
    }
L_088E9D54:
    aot_gpr[31] = (0x088E9D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 49u, 0x0894B364u>(ctx, &aot_mem) && ctx.pc == 0x088E9D5Cu) goto L_088E9D5C;
    return;
L_088E9D5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    goto L_088E9D60;
L_088E9D60:
    aot_gpr[31] = (0x088E9D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 31u, 0x0894B1E8u>(ctx, &aot_mem) && ctx.pc == 0x088E9D68u) goto L_088E9D68;
    return;
L_088E9D68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9D84;
      }
      goto L_088E9D74;
    }
L_088E9D74:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088E9D84u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(404));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088E9D84u) goto L_088E9D84;
    return;
L_088E9D84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9D94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(424)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E9E04;
      }
      goto L_088E9DA8;
    }
L_088E9DA8:
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    goto L_088E9DB4;
L_088E9DB4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(704)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(712)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(716)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(704), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_088E9DF0;
      }
      goto L_088E9DDC;
    }
L_088E9DDC:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088E9DF0;
    }
    goto L_088E9DF0;
L_088E9DF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(704), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_088E9DB4;
      }
      goto L_088E9E04;
    }
L_088E9E04:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9E0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
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
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088E9E80u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 2u, 0x08945028u>(ctx, &aot_mem) && ctx.pc == 0x088E9E80u) goto L_088E9E80;
    return;
L_088E9E80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x088E9E8Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 136u, 0x0894BA84u>(ctx, &aot_mem) && ctx.pc == 0x088E9E8Cu) goto L_088E9E8C;
    return;
L_088E9E8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x088E9E98u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 138u, 0x0894BAACu>(ctx, &aot_mem) && ctx.pc == 0x088E9E98u) goto L_088E9E98;
    return;
L_088E9E98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E9EA8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 104u, 0x0894B814u>(ctx, &aot_mem) && ctx.pc == 0x088E9EA8u) goto L_088E9EA8;
    return;
L_088E9EA8:
    aot_gpr[31] = (0x088E9EB0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088E9D94;
L_088E9EB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9EC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    aot_gpr[31] = (0x088E9EE4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x088E9EE4u) goto L_088E9EE4;
    return;
L_088E9EE4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9EF4;
      }
      goto L_088E9EEC;
    }
L_088E9EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9F80;
      }
      goto L_088E9EF4;
    }
L_088E9EF4:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x088E9F04u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 123u, 0x0894B970u>(ctx, &aot_mem) && ctx.pc == 0x088E9F04u) goto L_088E9F04;
    return;
L_088E9F04:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(160));
    aot_gpr[31] = (0x088E9F1Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 2u, 0x08945028u>(ctx, &aot_mem) && ctx.pc == 0x088E9F1Cu) goto L_088E9F1C;
    return;
L_088E9F1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x088E9F28u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 137u, 0x0894BA90u>(ctx, &aot_mem) && ctx.pc == 0x088E9F28u) goto L_088E9F28;
    return;
L_088E9F28:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088E9F3Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 139u, 0x0894BAB8u>(ctx, &aot_mem) && ctx.pc == 0x088E9F3Cu) goto L_088E9F3C;
    return;
L_088E9F3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088E9F4Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 163u, 0x0894BBA8u>(ctx, &aot_mem) && ctx.pc == 0x088E9F4Cu) goto L_088E9F4C;
    return;
L_088E9F4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088E9F5Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 98u, 0x0894B6A0u>(ctx, &aot_mem) && ctx.pc == 0x088E9F5Cu) goto L_088E9F5C;
    return;
L_088E9F5C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088E9F80u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(224));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 101u, 0x0894B704u>(ctx, &aot_mem) && ctx.pc == 0x088E9F80u) goto L_088E9F80;
    return;
L_088E9F80:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9F98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(424)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (15969u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 2u, 0x088EA050u>(ctx, &aot_mem); return;
      }
      goto L_088E9FB0;
    }
L_088E9FB0:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (aot_gpr[10] | 18350u);
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(432));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[8] + static_cast<std::uint32_t>(448));
    aot_gpr[5] = (aot_gpr[8] + static_cast<std::uint32_t>(464));
    goto L_088E9FC8;
L_088E9FC8:
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
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
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(652)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9FE8;
      }
      goto L_088E9FDC;
    }
L_088E9FDC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088E9FE8;
L_088E9FE8:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<20u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    ctx.pc = 0x088EA000u; return;
}

void recomp_unit_0229(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0229_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_229(Runtime &runtime) {
    runtime.register_generated_unit(229u, 0x088E9000u, 4096u, &recomp_unit_0229, &recomp_unit_0229_entry);
    runtime.register_function(0x088E9000u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9008u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9018u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E902Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9044u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E907Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E909Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E90B0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E90D0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9124u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E915Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9184u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E919Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E91A8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E91C4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E91D0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E91DCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E91FCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E920Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9214u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9228u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9234u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9274u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E92D0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9300u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E930Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9354u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9370u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E93A0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E93C0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E93D0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E93E4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E93F4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9404u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9410u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9418u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9434u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E943Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9450u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9470u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E94B4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E94C4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E94E4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E94ECu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E94F4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E94F8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9504u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9514u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9534u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E953Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9560u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E95C0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E95D4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E95E4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E95E8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9600u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9610u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9630u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9638u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9640u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9644u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9650u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9660u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9690u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9698u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E96CCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E973Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9750u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9764u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9768u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9780u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9790u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E97B0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E97B8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E97C0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E97C4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E97D0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E97E0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E980Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9814u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9844u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E989Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E98B0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E98C0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E98C4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E98DCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E98ECu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E990Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9914u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E991Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9920u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E992Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E993Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9980u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9988u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E99B8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E99C4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E99DCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E99FCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9A48u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9A50u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9A54u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9A64u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9A6Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9A70u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9A80u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9A8Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9A94u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9A9Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9AB8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9B50u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9B5Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9B68u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9B78u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9B84u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9BC0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9BC8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9C04u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9C14u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9C24u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9C2Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9C34u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9C3Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9C68u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9C84u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9C94u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9CA4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9CC8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9CD4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9CF4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9D00u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9D08u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9D34u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9D4Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9D54u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9D5Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9D60u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9D68u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9D74u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9D84u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9D94u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9DA8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9DB4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9DDCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9DF0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9E04u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9E0Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9E80u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9E8Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9E98u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9EA8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9EB0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9EC4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9EE4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9EECu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9EF4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9F04u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9F1Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9F28u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9F3Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9F4Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9F5Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9F80u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9F98u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9FB0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9FC8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9FDCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x088E9FE8u, &recomp_unit_0229, "recomp_unit_0229");
}
} // namespace psprecomp
