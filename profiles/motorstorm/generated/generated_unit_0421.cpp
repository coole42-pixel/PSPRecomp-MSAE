#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0421[1017] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14,
    0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0,
    28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 33, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70,
    0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0,
    84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0,
    0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0,
    0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 121, 0, 122, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140,
};
void recomp_unit_0421_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089A9004u;
        entry_id = (entry_delta < 4068u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0421[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A9004;
    case 2u: goto L_089A900C;
    case 3u: goto L_089A9014;
    case 4u: goto L_089A901C;
    case 5u: goto L_089A9028;
    case 6u: goto L_089A9040;
    case 7u: goto L_089A9048;
    case 8u: goto L_089A9050;
    case 9u: goto L_089A9058;
    case 10u: goto L_089A9060;
    case 11u: goto L_089A9068;
    case 12u: goto L_089A9070;
    case 13u: goto L_089A9078;
    case 14u: goto L_089A9080;
    case 15u: goto L_089A9088;
    case 16u: goto L_089A9090;
    case 17u: goto L_089A909C;
    case 18u: goto L_089A90B4;
    case 19u: goto L_089A90BC;
    case 20u: goto L_089A90C4;
    case 21u: goto L_089A90CC;
    case 22u: goto L_089A90D4;
    case 23u: goto L_089A90DC;
    case 24u: goto L_089A90E4;
    case 25u: goto L_089A90EC;
    case 26u: goto L_089A90F4;
    case 27u: goto L_089A90FC;
    case 28u: goto L_089A9104;
    case 29u: goto L_089A910C;
    case 30u: goto L_089A9148;
    case 31u: goto L_089A9150;
    case 32u: goto L_089A9174;
    case 33u: goto L_089A9178;
    case 34u: goto L_089A9198;
    case 35u: goto L_089A91AC;
    case 36u: goto L_089A925C;
    case 37u: goto L_089A9298;
    case 38u: goto L_089A92C4;
    case 39u: goto L_089A92DC;
    case 40u: goto L_089A92E4;
    case 41u: goto L_089A9304;
    case 42u: goto L_089A9314;
    case 43u: goto L_089A9324;
    case 44u: goto L_089A9344;
    case 45u: goto L_089A9370;
    case 46u: goto L_089A9374;
    case 47u: goto L_089A9408;
    case 48u: goto L_089A941C;
    case 49u: goto L_089A9468;
    case 50u: goto L_089A94B4;
    case 51u: goto L_089A94BC;
    case 52u: goto L_089A94E8;
    case 53u: goto L_089A94FC;
    case 54u: goto L_089A9510;
    case 55u: goto L_089A951C;
    case 56u: goto L_089A9538;
    case 57u: goto L_089A953C;
    case 58u: goto L_089A95D0;
    case 59u: goto L_089A95F8;
    case 60u: goto L_089A95FC;
    case 61u: goto L_089A9614;
    case 62u: goto L_089A9660;
    case 63u: goto L_089A9668;
    case 64u: goto L_089A9670;
    case 65u: goto L_089A96F0;
    case 66u: goto L_089A9700;
    case 67u: goto L_089A9734;
    case 68u: goto L_089A9750;
    case 69u: goto L_089A9770;
    case 70u: goto L_089A9780;
    case 71u: goto L_089A9794;
    case 72u: goto L_089A97A0;
    case 73u: goto L_089A97A8;
    case 74u: goto L_089A97BC;
    case 75u: goto L_089A97C4;
    case 76u: goto L_089A9858;
    case 77u: goto L_089A9880;
    case 78u: goto L_089A9884;
    case 79u: goto L_089A9894;
    case 80u: goto L_089A98E0;
    case 81u: goto L_089A98E8;
    case 82u: goto L_089A98F0;
    case 83u: goto L_089A98F8;
    case 84u: goto L_089A9904;
    case 85u: goto L_089A990C;
    case 86u: goto L_089A9914;
    case 87u: goto L_089A991C;
    case 88u: goto L_089A9944;
    case 89u: goto L_089A995C;
    case 90u: goto L_089A997C;
    case 91u: goto L_089A9998;
    case 92u: goto L_089A99A4;
    case 93u: goto L_089A99AC;
    case 94u: goto L_089A99C0;
    case 95u: goto L_089A99CC;
    case 96u: goto L_089A99D8;
    case 97u: goto L_089A9A70;
    case 98u: goto L_089A9A78;
    case 99u: goto L_089A9A88;
    case 100u: goto L_089A9A98;
    case 101u: goto L_089A9AA8;
    case 102u: goto L_089A9AB8;
    case 103u: goto L_089A9AC8;
    case 104u: goto L_089A9AD8;
    case 105u: goto L_089A9AE8;
    case 106u: goto L_089A9AF8;
    case 107u: goto L_089A9B08;
    case 108u: goto L_089A9B18;
    case 109u: goto L_089A9B28;
    case 110u: goto L_089A9B38;
    case 111u: goto L_089A9B48;
    case 112u: goto L_089A9B58;
    case 113u: goto L_089A9B68;
    case 114u: goto L_089A9B78;
    case 115u: goto L_089A9B98;
    case 116u: goto L_089A9BA4;
    case 117u: goto L_089A9BB4;
    case 118u: goto L_089A9BD4;
    case 119u: goto L_089A9BDC;
    case 120u: goto L_089A9BE8;
    case 121u: goto L_089A9BF4;
    case 122u: goto L_089A9BFC;
    case 123u: goto L_089A9C04;
    case 124u: goto L_089A9C40;
    case 125u: goto L_089A9D0C;
    case 126u: goto L_089A9D20;
    case 127u: goto L_089A9D34;
    case 128u: goto L_089A9DF8;
    case 129u: goto L_089A9E04;
    case 130u: goto L_089A9E1C;
    case 131u: goto L_089A9E34;
    case 132u: goto L_089A9E48;
    case 133u: goto L_089A9E98;
    case 134u: goto L_089A9EE4;
    case 135u: goto L_089A9EF4;
    case 136u: goto L_089A9F14;
    case 137u: goto L_089A9F28;
    case 138u: goto L_089A9F54;
    case 139u: goto L_089A9FD4;
    case 140u: goto L_089A9FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A9004:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A900C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9014:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A901C:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089A9040;
      }
      goto L_089A9028;
    }
