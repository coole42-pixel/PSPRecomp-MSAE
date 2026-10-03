#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0239[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
};
void recomp_unit_0239_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088F3000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0239[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088F3000;
    case 2u: goto L_088F3084;
    case 3u: goto L_088F3088;
    case 4u: goto L_088F30FC;
    case 5u: goto L_088F3138;
    case 6u: goto L_088F3174;
    case 7u: goto L_088F31B4;
    case 8u: goto L_088F31F0;
    case 9u: goto L_088F321C;
    case 10u: goto L_088F324C;
    case 11u: goto L_088F32B8;
    case 12u: goto L_088F3310;
    case 13u: goto L_088F3360;
    case 14u: goto L_088F3398;
    case 15u: goto L_088F33E4;
    case 16u: goto L_088F341C;
    case 17u: goto L_088F346C;
    case 18u: goto L_088F34A4;
    case 19u: goto L_088F34EC;
    case 20u: goto L_088F3524;
    case 21u: goto L_088F3568;
    case 22u: goto L_088F35A0;
    case 23u: goto L_088F35E4;
    case 24u: goto L_088F3624;
    case 25u: goto L_088F365C;
    case 26u: goto L_088F3694;
    case 27u: goto L_088F36B4;
    case 28u: goto L_088F3708;
    case 29u: goto L_088F3740;
    case 30u: goto L_088F3780;
    case 31u: goto L_088F37B8;
    case 32u: goto L_088F3804;
    case 33u: goto L_088F3844;
    case 34u: goto L_088F387C;
    case 35u: goto L_088F38B4;
    case 36u: goto L_088F38BC;
    case 37u: goto L_088F38DC;
    case 38u: goto L_088F3904;
    case 39u: goto L_088F3930;
    case 40u: goto L_088F3940;
    case 41u: goto L_088F3970;
    case 42u: goto L_088F399C;
    case 43u: goto L_088F39C8;
    case 44u: goto L_088F39F4;
    case 45u: goto L_088F3A28;
    case 46u: goto L_088F3A60;
    case 47u: goto L_088F3A98;
    case 48u: goto L_088F3AC4;
    case 49u: goto L_088F3AF0;
    case 50u: goto L_088F3B1C;
    case 51u: goto L_088F3B48;
    case 52u: goto L_088F3B74;
    case 53u: goto L_088F3BA4;
    case 54u: goto L_088F3BB8;
    case 55u: goto L_088F3BC0;
    case 56u: goto L_088F3BD8;
    case 57u: goto L_088F3BE0;
    case 58u: goto L_088F3C2C;
    case 59u: goto L_088F3C40;
    case 60u: goto L_088F3C48;
    case 61u: goto L_088F3C60;
    case 62u: goto L_088F3C74;
    case 63u: goto L_088F3CCC;
    case 64u: goto L_088F3D04;
    case 65u: goto L_088F3D30;
    case 66u: goto L_088F3D5C;
    case 67u: goto L_088F3D90;
    case 68u: goto L_088F3DC0;
    case 69u: goto L_088F3DF4;
    case 70u: goto L_088F3E20;
    case 71u: goto L_088F3E4C;
    case 72u: goto L_088F3E80;
    case 73u: goto L_088F3EAC;
    case 74u: goto L_088F3EE0;
    case 75u: goto L_088F3F18;
    case 76u: goto L_088F3F48;
    case 77u: goto L_088F3F70;
    case 78u: goto L_088F3FA0;
    case 79u: goto L_088F3FCC;
    case 80u: goto L_088F3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088F3000:
    aot_gpr[7] = (15395u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 55050u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(404), aot_gpr[2]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(424)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31728));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[6]);
    aot_gpr[8] = (15820u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[7] = (16512u << 16u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[8] = (aot_gpr[8] | 52429u);
    aot_gpr[9] = (16256u << 16u);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[7] = (17096u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30920));
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[19] = (0u | 2u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[16] = (0u | 2u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-31964));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-31928));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-31708));
    aot_gpr[23] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[6]);
      if (branch_taken) {
          goto L_088F3088;
      }
      goto L_088F3084;
    }
