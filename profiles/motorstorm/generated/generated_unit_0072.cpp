#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0072[1007] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 41,
    0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 50, 51, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150,
};
void recomp_unit_0072_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0884C000u;
        entry_id = (entry_delta < 4028u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0072[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0884C000;
    case 2u: goto L_0884C00C;
    case 3u: goto L_0884C03C;
    case 4u: goto L_0884C048;
    case 5u: goto L_0884C050;
    case 6u: goto L_0884C064;
    case 7u: goto L_0884C068;
    case 8u: goto L_0884C07C;
    case 9u: goto L_0884C0AC;
    case 10u: goto L_0884C0B8;
    case 11u: goto L_0884C10C;
    case 12u: goto L_0884C138;
    case 13u: goto L_0884C144;
    case 14u: goto L_0884C194;
    case 15u: goto L_0884C1D8;
    case 16u: goto L_0884C1E4;
    case 17u: goto L_0884C1F0;
    case 18u: goto L_0884C208;
    case 19u: goto L_0884C238;
    case 20u: goto L_0884C244;
    case 21u: goto L_0884C258;
    case 22u: goto L_0884C28C;
    case 23u: goto L_0884C298;
    case 24u: goto L_0884C2AC;
    case 25u: goto L_0884C2E0;
    case 26u: goto L_0884C2EC;
    case 27u: goto L_0884C304;
    case 28u: goto L_0884C320;
    case 29u: goto L_0884C334;
    case 30u: goto L_0884C364;
    case 31u: goto L_0884C370;
    case 32u: goto L_0884C390;
    case 33u: goto L_0884C3A8;
    case 34u: goto L_0884C3F0;
    case 35u: goto L_0884C3FC;
    case 36u: goto L_0884C41C;
    case 37u: goto L_0884C434;
    case 38u: goto L_0884C464;
    case 39u: goto L_0884C470;
    case 40u: goto L_0884C478;
    case 41u: goto L_0884C47C;
    case 42u: goto L_0884C494;
    case 43u: goto L_0884C49C;
    case 44u: goto L_0884C4AC;
    case 45u: goto L_0884C4B8;
    case 46u: goto L_0884C4BC;
    case 47u: goto L_0884C4CC;
    case 48u: goto L_0884C4D4;
    case 49u: goto L_0884C4E4;
    case 50u: goto L_0884C4F0;
    case 51u: goto L_0884C4F4;
    case 52u: goto L_0884C518;
    case 53u: goto L_0884C524;
    case 54u: goto L_0884C530;
    case 55u: goto L_0884C540;
    case 56u: goto L_0884C580;
    case 57u: goto L_0884C590;
    case 58u: goto L_0884C59C;
    case 59u: goto L_0884C5AC;
    case 60u: goto L_0884C5B8;
    case 61u: goto L_0884C5E0;
    case 62u: goto L_0884C5EC;
    case 63u: goto L_0884C5F4;
    case 64u: goto L_0884C604;
    case 65u: goto L_0884C644;
    case 66u: goto L_0884C654;
    case 67u: goto L_0884C660;
    case 68u: goto L_0884C670;
    case 69u: goto L_0884C67C;
    case 70u: goto L_0884C6A4;
    case 71u: goto L_0884C6B0;
    case 72u: goto L_0884C6B8;
    case 73u: goto L_0884C6C8;
    case 74u: goto L_0884C704;
    case 75u: goto L_0884C714;
    case 76u: goto L_0884C720;
    case 77u: goto L_0884C730;
    case 78u: goto L_0884C73C;
    case 79u: goto L_0884C764;
    case 80u: goto L_0884C770;
    case 81u: goto L_0884C778;
    case 82u: goto L_0884C788;
    case 83u: goto L_0884C7A4;
    case 84u: goto L_0884C7BC;
    case 85u: goto L_0884C7FC;
    case 86u: goto L_0884C80C;
    case 87u: goto L_0884C818;
    case 88u: goto L_0884C828;
    case 89u: goto L_0884C834;
    case 90u: goto L_0884C85C;
    case 91u: goto L_0884C868;
    case 92u: goto L_0884C8B8;
    case 93u: goto L_0884C8FC;
    case 94u: goto L_0884C90C;
    case 95u: goto L_0884C918;
    case 96u: goto L_0884C92C;
    case 97u: goto L_0884C938;
    case 98u: goto L_0884C960;
    case 99u: goto L_0884C96C;
    case 100u: goto L_0884C978;
    case 101u: goto L_0884C988;
    case 102u: goto L_0884C9CC;
    case 103u: goto L_0884C9DC;
    case 104u: goto L_0884C9E8;
    case 105u: goto L_0884C9FC;
    case 106u: goto L_0884CA08;
    case 107u: goto L_0884CA30;
    case 108u: goto L_0884CA58;
    case 109u: goto L_0884CA64;
    case 110u: goto L_0884CAB4;
    case 111u: goto L_0884CAF4;
    case 112u: goto L_0884CB04;
    case 113u: goto L_0884CB10;
    case 114u: goto L_0884CB38;
    case 115u: goto L_0884CB44;
    case 116u: goto L_0884CB94;
    case 117u: goto L_0884CBD4;
    case 118u: goto L_0884CBE4;
    case 119u: goto L_0884CBF0;
    case 120u: goto L_0884CC18;
    case 121u: goto L_0884CC24;
    case 122u: goto L_0884CC74;
    case 123u: goto L_0884CCB4;
    case 124u: goto L_0884CCC4;
    case 125u: goto L_0884CCD0;
    case 126u: goto L_0884CCE4;
    case 127u: goto L_0884CCF0;
    case 128u: goto L_0884CD18;
    case 129u: goto L_0884CD24;
    case 130u: goto L_0884CD2C;
    case 131u: goto L_0884CD3C;
    case 132u: goto L_0884CD84;
    case 133u: goto L_0884CD94;
    case 134u: goto L_0884CDA0;
    case 135u: goto L_0884CDB4;
    case 136u: goto L_0884CDC0;
    case 137u: goto L_0884CDE8;
    case 138u: goto L_0884CDF4;
    case 139u: goto L_0884CE44;
    case 140u: goto L_0884CE80;
    case 141u: goto L_0884CE90;
    case 142u: goto L_0884CE9C;
    case 143u: goto L_0884CEC4;
    case 144u: goto L_0884CED0;
    case 145u: goto L_0884CF24;
    case 146u: goto L_0884CF68;
    case 147u: goto L_0884CF78;
    case 148u: goto L_0884CF84;
    case 149u: goto L_0884CFAC;
    case 150u: goto L_0884CFB8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0884C000:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884C00Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1560));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884C00Cu) goto L_0884C00C;
    return;