L_089A9028:
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16060));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9040:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9048:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9050:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9058:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9060:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9068:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9070:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9078:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9080:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9088:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9090:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089A90B4;
      }
      goto L_089A909C;
    }
L_089A909C:
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16020));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A90B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A90BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A90C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A90CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A90D4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A90DC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A90E4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A90EC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A90F4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A90FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9104:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089A9148;
      }
      goto L_089A910C;
    }
L_089A910C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    goto L_089A9148;
L_089A9148:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9150:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-592));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(564), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(560), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(576), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(572), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(568), aot_gpr[18]);
      if (branch_taken) {
          goto L_089A9198;
      }
      goto L_089A9174;
    }
L_089A9174:
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089A9178;
L_089A9178:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(576)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(572)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(568)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    aot_gpr[2] = (aot_gpr[12] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9198:
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(21));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(61));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089A9174;
      }
      goto L_089A91AC;
    }
L_089A91AC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(11), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(15), aot_gpr[6]));
    rt.memory().aot_store_word_left(aot_gpr[18] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(19), aot_gpr[9]));
    rt.memory().aot_store_word_right(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[6]));
    rt.memory().aot_store_word_left(aot_gpr[18] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[9]));
    rt.memory().aot_store_word_left(aot_gpr[18] + static_cast<std::uint32_t>(11), aot_gpr[5]);
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[10] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[10] + static_cast<std::uint32_t>(7), aot_gpr[7]));
    rt.memory().aot_store_word_right(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[18] + static_cast<std::uint32_t>(15), aot_gpr[6]);
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[10] + static_cast<std::uint32_t>(11), aot_gpr[8]));
    rt.memory().aot_store_word_right(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[10] + static_cast<std::uint32_t>(15), aot_gpr[2]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[7]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    rt.memory().aot_store_word_left(aot_gpr[18] + static_cast<std::uint32_t>(19), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[8]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[10] + static_cast<std::uint32_t>(12), aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(7), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(11), aot_gpr[8]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(15), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[31] = (0x089A925Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 2u, 0x08990008u>(ctx, &aot_mem) && ctx.pc == 0x089A925Cu) goto L_089A925C;
    return;
L_089A925C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(468));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[31] = (0x089A9298u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 91u, 0x089B373Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9298u) goto L_089A9298;
    return;
L_089A9298:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(44));
    aot_gpr[8] = (aot_gpr[18] + 0u);
    aot_gpr[11] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(61));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_089A9178;
      }
      goto L_089A92C4;
    }
