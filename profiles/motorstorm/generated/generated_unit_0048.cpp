#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0048[1019] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12,
    0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0,
    0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39,
    0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 66,
    0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0,
    117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166,
};
void recomp_unit_0048_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08834000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0048[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08834000;
    case 2u: goto L_08834014;
    case 3u: goto L_08834020;
    case 4u: goto L_08834030;
    case 5u: goto L_0883404C;
    case 6u: goto L_08834068;
    case 7u: goto L_08834074;
    case 8u: goto L_088340A4;
    case 9u: goto L_088340D4;
    case 10u: goto L_088340E0;
    case 11u: goto L_088340EC;
    case 12u: goto L_088340FC;
    case 13u: goto L_08834104;
    case 14u: goto L_08834118;
    case 15u: goto L_0883415C;
    case 16u: goto L_08834168;
    case 17u: goto L_08834198;
    case 18u: goto L_088341A4;
    case 19u: goto L_088341C0;
    case 20u: goto L_088341E4;
    case 21u: goto L_088341EC;
    case 22u: goto L_088341F4;
    case 23u: goto L_08834218;
    case 24u: goto L_08834228;
    case 25u: goto L_08834238;
    case 26u: goto L_08834240;
    case 27u: goto L_08834250;
    case 28u: goto L_08834260;
    case 29u: goto L_0883426C;
    case 30u: goto L_08834284;
    case 31u: goto L_08834290;
    case 32u: goto L_088342A8;
    case 33u: goto L_088342B8;
    case 34u: goto L_088342C0;
    case 35u: goto L_088342EC;
    case 36u: goto L_0883432C;
    case 37u: goto L_0883435C;
    case 38u: goto L_08834370;
    case 39u: goto L_0883437C;
    case 40u: goto L_08834388;
    case 41u: goto L_0883439C;
    case 42u: goto L_088343A4;
    case 43u: goto L_088343CC;
    case 44u: goto L_088343D0;
    case 45u: goto L_088343E4;
    case 46u: goto L_08834404;
    case 47u: goto L_0883443C;
    case 48u: goto L_08834454;
    case 49u: goto L_0883446C;
    case 50u: goto L_08834484;
    case 51u: goto L_08834490;
    case 52u: goto L_088344C8;
    case 53u: goto L_088344F8;
    case 54u: goto L_08834518;
    case 55u: goto L_08834550;
    case 56u: goto L_08834568;
    case 57u: goto L_08834580;
    case 58u: goto L_08834598;
    case 59u: goto L_088345A0;
    case 60u: goto L_088345A8;
    case 61u: goto L_088345BC;
    case 62u: goto L_088345C4;
    case 63u: goto L_088345D8;
    case 64u: goto L_088345E0;
    case 65u: goto L_088345F4;
    case 66u: goto L_088345FC;
    case 67u: goto L_08834614;
    case 68u: goto L_0883461C;
    case 69u: goto L_0883462C;
    case 70u: goto L_08834634;
    case 71u: goto L_08834644;
    case 72u: goto L_0883464C;
    case 73u: goto L_0883465C;
    case 74u: goto L_08834664;
    case 75u: goto L_08834674;
    case 76u: goto L_08834694;
    case 77u: goto L_088346DC;
    case 78u: goto L_088346F4;
    case 79u: goto L_0883470C;
    case 80u: goto L_08834724;
    case 81u: goto L_08834748;
    case 82u: goto L_08834758;
    case 83u: goto L_08834768;
    case 84u: goto L_08834778;
    case 85u: goto L_088347A4;
    case 86u: goto L_08834800;
    case 87u: goto L_08834818;
    case 88u: goto L_08834830;
    case 89u: goto L_08834848;
    case 90u: goto L_08834850;
    case 91u: goto L_08834858;
    case 92u: goto L_0883486C;
    case 93u: goto L_08834878;
    case 94u: goto L_08834898;
    case 95u: goto L_088348A0;
    case 96u: goto L_088348A8;
    case 97u: goto L_088348BC;
    case 98u: goto L_088348C8;
    case 99u: goto L_088348E4;
    case 100u: goto L_088348EC;
    case 101u: goto L_088348FC;
    case 102u: goto L_08834904;
    case 103u: goto L_08834934;
    case 104u: goto L_0883493C;
    case 105u: goto L_0883494C;
    case 106u: goto L_08834954;
    case 107u: goto L_08834960;
    case 108u: goto L_08834968;
    case 109u: goto L_08834980;
    case 110u: goto L_08834990;
    case 111u: goto L_08834998;
    case 112u: goto L_088349A8;
    case 113u: goto L_088349B0;
    case 114u: goto L_088349E0;
    case 115u: goto L_088349E8;
    case 116u: goto L_088349F8;
    case 117u: goto L_08834A00;
    case 118u: goto L_08834A0C;
    case 119u: goto L_08834A14;
    case 120u: goto L_08834A2C;
    case 121u: goto L_08834A3C;
    case 122u: goto L_08834A70;
    case 123u: goto L_08834ABC;
    case 124u: goto L_08834AD4;
    case 125u: goto L_08834ADC;
    case 126u: goto L_08834B00;
    case 127u: goto L_08834B30;
    case 128u: goto L_08834B58;
    case 129u: goto L_08834B74;
    case 130u: goto L_08834B84;
    case 131u: goto L_08834B98;
    case 132u: goto L_08834BBC;
    case 133u: goto L_08834BE8;
    case 134u: goto L_08834C3C;
    case 135u: goto L_08834C58;
    case 136u: goto L_08834C64;
    case 137u: goto L_08834C6C;
    case 138u: goto L_08834D44;
    case 139u: goto L_08834D50;
    case 140u: goto L_08834D60;
    case 141u: goto L_08834D84;
    case 142u: goto L_08834DA0;
    case 143u: goto L_08834DBC;
    case 144u: goto L_08834DD8;
    case 145u: goto L_08834DF4;
    case 146u: goto L_08834E10;
    case 147u: goto L_08834E2C;
    case 148u: goto L_08834E48;
    case 149u: goto L_08834E64;
    case 150u: goto L_08834E80;
    case 151u: goto L_08834E9C;
    case 152u: goto L_08834EB8;
    case 153u: goto L_08834ED4;
    case 154u: goto L_08834EF0;
    case 155u: goto L_08834F0C;
    case 156u: goto L_08834F28;
    case 157u: goto L_08834F44;
    case 158u: goto L_08834F68;
    case 159u: goto L_08834F74;
    case 160u: goto L_08834F90;
    case 161u: goto L_08834F98;
    case 162u: goto L_08834FA4;
    case 163u: goto L_08834FAC;
    case 164u: goto L_08834FB8;
    case 165u: goto L_08834FC8;
    case 166u: goto L_08834FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08834000:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08834014u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08834014u) goto L_08834014;
    return;