L_0884C00C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3344)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C03Cu);
    aot_gpr[6] = (0u | 1632u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C03Cu) goto L_0884C03C;
    return;
L_0884C03C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884C068;
      }
      goto L_0884C048;
    }
L_0884C048:
    aot_gpr[31] = (0x0884C050u);
    aot_gpr[5] = (0u | 1632u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884C050u) goto L_0884C050;
    return;
L_0884C050:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10360));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x0884C064u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1420));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x0884C064u) goto L_0884C064;
    return;
L_0884C064:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884C068;
L_0884C068:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3348), aot_gpr[17]);
    aot_gpr[31] = (0x0884C07Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884C07Cu) goto L_0884C07C;
    return;
L_0884C07C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3348)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C0ACu);
    aot_gpr[6] = (0u | 64u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C0ACu) goto L_0884C0AC;
    return;
L_0884C0AC:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884C10C;
      }
      goto L_0884C0B8;
    }
L_0884C0B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8432));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0884C10C;
L_0884C10C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3336), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C138u);
    aot_gpr[6] = (0u | 60u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C138u) goto L_0884C138;
    return;
L_0884C138:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884C194;
      }
      goto L_0884C144;
    }
L_0884C144:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8504));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0884C194;
L_0884C194:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3340), aot_gpr[16]);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(3336)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3340)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C1D8u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C1D8u) goto L_0884C1D8;
    return;