L_088F3084:
    aot_gpr[19] = (0u | 1u);
    goto L_088F3088;
L_088F3088:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[20]);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(328)));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (49152u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[6] = (16384u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-32232));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088F30FCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32216));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F30FCu) goto L_088F30FC;
    return;
L_088F30FC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(324)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088F3138u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32200));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3138u) goto L_088F3138;
    return;
L_088F3138:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(344)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088F3174u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32184));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3174u) goto L_088F3174;
    return;
L_088F3174:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(340)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088F31B4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32168));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F31B4u) goto L_088F31B4;
    return;
L_088F31B4:
    aot_gpr[6] = (16704u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-32152));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(80));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088F31F0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32124));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F31F0u) goto L_088F31F0;
    return;
L_088F31F0:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(84));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088F321Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32112));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F321Cu) goto L_088F321C;
    return;
L_088F321C:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(88));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088F324Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32100));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F324Cu) goto L_088F324C;
    return;
L_088F324C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(728)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (18204u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 16384u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[28] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[28] = fs * ft; }
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[9] = (17402u << 16u);
    aot_gpr[10] = (16672u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(-32088));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[23] = (aot_gpr[6] + static_cast<std::uint32_t>(-32056));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F32B8u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F32B8u) goto L_088F32B8;
    return;
L_088F32B8:
    aot_gpr[4] = (aot_gpr[19] << 7u);
    aot_gpr[5] = (aot_gpr[19] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[22] + aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(728)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-32048));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(36));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3310u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3310u) goto L_088F3310;
    return;
L_088F3310:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(732)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_gpr[5] = (17820u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[5] | 16384u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[23] = (aot_gpr[6] + static_cast<std::uint32_t>(-32016));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3360u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3360u) goto L_088F3360;
    return;
L_088F3360:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(44));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3398u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3398u) goto L_088F3398;
    return;
L_088F3398:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(724)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (14979u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[8] = (aot_gpr[8] | 4719u);
    aot_gpr[23] = (aot_gpr[5] + static_cast<std::uint32_t>(-32000));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(712)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F33E4u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F33E4u) goto L_088F33E4;
    return;
L_088F33E4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(724)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(712)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(52));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F341Cu);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F341Cu) goto L_088F341C;
    return;
L_088F341C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(736)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_gpr[5] = (17882u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[5] | 49152u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    aot_gpr[23] = (aot_gpr[6] + static_cast<std::uint32_t>(-31988));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F346Cu);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F346Cu) goto L_088F346C;
    return;
L_088F346C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(736)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(60));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F34A4u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F34A4u) goto L_088F34A4;
    return;
L_088F34A4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(624)));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-31936));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(68));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F34ECu);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F34ECu) goto L_088F34EC;
    return;
L_088F34EC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(624)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3524u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3524u) goto L_088F3524;
    return;
L_088F3524:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(628)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-31900));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(180));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3568u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3568u) goto L_088F3568;
    return;
L_088F3568:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(628)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(184));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F35A0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F35A0u) goto L_088F35A0;
    return;
L_088F35A0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(600)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-31888));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F35E4u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F35E4u) goto L_088F35E4;
    return;
L_088F35E4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(604)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(-31868));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(76));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3624u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3624u) goto L_088F3624;
    return;
L_088F3624:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(600)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F365Cu);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F365Cu) goto L_088F365C;
    return;
L_088F365C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(604)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(84));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3694u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3694u) goto L_088F3694;
    return;
L_088F3694:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2996)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (aot_gpr[4] >> 8u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_088F38BC;
      }
      goto L_088F36B4;
    }
L_088F36B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[20]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(608)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-31848));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3708u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3708u) goto L_088F3708;
    return;
L_088F3708:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(608)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(92));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3740u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3740u) goto L_088F3740;
    return;
L_088F3740:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(612)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-31832));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3780u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3780u) goto L_088F3780;
    return;
L_088F3780:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(612)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(100));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F37B8u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F37B8u) goto L_088F37B8;
    return;
L_088F37B8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(616)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[8] = (16399u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_gpr[8] = (aot_gpr[8] | 10742u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-31812));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(104));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3804u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3804u) goto L_088F3804;
    return;
