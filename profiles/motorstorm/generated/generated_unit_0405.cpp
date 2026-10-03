#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0405[1014] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 20, 0, 0, 0,
    21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 97, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 140, 141, 0, 0, 142, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 156, 0, 157,
};
void recomp_unit_0405_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08999004u;
        entry_id = (entry_delta < 4056u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0405[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08999004;
    case 2u: goto L_0899900C;
    case 3u: goto L_08999014;
    case 4u: goto L_0899901C;
    case 5u: goto L_08999024;
    case 6u: goto L_08999050;
    case 7u: goto L_08999068;
    case 8u: goto L_08999070;
    case 9u: goto L_08999084;
    case 10u: goto L_089990A0;
    case 11u: goto L_089990B0;
    case 12u: goto L_089990B8;
    case 13u: goto L_089990C4;
    case 14u: goto L_089990E0;
    case 15u: goto L_089990EC;
    case 16u: goto L_08999128;
    case 17u: goto L_08999144;
    case 18u: goto L_08999160;
    case 19u: goto L_08999170;
    case 20u: goto L_08999174;
    case 21u: goto L_08999184;
    case 22u: goto L_0899918C;
    case 23u: goto L_089991BC;
    case 24u: goto L_089991CC;
    case 25u: goto L_089991D0;
    case 26u: goto L_089991D8;
    case 27u: goto L_089991F0;
    case 28u: goto L_089991F8;
    case 29u: goto L_08999200;
    case 30u: goto L_08999224;
    case 31u: goto L_08999250;
    case 32u: goto L_08999274;
    case 33u: goto L_08999290;
    case 34u: goto L_089992A8;
    case 35u: goto L_089992E8;
    case 36u: goto L_089992F4;
    case 37u: goto L_08999334;
    case 38u: goto L_08999350;
    case 39u: goto L_08999368;
    case 40u: goto L_089993C8;
    case 41u: goto L_089993E0;
    case 42u: goto L_089993F8;
    case 43u: goto L_08999458;
    case 44u: goto L_08999470;
    case 45u: goto L_089994A0;
    case 46u: goto L_089994A8;
    case 47u: goto L_089994D4;
    case 48u: goto L_089994E4;
    case 49u: goto L_089994FC;
    case 50u: goto L_08999538;
    case 51u: goto L_0899953C;
    case 52u: goto L_0899954C;
    case 53u: goto L_08999560;
    case 54u: goto L_08999570;
    case 55u: goto L_08999574;
    case 56u: goto L_089995B0;
    case 57u: goto L_089995B4;
    case 58u: goto L_089995CC;
    case 59u: goto L_089995F8;
    case 60u: goto L_08999624;
    case 61u: goto L_0899962C;
    case 62u: goto L_08999658;
    case 63u: goto L_08999684;
    case 64u: goto L_0899968C;
    case 65u: goto L_089996BC;
    case 66u: goto L_089996E8;
    case 67u: goto L_089996FC;
    case 68u: goto L_08999708;
    case 69u: goto L_08999734;
    case 70u: goto L_08999744;
    case 71u: goto L_0899975C;
    case 72u: goto L_08999798;
    case 73u: goto L_0899979C;
    case 74u: goto L_089997AC;
    case 75u: goto L_089997C0;
    case 76u: goto L_089997D0;
    case 77u: goto L_089997D4;
    case 78u: goto L_08999810;
    case 79u: goto L_08999814;
    case 80u: goto L_0899982C;
    case 81u: goto L_08999858;
    case 82u: goto L_08999884;
    case 83u: goto L_0899988C;
    case 84u: goto L_089998B8;
    case 85u: goto L_089998E4;
    case 86u: goto L_089998EC;
    case 87u: goto L_08999928;
    case 88u: goto L_0899992C;
    case 89u: goto L_08999934;
    case 90u: goto L_08999978;
    case 91u: goto L_0899998C;
    case 92u: goto L_08999998;
    case 93u: goto L_089999D8;
    case 94u: goto L_089999F0;
    case 95u: goto L_08999A18;
    case 96u: goto L_08999A5C;
    case 97u: goto L_08999A60;
    case 98u: goto L_08999A68;
    case 99u: goto L_08999AAC;
    case 100u: goto L_08999AC0;
    case 101u: goto L_08999ACC;
    case 102u: goto L_08999B0C;
    case 103u: goto L_08999B24;
    case 104u: goto L_08999B50;
    case 105u: goto L_08999B84;
    case 106u: goto L_08999B8C;
    case 107u: goto L_08999BB8;
    case 108u: goto L_08999BC4;
    case 109u: goto L_08999BF0;
    case 110u: goto L_08999C08;
    case 111u: goto L_08999C38;
    case 112u: goto L_08999C48;
    case 113u: goto L_08999C58;
    case 114u: goto L_08999C60;
    case 115u: goto L_08999C8C;
    case 116u: goto L_08999C98;
    case 117u: goto L_08999CA8;
    case 118u: goto L_08999CC0;
    case 119u: goto L_08999D14;
    case 120u: goto L_08999D24;
    case 121u: goto L_08999D38;
    case 122u: goto L_08999D48;
    case 123u: goto L_08999D5C;
    case 124u: goto L_08999D6C;
    case 125u: goto L_08999D80;
    case 126u: goto L_08999D90;
    case 127u: goto L_08999DBC;
    case 128u: goto L_08999DD4;
    case 129u: goto L_08999DDC;
    case 130u: goto L_08999DE4;
    case 131u: goto L_08999DF8;
    case 132u: goto L_08999E24;
    case 133u: goto L_08999E2C;
    case 134u: goto L_08999E68;
    case 135u: goto L_08999E74;
    case 136u: goto L_08999E88;
    case 137u: goto L_08999E9C;
    case 138u: goto L_08999EA4;
    case 139u: goto L_08999EB4;
    case 140u: goto L_08999EC0;
    case 141u: goto L_08999EC4;
    case 142u: goto L_08999ED0;
    case 143u: goto L_08999ED4;
    case 144u: goto L_08999EDC;
    case 145u: goto L_08999EF8;
    case 146u: goto L_08999F24;
    case 147u: goto L_08999F34;
    case 148u: goto L_08999F40;
    case 149u: goto L_08999F4C;
    case 150u: goto L_08999F50;
    case 151u: goto L_08999F64;
    case 152u: goto L_08999FA0;
    case 153u: goto L_08999FB0;
    case 154u: goto L_08999FBC;
    case 155u: goto L_08999FC8;
    case 156u: goto L_08999FD0;
    case 157u: goto L_08999FD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08999004:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16024), aot_gpr[16]);
    (void)rt.invoke_chained_direct<&recomp_unit_0404_entry, 404u, 222u, 0x08998F74u>(ctx, &aot_mem); return;