L_08834014:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08834020u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08834020u) goto L_08834020;
    return;
L_08834020:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08834030u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834030u) goto L_08834030;
    return;
L_08834030:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883404Cu);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883404Cu) goto L_0883404C;
    return;
L_0883404C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834068u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834068u) goto L_08834068;
    return;
L_08834068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08834074;
L_08834074:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088340A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10424));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088340D4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10344));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088340D4u) goto L_088340D4;
    return;
L_088340D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088340E0u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088340E0u) goto L_088340E0;
    return;
L_088340E0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834104;
      }
      goto L_088340EC;
    }
L_088340EC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088340FCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x088340FCu) goto L_088340FC;
    return;
L_088340FC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(4))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_08834104;
L_08834104:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834118:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-10424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0883415Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10408));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883415Cu) goto L_0883415C;
    return;
L_0883415C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08834168u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08834168u) goto L_08834168;
    return;
L_08834168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (256u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    aot_gpr[18] = (13056u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08834198u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834198u) goto L_08834198;
    return;
L_08834198:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088341A4u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088341A4u) goto L_088341A4;
    return;
L_088341A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x088341C0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 110u, 0x08833908u>(ctx, &aot_mem) && ctx.pc == 0x088341C0u) goto L_088341C0;
    return;
L_088341C0:
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2144), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
      if (branch_taken) {
          goto L_088341F4;
      }
      goto L_088341E4;
    }
