#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0435[1022] = {
    1, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0,
    13, 0, 0, 14, 0, 0, 0, 15, 16, 0, 17, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 22, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0,
    0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 37, 0, 38, 0, 0, 39, 0, 0,
    40, 0, 0, 41, 42, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 47, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52,
    0, 53, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 63, 0, 0, 0,
    64, 0, 0, 65, 0, 0, 66, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0,
    73, 0, 0, 0, 0, 74, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0,
    80, 0, 0, 0, 0, 81, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0,
    0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 153, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191,
};
void recomp_unit_0435_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089B7004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0435[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B7004;
    case 2u: goto L_089B7018;
    case 3u: goto L_089B701C;
    case 4u: goto L_089B7038;
    case 5u: goto L_089B7058;
    case 6u: goto L_089B7064;
    case 7u: goto L_089B7070;
    case 8u: goto L_089B708C;
    case 9u: goto L_089B70A0;
    case 10u: goto L_089B70D8;
    case 11u: goto L_089B70E8;
    case 12u: goto L_089B70F4;
    case 13u: goto L_089B7104;
    case 14u: goto L_089B7110;
    case 15u: goto L_089B7120;
    case 16u: goto L_089B7124;
    case 17u: goto L_089B712C;
    case 18u: goto L_089B7130;
    case 19u: goto L_089B714C;
    case 20u: goto L_089B7160;
    case 21u: goto L_089B7170;
    case 22u: goto L_089B7174;
    case 23u: goto L_089B7180;
    case 24u: goto L_089B71C0;
    case 25u: goto L_089B71CC;
    case 26u: goto L_089B71D8;
    case 27u: goto L_089B71E4;
    case 28u: goto L_089B71F0;
    case 29u: goto L_089B71FC;
    case 30u: goto L_089B7208;
    case 31u: goto L_089B7214;
    case 32u: goto L_089B7220;
    case 33u: goto L_089B723C;
    case 34u: goto L_089B7248;
    case 35u: goto L_089B7254;
    case 36u: goto L_089B7260;
    case 37u: goto L_089B7264;
    case 38u: goto L_089B726C;
    case 39u: goto L_089B7278;
    case 40u: goto L_089B7284;
    case 41u: goto L_089B7290;
    case 42u: goto L_089B7294;
    case 43u: goto L_089B729C;
    case 44u: goto L_089B72A8;
    case 45u: goto L_089B72B4;
    case 46u: goto L_089B72C0;
    case 47u: goto L_089B72C4;
    case 48u: goto L_089B72CC;
    case 49u: goto L_089B72D0;
    case 50u: goto L_089B72F0;
    case 51u: goto L_089B72F8;
    case 52u: goto L_089B7300;
    case 53u: goto L_089B7308;
    case 54u: goto L_089B7314;
    case 55u: goto L_089B731C;
    case 56u: goto L_089B7328;
    case 57u: goto L_089B7334;
    case 58u: goto L_089B7340;
    case 59u: goto L_089B7344;
    case 60u: goto L_089B7358;
    case 61u: goto L_089B7364;
    case 62u: goto L_089B7370;
    case 63u: goto L_089B7374;
    case 64u: goto L_089B7384;
    case 65u: goto L_089B7390;
    case 66u: goto L_089B739C;
    case 67u: goto L_089B73A0;
    case 68u: goto L_089B73AC;
    case 69u: goto L_089B73D0;
    case 70u: goto L_089B73E0;
    case 71u: goto L_089B73EC;
    case 72u: goto L_089B73F8;
    case 73u: goto L_089B7404;
    case 74u: goto L_089B7418;
    case 75u: goto L_089B741C;
    case 76u: goto L_089B7438;
    case 77u: goto L_089B745C;
    case 78u: goto L_089B746C;
    case 79u: goto L_089B7478;
    case 80u: goto L_089B7484;
    case 81u: goto L_089B7498;
    case 82u: goto L_089B749C;
    case 83u: goto L_089B74B8;
    case 84u: goto L_089B74DC;
    case 85u: goto L_089B74E8;
    case 86u: goto L_089B74F4;
    case 87u: goto L_089B7508;
    case 88u: goto L_089B7514;
    case 89u: goto L_089B752C;
    case 90u: goto L_089B7544;
    case 91u: goto L_089B76DC;
    case 92u: goto L_089B770C;
    case 93u: goto L_089B7714;
    case 94u: goto L_089B771C;
    case 95u: goto L_089B7724;
    case 96u: goto L_089B776C;
    case 97u: goto L_089B7790;
    case 98u: goto L_089B77A8;
    case 99u: goto L_089B77C0;
    case 100u: goto L_089B77F4;
    case 101u: goto L_089B7818;
    case 102u: goto L_089B7830;
    case 103u: goto L_089B7838;
    case 104u: goto L_089B7840;
    case 105u: goto L_089B784C;
    case 106u: goto L_089B7884;
    case 107u: goto L_089B789C;
    case 108u: goto L_089B78C4;
    case 109u: goto L_089B78DC;
    case 110u: goto L_089B78E4;
    case 111u: goto L_089B7918;
    case 112u: goto L_089B791C;
    case 113u: goto L_089B7930;
    case 114u: goto L_089B794C;
    case 115u: goto L_089B7958;
    case 116u: goto L_089B795C;
    case 117u: goto L_089B7984;
    case 118u: goto L_089B798C;
    case 119u: goto L_089B7998;
    case 120u: goto L_089B79A4;
    case 121u: goto L_089B79B8;
    case 122u: goto L_089B79C0;
    case 123u: goto L_089B79DC;
    case 124u: goto L_089B7A08;
    case 125u: goto L_089B7A10;
    case 126u: goto L_089B7A34;
    case 127u: goto L_089B7A40;
    case 128u: goto L_089B7A48;
    case 129u: goto L_089B7A50;
    case 130u: goto L_089B7A58;
    case 131u: goto L_089B7A64;
    case 132u: goto L_089B7A6C;
    case 133u: goto L_089B7AA4;
    case 134u: goto L_089B7AA8;
    case 135u: goto L_089B7ABC;
    case 136u: goto L_089B7AD8;
    case 137u: goto L_089B7AE4;
    case 138u: goto L_089B7AE8;
    case 139u: goto L_089B7B10;
    case 140u: goto L_089B7B18;
    case 141u: goto L_089B7B24;
    case 142u: goto L_089B7B34;
    case 143u: goto L_089B7B48;
    case 144u: goto L_089B7B50;
    case 145u: goto L_089B7B6C;
    case 146u: goto L_089B7B98;
    case 147u: goto L_089B7BA0;
    case 148u: goto L_089B7BC8;
    case 149u: goto L_089B7BD4;
    case 150u: goto L_089B7BDC;
    case 151u: goto L_089B7BE4;
    case 152u: goto L_089B7BEC;
    case 153u: goto L_089B7BF8;
    case 154u: goto L_089B7C00;
    case 155u: goto L_089B7C28;
    case 156u: goto L_089B7C38;
    case 157u: goto L_089B7C60;
    case 158u: goto L_089B7C70;
    case 159u: goto L_089B7C98;
    case 160u: goto L_089B7CA8;
    case 161u: goto L_089B7CD0;
    case 162u: goto L_089B7CE0;
    case 163u: goto L_089B7D14;
    case 164u: goto L_089B7D20;
    case 165u: goto L_089B7D38;
    case 166u: goto L_089B7D5C;
    case 167u: goto L_089B7D74;
    case 168u: goto L_089B7D9C;
    case 169u: goto L_089B7DAC;
    case 170u: goto L_089B7DD0;
    case 171u: goto L_089B7DDC;
    case 172u: goto L_089B7DF4;
    case 173u: goto L_089B7E00;
    case 174u: goto L_089B7E24;
    case 175u: goto L_089B7E3C;
    case 176u: goto L_089B7E64;
    case 177u: goto L_089B7E74;
    case 178u: goto L_089B7E9C;
    case 179u: goto L_089B7EAC;
    case 180u: goto L_089B7ED0;
    case 181u: goto L_089B7EE0;
    case 182u: goto L_089B7F08;
    case 183u: goto L_089B7F18;
    case 184u: goto L_089B7F40;
    case 185u: goto L_089B7F50;
    case 186u: goto L_089B7F78;
    case 187u: goto L_089B7F88;
    case 188u: goto L_089B7FB0;
    case 189u: goto L_089B7FC0;
    case 190u: goto L_089B7FE8;
    case 191u: goto L_089B7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B7004:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089B701C;
      }
      goto L_089B7018;
    }
