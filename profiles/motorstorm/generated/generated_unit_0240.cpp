#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0240[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 86,
    0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102,
};
void recomp_unit_0240_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088F4000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0240[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088F4000;
    case 2u: goto L_088F402C;
    case 3u: goto L_088F4058;
    case 4u: goto L_088F4084;
    case 5u: goto L_088F40B0;
    case 6u: goto L_088F40E4;
    case 7u: goto L_088F4110;
    case 8u: goto L_088F413C;
    case 9u: goto L_088F4168;
    case 10u: goto L_088F4194;
    case 11u: goto L_088F41C0;
    case 12u: goto L_088F41EC;
    case 13u: goto L_088F4218;
    case 14u: goto L_088F4244;
    case 15u: goto L_088F4270;
    case 16u: goto L_088F429C;
    case 17u: goto L_088F42DC;
    case 18u: goto L_088F4308;
    case 19u: goto L_088F433C;
    case 20u: goto L_088F4368;
    case 21u: goto L_088F4394;
    case 22u: goto L_088F43C4;
    case 23u: goto L_088F43F0;
    case 24u: goto L_088F441C;
    case 25u: goto L_088F4458;
    case 26u: goto L_088F4484;
    case 27u: goto L_088F44B4;
    case 28u: goto L_088F44E0;
    case 29u: goto L_088F457C;
    case 30u: goto L_088F4594;
    case 31u: goto L_088F45A0;
    case 32u: goto L_088F45CC;
    case 33u: goto L_088F45F4;
    case 34u: goto L_088F461C;
    case 35u: goto L_088F4644;
    case 36u: goto L_088F4670;
    case 37u: goto L_088F4698;
    case 38u: goto L_088F46B0;
    case 39u: goto L_088F46E0;
    case 40u: goto L_088F4720;
    case 41u: goto L_088F4768;
    case 42u: goto L_088F479C;
    case 43u: goto L_088F47C8;
    case 44u: goto L_088F480C;
    case 45u: goto L_088F4838;
    case 46u: goto L_088F4864;
    case 47u: goto L_088F4890;
    case 48u: goto L_088F48BC;
    case 49u: goto L_088F48F0;
    case 50u: goto L_088F4924;
    case 51u: goto L_088F494C;
    case 52u: goto L_088F4988;
    case 53u: goto L_088F49C4;
    case 54u: goto L_088F49F0;
    case 55u: goto L_088F4A20;
    case 56u: goto L_088F4A50;
    case 57u: goto L_088F4A90;
    case 58u: goto L_088F4ABC;
    case 59u: goto L_088F4AE8;
    case 60u: goto L_088F4B2C;
    case 61u: goto L_088F4B5C;
    case 62u: goto L_088F4BA0;
    case 63u: goto L_088F4BD4;
    case 64u: goto L_088F4C0C;
    case 65u: goto L_088F4C74;
    case 66u: goto L_088F4CA4;
    case 67u: goto L_088F4CEC;
    case 68u: goto L_088F4D18;
    case 69u: goto L_088F4D20;
    case 70u: goto L_088F4D64;
    case 71u: goto L_088F4D6C;
    case 72u: goto L_088F4D98;
    case 73u: goto L_088F4DB4;
    case 74u: goto L_088F4DCC;
    case 75u: goto L_088F4DE4;
    case 76u: goto L_088F4DFC;
    case 77u: goto L_088F4E14;
    case 78u: goto L_088F4E18;
    case 79u: goto L_088F4E38;
    case 80u: goto L_088F4E40;
    case 81u: goto L_088F4E4C;
    case 82u: goto L_088F4E54;
    case 83u: goto L_088F4E60;
    case 84u: goto L_088F4E68;
    case 85u: goto L_088F4E70;
    case 86u: goto L_088F4E7C;
    case 87u: goto L_088F4E84;
    case 88u: goto L_088F4E90;
    case 89u: goto L_088F4EA8;
    case 90u: goto L_088F4EB8;
    case 91u: goto L_088F4EBC;
    case 92u: goto L_088F4EC8;
    case 93u: goto L_088F4ED0;
    case 94u: goto L_088F4EF0;
    case 95u: goto L_088F4F0C;
    case 96u: goto L_088F4F80;
    case 97u: goto L_088F4F90;
    case 98u: goto L_088F4F98;
    case 99u: goto L_088F4FA8;
    case 100u: goto L_088F4FC0;
    case 101u: goto L_088F4FE0;
    case 102u: goto L_088F4FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088F4000:
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-31032));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1856));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F402Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31012));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F402Cu) goto L_088F402C;
    return;
L_088F402C:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1860));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4058u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30996));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4058u) goto L_088F4058;
    return;
L_088F4058:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1864));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4084u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30984));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4084u) goto L_088F4084;
    return;