L_088341E4:
    aot_gpr[31] = (0x088341ECu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 55u, 0x088DA364u>(ctx, &aot_mem) && ctx.pc == 0x088341ECu) goto L_088341EC;
    return;
L_088341EC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    goto L_088341F4;
L_088341F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(228)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-10380));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08834218u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834218u) goto L_08834218;
    return;
L_08834218:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08834228u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08834228u) goto L_08834228;
    return;
L_08834228:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08834238u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834238u) goto L_08834238;
    return;
L_08834238:
    aot_gpr[31] = (0x08834240u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08834240u) goto L_08834240;
    return;
L_08834240:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08834250u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 120u, 0x08833A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08834250u) goto L_08834250;
    return;
L_08834250:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08834260u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834260u) goto L_08834260;
    return;
L_08834260:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x0883426Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x0883426Cu) goto L_0883426C;
    return;
L_0883426C:
    aot_gpr[5] = (16000u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[31] = (0x08834284u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 100u, 0x0885A63Cu>(ctx, &aot_mem) && ctx.pc == 0x08834284u) goto L_08834284;
    return;
L_08834284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08834290u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x08834290u) goto L_08834290;
    return;
L_08834290:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2204), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088342A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088340A4;
L_088342A8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088342B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10364));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088342B8u) goto L_088342B8;
    return;
L_088342B8:
    aot_gpr[31] = (0x088342C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 42u, 0x08838290u>(ctx, &aot_mem) && ctx.pc == 0x088342C0u) goto L_088342C0;
    return;
L_088342C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2192), static_cast<std::uint8_t>(aot_gpr[19]));
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
L_088342EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-10424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0883432Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10344));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883432Cu) goto L_0883432C;
    return;
L_0883432C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[5] = (16204u << 16u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_088343A4;
      }
      goto L_0883435C;
    }
L_0883435C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08834370u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10380));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834370u) goto L_08834370;
    return;
L_08834370:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x0883437Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883437Cu) goto L_0883437C;
    return;
L_0883437C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08834388u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x08834388u) goto L_08834388;
    return;
L_08834388:
    aot_gpr[5] = (16000u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0883439Cu);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 100u, 0x0885A63Cu>(ctx, &aot_mem) && ctx.pc == 0x0883439Cu) goto L_0883439C;
    return;
L_0883439C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_088343D0;
      }
      goto L_088343A4;
    }
L_088343A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2228)));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (16128u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (0x088343CCu);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 50u, 0x08816754u>(ctx, &aot_mem) && ctx.pc == 0x088343CCu) goto L_088343CC;
    return;
L_088343CC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    goto L_088343D0;
L_088343D0:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088343E4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 102u, 0x088337F4u>(ctx, &aot_mem) && ctx.pc == 0x088343E4u) goto L_088343E4;
    return;
L_088343E4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834404:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] & 255u);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0883443Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9968));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883443Cu) goto L_0883443C;
    return;
L_0883443C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08834454u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9944));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834454u) goto L_08834454;
    return;
L_08834454:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883446Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9920));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883446Cu) goto L_0883446C;
    return;
L_0883446C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08834484u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9896));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834484u) goto L_08834484;
    return;
L_08834484:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088344C8;
      }
      goto L_08834490;
    }
L_08834490:
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088344F8;
      }
      goto L_088344C8;
    }
L_088344C8:
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088344F8;
L_088344F8:
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
L_08834518:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] & 255u);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08834550u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9872));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834550u) goto L_08834550;
    return;
L_08834550:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08834568u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9852));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834568u) goto L_08834568;
    return;
L_08834568:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08834580u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9832));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834580u) goto L_08834580;
    return;
L_08834580:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08834598u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9816));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834598u) goto L_08834598;
    return;
L_08834598:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08834614;
      }
      goto L_088345A0;
    }
L_088345A0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088345BC;
      }
      goto L_088345A8;
    }
L_088345A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_088345BC;
L_088345BC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088345D8;
      }
      goto L_088345C4;
    }