L_089B7018:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    goto L_089B701C;
L_089B701C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089B7038:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B7058u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B7058u) goto L_089B7058;
    return;
L_089B7058:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B7064u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B7064u) goto L_089B7064;
    return;
L_089B7064:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B7070u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B7070u) goto L_089B7070;
    return;
L_089B7070:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(196));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089B708Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0433_entry, 433u, 206u, 0x089B5BBCu>(ctx, &aot_mem) && ctx.pc == 0x089B708Cu) goto L_089B708C;
    return;
L_089B708C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B70A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B70D8u);
    aot_gpr[19] = (aot_gpr[16] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B70D8u) goto L_089B70D8;
    return;
L_089B70D8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[31] = (0x089B70E8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B70E8u) goto L_089B70E8;
    return;
L_089B70E8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B70F4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B70F4u) goto L_089B70F4;
    return;
L_089B70F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089B714C;
      }
      goto L_089B7104;
    }
L_089B7104:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x089B7110u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B7110u) goto L_089B7110;
    return;
L_089B7110:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_089B7174;
    }
    goto L_089B7120;
L_089B7120:
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    goto L_089B7124;
L_089B7124:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B7130;
      }
      goto L_089B712C;
    }
L_089B712C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089B7130;
L_089B7130:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089B714C:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x089B7160u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B7160u) goto L_089B7160;
    return;