L_089A92C4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[12] = (2203u << 16u);
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(-25604));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A92DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A92DCu) goto L_089A92DC;
    return;
L_089A92DC:
    aot_gpr[12] = (aot_gpr[2] + 0u);
    goto L_089A9178;
L_089A92E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089A9408;
      }
      goto L_089A9304;
    }
L_089A9304:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(148));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A9314u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9314u) goto L_089A9314;
    return;
L_089A9314:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x089A9324u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    goto L_089A9090;
L_089A9324:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(116));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (aot_gpr[6] & 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(180));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
      if (branch_taken) {
          goto L_089A941C;
      }
      goto L_089A9344;
    }
L_089A9344:
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
          goto L_089A9344;
      }
      goto L_089A9370;
    }
L_089A9370:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_089A9374;
L_089A9374:
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(19), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(23), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(27), aot_gpr[11]));
    aot_gpr[12] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(31), aot_gpr[12]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[11]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]));
    aot_gpr[12] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[12]));
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(19), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(23), aot_gpr[10]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(27), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[11]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(31), aot_gpr[12]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[12]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A9408u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A9408u) goto L_089A9408;
    return;
L_089A9408:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A941C:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[4]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-5), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-1), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[4]);
      if (branch_taken) {
          goto L_089A9370;
      }
      goto L_089A9468;
    }
L_089A9468:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[4]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-5), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-1), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[4]);
      if (branch_taken) {
          goto L_089A941C;
      }
      goto L_089A94B4;
    }
L_089A94B4:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_089A9374;
L_089A94BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-656));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(636), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(632), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(624), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(640), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(628), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089A9670;
      }
      goto L_089A94E8;
    }
L_089A94E8:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089A94FCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A94FCu) goto L_089A94FC;
    return;
L_089A94FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
      if (branch_taken) {
          goto L_089A9668;
      }
      goto L_089A9510;
    }
L_089A9510:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A9538;
      }
      goto L_089A951C;
    }
L_089A951C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(636)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(628)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9538:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    goto L_089A953C;
L_089A953C:
    aot_gpr[2] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(19), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(23), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(27), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(31), aot_gpr[11]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[10]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[11]));
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(19), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(23), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(27), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(31), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[11]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(100)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
        goto L_089A9614;
    }
    goto L_089A95D0;
L_089A95D0:
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A95F8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A95F8u) goto L_089A95F8;
    return;
L_089A95F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    goto L_089A95FC;
L_089A95FC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(636)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(628)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9614:
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(88)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A9660u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A9660u) goto L_089A9660;
    return;
L_089A9660:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    goto L_089A95FC;
L_089A9668:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), 0u);
    goto L_089A953C;
L_089A9670:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(7), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(11), aot_gpr[7]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(133));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(15), aot_gpr[3]));
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(156));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[7]));
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(7), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[3]));
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(11), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(15), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(468));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[31] = (0x089A96F0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 82u, 0x089B3678u>(ctx, &aot_mem) && ctx.pc == 0x089A96F0u) goto L_089A96F0;
    return;
L_089A96F0:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    aot_gpr[4] = (2203u << 16u);
      if (branch_taken) {
          goto L_089A951C;
      }
      goto L_089A9700;
    }
L_089A9700:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25604));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[11] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(44));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(61));
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A9734u);
    aot_gpr[10] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A9734u) goto L_089A9734;
    return;
L_089A9734:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(636)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(628)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9750:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089A97A8;
      }
      goto L_089A9770;
    }
L_089A9770:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089A9780u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9780u) goto L_089A9780;
    return;
L_089A9780:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_089A97BC;
      }
      goto L_089A9794;
    }
L_089A9794:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089A98F8;
      }
      goto L_089A97A0;
    }
L_089A97A0:
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_089A98E8;
    }
    goto L_089A97A8;
L_089A97A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A97BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    goto L_089A97C4;
L_089A97C4:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(19), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(23), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(27), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(31), aot_gpr[11]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[10]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[11]));
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(19), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(23), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(27), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(31), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[11]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
        goto L_089A9894;
    }
    goto L_089A9858;
L_089A9858:
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A9880u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A9880u) goto L_089A9880;
    return;