L_0899900C:
    aot_gpr[31] = (0x08999014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 218u, 0x08997A04u>(ctx, &aot_mem) && ctx.pc == 0x08999014u) goto L_08999014;
    return;
L_08999014:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0404_entry, 404u, 222u, 0x08998F74u>(ctx, &aot_mem); return;
L_0899901C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999024:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(520));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[6];
    aot_gpr[8] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08999068;
      }
      goto L_08999050;
    }
L_08999050:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999068:
    aot_gpr[31] = (0x08999070u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    goto L_08999CC0;
L_08999070:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999084:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_089990C4;
      }
      goto L_089990A0;
    }
L_089990A0:
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x089990B0u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089990B0u) goto L_089990B0;
    return;
L_089990B0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089990C4;
      }
      goto L_089990B8;
    }
L_089990B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[7] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089990E0;
      }
      goto L_089990C4;
    }
L_089990C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089990E0:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(64));
    goto L_089990EC;
L_089990EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(518)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(519)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(517)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(516)));
    aot_gpr[3] = (aot_gpr[3] << 8u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[9];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089990EC;
      }
      goto L_08999128;
    }
L_08999128:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999144:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08999174;
      }
      goto L_08999160;
    }
L_08999160:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[16] - aot_gpr[6]);
    aot_gpr[31] = (0x08999170u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(520));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08999170u) goto L_08999170;
    return;
L_08999170:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08999174;
L_08999174:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999184:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899918C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[3] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-23652)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08999224;
      }
      goto L_089991BC;
    }