L_088F4084:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1868));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F40B0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30964));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F40B0u) goto L_088F40B0;
    return;
L_088F40B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-30948));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2016));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F40E4u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F40E4u) goto L_088F40E4;
    return;
L_088F40E4:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2020));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4110u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30908));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4110u) goto L_088F4110;
    return;
L_088F4110:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2024));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F413Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30896));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F413Cu) goto L_088F413C;
    return;
L_088F413C:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2028));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4168u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30880));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4168u) goto L_088F4168;
    return;
L_088F4168:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2032));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4194u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30868));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4194u) goto L_088F4194;
    return;
L_088F4194:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2036));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F41C0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30856));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F41C0u) goto L_088F41C0;
    return;
L_088F41C0:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2040));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F41ECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30844));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F41ECu) goto L_088F41EC;
    return;
L_088F41EC:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2044));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4218u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30832));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4218u) goto L_088F4218;
    return;
L_088F4218:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2048));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4244u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30824));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4244u) goto L_088F4244;
    return;
L_088F4244:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2052));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4270u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30808));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4270u) goto L_088F4270;
    return;
L_088F4270:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2056));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F429Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30792));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F429Cu) goto L_088F429C;
    return;
L_088F429C:
    aot_gpr[6] = (16800u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-30768));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2080));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F42DCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30748));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F42DCu) goto L_088F42DC;
    return;
L_088F42DC:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2084));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4308u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30732));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4308u) goto L_088F4308;
    return;
L_088F4308:
    aot_gpr[6] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2088));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F433Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30716));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F433Cu) goto L_088F433C;
    return;
L_088F433C:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2092));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4368u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30688));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4368u) goto L_088F4368;
    return;
L_088F4368:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2096));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4394u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30672));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4394u) goto L_088F4394;
    return;
L_088F4394:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[9] = (16752u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2100));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F43C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30660));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F43C4u) goto L_088F43C4;
    return;
L_088F43C4:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2112));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F43F0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30648));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F43F0u) goto L_088F43F0;
    return;
L_088F43F0:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2116));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F441Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30632));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F441Cu) goto L_088F441C;
    return;
L_088F441C:
    aot_gpr[6] = (16399u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (aot_gpr[6] | 10742u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2120));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4458u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30616));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4458u) goto L_088F4458;
    return;
L_088F4458:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2124));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F4484u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30600));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4484u) goto L_088F4484;
    return;
L_088F4484:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[9] = (16968u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2128));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F44B4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30584));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F44B4u) goto L_088F44B4;
    return;
L_088F44B4:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2132));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F44E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30568));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F44E0u) goto L_088F44E0;
    return;
L_088F44E0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30552));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30500));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-30476));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30460));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-30436));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30408));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-30396));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30372));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(2276));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(2272));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[6]);
    aot_gpr[30] = (aot_gpr[19] + static_cast<std::uint32_t>(2280));
    aot_gpr[23] = (aot_gpr[19] + static_cast<std::uint32_t>(2284));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[19] + static_cast<std::uint32_t>(2288));
    aot_gpr[21] = (aot_gpr[19] + static_cast<std::uint32_t>(2292));
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(2296));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(2300));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-30528));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    goto L_088F457C;
L_088F457C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[19]);
    aot_gpr[4] = (0u | 47u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F4594u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 114u, 0x0882FA4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4594u) goto L_088F4594;
    return;
L_088F4594:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F45A0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088F45A0u) goto L_088F45A0;
    return;
L_088F45A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F45CCu);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F45CCu) goto L_088F45CC;
    return;
L_088F45CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F45F4u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F45F4u) goto L_088F45F4;
    return;
L_088F45F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F461Cu);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F461Cu) goto L_088F461C;
    return;
L_088F461C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F4644u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4644u) goto L_088F4644;
    return;
L_088F4644:
    aot_gpr[9] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F4670u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4670u) goto L_088F4670;
    return;
L_088F4670:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F4698u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4698u) goto L_088F4698;
    return;
L_088F4698:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F46B0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 40u, 0x088E9470u>(ctx, &aot_mem) && ctx.pc == 0x088F46B0u) goto L_088F46B0;
    return;
L_088F46B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[9] = (16672u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F46E0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F46E0u) goto L_088F46E0;
    return;
L_088F46E0:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(32));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(32));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(32));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088F457C;
      }
      goto L_088F4720;
    }
L_088F4720:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-30348));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1776));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4768u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30316));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4768u) goto L_088F4768;
    return;
L_088F4768:
    aot_gpr[6] = (16800u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1780));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F479Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30308));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F479Cu) goto L_088F479C;
    return;
L_088F479C:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1784));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F47C8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30300));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F47C8u) goto L_088F47C8;
    return;
L_088F47C8:
    aot_gpr[6] = (49152u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (16384u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-30292));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2176));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F480Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30260));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F480Cu) goto L_088F480C;
    return;