L_089A9880:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_089A9884;
L_089A9884:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9894:
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A98E0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A98E0u) goto L_089A98E0;
    return;
L_089A98E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_089A9884;
L_089A98E8:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A9904;
      }
      goto L_089A98F0;
    }
L_089A98F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    goto L_089A97C4;
L_089A98F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    goto L_089A97C4;
L_089A9904:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A9914;
      }
      goto L_089A990C;
    }
L_089A990C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), 0u);
    goto L_089A97C4;
L_089A9914:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    goto L_089A97C4;
L_089A991C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(696));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089A9944u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9944u) goto L_089A9944;
    return;
L_089A9944:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A995C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(29) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[12] = (aot_gpr[6] + 0u);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089A99AC;
      }
      goto L_089A997C;
    }
L_089A997C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15980));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9998:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089A9BDC;
      }
      goto L_089A99A4;
    }
L_089A99A4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    goto L_089A99AC;
L_089A99AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A99C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089A9BE8;
      }
      goto L_089A99CC;
    }
L_089A99CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    goto L_089A99AC;
L_089A99D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(19), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(23), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(27), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(31), aot_gpr[11]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[11]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[10]));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(19), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(23), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(27), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(31), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[11]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089A99AC;
      }
      goto L_089A9A70;
    }
L_089A9A70:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_089A99AC;
L_089A9A78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    goto L_089A99AC;
L_089A9A88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    goto L_089A99AC;
L_089A9A98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    goto L_089A99AC;
L_089A9AA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(56), aot_gpr[3]);
    goto L_089A99AC;
L_089A9AB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    goto L_089A99AC;
L_089A9AC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    goto L_089A99AC;
L_089A9AD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    goto L_089A99AC;
L_089A9AE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(48), aot_gpr[3]);
    goto L_089A99AC;
L_089A9AF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    goto L_089A99AC;
L_089A9B08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    goto L_089A99AC;
L_089A9B18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    goto L_089A99AC;
L_089A9B28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(aot_gpr[3]));
    goto L_089A99AC;
L_089A9B38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(aot_gpr[3]));
    goto L_089A99AC;
L_089A9B48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    goto L_089A99AC;
L_089A9B58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089A99AC;
L_089A9B68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(112), aot_gpr[3]);
    goto L_089A99AC;
L_089A9B78:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(63));
    aot_gpr[3] = (aot_gpr[16] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    if (aot_gpr[3] == 0u) aot_gpr[16] = (aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A9B98u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A9B98u) goto L_089A9B98;
    return;
L_089A9B98:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    goto L_089A99AC;
L_089A9BA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    goto L_089A99AC;
L_089A9BB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[3] = (aot_gpr[16] < static_cast<std::uint32_t>(513) ? 1u : 0u);
    if (aot_gpr[3] == 0u) aot_gpr[16] = (aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(180));
    aot_gpr[31] = (0x089A9BD4u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A9BD4u) goto L_089A9BD4;
    return;
L_089A9BD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(692), aot_gpr[16]);
    goto L_089A99AC;
L_089A9BDC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    goto L_089A99AC;
L_089A9BE8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(96), aot_gpr[3]);
    goto L_089A99AC;
L_089A9BF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9BFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9C04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-864));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(844), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(840), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(828), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(848), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(836), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(832), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(824), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(820), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(816), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089A9F54;
      }
      goto L_089A9C40;
    }
L_089A9C40:
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(19), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(23), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(27), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(31), aot_gpr[11]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[11]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[8]));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(156));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(325));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(23), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(27), aot_gpr[10]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(19), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(31), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x089A9D0Cu);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[11]);
    goto L_089A9090;
L_089A9D0C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(148));
    aot_gpr[31] = (0x089A9D20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9D20u) goto L_089A9D20;
    return;
L_089A9D20:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A9D34u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A9D34u) goto L_089A9D34;
    return;
L_089A9D34:
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(19), aot_gpr[8]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), 0u);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(177));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(344));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(231), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(303), static_cast<std::uint8_t>(0u));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[8]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    rt.memory().aot_store_word_left(aot_gpr[20] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[20] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[20] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[20] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[20] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[20] + static_cast<std::uint32_t>(19), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[5]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[7]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[7]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[6]));
    rt.memory().aot_store_word_left(aot_gpr[21] + static_cast<std::uint32_t>(3), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[21] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[21] + static_cast<std::uint32_t>(11), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[21] + static_cast<std::uint32_t>(15), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[21] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(193)));
    aot_gpr[31] = (0x089A9DF8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 2u, 0x08990008u>(ctx, &aot_mem) && ctx.pc == 0x089A9DF8u) goto L_089A9DF8;
    return;