L_089991BC:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(-23628));
    aot_gpr[16] = (aot_gpr[3] + static_cast<std::uint32_t>(-23652));
    goto L_089991D8;
L_089991CC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089991D0;
L_089991D0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08999224;
      }
      goto L_089991D8;
    }
L_089991D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089991CC;
      }
      goto L_089991F0;
    }
L_089991F0:
    aot_gpr[31] = (0x089991F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x089991F8u) goto L_089991F8;
    return;
L_089991F8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089991D0;
    }
    goto L_08999200;
L_08999200:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999224:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999250:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[12] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[8] = (64766u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-257));
    aot_gpr[9] = (64508u << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1028));
    goto L_08999274;
L_08999274:
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(-4));
    // nop
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08999274;
      }
      goto L_08999290;
    }
L_08999290:
    aot_gpr[12] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[13] = (0u | 0u);
    aot_gpr[14] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    goto L_089992A8;
L_089992A8:
    aot_gpr[13] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] & 3u);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[14]);
    aot_gpr[13] = (aot_gpr[12] + aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(5));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[12]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    { const bool branch_taken = aot_gpr[11] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[15]));
      if (branch_taken) {
          goto L_089992A8;
      }
      goto L_089992E8;
    }
L_089992E8:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    goto L_089992F4;
L_089992F4:
    aot_gpr[13] = (aot_gpr[9] + aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] & 63u);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[14]);
    aot_gpr[13] = (aot_gpr[12] + aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(3));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[12]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    { const bool branch_taken = aot_gpr[11] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[15]));
      if (branch_taken) {
          goto L_089992F4;
      }
      goto L_08999334;
    }
L_08999334:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999350:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08999368;
L_08999368:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(5));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[13] = (aot_gpr[12] + aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[14] = (aot_gpr[12] + aot_gpr[10]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[11]));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[13] = (aot_gpr[12] + aot_gpr[11]);
    aot_gpr[8] = (aot_gpr[12] + aot_gpr[8]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[13]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08999368;
      }
      goto L_089993C8;
    }
L_089993C8:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[10]));
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089993E0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089993F8;
L_089993F8:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(5));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[13] = (aot_gpr[12] + aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[14] = (aot_gpr[12] + aot_gpr[10]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[11]));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[12] + aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[13] = (aot_gpr[12] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[13]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[10] = (aot_gpr[10] & 255u);
      if (branch_taken) {
          goto L_089993F8;
      }
      goto L_08999458;
    }
L_08999458:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[10]));
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2080));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2060), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2048), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2056), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2052), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2064), aot_gpr[31]);
    aot_gpr[31] = (0x089994A0u);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 42u, 0x0899DCD8u>(ctx, &aot_mem) && ctx.pc == 0x089994A0u) goto L_089994A0;
    return;
L_089994A0:
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    goto L_089994A8;
L_089994A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[7];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089994A8;
      }
      goto L_089994D4;
    }
L_089994D4:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(448));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    aot_gpr[31] = (0x089994E4u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089994E4u) goto L_089994E4;
    return;
L_089994E4:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[6] & 3u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089995CC;
      }
      goto L_089994FC;
    }
L_089994FC:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089994FC;
      }
      goto L_08999538;
    }
L_08999538:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1088));
    goto L_0899953C;
L_0899953C:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(448));
    aot_gpr[31] = (0x0899954Cu);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0899954Cu) goto L_0899954C;
    return;
L_0899954C:
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08999560u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 99u, 0x0899E68Cu>(ctx, &aot_mem) && ctx.pc == 0x08999560u) goto L_08999560;
    return;
L_08999560:
    aot_gpr[2] = (aot_gpr[18] & 3u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(1600));
      if (branch_taken) {
          goto L_0899962C;
      }
      goto L_08999570;
    }
L_08999570:
    aot_gpr[5] = (aot_gpr[6] + 0u);
    goto L_08999574;
L_08999574:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-1), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[5];
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08999574;
      }
      goto L_089995B0;
    }
L_089995B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2064)));
    goto L_089995B4;
L_089995B4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2060)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2056)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2052)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2048)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2080));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089995CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08999538;
      }
      goto L_089995F8;
    }
L_089995F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089995CC;
      }
      goto L_08999624;
    }