L_088F480C:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2180));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4838u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30240));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4838u) goto L_088F4838;
    return;
L_088F4838:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2184));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4864u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30220));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4864u) goto L_088F4864;
    return;
L_088F4864:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2188));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4890u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30200));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4890u) goto L_088F4890;
    return;
L_088F4890:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2192));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F48BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30180));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F48BCu) goto L_088F48BC;
    return;
L_088F48BC:
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-30152));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2212));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F48F0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30120));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F48F0u) goto L_088F48F0;
    return;
L_088F48F0:
    aot_gpr[6] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2216));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4924u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30096));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4924u) goto L_088F4924;
    return;
L_088F4924:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2220));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F494Cu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F494Cu) goto L_088F494C;
    return;
L_088F494C:
    aot_gpr[6] = (15692u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2224));
    aot_gpr[6] = (14979u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 4719u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4988u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30080));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4988u) goto L_088F4988;
    return;
L_088F4988:
    aot_gpr[6] = (16399u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (aot_gpr[6] | 10742u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2228));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F49C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30060));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F49C4u) goto L_088F49C4;
    return;
L_088F49C4:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2232));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F49F0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30044));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F49F0u) goto L_088F49F0;
    return;
L_088F49F0:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2236));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4A20u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30028));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4A20u) goto L_088F4A20;
    return;
L_088F4A20:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[9] = (17224u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2240));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4A50u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30008));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4A50u) goto L_088F4A50;
    return;
L_088F4A50:
    aot_gpr[6] = (16128u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-29988));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2256));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4A90u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29952));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4A90u) goto L_088F4A90;
    return;
L_088F4A90:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2260));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4ABCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29940));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4ABCu) goto L_088F4ABC;
    return;
L_088F4ABC:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2264));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4AE8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29928));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4AE8u) goto L_088F4AE8;
    return;
L_088F4AE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(-29876));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(748));
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-29916));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4B2Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29892));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4B2Cu) goto L_088F4B2C;
    return;
L_088F4B2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(748));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4B5Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29868));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4B5Cu) goto L_088F4B5C;
    return;
L_088F4B5C:
    aot_gpr[6] = (18204u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[6] | 16384u);
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(748));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4BA0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29856));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4BA0u) goto L_088F4BA0;
    return;
L_088F4BA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(748));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4BD4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29844));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4BD4u) goto L_088F4BD4;
    return;
L_088F4BD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(748));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088F4C0Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29832));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4C0Cu) goto L_088F4C0C;
    return;
L_088F4C0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2215u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-29820));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[9] = (17302u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(172));
    aot_gpr[31] = (0x088F4C74u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29804));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4C74u) goto L_088F4C74;
    return;
L_088F4C74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29792));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F4CA4u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F4CA4u) goto L_088F4CA4;
    return;
L_088F4CA4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4CEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    if (aot_gpr[4] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(172)));
        goto L_088F4D20;
    }
    goto L_088F4D18;
L_088F4D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0241_entry, 241u, 10u, 0x088F50FCu>(ctx, &aot_mem); return;
      }
      goto L_088F4D20;
    }
L_088F4D20:
    aot_gpr[4] = (17096u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = aot_fpr[14] / aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(176)));
    aot_gpr[31] = (0x088F4D64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 114u, 0x088E9B78u>(ctx, &aot_mem) && ctx.pc == 0x088F4D64u) goto L_088F4D64;
    return;
L_088F4D64:
    aot_gpr[31] = (0x088F4D6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 98u, 0x088E99DCu>(ctx, &aot_mem) && ctx.pc == 0x088F4D6Cu) goto L_088F4D6C;
    return;
L_088F4D6C:
    aot_gpr[7] = (14979u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 4719u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[7] = (17204u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    aot_gpr[17] = (0u | 2u);
    aot_gpr[18] = (2215u << 16u);
    goto L_088F4D98;
L_088F4D98:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(128)));
    aot_gpr[8] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(1844), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088F4D98;
      }
      goto L_088F4DB4;
    }
L_088F4DB4:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088F4E18;
    }
    goto L_088F4DCC;
L_088F4DCC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[14])) && aot_fpr[13] == aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088F4E18;
    }
    goto L_088F4DE4;
L_088F4DE4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[14])) && aot_fpr[13] == aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088F4E18;
    }
    goto L_088F4DFC;
L_088F4DFC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(344)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[14])) && aot_fpr[13] == aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F4EA8;
      }
      goto L_088F4E14;
    }
L_088F4E14:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088F4E18;
L_088F4E18:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2060)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088F4E54;
      }
      goto L_088F4E38;
    }
L_088F4E38:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F4E90;
      }
      goto L_088F4E40;
    }