L_088345C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_088345D8;
L_088345D8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088345F4;
      }
      goto L_088345E0;
    }
L_088345E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_088345F4;
L_088345F4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834674;
      }
      goto L_088345FC;
    }
L_088345FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08834674;
      }
      goto L_08834614;
    }
L_08834614:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883462C;
      }
      goto L_0883461C;
    }
L_0883461C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_0883462C;
L_0883462C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834644;
      }
      goto L_08834634;
    }
L_08834634:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_08834644;
L_08834644:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883465C;
      }
      goto L_0883464C;
    }
L_0883464C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_0883465C;
L_0883465C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834674;
      }
      goto L_08834664;
    }
L_08834664:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_08834674;
L_08834674:
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
L_08834694:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (2214u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x088346DCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9968));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088346DCu) goto L_088346DC;
    return;
L_088346DC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088346F4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9944));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088346F4u) goto L_088346F4;
    return;
L_088346F4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883470Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9920));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883470Cu) goto L_0883470C;
    return;
L_0883470C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08834724u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9896));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834724u) goto L_08834724;
    return;
L_08834724:
    aot_gpr[4] = (49624u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[26] = aot_fpr[12] - aot_fpr[20];
    aot_fpr[24] = aot_fpr[12] - aot_fpr[22];
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x08834748u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 75u, 0x0888C414u>(ctx, &aot_mem) && ctx.pc == 0x08834748u) goto L_08834748;
    return;
L_08834748:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08834758u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 75u, 0x0888C414u>(ctx, &aot_mem) && ctx.pc == 0x08834758u) goto L_08834758;
    return;
L_08834758:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[31] = (0x08834768u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 75u, 0x0888C414u>(ctx, &aot_mem) && ctx.pc == 0x08834768u) goto L_08834768;
    return;
L_08834768:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08834778u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 75u, 0x0888C414u>(ctx, &aot_mem) && ctx.pc == 0x08834778u) goto L_08834778;
    return;
L_08834778:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088347A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[6] = (2214u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[22] = (aot_gpr[7] & 255u);
    aot_gpr[20] = (aot_gpr[8] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08834800u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9872));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834800u) goto L_08834800;
    return;
L_08834800:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08834818u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9852));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834818u) goto L_08834818;
    return;
L_08834818:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08834830u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9832));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834830u) goto L_08834830;
    return;
L_08834830:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08834848u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9816));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834848u) goto L_08834848;
    return;
L_08834848:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08834898;
      }
      goto L_08834850;
    }
L_08834850:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0883486C;
      }
      goto L_08834858;
    }
L_08834858:
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08834878;
      }
      goto L_0883486C;
    }
L_0883486C:
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08834878;
L_08834878:
    aot_gpr[4] = (49716u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (49520u << 16u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[24];
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[31] = (0x08834898u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 75u, 0x0888C414u>(ctx, &aot_mem) && ctx.pc == 0x08834898u) goto L_08834898;
    return;
L_08834898:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088348E4;
      }
      goto L_088348A0;
    }
L_088348A0:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088348BC;
      }
      goto L_088348A8;
    }
L_088348A8:
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088348C8;
      }
      goto L_088348BC;
    }
L_088348BC:
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088348C8;
L_088348C8:
    aot_gpr[4] = (16856u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (49520u << 16u);
    aot_fpr[12] = aot_fpr[24] + aot_fpr[12];
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088348E4u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 75u, 0x0888C414u>(ctx, &aot_mem) && ctx.pc == 0x088348E4u) goto L_088348E4;
    return;
L_088348E4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834990;
      }
      goto L_088348EC;
    }
L_088348EC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088348FCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10424));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088348FCu) goto L_088348FC;
    return;
L_088348FC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883493C;
      }
      goto L_08834904;
    }
L_08834904:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (49712u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (49540u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[13] = aot_fpr[22] + aot_fpr[13];
    aot_gpr[31] = (0x08834934u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 75u, 0x0888C414u>(ctx, &aot_mem) && ctx.pc == 0x08834934u) goto L_08834934;
    return;
L_08834934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834990;
      }
      goto L_0883493C;
    }