L_0884C1D8:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0884C1F0;
      }
      goto L_0884C1E4;
    }
L_0884C1E4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11208));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884C1F0;
L_0884C1F0:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3288), aot_gpr[16]);
    aot_gpr[31] = (0x0884C208u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1536));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884C208u) goto L_0884C208;
    return;
L_0884C208:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3288)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C238u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C238u) goto L_0884C238;
    return;
L_0884C238:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884C258;
      }
      goto L_0884C244;
    }
L_0884C244:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11936));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0884C258;
L_0884C258:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3432), aot_gpr[16]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7000), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C28Cu);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C28Cu) goto L_0884C28C;
    return;
L_0884C28C:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884C2AC;
      }
      goto L_0884C298;
    }
L_0884C298:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11920));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0884C2AC;
L_0884C2AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3436), aot_gpr[16]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6996), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C2E0u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C2E0u) goto L_0884C2E0;
    return;
L_0884C2E0:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C304;
      }
      goto L_0884C2EC;
    }
L_0884C2EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12128));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884C304;
L_0884C304:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3428), aot_gpr[16]);
    aot_gpr[31] = (0x0884C320u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884C320u) goto L_0884C320;
    return;
L_0884C320:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(3428)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[31] = (0x0884C334u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884C334u) goto L_0884C334;
    return;
L_0884C334:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(3428)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C364u);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C364u) goto L_0884C364;
    return;
L_0884C364:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884C390;
      }
      goto L_0884C370;
    }
L_0884C370:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9232));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884C390;
L_0884C390:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3376), aot_gpr[16]);
    aot_gpr[31] = (0x0884C3A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1512));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884C3A8u) goto L_0884C3A8;
    return;
L_0884C3A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3376)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3152)));
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(3336)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C3F0u);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C3F0u) goto L_0884C3F0;
    return;
L_0884C3F0:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C41C;
      }
      goto L_0884C3FC;
    }
L_0884C3FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8632));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884C41C;
L_0884C41C:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3380), aot_gpr[16]);
    aot_gpr[31] = (0x0884C434u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1492));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884C434u) goto L_0884C434;
    return;
L_0884C434:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3380)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C464u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C464u) goto L_0884C464;
    return;
L_0884C464:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884C47C;
      }
      goto L_0884C470;
    }
L_0884C470:
    aot_gpr[31] = (0x0884C478u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 27u, 0x08827250u>(ctx, &aot_mem) && ctx.pc == 0x0884C478u) goto L_0884C478;
    return;
L_0884C478:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884C47C;
L_0884C47C:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3440), aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[31] = (0x0884C494u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C494u) goto L_0884C494;
    return;
L_0884C494:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0884C4BC;
      }
      goto L_0884C49C;
    }
L_0884C49C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[31] = (0x0884C4ACu);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C4ACu) goto L_0884C4AC;
    return;
L_0884C4AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3440)));
    aot_gpr[31] = (0x0884C4B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C4B8u) goto L_0884C4B8;
    return;
L_0884C4B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    goto L_0884C4BC;
L_0884C4BC:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (0x0884C4CCu);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C4CCu) goto L_0884C4CC;
    return;
L_0884C4CC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
        goto L_0884C4F4;
    }
    goto L_0884C4D4;
L_0884C4D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (0x0884C4E4u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C4E4u) goto L_0884C4E4;
    return;
L_0884C4E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3440)));
    aot_gpr[31] = (0x0884C4F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C4F0u) goto L_0884C4F0;
    return;
L_0884C4F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    goto L_0884C4F4;
L_0884C4F4:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C518u);
    aot_gpr[6] = (0u | 76u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C518u) goto L_0884C518;
    return;
L_0884C518:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0884C540;
      }
      goto L_0884C524;
    }
L_0884C524:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884C530u);
    aot_gpr[5] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884C530u) goto L_0884C530;
    return;
L_0884C530:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8296));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884C540;
L_0884C540:
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3384), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1432));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884C580u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C580u) goto L_0884C580;
    return;
L_0884C580:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884C590u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C590u) goto L_0884C590;
    return;