L_089B7160:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_089B7124;
      }
      goto L_089B7170;
    }
L_089B7170:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_089B7174;
L_089B7174:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089B7120;
L_089B7180:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B71C0u);
    aot_gpr[20] = (aot_gpr[17] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B71C0u) goto L_089B71C0;
    return;
L_089B71C0:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B71CCu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B71CCu) goto L_089B71CC;
    return;
L_089B71CC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089B71D8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089B71D8u) goto L_089B71D8;
    return;
L_089B71D8:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B71E4u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B71E4u) goto L_089B71E4;
    return;
L_089B71E4:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089B71F0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B71F0u) goto L_089B71F0;
    return;
L_089B71F0:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089B71FCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B71FCu) goto L_089B71FC;
    return;
L_089B71FC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089B7208u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B7208u) goto L_089B7208;
    return;
L_089B7208:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089B7214u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B7214u) goto L_089B7214;
    return;
L_089B7214:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089B7220u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B7220u) goto L_089B7220;
    return;
L_089B7220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    aot_gpr[2] = (aot_gpr[4] ^ 2u);
    aot_gpr[16] = (0u + 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    if (aot_gpr[2] == 0u) aot_gpr[16] = (aot_gpr[3]);
      if (branch_taken) {
          goto L_089B7314;
      }
      goto L_089B723C;
    }
L_089B723C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[4] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[16]);
        goto L_089B7328;
    }
    goto L_089B7248;
L_089B7248:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x089B7254u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B7254u) goto L_089B7254;
    return;
L_089B7254:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] == aot_gpr[19]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
        goto L_089B7344;
    }
    goto L_089B7260;
L_089B7260:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    goto L_089B7264;
L_089B7264:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B7300;
      }
      goto L_089B726C;
    }
L_089B726C:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[4] == aot_gpr[19]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[16]);
        goto L_089B7358;
    }
    goto L_089B7278;
L_089B7278:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089B7284u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B7284u) goto L_089B7284;
    return;
L_089B7284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] == aot_gpr[19]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
        goto L_089B7374;
    }
    goto L_089B7290;
L_089B7290:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    goto L_089B7294;
L_089B7294:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B72F0;
      }
      goto L_089B729C;
    }
L_089B729C:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[4] == aot_gpr[19]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[16]);
        goto L_089B7384;
    }
    goto L_089B72A8;
L_089B72A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (0x089B72B4u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B72B4u) goto L_089B72B4;
    return;
L_089B72B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[3] == aot_gpr[19]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_089B73A0;
    }
    goto L_089B72C0;
L_089B72C0:
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[16] ? 1u : 0u);
    goto L_089B72C4;
L_089B72C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B72D0;
      }
      goto L_089B72CC;
    }
L_089B72CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089B72D0;
L_089B72D0:
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
L_089B72F0:
    if (aot_gpr[4] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), 0u);
        goto L_089B72C0;
    }
    goto L_089B72F8;