L_0883493C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883494Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9796));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0883494Cu) goto L_0883494C;
    return;
L_0883494C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          goto L_08834968;
      }
      goto L_08834954;
    }
L_08834954:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08834960u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9772));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08834960u) goto L_08834960;
    return;
L_08834960:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834980;
      }
      goto L_08834968;
    }
L_08834968:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08834990;
      }
      goto L_08834980;
    }
L_08834980:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08834990;
L_08834990:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834A3C;
      }
      goto L_08834998;
    }
L_08834998:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088349A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10424));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088349A8u) goto L_088349A8;
    return;
L_088349A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088349E8;
      }
      goto L_088349B0;
    }
L_088349B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (16856u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (49540u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[13] = aot_fpr[22] + aot_fpr[13];
    aot_gpr[31] = (0x088349E0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 75u, 0x0888C414u>(ctx, &aot_mem) && ctx.pc == 0x088349E0u) goto L_088349E0;
    return;
L_088349E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834A3C;
      }
      goto L_088349E8;
    }
L_088349E8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088349F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9796));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088349F8u) goto L_088349F8;
    return;
L_088349F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          goto L_08834A14;
      }
      goto L_08834A00;
    }
L_08834A00:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08834A0Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9772));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08834A0Cu) goto L_08834A0C;
    return;
L_08834A0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834A2C;
      }
      goto L_08834A14;
    }
L_08834A14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08834A3C;
      }
      goto L_08834A2C;
    }
L_08834A2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08834A3C;
L_08834A3C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834A70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[18] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-10424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x08834ABCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9724));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834ABCu) goto L_08834ABC;
    return;
L_08834ABC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08834AD4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10380));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834AD4u) goto L_08834AD4;
    return;
L_08834AD4:
    aot_gpr[31] = (0x08834ADCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08834ADCu) goto L_08834ADC;
    return;
L_08834ADC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2224), aot_gpr[17]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08834B00u);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(2216));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x08834B00u) goto L_08834B00;
    return;
L_08834B00:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x08834B30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 61u, 0x0888C31Cu>(ctx, &aot_mem) && ctx.pc == 0x08834B30u) goto L_08834B30;
    return;
L_08834B30:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(158)));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x08834B58u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08834404;
L_08834B58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(158)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[31] = (0x08834B74u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    goto L_08834518;
L_08834B74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834BBC;
      }
      goto L_08834B84;
    }
L_08834B84:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08834B98u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08834694;
L_08834B98:
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08834BBCu);
    aot_gpr[8] = (0u | 1u);
    goto L_088347A4;
L_08834BBC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834BE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    aot_gpr[17] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-10424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[31] = (0x08834C3Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10380));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834C3Cu) goto L_08834C3C;
    return;
L_08834C3C:
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08834C58u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2196), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_08834A70;
L_08834C58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08834C64u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 61u, 0x088D93D4u>(ctx, &aot_mem) && ctx.pc == 0x08834C64u) goto L_08834C64;
    return;
L_08834C64:
    aot_gpr[31] = (0x08834C6Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 119u, 0x088DBABCu>(ctx, &aot_mem) && ctx.pc == 0x08834C6Cu) goto L_08834C6C;
    return;
L_08834C6C:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-10332));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10316));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[7]);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10296));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10280));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10260));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10216));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10344));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10192));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10180));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10160));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10148));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10128));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10116));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_gpr[30] = (2214u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-10100));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-10080));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-10056));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-10040));
      if (branch_taken) {
          goto L_08834FAC;
      }
      goto L_08834D44;
    }
L_08834D44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834FAC;
      }
      goto L_08834D50;
    }
L_08834D50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08834D60u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834D60u) goto L_08834D60;
    return;
L_08834D60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x08834D84u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834D84u) goto L_08834D84;
    return;
L_08834D84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834DA0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834DA0u) goto L_08834DA0;
    return;
L_08834DA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834DBCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834DBCu) goto L_08834DBC;
    return;
L_08834DBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834DD8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834DD8u) goto L_08834DD8;
    return;