L_08999624:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1088));
    goto L_0899953C;
L_0899962C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089995B0;
      }
      goto L_08999658;
    }
L_08999658:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899962C;
      }
      goto L_08999684;
    }
L_08999684:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2064)));
    goto L_089995B4;
L_0899968C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2080));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2060), aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[5] + 0u);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2052), aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2048), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2064), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2056), aot_gpr[18]);
    goto L_089996BC;
L_089996BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089996BC;
      }
      goto L_089996E8;
    }
L_089996E8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(448));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089996FCu);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089996FCu) goto L_089996FC;
    return;
L_089996FC:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    goto L_08999708;
L_08999708:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08999708;
      }
      goto L_08999734;
    }
L_08999734:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(448));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    aot_gpr[31] = (0x08999744u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08999744u) goto L_08999744;
    return;
L_08999744:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[6] & 3u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0899982C;
      }
      goto L_0899975C;
    }
L_0899975C:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899975C;
      }
      goto L_08999798;
    }
L_08999798:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1088));
    goto L_0899979C;
L_0899979C:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(448));
    aot_gpr[31] = (0x089997ACu);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089997ACu) goto L_089997AC;
    return;
L_089997AC:
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089997C0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 99u, 0x0899E68Cu>(ctx, &aot_mem) && ctx.pc == 0x089997C0u) goto L_089997C0;
    return;
L_089997C0:
    aot_gpr[2] = (aot_gpr[19] & 3u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(1600));
      if (branch_taken) {
          goto L_0899988C;
      }
      goto L_089997D0;
    }
L_089997D0:
    aot_gpr[5] = (aot_gpr[6] + 0u);
    goto L_089997D4;
L_089997D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-1), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[5];
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[2]);
      if (branch_taken) {
          goto L_089997D4;
      }
      goto L_08999810;
    }
L_08999810:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2064)));
    goto L_08999814;
L_08999814:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2060)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2056)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2052)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2048)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2080));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899982C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08999798;
      }
      goto L_08999858;
    }
L_08999858:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899982C;
      }
      goto L_08999884;
    }
L_08999884:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1088));
    goto L_0899979C;
L_0899988C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08999810;
      }
      goto L_089998B8;
    }
L_089998B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899988C;
      }
      goto L_089998E4;
    }
L_089998E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2064)));
    goto L_08999814;
L_089998EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < 64 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
      if (branch_taken) {
          goto L_089999F0;
      }
      goto L_08999928;
    }
L_08999928:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(64));
    goto L_0899992C;
L_0899992C:
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (0u + 0u);
    goto L_08999934;
L_08999934:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(3)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] << 24u);
    aot_gpr[3] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[19];
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_08999934;
      }
      goto L_08999978;
    }
L_08999978:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x0899998Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(17));
    goto L_08999470;
L_0899998C:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    goto L_08999998;
L_08999998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(3)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] << 16u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 24u);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08999998;
      }
      goto L_089999D8;
    }
L_089999D8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[17]) < 64 ? 1u : 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(64));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0899992C;
      }
      goto L_089999F0;
    }
L_089999F0:
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999A18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[8] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
      if (branch_taken) {
          goto L_08999B24;
      }
      goto L_08999A5C;
    }
L_08999A5C:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(64));
    goto L_08999A60;
L_08999A60:
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (0u + 0u);
    goto L_08999A68;
L_08999A68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(3)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] << 24u);
    aot_gpr[3] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[19];
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_08999A68;
      }
      goto L_08999AAC;
    }
L_08999AAC:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08999AC0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    goto L_0899968C;
L_08999AC0:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    goto L_08999ACC;
L_08999ACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(3)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] << 16u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 24u);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08999ACC;
      }
      goto L_08999B0C;
    }
L_08999B0C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(64));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08999A60;
      }
      goto L_08999B24;
    }
L_08999B24:
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999B50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1040));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1032), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1028), aot_gpr[17]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1024), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1036), aot_gpr[31]);
    aot_gpr[31] = (0x08999B84u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 200u, 0x0899ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08999B84u) goto L_08999B84;
    return;
L_08999B84:
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    goto L_08999B8C;
L_08999B8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08999B8C;
      }
      goto L_08999BB8;
    }