L_0884C590:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3384)));
    aot_gpr[31] = (0x0884C59Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C59Cu) goto L_0884C59C;
    return;
L_0884C59C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x0884C5ACu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C5ACu) goto L_0884C5AC;
    return;
L_0884C5AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3384)));
    aot_gpr[31] = (0x0884C5B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C5B8u) goto L_0884C5B8;
    return;
L_0884C5B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C5E0u);
    aot_gpr[6] = (0u | 76u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C5E0u) goto L_0884C5E0;
    return;
L_0884C5E0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884C604;
      }
      goto L_0884C5EC;
    }
L_0884C5EC:
    aot_gpr[31] = (0x0884C5F4u);
    aot_gpr[5] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884C5F4u) goto L_0884C5F4;
    return;
L_0884C5F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8296));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884C604;
L_0884C604:
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3392), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1400));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884C644u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C644u) goto L_0884C644;
    return;
L_0884C644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884C654u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C654u) goto L_0884C654;
    return;
L_0884C654:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3392)));
    aot_gpr[31] = (0x0884C660u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C660u) goto L_0884C660;
    return;
L_0884C660:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x0884C670u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C670u) goto L_0884C670;
    return;
L_0884C670:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3392)));
    aot_gpr[31] = (0x0884C67Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C67Cu) goto L_0884C67C;
    return;
L_0884C67C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C6A4u);
    aot_gpr[6] = (0u | 76u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C6A4u) goto L_0884C6A4;
    return;
L_0884C6A4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884C6C8;
      }
      goto L_0884C6B0;
    }
L_0884C6B0:
    aot_gpr[31] = (0x0884C6B8u);
    aot_gpr[5] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884C6B8u) goto L_0884C6B8;
    return;
L_0884C6B8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8296));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884C6C8;
L_0884C6C8:
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3388), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884C704u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C704u) goto L_0884C704;
    return;
L_0884C704:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884C714u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C714u) goto L_0884C714;
    return;
L_0884C714:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3388)));
    aot_gpr[31] = (0x0884C720u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C720u) goto L_0884C720;
    return;
L_0884C720:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x0884C730u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C730u) goto L_0884C730;
    return;
L_0884C730:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3388)));
    aot_gpr[31] = (0x0884C73Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C73Cu) goto L_0884C73C;
    return;
L_0884C73C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C764u);
    aot_gpr[6] = (0u | 76u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C764u) goto L_0884C764;
    return;
L_0884C764:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884C788;
      }
      goto L_0884C770;
    }
L_0884C770:
    aot_gpr[31] = (0x0884C778u);
    aot_gpr[5] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884C778u) goto L_0884C778;
    return;
L_0884C778:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8296));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884C788;
L_0884C788:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3396), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0884C7A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1368));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C7A4u) goto L_0884C7A4;
    return;
L_0884C7A4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0884C7BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1344));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C7BCu) goto L_0884C7BC;
    return;
L_0884C7BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3396)));
    aot_gpr[12] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (aot_gpr[2] | 0u);
    aot_gpr[10] = (0u | 2u);
    aot_gpr[11] = (0u | 1u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0884C7FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C7FCu) goto L_0884C7FC;
    return;
L_0884C7FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0884C80Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C80Cu) goto L_0884C80C;
    return;
L_0884C80C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3396)));
    aot_gpr[31] = (0x0884C818u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C818u) goto L_0884C818;
    return;
L_0884C818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x0884C828u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C828u) goto L_0884C828;
    return;
L_0884C828:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3396)));
    aot_gpr[31] = (0x0884C834u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C834u) goto L_0884C834;
    return;
L_0884C834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C85Cu);
    aot_gpr[6] = (0u | 64u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C85Cu) goto L_0884C85C;
    return;
L_0884C85C:
    aot_gpr[8] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884C8B8;
      }
      goto L_0884C868;
    }
L_0884C868:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11648));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    goto L_0884C8B8;
L_0884C8B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3404), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-1320));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1304));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884C8FCu);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C8FCu) goto L_0884C8FC;
    return;
L_0884C8FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884C90Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C90Cu) goto L_0884C90C;
    return;