L_08834DD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834DF4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834DF4u) goto L_08834DF4;
    return;
L_08834DF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834E10u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834E10u) goto L_08834E10;
    return;
L_08834E10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834E2Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834E2Cu) goto L_08834E2C;
    return;
L_08834E2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834E48u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834E48u) goto L_08834E48;
    return;
L_08834E48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834E64u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834E64u) goto L_08834E64;
    return;
L_08834E64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834E80u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834E80u) goto L_08834E80;
    return;
L_08834E80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834E9Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834E9Cu) goto L_08834E9C;
    return;
L_08834E9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834EB8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834EB8u) goto L_08834EB8;
    return;
L_08834EB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834ED4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834ED4u) goto L_08834ED4;
    return;
L_08834ED4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834EF0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834EF0u) goto L_08834EF0;
    return;
L_08834EF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834F0Cu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834F0Cu) goto L_08834F0C;
    return;
L_08834F0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834F28u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834F28u) goto L_08834F28;
    return;
L_08834F28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08834F44u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834F44u) goto L_08834F44;
    return;
L_08834F44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08834F68u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08834F68u) goto L_08834F68;
    return;
L_08834F68:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08834F74u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x08834F74u) goto L_08834F74;
    return;
L_08834F74:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08834F90u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 100u, 0x0885A63Cu>(ctx, &aot_mem) && ctx.pc == 0x08834F90u) goto L_08834F90;
    return;
L_08834F90:
    aot_gpr[31] = (0x08834F98u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08834F98u) goto L_08834F98;
    return;
L_08834F98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 17u, 0x088351C0u>(ctx, &aot_mem); return;
      }
      goto L_08834FA4;
    }
L_08834FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 33u, 0x08835278u>(ctx, &aot_mem); return;
      }
      goto L_08834FAC;
    }
L_08834FAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08834FB8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08834FB8u) goto L_08834FB8;
    return;
L_08834FB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08834FC8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834FC8u) goto L_08834FC8;
    return;
L_08834FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x08834FE8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08834FE8u) goto L_08834FE8;
    return;
L_08834FE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08835004u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0048(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0048_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_48(Runtime &runtime) {
    runtime.register_generated_unit(48u, 0x08834000u, 4096u, &recomp_unit_0048, &recomp_unit_0048_entry);
    runtime.register_function(0x08834000u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834014u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834020u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834030u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883404Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834068u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834074u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088340A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088340D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088340E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088340ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088340FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834104u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834118u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883415Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834168u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834198u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088341A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088341C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088341E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088341ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088341F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834218u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834228u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834238u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834240u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834250u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834260u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883426Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834284u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834290u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088342A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088342B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088342C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088342ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883432Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883435Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834370u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883437Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834388u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883439Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088343A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088343CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088343D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088343E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834404u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883443Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834454u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883446Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834484u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834490u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088344C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088344F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834518u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834550u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834568u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834580u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834598u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088345A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088345A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088345BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088345C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088345D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088345E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088345F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088345FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834614u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883461Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883462Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834634u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834644u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883464Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883465Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834664u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834674u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834694u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088346DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088346F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883470Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834724u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834748u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834758u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834768u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834778u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088347A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834800u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834818u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834830u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834848u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834850u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834858u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883486Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834878u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834898u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088348A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088348A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088348BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088348C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088348E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088348ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088348FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834904u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834934u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883493Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x0883494Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834954u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834960u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834968u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834980u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834990u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834998u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088349A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088349B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088349E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088349E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088349F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834A00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834A0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834A14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834A2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834A3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834A70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834ABCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834AD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834ADCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834B00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834B30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834B58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834B74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834B84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834B98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834BBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834BE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834C3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834C58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834C64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834C6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834D44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834D50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834D60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834D84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834DA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834DBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834DD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834DF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834E10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834E2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834E48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834E64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834E80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834E9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834EB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834ED4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834EF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834F0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834F28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834F44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834F68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834F74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834F90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834F98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834FA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834FACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834FB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834FC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x08834FE8u, &recomp_unit_0048, "recomp_unit_0048");
}
} // namespace psprecomp