L_089B72F8:
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[16] ? 1u : 0u);
    goto L_089B72C4;
L_089B7300:
    if (aot_gpr[4] != aot_gpr[2]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_089B7294;
    }
    goto L_089B7308;
L_089B7308:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089B7290;
L_089B7314:
    if (aot_gpr[4] != aot_gpr[19]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
        goto L_089B7264;
    }
    goto L_089B731C;
L_089B731C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089B7260;
L_089B7328:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089B7334u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B7334u) goto L_089B7334;
    return;
L_089B7334:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] != aot_gpr[19]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
        goto L_089B7264;
    }
    goto L_089B7340;
L_089B7340:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    goto L_089B7344;
L_089B7344:
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089B7260;
L_089B7358:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089B7364u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B7364u) goto L_089B7364;
    return;
L_089B7364:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] != aot_gpr[19]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_089B7294;
    }
    goto L_089B7370;
L_089B7370:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    goto L_089B7374;
L_089B7374:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089B7290;
L_089B7384:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089B7390u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B7390u) goto L_089B7390;
    return;
L_089B7390:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[19];
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_089B72C4;
      }
      goto L_089B739C;
    }
L_089B739C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    goto L_089B73A0;
L_089B73A0:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089B72C0;
L_089B73AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B73D0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B73D0u) goto L_089B73D0;
    return;
L_089B73D0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B73E0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B73E0u) goto L_089B73E0;
    return;
L_089B73E0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B73ECu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B73ECu) goto L_089B73EC;
    return;
L_089B73EC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B73F8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B73F8u) goto L_089B73F8;
    return;
L_089B73F8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B7404u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B7404u) goto L_089B7404;
    return;
L_089B7404:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_089B741C;
      }
      goto L_089B7418;
    }
L_089B7418:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    goto L_089B741C;
L_089B741C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089B7438:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B745Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B745Cu) goto L_089B745C;
    return;
L_089B745C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B746Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B746Cu) goto L_089B746C;
    return;
L_089B746C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B7478u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B7478u) goto L_089B7478;
    return;
L_089B7478:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B7484u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B7484u) goto L_089B7484;
    return;
L_089B7484:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_089B749C;
      }
      goto L_089B7498;
    }
L_089B7498:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    goto L_089B749C;
L_089B749C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089B74B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B74DCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B74DCu) goto L_089B74DC;
    return;
L_089B74DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B74E8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B74E8u) goto L_089B74E8;
    return;
L_089B74E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B74F4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B74F4u) goto L_089B74F4;
    return;
L_089B74F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089B7544;
      }
      goto L_089B7508;
    }
L_089B7508:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B752C;
      }
      goto L_089B7514;
    }
L_089B7514:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B752C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089B7544:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    goto L_089B7508;
L_089B76DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089B776C;
      }
      goto L_089B770C;
    }
L_089B770C:
    aot_gpr[31] = (0x089B7714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7714u) goto L_089B7714;
    return;
L_089B7714:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B77A8;
      }
      goto L_089B771C;
    }
L_089B771C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089B77A8;
      }
      goto L_089B7724;
    }
L_089B7724:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089B776C;
L_089B776C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7790u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7790u) goto L_089B7790;
    return;
L_089B7790:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B77A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B77C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089B7830;
      }
      goto L_089B77F4;
    }
L_089B77F4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7818u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7818u) goto L_089B7818;
    return;
L_089B7818:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7830:
    aot_gpr[31] = (0x089B7838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7838u) goto L_089B7838;
    return;
L_089B7838:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B789C;
      }
      goto L_089B7840;
    }
L_089B7840:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_089B789C;
      }
      goto L_089B784C;
    }
L_089B784C:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000001u) | ((0u & 0x00000001u) << 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7884u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7884u) goto L_089B7884;
    return;
L_089B7884:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B789C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B78C4u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B78C4u) goto L_089B78C4;
    return;
L_089B78C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B78DC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B78E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089B7A34;
      }
      goto L_089B7918;
    }
L_089B7918:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089B791C;
L_089B791C:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089B7930u);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7930u) goto L_089B7930;
    return;
L_089B7930:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089B795C;
      }
      goto L_089B794C;
    }
L_089B794C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B795C;
      }
      goto L_089B7958;
    }