L_0884C90C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3404)));
    aot_gpr[31] = (0x0884C918u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C918u) goto L_0884C918;
    return;
L_0884C918:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884C92Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1288));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C92Cu) goto L_0884C92C;
    return;
L_0884C92C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3404)));
    aot_gpr[31] = (0x0884C938u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C938u) goto L_0884C938;
    return;
L_0884C938:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884C960u);
    aot_gpr[6] = (0u | 68u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C960u) goto L_0884C960;
    return;
L_0884C960:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0884C988;
      }
      goto L_0884C96C;
    }
L_0884C96C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884C978u);
    aot_gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884C978u) goto L_0884C978;
    return;
L_0884C978:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8080));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884C988;
L_0884C988:
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3408), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1272));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1252));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884C9CCu);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C9CCu) goto L_0884C9CC;
    return;
L_0884C9CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0884C9DCu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C9DCu) goto L_0884C9DC;
    return;
L_0884C9DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3408)));
    aot_gpr[31] = (0x0884C9E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884C9E8u) goto L_0884C9E8;
    return;
L_0884C9E8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0884C9FCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1232));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C9FCu) goto L_0884C9FC;
    return;
L_0884C9FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3408)));
    aot_gpr[31] = (0x0884CA08u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884CA08u) goto L_0884CA08;
    return;
L_0884CA08:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3408)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1208));
    aot_gpr[31] = (0x0884CA30u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1192));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 144u, 0x08856B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CA30u) goto L_0884CA30;
    return;
L_0884CA30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884CA58u);
    aot_gpr[6] = (0u | 64u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CA58u) goto L_0884CA58;
    return;
L_0884CA58:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884CAB4;
      }
      goto L_0884CA64;
    }
L_0884CA64:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9736));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    goto L_0884CAB4;
L_0884CAB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3412), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-1176));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1160));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884CAF4u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CAF4u) goto L_0884CAF4;
    return;
L_0884CAF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884CB04u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CB04u) goto L_0884CB04;
    return;
L_0884CB04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3412)));
    aot_gpr[31] = (0x0884CB10u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884CB10u) goto L_0884CB10;
    return;
L_0884CB10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884CB38u);
    aot_gpr[6] = (0u | 64u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CB38u) goto L_0884CB38;
    return;
L_0884CB38:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884CB94;
      }
      goto L_0884CB44;
    }
L_0884CB44:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9736));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    goto L_0884CB94;
L_0884CB94:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3416), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-1132));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1116));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884CBD4u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CBD4u) goto L_0884CBD4;
    return;
L_0884CBD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884CBE4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CBE4u) goto L_0884CBE4;
    return;
L_0884CBE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3416)));
    aot_gpr[31] = (0x0884CBF0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884CBF0u) goto L_0884CBF0;
    return;
L_0884CBF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884CC18u);
    aot_gpr[6] = (0u | 64u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CC18u) goto L_0884CC18;
    return;
L_0884CC18:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884CC74;
      }
      goto L_0884CC24;
    }
L_0884CC24:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9736));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    goto L_0884CC74;
L_0884CC74:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2236), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-1088));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1064));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884CCB4u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CCB4u) goto L_0884CCB4;
    return;
L_0884CCB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884CCC4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CCC4u) goto L_0884CCC4;
    return;
L_0884CCC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2236)));
    aot_gpr[31] = (0x0884CCD0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884CCD0u) goto L_0884CCD0;
    return;
L_0884CCD0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884CCE4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1036));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CCE4u) goto L_0884CCE4;
    return;
L_0884CCE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2236)));
    aot_gpr[31] = (0x0884CCF0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884CCF0u) goto L_0884CCF0;
    return;
L_0884CCF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884CD18u);
    aot_gpr[6] = (0u | 68u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CD18u) goto L_0884CD18;
    return;
L_0884CD18:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884CD3C;
      }
      goto L_0884CD24;
    }
L_0884CD24:
    aot_gpr[31] = (0x0884CD2Cu);
    aot_gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884CD2Cu) goto L_0884CD2C;
    return;