L_08999BB8:
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    goto L_08999BC4;
L_08999BC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08999BC4;
      }
      goto L_08999BF0;
    }
L_08999BF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1028)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1024)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999C08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1040));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1032), aot_gpr[18]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1028), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1024), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1036), aot_gpr[31]);
    aot_gpr[31] = (0x08999C38u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08999C38u) goto L_08999C38;
    return;
L_08999C38:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08999C48u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08999C48u) goto L_08999C48;
    return;
L_08999C48:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08999C58u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 26u, 0x0899DB70u>(ctx, &aot_mem) && ctx.pc == 0x08999C58u) goto L_08999C58;
    return;
L_08999C58:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    goto L_08999C60;
L_08999C60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[7];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08999C60;
      }
      goto L_08999C8C;
    }
L_08999C8C:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08999C98u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 78u, 0x0899F50Cu>(ctx, &aot_mem) && ctx.pc == 0x08999C98u) goto L_08999C98;
    return;
L_08999C98:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08999CA8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 30u, 0x0899DBC8u>(ctx, &aot_mem) && ctx.pc == 0x08999CA8u) goto L_08999CA8;
    return;
L_08999CA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1028)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1024)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999CC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2096));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2076), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2072), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2068), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2056), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2080), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2064), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2060), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2052), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    aot_gpr[31] = (0x08999D14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2048), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08999D14u) goto L_08999D14;
    return;
L_08999D14:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08999D24u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08999D24u) goto L_08999D24;
    return;
L_08999D24:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08999D38u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08999D38u) goto L_08999D38;
    return;
L_08999D38:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08999D48u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08999D48u) goto L_08999D48;
    return;
L_08999D48:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08999D5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 34u, 0x0899DC18u>(ctx, &aot_mem) && ctx.pc == 0x08999D5Cu) goto L_08999D5C;
    return;
L_08999D5C:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08999D6Cu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 34u, 0x0899DC18u>(ctx, &aot_mem) && ctx.pc == 0x08999D6Cu) goto L_08999D6C;
    return;
L_08999D6C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08999D80u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 99u, 0x0899E68Cu>(ctx, &aot_mem) && ctx.pc == 0x08999D80u) goto L_08999D80;
    return;
L_08999D80:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08999D90u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 38u, 0x0899DC84u>(ctx, &aot_mem) && ctx.pc == 0x08999D90u) goto L_08999D90;
    return;
L_08999D90:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2080)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2076)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2072)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2068)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2064)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2060)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2056)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2052)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2048)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2096));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999DBC:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(12632)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(35));
    aot_gpr[3] = (aot_gpr[3] >> 8u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08999DDC;
      }
      goto L_08999DD4;
    }
L_08999DD4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999DDC:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999DE4:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(-23268));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(96));
    goto L_08999DF8;
L_08999DF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[9];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08999DF8;
      }
      goto L_08999E24;
    }
L_08999E24:
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(84));
    goto L_08999DBC;
L_08999E2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[2]);
      if (branch_taken) {
          goto L_08999FD0;
      }
      goto L_08999E68;
    }
L_08999E68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    goto L_08999E74;
L_08999E74:
    aot_gpr[2] = (aot_gpr[19] >> 29u);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = ((aot_gpr[4] >> 3u) & 0x0000003Fu);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[2]);
      if (branch_taken) {
          goto L_08999EC4;
      }
      goto L_08999E88;
    }
L_08999E88:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[18] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08999EDC;
      }
      goto L_08999E9C;
    }
L_08999E9C:
    aot_gpr[31] = (0x08999EA4u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08999EA4u) goto L_08999EA4;
    return;
L_08999EA4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08999EB4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0407_entry, 407u, 2u, 0x0899B960u>(ctx, &aot_mem) && ctx.pc == 0x08999EB4u) goto L_08999EB4;
    return;
L_08999EB4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08999EC0u);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0406_entry, 406u, 14u, 0x0899A110u>(ctx, &aot_mem) && ctx.pc == 0x08999EC0u) goto L_08999EC0;
    return;