L_089B7958:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(148), 0u);
    goto L_089B795C;
L_089B795C:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(-15728));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7984u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7984u) goto L_089B7984;
    return;
L_089B7984:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B7A10;
      }
      goto L_089B798C;
    }
L_089B798C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089B7A10;
      }
      goto L_089B7998;
    }
L_089B7998:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B79A4u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B79A4u) goto L_089B79A4;
    return;
L_089B79A4:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089B79B8u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B79B8u) goto L_089B79B8;
    return;
L_089B79B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B7A10;
      }
      goto L_089B79C0;
    }
L_089B79C0:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(192));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(148)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[3] + static_cast<std::uint32_t>(156));
    goto L_089B79DC;
L_089B79DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089B79DC;
      }
      goto L_089B7A08;
    }
L_089B7A08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089B7A10;
L_089B7A10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(196));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7A34:
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(68));
    aot_gpr[31] = (0x089B7A40u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 31u, 0x089831A4u>(ctx, &aot_mem) && ctx.pc == 0x089B7A40u) goto L_089B7A40;
    return;
L_089B7A40:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-987));
      if (branch_taken) {
          goto L_089B7A58;
      }
      goto L_089B7A48;
    }
L_089B7A48:
    aot_gpr[31] = (0x089B7A50u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 182u, 0x089ACC9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7A50u) goto L_089B7A50;
    return;
L_089B7A50:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089B791C;
L_089B7A58:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[31] = (0x089B7A64u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 182u, 0x089ACC9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7A64u) goto L_089B7A64;
    return;
L_089B7A64:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089B791C;
L_089B7A6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089B7BC8;
      }
      goto L_089B7AA4;
    }
L_089B7AA4:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089B7AA8;
L_089B7AA8:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089B7ABCu);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7ABCu) goto L_089B7ABC;
    return;
L_089B7ABC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089B7AE8;
      }
      goto L_089B7AD8;
    }
L_089B7AD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B7AE8;
      }
      goto L_089B7AE4;
    }
L_089B7AE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(148), 0u);
    goto L_089B7AE8;
L_089B7AE8:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(-15728));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7B10u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7B10u) goto L_089B7B10;
    return;
L_089B7B10:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B7BA0;
      }
      goto L_089B7B18;
    }
L_089B7B18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089B7BA0;
      }
      goto L_089B7B24;
    }
L_089B7B24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7B34u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7B34u) goto L_089B7B34;
    return;
L_089B7B34:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089B7B48u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7B48u) goto L_089B7B48;
    return;
L_089B7B48:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B7BA0;
      }
      goto L_089B7B50;
    }
L_089B7B50:
    aot_gpr[9] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(224));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(148)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[3] + static_cast<std::uint32_t>(156));
    goto L_089B7B6C;
L_089B7B6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[9] != aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089B7B6C;
      }
      goto L_089B7B98;
    }
L_089B7B98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089B7BA0;
L_089B7BA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(228));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7BC8:
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x089B7BD4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 31u, 0x089831A4u>(ctx, &aot_mem) && ctx.pc == 0x089B7BD4u) goto L_089B7BD4;
    return;
L_089B7BD4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-987));
      if (branch_taken) {
          goto L_089B7BEC;
      }
      goto L_089B7BDC;
    }
L_089B7BDC:
    aot_gpr[31] = (0x089B7BE4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 182u, 0x089ACC9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7BE4u) goto L_089B7BE4;
    return;
L_089B7BE4:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089B7AA8;
L_089B7BEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[31] = (0x089B7BF8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 182u, 0x089ACC9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7BF8u) goto L_089B7BF8;
    return;
L_089B7BF8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089B7AA8;
L_089B7C00:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7C28u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7C28u) goto L_089B7C28;
    return;
L_089B7C28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7C38:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7C60u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7C60u) goto L_089B7C60;
    return;
L_089B7C60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7C70:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7C98u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7C98u) goto L_089B7C98;
    return;
L_089B7C98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7CA8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7CD0u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7CD0u) goto L_089B7CD0;
    return;
L_089B7CD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7CE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[17] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089B7D38;
      }
      goto L_089B7D14;
    }
L_089B7D14:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089B7D20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7D20u) goto L_089B7D20;
    return;