L_0884CD2C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10440));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884CD3C;
L_0884CD3C:
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2208), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1020));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-996));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884CD84u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CD84u) goto L_0884CD84;
    return;
L_0884CD84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884CD94u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CD94u) goto L_0884CD94;
    return;
L_0884CD94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2208)));
    aot_gpr[31] = (0x0884CDA0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884CDA0u) goto L_0884CDA0;
    return;
L_0884CDA0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884CDB4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-968));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CDB4u) goto L_0884CDB4;
    return;
L_0884CDB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2208)));
    aot_gpr[31] = (0x0884CDC0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884CDC0u) goto L_0884CDC0;
    return;
L_0884CDC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884CDE8u);
    aot_gpr[6] = (0u | 64u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CDE8u) goto L_0884CDE8;
    return;
L_0884CDE8:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884CE44;
      }
      goto L_0884CDF4;
    }
L_0884CDF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11504));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    goto L_0884CE44;
L_0884CE44:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3420), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884CE80u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CE80u) goto L_0884CE80;
    return;
L_0884CE80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884CE90u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CE90u) goto L_0884CE90;
    return;
L_0884CE90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3420)));
    aot_gpr[31] = (0x0884CE9Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884CE9Cu) goto L_0884CE9C;
    return;
L_0884CE9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884CEC4u);
    aot_gpr[6] = (0u | 64u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CEC4u) goto L_0884CEC4;
    return;
L_0884CEC4:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (aot_gpr[6] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
        goto L_0884CF24;
    }
    goto L_0884CED0;
L_0884CED0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11504));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    goto L_0884CF24;
L_0884CF24:
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2240), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-916));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884CF68u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CF68u) goto L_0884CF68;
    return;
L_0884CF68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884CF78u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CF78u) goto L_0884CF78;
    return;
L_0884CF78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2240)));
    aot_gpr[31] = (0x0884CF84u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884CF84u) goto L_0884CF84;
    return;
L_0884CF84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884CFACu);
    aot_gpr[6] = (0u | 64u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884CFACu) goto L_0884CFAC;
    return;
L_0884CFAC:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 2u, 0x0884D008u>(ctx, &aot_mem); return;
      }
      goto L_0884CFB8;
    }
L_0884CFB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9400));
    ctx.pc = 0x0884D000u; return;
}

void recomp_unit_0072(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0072_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_72(Runtime &runtime) {
    runtime.register_generated_unit(72u, 0x0884C000u, 4096u, &recomp_unit_0072, &recomp_unit_0072_entry);
    runtime.register_function(0x0884C000u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C00Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C03Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C048u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C050u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C064u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C068u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C07Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C0ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C0B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C10Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C138u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C144u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C194u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C1D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C1E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C1F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C208u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C238u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C244u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C258u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C28Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C298u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C2ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C2E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C2ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C304u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C320u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C334u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C364u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C370u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C390u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C3A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C3F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C3FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C41Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C434u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C464u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C470u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C478u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C47Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C494u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C49Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C4ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C4B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C4BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C4CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C4D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C4E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C4F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C4F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C518u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C524u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C530u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C540u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C580u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C590u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C59Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C5ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C5B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C5E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C5ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C5F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C604u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C644u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C654u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C660u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C670u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C67Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C6A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C6B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C6B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C6C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C704u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C714u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C720u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C730u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C73Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C764u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C770u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C778u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C788u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C7A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C7BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C7FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C80Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C818u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C828u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C834u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C85Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C868u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C8B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C8FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C90Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C918u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C92Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C938u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C960u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C96Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C978u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C988u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C9CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C9DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C9E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884C9FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CA08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CA30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CA58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CA64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CAB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CAF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CB04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CB10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CB38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CB44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CB94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CBD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CBE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CBF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CC18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CC24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CC74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CCB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CCC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CCD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CCE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CCF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CD18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CD24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CD2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CD3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CD84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CD94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CDA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CDB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CDC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CDE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CDF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CE44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CE80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CE90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CE9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CEC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CED0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CF24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CF68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CF78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CF84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CFACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0884CFB8u, &recomp_unit_0072, "recomp_unit_0072");
}
} // namespace psprecomp