L_088F3804:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(620)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[23] = (aot_gpr[5] + static_cast<std::uint32_t>(-31780));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(108));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3844u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3844u) goto L_088F3844;
    return;
L_088F3844:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(616)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F387Cu);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F387Cu) goto L_088F387C;
    return;
L_088F387C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(620)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(404)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(116));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F38B4u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F38B4u) goto L_088F38B4;
    return;
L_088F38B4:
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    goto L_088F38BC;
L_088F38BC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-31748));
    goto L_088F38DC;
L_088F38DC:
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(404)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1844)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(128), aot_gpr[5]);
    aot_gpr[30] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3904u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088F3904u) goto L_088F3904;
    return;
L_088F3904:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(404)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 255u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F3930u);
    aot_gpr[11] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 66u, 0x088E96CCu>(ctx, &aot_mem) && ctx.pc == 0x088F3930u) goto L_088F3930;
    return;
L_088F3930:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088F38DC;
      }
      goto L_088F3940;
    }
L_088F3940:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[9] = (17036u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1932));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3970u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31684));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 81u, 0x088E9844u>(ctx, &aot_mem) && ctx.pc == 0x088F3970u) goto L_088F3970;
    return;
L_088F3970:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[9] = (17332u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1936));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F399Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31668));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 81u, 0x088E9844u>(ctx, &aot_mem) && ctx.pc == 0x088F399Cu) goto L_088F399C;
    return;
L_088F399C:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1872));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F39C8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31648));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F39C8u) goto L_088F39C8;
    return;
L_088F39C8:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1876));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F39F4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31624));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F39F4u) goto L_088F39F4;
    return;
L_088F39F4:
    aot_gpr[6] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1880));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3A28u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31608));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3A28u) goto L_088F3A28;
    return;
L_088F3A28:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(1884));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-31584));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F3A60u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3A60u) goto L_088F3A60;
    return;
L_088F3A60:
    aot_gpr[6] = (16399u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (aot_gpr[6] | 10742u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1888));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3A98u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31572));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3A98u) goto L_088F3A98;
    return;
L_088F3A98:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1892));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3AC4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31552));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3AC4u) goto L_088F3AC4;
    return;
L_088F3AC4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F3AF0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3AF0u) goto L_088F3AF0;
    return;
L_088F3AF0:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1940));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3B1Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31532));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3B1Cu) goto L_088F3B1C;
    return;
L_088F3B1C:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1944));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3B48u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31508));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3B48u) goto L_088F3B48;
    return;
L_088F3B48:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1904));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3B74u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31484));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3B74u) goto L_088F3B74;
    return;
L_088F3B74:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[9] = (17224u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1908));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F3BA4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31452));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3BA4u) goto L_088F3BA4;
    return;
L_088F3BA4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1896)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
      if (branch_taken) {
          goto L_088F3BC0;
      }
      goto L_088F3BB8;
    }
L_088F3BB8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_088F3BD8;
      }
      goto L_088F3BC0;
    }
L_088F3BC0:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088F3BD8;
    }
    goto L_088F3BD8;
L_088F3BD8:
    aot_gpr[31] = (0x088F3BE0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 85u, 0x08A2F634u>(ctx, &aot_mem) && ctx.pc == 0x088F3BE0u) goto L_088F3BE0;
    return;
L_088F3BE0:
    aot_gpr[4] = (17204u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-25184)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[16] = aot_fpr[14] / aot_fpr[12];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31432));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_gpr[31] = (0x088F3C2Cu);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3C2Cu) goto L_088F3C2C;
    return;
L_088F3C2C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1900)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088F3C48;
    }
    goto L_088F3C40;
L_088F3C40:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_088F3C60;
      }
      goto L_088F3C48;
    }
L_088F3C48:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088F3C60;
    }
    goto L_088F3C60;
L_088F3C60:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x088F3C74u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 85u, 0x08A2F634u>(ctx, &aot_mem) && ctx.pc == 0x088F3C74u) goto L_088F3C74;
    return;
L_088F3C74:
    aot_gpr[4] = (17204u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[16] = aot_fpr[12] / aot_fpr[14];
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(404)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31408));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(404)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(124));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F3CCCu);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3CCCu) goto L_088F3CCC;
    return;