L_089B7D20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(148), 0u);
        goto L_089B7D38;
    }
    goto L_089B7D38;
L_089B7D38:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7D5Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7D5Cu) goto L_089B7D5C;
    return;
L_089B7D5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(196));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7D74:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7D9Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7D9Cu) goto L_089B7D9C;
    return;
L_089B7D9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(196));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7DAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(68));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_089B7E00;
      }
      goto L_089B7DD0;
    }
L_089B7DD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089B7DDCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 182u, 0x089ACC9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7DDCu) goto L_089B7DDC;
    return;
L_089B7DDC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089B7DF4u);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B7DF4u) goto L_089B7DF4;
    return;
L_089B7DF4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    goto L_089B7E00;
L_089B7E00:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7E24u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7E24u) goto L_089B7E24;
    return;
L_089B7E24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(196));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7E3C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7E64u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7E64u) goto L_089B7E64;
    return;
L_089B7E64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7E74:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7E9Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7E9Cu) goto L_089B7E9C;
    return;
L_089B7E9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7EAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(61))))));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7ED0u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7ED0u) goto L_089B7ED0;
    return;
L_089B7ED0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7EE0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7F08u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7F08u) goto L_089B7F08;
    return;
L_089B7F08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7F18:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7F40u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7F40u) goto L_089B7F40;
    return;
L_089B7F40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7F50:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7F78u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7F78u) goto L_089B7F78;
    return;
L_089B7F78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(188));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7F88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(28))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7FB0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7FB0u) goto L_089B7FB0;
    return;
L_089B7FB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7FC0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B7FE8u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7FE8u) goto L_089B7FE8;
    return;
L_089B7FE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(192));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7FF8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    ctx.pc = 0x089B8000u; return;
}

void recomp_unit_0435(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0435_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_435(Runtime &runtime) {
    runtime.register_generated_unit(435u, 0x089B7000u, 4096u, &recomp_unit_0435, &recomp_unit_0435_entry);
    runtime.register_function(0x089B7004u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7018u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B701Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7038u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7058u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7064u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7070u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B708Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B70A0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B70D8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B70E8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B70F4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7104u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7110u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7120u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7124u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B712Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7130u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B714Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7160u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7170u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7174u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7180u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B71C0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B71CCu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B71D8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B71E4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B71F0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B71FCu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7208u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7214u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7220u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B723Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7248u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7254u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7260u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7264u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B726Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7278u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7284u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7290u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7294u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B729Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B72A8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B72B4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B72C0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B72C4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B72CCu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B72D0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B72F0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B72F8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7300u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7308u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7314u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B731Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7328u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7334u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7340u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7344u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7358u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7364u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7370u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7374u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7384u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7390u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B739Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B73A0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B73ACu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B73D0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B73E0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B73ECu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B73F8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7404u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7418u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B741Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7438u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B745Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B746Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7478u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7484u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7498u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B749Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B74B8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B74DCu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B74E8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B74F4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7508u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7514u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B752Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7544u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B76DCu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B770Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7714u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B771Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7724u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B776Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7790u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B77A8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B77C0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B77F4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7818u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7830u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7838u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7840u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B784Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7884u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B789Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B78C4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B78DCu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B78E4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7918u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B791Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7930u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B794Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7958u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B795Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7984u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B798Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7998u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B79A4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B79B8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B79C0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B79DCu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7A08u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7A10u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7A34u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7A40u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7A48u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7A50u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7A58u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7A64u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7A6Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7AA4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7AA8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7ABCu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7AD8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7AE4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7AE8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7B10u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7B18u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7B24u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7B34u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7B48u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7B50u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7B6Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7B98u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7BA0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7BC8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7BD4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7BDCu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7BE4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7BECu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7BF8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7C00u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7C28u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7C38u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7C60u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7C70u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7C98u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7CA8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7CD0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7CE0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7D14u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7D20u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7D38u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7D5Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7D74u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7D9Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7DACu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7DD0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7DDCu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7DF4u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7E00u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7E24u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7E3Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7E64u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7E74u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7E9Cu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7EACu, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7ED0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7EE0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7F08u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7F18u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7F40u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7F50u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7F78u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7F88u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7FB0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7FC0u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7FE8u, &recomp_unit_0435, "recomp_unit_0435");
    runtime.register_function(0x089B7FF8u, &recomp_unit_0435, "recomp_unit_0435");
}
} // namespace psprecomp