L_088F4E40:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x088F4E4Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 24u, 0x088ED308u>(ctx, &aot_mem) && ctx.pc == 0x088F4E4Cu) goto L_088F4E4C;
    return;
L_088F4E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4E90;
      }
      goto L_088F4E54;
    }
L_088F4E54:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F4E70;
      }
      goto L_088F4E60;
    }
L_088F4E60:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F4E84;
      }
      goto L_088F4E68;
    }
L_088F4E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4E90;
      }
      goto L_088F4E70;
    }
L_088F4E70:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(336));
    aot_gpr[31] = (0x088F4E7Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 24u, 0x088ED308u>(ctx, &aot_mem) && ctx.pc == 0x088F4E7Cu) goto L_088F4E7C;
    return;
L_088F4E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4E90;
      }
      goto L_088F4E84;
    }
L_088F4E84:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x088F4E90u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 24u, 0x088ED308u>(ctx, &aot_mem) && ctx.pc == 0x088F4E90u) goto L_088F4E90;
    return;
L_088F4E90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3020)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088F4EA8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F4EA8u) goto L_088F4EA8;
    return;
L_088F4EA8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(424)));
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088F4EBC;
      }
      goto L_088F4EB8;
    }
L_088F4EB8:
    aot_gpr[5] = (0u | 0u);
    goto L_088F4EBC;
L_088F4EBC:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < 0 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088F4F80;
      }
      goto L_088F4EC8;
    }
L_088F4EC8:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    aot_gpr[9] = (aot_gpr[16] | 0u);
    goto L_088F4ED0;
L_088F4ED0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(728)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[14])) && aot_fpr[13] == aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[8] = (0u | 1u);
        goto L_088F4EF0;
    }
    goto L_088F4EF0;
L_088F4EF0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(724)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[8]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    aot_gpr[8] = (0u | 0u);
    if (!ctx.fpu_condition()) {
    aot_gpr[8] = (0u | 1u);
        goto L_088F4F0C;
    }
    goto L_088F4F0C;
L_088F4F0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(724), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(728), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(732), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(736), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(600), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(604), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(608), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(612), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(616), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(620), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(624), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(180)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(628), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_088F4ED0;
      }
      goto L_088F4F80;
    }
L_088F4F80:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[17];
    aot_gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_088F4F98;
      }
      goto L_088F4F90;
    }
L_088F4F90:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    goto L_088F4F98;
L_088F4F98:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[8] = (aot_gpr[5] << 7u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0241_entry, 241u, 2u, 0x088F5070u>(ctx, &aot_mem); return;
      }
      goto L_088F4FA8;
    }
L_088F4FA8:
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[8] - aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    goto L_088F4FC0;
L_088F4FC0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(728)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[14])) && aot_fpr[13] == aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[9] = (0u | 1u);
        goto L_088F4FE0;
    }
    goto L_088F4FE0;
L_088F4FE0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(724)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[9]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    aot_gpr[9] = (0u | 0u);
    if (!ctx.fpu_condition()) {
    aot_gpr[9] = (0u | 1u);
        goto L_088F4FFC;
    }
    goto L_088F4FFC;
L_088F4FFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(724), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.pc = 0x088F5000u; return;
}

void recomp_unit_0240(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0240_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_240(Runtime &runtime) {
    runtime.register_generated_unit(240u, 0x088F4000u, 4096u, &recomp_unit_0240, &recomp_unit_0240_entry);
    runtime.register_function(0x088F4000u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F402Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4058u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4084u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F40B0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F40E4u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4110u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F413Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4168u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4194u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F41C0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F41ECu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4218u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4244u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4270u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F429Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F42DCu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4308u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F433Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4368u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4394u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F43C4u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F43F0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F441Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4458u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4484u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F44B4u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F44E0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F457Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4594u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F45A0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F45CCu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F45F4u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F461Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4644u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4670u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4698u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F46B0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F46E0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4720u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4768u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F479Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F47C8u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F480Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4838u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4864u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4890u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F48BCu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F48F0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4924u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F494Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4988u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F49C4u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F49F0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4A20u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4A50u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4A90u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4ABCu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4AE8u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4B2Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4B5Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4BA0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4BD4u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4C0Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4C74u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4CA4u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4CECu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4D18u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4D20u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4D64u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4D6Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4D98u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4DB4u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4DCCu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4DE4u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4DFCu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E14u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E18u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E38u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E40u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E4Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E54u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E60u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E68u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E70u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E7Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E84u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4E90u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4EA8u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4EB8u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4EBCu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4EC8u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4ED0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4EF0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4F0Cu, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4F80u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4F90u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4F98u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4FA8u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4FC0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4FE0u, &recomp_unit_0240, "recomp_unit_0240");
    runtime.register_function(0x088F4FFCu, &recomp_unit_0240, "recomp_unit_0240");
}
} // namespace psprecomp