L_088F3CCC:
    aot_gpr[6] = (16448u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1808));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3D04u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31384));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3D04u) goto L_088F3D04;
    return;
L_088F3D04:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1816));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3D30u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31372));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3D30u) goto L_088F3D30;
    return;
L_088F3D30:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1812));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3D5Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31348));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3D5Cu) goto L_088F3D5C;
    return;
L_088F3D5C:
    aot_gpr[6] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1840));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3D90u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31328));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3D90u) goto L_088F3D90;
    return;
L_088F3D90:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1836));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3DC0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31312));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3DC0u) goto L_088F3DC0;
    return;
L_088F3DC0:
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-31296));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1952));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3DF4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31272));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3DF4u) goto L_088F3DF4;
    return;
L_088F3DF4:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1956));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3E20u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31256));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3E20u) goto L_088F3E20;
    return;
L_088F3E20:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1964));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3E4Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31236));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3E4Cu) goto L_088F3E4C;
    return;
L_088F3E4C:
    aot_gpr[6] = (48896u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1960));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3E80u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31216));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3E80u) goto L_088F3E80;
    return;
L_088F3E80:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1972));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3EACu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31200));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3EACu) goto L_088F3EAC;
    return;
L_088F3EAC:
    aot_gpr[6] = (16544u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1968));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3EE0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31180));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3EE0u) goto L_088F3EE0;
    return;
L_088F3EE0:
    aot_gpr[6] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1976));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3F18u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31156));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3F18u) goto L_088F3F18;
    return;
L_088F3F18:
    aot_gpr[6] = (17076u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1980));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3F48u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31136));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 81u, 0x088E9844u>(ctx, &aot_mem) && ctx.pc == 0x088F3F48u) goto L_088F3F48;
    return;
L_088F3F48:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1984));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3F70u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31116));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 81u, 0x088E9844u>(ctx, &aot_mem) && ctx.pc == 0x088F3F70u) goto L_088F3F70;
    return;
L_088F3F70:
    aot_gpr[6] = (16179u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (aot_gpr[6] | 13107u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1992));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3FA0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31096));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 81u, 0x088E9844u>(ctx, &aot_mem) && ctx.pc == 0x088F3FA0u) goto L_088F3FA0;
    return;
L_088F3FA0:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1996));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3FCCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31076));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3FCCu) goto L_088F3FCC;
    return;
L_088F3FCC:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2000));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088F3FF8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31052));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F3FF8u) goto L_088F3FF8;
    return;
L_088F3FF8:
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.pc = 0x088F4000u; return;
}

void recomp_unit_0239(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0239_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_239(Runtime &runtime) {
    runtime.register_generated_unit(239u, 0x088F3000u, 4096u, &recomp_unit_0239, &recomp_unit_0239_entry);
    runtime.register_function(0x088F3000u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3084u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3088u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F30FCu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3138u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3174u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F31B4u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F31F0u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F321Cu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F324Cu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F32B8u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3310u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3360u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3398u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F33E4u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F341Cu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F346Cu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F34A4u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F34ECu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3524u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3568u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F35A0u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F35E4u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3624u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F365Cu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3694u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F36B4u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3708u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3740u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3780u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F37B8u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3804u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3844u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F387Cu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F38B4u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F38BCu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F38DCu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3904u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3930u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3940u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3970u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F399Cu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F39C8u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F39F4u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3A28u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3A60u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3A98u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3AC4u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3AF0u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3B1Cu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3B48u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3B74u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3BA4u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3BB8u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3BC0u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3BD8u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3BE0u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3C2Cu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3C40u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3C48u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3C60u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3C74u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3CCCu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3D04u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3D30u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3D5Cu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3D90u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3DC0u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3DF4u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3E20u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3E4Cu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3E80u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3EACu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3EE0u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3F18u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3F48u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3F70u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3FA0u, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3FCCu, &recomp_unit_0239, "recomp_unit_0239");
    runtime.register_function(0x088F3FF8u, &recomp_unit_0239, "recomp_unit_0239");
}
} // namespace psprecomp