L_089A9DF8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A9E04u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089A9E04u) goto L_089A9E04;
    return;
L_089A9E04:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-20900)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089A9E1Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089A9E1Cu) goto L_089A9E1C;
    return;
L_089A9E1C:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-20904)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089A9E34u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089A9E34u) goto L_089A9E34;
    return;
L_089A9E34:
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    aot_gpr[4] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[3]);
    aot_gpr[31] = (0x089A9E48u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089A9E48u) goto L_089A9E48;
    return;
L_089A9E48:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(468));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(348));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), 0u);
    aot_gpr[31] = (0x089A9E98u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    goto L_089A901C;
L_089A9E98:
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(104));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[31] = (0x089A9EE4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 7u, 0x089B30A0u>(ctx, &aot_mem) && ctx.pc == 0x089A9EE4u) goto L_089A9EE4;
    return;
L_089A9EE4:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089A9F28;
      }
      goto L_089A9EF4;
    }
L_089A9EF4:
    aot_gpr[4] = (2203u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25604));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(44));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    aot_gpr[11] = (aot_gpr[21] + 0u);
    goto L_089A9F14;
L_089A9F14:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(61));
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A9F28u);
    aot_gpr[10] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A9F28u) goto L_089A9F28;
    return;
L_089A9F28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(848)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(844)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(840)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(836)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(832)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(828)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(824)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(820)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(816)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(864));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9F54:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(7), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(11), aot_gpr[7]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(325));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(15), aot_gpr[3]));
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(348));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[7]));
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(7), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[3]));
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(11), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(15), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(468));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[31] = (0x089A9FD4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 37u, 0x089B32F4u>(ctx, &aot_mem) && ctx.pc == 0x089A9FD4u) goto L_089A9FD4;
    return;
L_089A9FD4:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089A9F28;
      }
      goto L_089A9FE4;
    }
L_089A9FE4:
    aot_gpr[4] = (2203u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25604));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(44));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    ctx.pc = 0x089AA000u; return;
}

void recomp_unit_0421(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0421_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_421(Runtime &runtime) {
    runtime.register_generated_unit(421u, 0x089A9000u, 4096u, &recomp_unit_0421, &recomp_unit_0421_entry);
    runtime.register_function(0x089A9004u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A900Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9014u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A901Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9028u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9040u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9048u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9050u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9058u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9060u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9068u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9070u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9078u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9080u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9088u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9090u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A909Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A90B4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A90BCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A90C4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A90CCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A90D4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A90DCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A90E4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A90ECu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A90F4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A90FCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9104u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A910Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9148u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9150u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9174u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9178u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9198u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A91ACu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A925Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9298u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A92C4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A92DCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A92E4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9304u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9314u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9324u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9344u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9370u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9374u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9408u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A941Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9468u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A94B4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A94BCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A94E8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A94FCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9510u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A951Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9538u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A953Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A95D0u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A95F8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A95FCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9614u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9660u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9668u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9670u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A96F0u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9700u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9734u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9750u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9770u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9780u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9794u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A97A0u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A97A8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A97BCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A97C4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9858u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9880u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9884u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9894u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A98E0u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A98E8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A98F0u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A98F8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9904u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A990Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9914u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A991Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9944u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A995Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A997Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9998u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A99A4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A99ACu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A99C0u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A99CCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A99D8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9A70u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9A78u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9A88u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9A98u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9AA8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9AB8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9AC8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9AD8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9AE8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9AF8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9B08u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9B18u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9B28u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9B38u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9B48u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9B58u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9B68u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9B78u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9B98u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9BA4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9BB4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9BD4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9BDCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9BE8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9BF4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9BFCu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9C04u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9C40u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9D0Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9D20u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9D34u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9DF8u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9E04u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9E1Cu, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9E34u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9E48u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9E98u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9EE4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9EF4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9F14u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9F28u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9F54u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9FD4u, &recomp_unit_0421, "recomp_unit_0421");
    runtime.register_function(0x089A9FE4u, &recomp_unit_0421, "recomp_unit_0421");
}
} // namespace psprecomp