L_08999EC0:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    goto L_08999EC4;
L_08999EC4:
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[17] | aot_gpr[16]);
      if (branch_taken) {
          goto L_08999F50;
      }
      goto L_08999ED0;
    }
L_08999ED0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08999ED4;
L_08999ED4:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    goto L_08999EDC;
L_08999EDC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem); return;
L_08999EF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08999EF8;
      }
      goto L_08999F24;
    }
L_08999F24:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x08999F34u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0407_entry, 407u, 2u, 0x0899B960u>(ctx, &aot_mem) && ctx.pc == 0x08999F34u) goto L_08999F34;
    return;
L_08999F34:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-64));
    aot_gpr[31] = (0x08999F40u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0406_entry, 406u, 14u, 0x0899A110u>(ctx, &aot_mem) && ctx.pc == 0x08999F40u) goto L_08999F40;
    return;
L_08999F40:
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_08999ED0;
      }
      goto L_08999F4C;
    }
L_08999F4C:
    aot_gpr[2] = (aot_gpr[17] | aot_gpr[16]);
    goto L_08999F50;
L_08999F50:
    aot_gpr[2] = (aot_gpr[2] & 3u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08999EF8;
      }
      goto L_08999F64;
    }
L_08999F64:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08999F64;
      }
      goto L_08999FA0;
    }
L_08999FA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x08999FB0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0407_entry, 407u, 2u, 0x0899B960u>(ctx, &aot_mem) && ctx.pc == 0x08999FB0u) goto L_08999FB0;
    return;
L_08999FB0:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-64));
    aot_gpr[31] = (0x08999FBCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0406_entry, 406u, 14u, 0x0899A110u>(ctx, &aot_mem) && ctx.pc == 0x08999FBCu) goto L_08999FBC;
    return;
L_08999FBC:
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_08999F4C;
      }
      goto L_08999FC8;
    }
L_08999FC8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08999ED4;
L_08999FD0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_08999E74;
L_08999FD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(63));
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    ctx.pc = 0x0899A000u; return;
}

void recomp_unit_0405(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0405_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_405(Runtime &runtime) {
    runtime.register_generated_unit(405u, 0x08999000u, 4096u, &recomp_unit_0405, &recomp_unit_0405_entry);
    runtime.register_function(0x08999004u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899900Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999014u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899901Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999024u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999050u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999068u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999070u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999084u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089990A0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089990B0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089990B8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089990C4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089990E0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089990ECu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999128u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999144u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999160u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999170u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999174u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999184u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899918Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089991BCu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089991CCu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089991D0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089991D8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089991F0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089991F8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999200u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999224u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999250u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999274u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999290u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089992A8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089992E8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089992F4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999334u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999350u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999368u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089993C8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089993E0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089993F8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999458u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999470u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089994A0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089994A8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089994D4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089994E4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089994FCu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999538u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899953Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899954Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999560u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999570u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999574u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089995B0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089995B4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089995CCu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089995F8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999624u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899962Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999658u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999684u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899968Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089996BCu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089996E8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089996FCu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999708u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999734u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999744u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899975Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999798u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899979Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089997ACu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089997C0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089997D0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089997D4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999810u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999814u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899982Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999858u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999884u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899988Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089998B8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089998E4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089998ECu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999928u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899992Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999934u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999978u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x0899998Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999998u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089999D8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x089999F0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999A18u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999A5Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999A60u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999A68u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999AACu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999AC0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999ACCu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999B0Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999B24u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999B50u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999B84u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999B8Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999BB8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999BC4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999BF0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999C08u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999C38u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999C48u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999C58u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999C60u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999C8Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999C98u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999CA8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999CC0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999D14u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999D24u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999D38u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999D48u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999D5Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999D6Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999D80u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999D90u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999DBCu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999DD4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999DDCu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999DE4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999DF8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999E24u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999E2Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999E68u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999E74u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999E88u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999E9Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999EA4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999EB4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999EC0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999EC4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999ED0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999ED4u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999EDCu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999EF8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999F24u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999F34u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999F40u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999F4Cu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999F50u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999F64u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999FA0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999FB0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999FBCu, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999FC8u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999FD0u, &recomp_unit_0405, "recomp_unit_0405");
    runtime.register_function(0x08999FD8u, &recomp_unit_0405, "recomp_unit_0405");
}
} // namespace psprecomp
