#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0218[1023] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8,
    0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0,
    20, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48,
    0, 0, 49, 0, 50, 0, 0, 51, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 55, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 63, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 73, 0, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0,
    0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 88, 0, 89, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 93, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 99,
    0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 128, 0,
    0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 133, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137,
    0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 143, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    165, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0,
    0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 179, 0, 0, 180, 0, 0, 181, 182, 0, 183, 0, 0, 0,
    184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198,
};
void recomp_unit_0218_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088DE000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0218[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088DE000;
    case 2u: goto L_088DE010;
    case 3u: goto L_088DE01C;
    case 4u: goto L_088DE04C;
    case 5u: goto L_088DE054;
    case 6u: goto L_088DE064;
    case 7u: goto L_088DE070;
    case 8u: goto L_088DE07C;
    case 9u: goto L_088DE08C;
    case 10u: goto L_088DE090;
    case 11u: goto L_088DE0A8;
    case 12u: goto L_088DE0B0;
    case 13u: goto L_088DE0C4;
    case 14u: goto L_088DE0D4;
    case 15u: goto L_088DE0E8;
    case 16u: goto L_088DE104;
    case 17u: goto L_088DE138;
    case 18u: goto L_088DE15C;
    case 19u: goto L_088DE170;
    case 20u: goto L_088DE180;
    case 21u: goto L_088DE184;
    case 22u: goto L_088DE194;
    case 23u: goto L_088DE1B0;
    case 24u: goto L_088DE1D4;
    case 25u: goto L_088DE1E8;
    case 26u: goto L_088DE1F4;
    case 27u: goto L_088DE208;
    case 28u: goto L_088DE210;
    case 29u: goto L_088DE220;
    case 30u: goto L_088DE240;
    case 31u: goto L_088DE260;
    case 32u: goto L_088DE268;
    case 33u: goto L_088DE284;
    case 34u: goto L_088DE2A0;
    case 35u: goto L_088DE2B0;
    case 36u: goto L_088DE2BC;
    case 37u: goto L_088DE2DC;
    case 38u: goto L_088DE2E4;
    case 39u: goto L_088DE2F0;
    case 40u: goto L_088DE30C;
    case 41u: goto L_088DE324;
    case 42u: goto L_088DE35C;
    case 43u: goto L_088DE36C;
    case 44u: goto L_088DE378;
    case 45u: goto L_088DE390;
    case 46u: goto L_088DE3E8;
    case 47u: goto L_088DE3F0;
    case 48u: goto L_088DE3FC;
    case 49u: goto L_088DE408;
    case 50u: goto L_088DE410;
    case 51u: goto L_088DE41C;
    case 52u: goto L_088DE420;
    case 53u: goto L_088DE434;
    case 54u: goto L_088DE458;
    case 55u: goto L_088DE488;
    case 56u: goto L_088DE48C;
    case 57u: goto L_088DE498;
    case 58u: goto L_088DE4A4;
    case 59u: goto L_088DE4B0;
    case 60u: goto L_088DE4C4;
    case 61u: goto L_088DE4E0;
    case 62u: goto L_088DE510;
    case 63u: goto L_088DE514;
    case 64u: goto L_088DE520;
    case 65u: goto L_088DE52C;
    case 66u: goto L_088DE534;
    case 67u: goto L_088DE548;
    case 68u: goto L_088DE564;
    case 69u: goto L_088DE584;
    case 70u: goto L_088DE590;
    case 71u: goto L_088DE5B0;
    case 72u: goto L_088DE5CC;
    case 73u: goto L_088DE5D0;
    case 74u: goto L_088DE5DC;
    case 75u: goto L_088DE5E8;
    case 76u: goto L_088DE5F0;
    case 77u: goto L_088DE5F8;
    case 78u: goto L_088DE608;
    case 79u: goto L_088DE618;
    case 80u: goto L_088DE640;
    case 81u: goto L_088DE64C;
    case 82u: goto L_088DE660;
    case 83u: goto L_088DE674;
    case 84u: goto L_088DE6AC;
    case 85u: goto L_088DE6B8;
    case 86u: goto L_088DE6C4;
    case 87u: goto L_088DE6E0;
    case 88u: goto L_088DE6E4;
    case 89u: goto L_088DE6EC;
    case 90u: goto L_088DE6FC;
    case 91u: goto L_088DE718;
    case 92u: goto L_088DE730;
    case 93u: goto L_088DE734;
    case 94u: goto L_088DE744;
    case 95u: goto L_088DE750;
    case 96u: goto L_088DE758;
    case 97u: goto L_088DE764;
    case 98u: goto L_088DE76C;
    case 99u: goto L_088DE77C;
    case 100u: goto L_088DE784;
    case 101u: goto L_088DE798;
    case 102u: goto L_088DE7A4;
    case 103u: goto L_088DE7B0;
    case 104u: goto L_088DE7B8;
    case 105u: goto L_088DE7D4;
    case 106u: goto L_088DE7D8;
    case 107u: goto L_088DE7FC;
    case 108u: goto L_088DE824;
    case 109u: goto L_088DE830;
    case 110u: goto L_088DE84C;
    case 111u: goto L_088DE854;
    case 112u: goto L_088DE888;
    case 113u: goto L_088DE8B4;
    case 114u: goto L_088DE8C0;
    case 115u: goto L_088DE8EC;
    case 116u: goto L_088DE904;
    case 117u: goto L_088DE910;
    case 118u: goto L_088DE924;
    case 119u: goto L_088DE93C;
    case 120u: goto L_088DE96C;
    case 121u: goto L_088DE970;
    case 122u: goto L_088DE998;
    case 123u: goto L_088DE9A4;
    case 124u: goto L_088DE9B8;
    case 125u: goto L_088DE9D4;
    case 126u: goto L_088DE9E8;
    case 127u: goto L_088DE9F4;
    case 128u: goto L_088DE9F8;
    case 129u: goto L_088DEA08;
    case 130u: goto L_088DEA10;
    case 131u: goto L_088DEA24;
    case 132u: goto L_088DEA30;
    case 133u: goto L_088DEA34;
    case 134u: goto L_088DEA44;
    case 135u: goto L_088DEA4C;
    case 136u: goto L_088DEA70;
    case 137u: goto L_088DEA7C;
    case 138u: goto L_088DEA8C;
    case 139u: goto L_088DEA98;
    case 140u: goto L_088DEAB4;
    case 141u: goto L_088DEAC0;
    case 142u: goto L_088DEADC;
    case 143u: goto L_088DEAE0;
    case 144u: goto L_088DEAF4;
    case 145u: goto L_088DEB1C;
    case 146u: goto L_088DEB28;
    case 147u: goto L_088DEB3C;
    case 148u: goto L_088DEB50;
    case 149u: goto L_088DEB70;
    case 150u: goto L_088DEB78;
    case 151u: goto L_088DEBA0;
    case 152u: goto L_088DEBCC;
    case 153u: goto L_088DEC08;
    case 154u: goto L_088DEC14;
    case 155u: goto L_088DEC20;
    case 156u: goto L_088DEC28;
    case 157u: goto L_088DEC38;
    case 158u: goto L_088DEC64;
    case 159u: goto L_088DEC6C;
    case 160u: goto L_088DECA8;
    case 161u: goto L_088DECCC;
    case 162u: goto L_088DECD8;
    case 163u: goto L_088DECE0;
    case 164u: goto L_088DECF0;
    case 165u: goto L_088DED00;
    case 166u: goto L_088DED10;
    case 167u: goto L_088DED18;
    case 168u: goto L_088DED24;
    case 169u: goto L_088DED34;
    case 170u: goto L_088DED44;
    case 171u: goto L_088DED54;
    case 172u: goto L_088DED64;
    case 173u: goto L_088DED74;
    case 174u: goto L_088DED84;
    case 175u: goto L_088DEDE4;
    case 176u: goto L_088DEE14;
    case 177u: goto L_088DEE40;
    case 178u: goto L_088DEE48;
    case 179u: goto L_088DEE4C;
    case 180u: goto L_088DEE58;
    case 181u: goto L_088DEE64;
    case 182u: goto L_088DEE68;
    case 183u: goto L_088DEE70;
    case 184u: goto L_088DEE80;
    case 185u: goto L_088DEE94;
    case 186u: goto L_088DEE9C;
    case 187u: goto L_088DEEBC;
    case 188u: goto L_088DEECC;
    case 189u: goto L_088DEF10;
    case 190u: goto L_088DEF38;
    case 191u: goto L_088DEF44;
    case 192u: goto L_088DEF58;
    case 193u: goto L_088DEFB0;
    case 194u: goto L_088DEFBC;
    case 195u: goto L_088DEFD0;
    case 196u: goto L_088DEFDC;
    case 197u: goto L_088DEFE8;
    case 198u: goto L_088DEFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088DE000:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088DE010u);
    aot_gpr[5] = (aot_gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 114u, 0x088DD970u>(ctx, &aot_mem) && ctx.pc == 0x088DE010u) goto L_088DE010;
    return;
L_088DE010:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE01C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088DE064;
      }
      goto L_088DE04C;
    }
L_088DE04C:
    aot_gpr[31] = (0x088DE054u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 46u, 0x08883384u>(ctx, &aot_mem) && ctx.pc == 0x088DE054u) goto L_088DE054;
    return;
L_088DE054:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088DE064u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5236)));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 111u, 0x088838B4u>(ctx, &aot_mem) && ctx.pc == 0x088DE064u) goto L_088DE064;
    return;
L_088DE064:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE090;
      }
      goto L_088DE070;
    }
L_088DE070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE090;
      }
      goto L_088DE07C;
    }
L_088DE07C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DE08Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DE08Cu) goto L_088DE08C;
    return;
L_088DE08C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_088DE090;
L_088DE090:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088DE0A8u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 159u, 0x088DDC3Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE0A8u) goto L_088DE0A8;
    return;
L_088DE0A8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE0E8;
      }
      goto L_088DE0B0;
    }
L_088DE0B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DE0E8;
      }
      goto L_088DE0C4;
    }
L_088DE0C4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088DE0D4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 114u, 0x088DD970u>(ctx, &aot_mem) && ctx.pc == 0x088DE0D4u) goto L_088DE0D4;
    return;
L_088DE0D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE0C4;
      }
      goto L_088DE0E8;
    }
L_088DE0E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE104:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DE194;
      }
      goto L_088DE138;
    }
L_088DE138:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(13)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_088DE170;
      }
      goto L_088DE15C;
    }
L_088DE15C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088DE184;
      }
      goto L_088DE170;
    }
L_088DE170:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088DE180u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 122u, 0x08883988u>(ctx, &aot_mem) && ctx.pc == 0x088DE180u) goto L_088DE180;
    return;
L_088DE180:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088DE184;
L_088DE184:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088DE138;
      }
      goto L_088DE194;
    }
L_088DE194:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE1B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088DE210;
      }
      goto L_088DE1D4;
    }
L_088DE1D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DE208;
      }
      goto L_088DE1E8;
    }
L_088DE1E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DE1F4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 14u, 0x088841FCu>(ctx, &aot_mem) && ctx.pc == 0x088DE1F4u) goto L_088DE1F4;
    return;
L_088DE1F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088DE1E8;
      }
      goto L_088DE208;
    }
L_088DE208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE30C;
      }
      goto L_088DE210;
    }
L_088DE210:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 4u);
    if (aot_gpr[4] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_088DE268;
    }
    goto L_088DE220;
L_088DE220:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DE2A0;
      }
      goto L_088DE240;
    }
L_088DE240:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 70u);
    aot_gpr[31] = (0x088DE260u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 199u, 0x088DDF50u>(ctx, &aot_mem) && ctx.pc == 0x088DE260u) goto L_088DE260;
    return;
L_088DE260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE2A0;
      }
      goto L_088DE268;
    }
L_088DE268:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DE2A0;
      }
      goto L_088DE284;
    }
L_088DE284:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (0u | 70u);
    aot_gpr[31] = (0x088DE2A0u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 199u, 0x088DDF50u>(ctx, &aot_mem) && ctx.pc == 0x088DE2A0u) goto L_088DE2A0;
    return;
L_088DE2A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE2E4;
      }
      goto L_088DE2B0;
    }
L_088DE2B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE30C;
      }
      goto L_088DE2BC;
    }
L_088DE2BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 80u);
    aot_gpr[31] = (0x088DE2DCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 199u, 0x088DDF50u>(ctx, &aot_mem) && ctx.pc == 0x088DE2DCu) goto L_088DE2DC;
    return;
L_088DE2DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE30C;
      }
      goto L_088DE2E4;
    }
L_088DE2E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE30C;
      }
      goto L_088DE2F0;
    }
L_088DE2F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (0u | 80u);
    aot_gpr[31] = (0x088DE30Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 199u, 0x088DDF50u>(ctx, &aot_mem) && ctx.pc == 0x088DE30Cu) goto L_088DE30C;
    return;
L_088DE30C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE324:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088DE35Cu);
    aot_gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 199u, 0x088DDF50u>(ctx, &aot_mem) && ctx.pc == 0x088DE35Cu) goto L_088DE35C;
    return;
L_088DE35C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 90u);
    aot_gpr[31] = (0x088DE36Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 199u, 0x088DDF50u>(ctx, &aot_mem) && ctx.pc == 0x088DE36Cu) goto L_088DE36C;
    return;
L_088DE36C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088DE378u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088DE104;
L_088DE378:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE390:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_088DE434;
      }
      goto L_088DE3E8;
    }
L_088DE3E8:
    aot_gpr[18] = (0u | 70u);
    aot_gpr[17] = (0u | 80u);
    goto L_088DE3F0;
L_088DE3F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DE420;
      }
      goto L_088DE3FC;
    }
L_088DE3FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088DE410;
      }
      goto L_088DE408;
    }
L_088DE408:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088DE420;
      }
      goto L_088DE410;
    }
L_088DE410:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DE41Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 14u, 0x088841FCu>(ctx, &aot_mem) && ctx.pc == 0x088DE41Cu) goto L_088DE41C;
    return;
L_088DE41C:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(16));
    goto L_088DE420;
L_088DE420:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE3F0;
      }
      goto L_088DE434;
    }
L_088DE434:
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
L_088DE458:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DE4C4;
      }
      goto L_088DE488;
    }
L_088DE488:
    aot_gpr[17] = (0u | 2u);
    goto L_088DE48C;
L_088DE48C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088DE4B0;
      }
      goto L_088DE498;
    }
L_088DE498:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088DE4A4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 114u, 0x088DD970u>(ctx, &aot_mem) && ctx.pc == 0x088DE4A4u) goto L_088DE4A4;
    return;
L_088DE4A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DE4B0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 14u, 0x088841FCu>(ctx, &aot_mem) && ctx.pc == 0x088DE4B0u) goto L_088DE4B0;
    return;
L_088DE4B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088DE48C;
      }
      goto L_088DE4C4;
    }
L_088DE4C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE4E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DE548;
      }
      goto L_088DE510;
    }
L_088DE510:
    aot_gpr[17] = (0u | 2u);
    goto L_088DE514;
L_088DE514:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088DE534;
      }
      goto L_088DE520;
    }
L_088DE520:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088DE52Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 114u, 0x088DD970u>(ctx, &aot_mem) && ctx.pc == 0x088DE52Cu) goto L_088DE52C;
    return;
L_088DE52C:
    aot_gpr[31] = (0x088DE534u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 8u, 0x08884164u>(ctx, &aot_mem) && ctx.pc == 0x088DE534u) goto L_088DE534;
    return;
L_088DE534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088DE514;
      }
      goto L_088DE548;
    }
L_088DE548:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE564:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32736), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE584:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE590:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] << 2u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE608;
      }
      goto L_088DE5B0;
    }
L_088DE5B0:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE608;
      }
      goto L_088DE5CC;
    }
L_088DE5CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    goto L_088DE5D0;
L_088DE5D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE5F8;
      }
      goto L_088DE5DC;
    }
L_088DE5DC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DE5F8;
      }
      goto L_088DE5E8;
    }
L_088DE5E8:
    aot_gpr[31] = (0x088DE5F0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x088C61B8u>(ctx, &aot_mem) && ctx.pc == 0x088DE5F0u) goto L_088DE5F0;
    return;
L_088DE5F0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_088DE608;
      }
      goto L_088DE5F8;
    }
L_088DE5F8:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DE5D0;
      }
      goto L_088DE608;
    }
L_088DE608:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE618:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE660;
      }
      goto L_088DE640;
    }
L_088DE640:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088DE64Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088DE590;
L_088DE64C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE640;
      }
      goto L_088DE660;
    }
L_088DE660:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE674:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088DE6ACu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088DE6ACu) goto L_088DE6AC;
    return;
L_088DE6AC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE6E4;
      }
      goto L_088DE6B8;
    }
L_088DE6B8:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x088DE6C4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088DE6C4u) goto L_088DE6C4;
    return;
L_088DE6C4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088DE6E0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_088DEE9C;
L_088DE6E0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088DE6E4;
L_088DE6E4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE6FC;
      }
      goto L_088DE6EC;
    }
L_088DE6EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_088DE6FC;
L_088DE6FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE718:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE77C;
      }
      goto L_088DE730;
    }
L_088DE730:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    goto L_088DE734;
L_088DE734:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DE76C;
      }
      goto L_088DE744;
    }
L_088DE744:
    aot_gpr[5] = (0u | 32u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE758;
      }
      goto L_088DE750;
    }
L_088DE750:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[9]);
      if (branch_taken) {
          goto L_088DE764;
      }
      goto L_088DE758;
    }
L_088DE758:
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    goto L_088DE764;
L_088DE764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE77C;
      }
      goto L_088DE76C;
    }
L_088DE76C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DE734;
      }
      goto L_088DE77C;
    }
L_088DE77C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE784:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE7B0;
      }
      goto L_088DE798;
    }
L_088DE798:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_088DE7B0;
      }
      goto L_088DE7A4;
    }
L_088DE7A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_088DE7B0;
L_088DE7B0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE7B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088DE824;
      }
      goto L_088DE7D4;
    }
L_088DE7D4:
    aot_gpr[5] = (2216u << 16u);
    goto L_088DE7D8;
L_088DE7D8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DE7FCu);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE7FCu) goto L_088DE7FC;
    return;
L_088DE7FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088DE7D8;
      }
      goto L_088DE824;
    }
L_088DE824:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE830:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[8] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088DE8B4;
      }
      goto L_088DE84C;
    }
L_088DE84C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2216u << 16u);
    goto L_088DE854;
L_088DE854:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(45)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (aot_gpr[6] << (aot_gpr[4] & 31u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[31] = (0x088DE888u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE888u) goto L_088DE888;
    return;
L_088DE888:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088DE854;
      }
      goto L_088DE8B4;
    }
L_088DE8B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE8C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088DE924;
      }
      goto L_088DE8EC;
    }
L_088DE8EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x088DE904u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DE904u) goto L_088DE904;
    return;
L_088DE904:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DE910u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 91u, 0x088DF6B0u>(ctx, &aot_mem) && ctx.pc == 0x088DE910u) goto L_088DE910;
    return;
L_088DE910:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DE8EC;
      }
      goto L_088DE924;
    }
L_088DE924:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE93C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088DE9B8;
      }
      goto L_088DE96C;
    }
L_088DE96C:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_088DE970;
L_088DE970:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(45)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[6] = (aot_gpr[17] << (aot_gpr[6] & 31u));
    aot_gpr[31] = (0x088DE998u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DE998u) goto L_088DE998;
    return;
L_088DE998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DE9A4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 59u, 0x088DF45Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE9A4u) goto L_088DE9A4;
    return;
L_088DE9A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DE970;
      }
      goto L_088DE9B8;
    }
L_088DE9B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE9D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEA08;
      }
      goto L_088DE9E8;
    }
L_088DE9E8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE9F8;
      }
      goto L_088DE9F4;
    }
L_088DE9F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    goto L_088DE9F8;
L_088DE9F8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DE9E8;
      }
      goto L_088DEA08;
    }
L_088DEA08:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEA10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEA44;
      }
      goto L_088DEA24;
    }
L_088DEA24:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEA34;
      }
      goto L_088DEA30;
    }
L_088DEA30:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), 0u);
    goto L_088DEA34;
L_088DEA34:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DEA24;
      }
      goto L_088DEA44;
    }
L_088DEA44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEA4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] << 2u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEAE0;
      }
      goto L_088DEA70;
    }
L_088DEA70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEAE0;
      }
      goto L_088DEA7C;
    }
L_088DEA7C:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DEA8Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DEA8Cu) goto L_088DEA8C;
    return;
L_088DEA8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DEA98u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DEA98u) goto L_088DEA98;
    return;
L_088DEA98:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088DEAB4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 48u, 0x08942488u>(ctx, &aot_mem) && ctx.pc == 0x088DEAB4u) goto L_088DEAB4;
    return;
L_088DEAB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEADC;
      }
      goto L_088DEAC0;
    }
L_088DEAC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088DEADCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DEADCu) goto L_088DEADC;
    return;
L_088DEADC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_088DEAE0;
L_088DEAE0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEAF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEB3C;
      }
      goto L_088DEB1C;
    }
L_088DEB1C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088DEB28u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088DEA4C;
L_088DEB28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DEB1C;
      }
      goto L_088DEB3C;
    }
L_088DEB3C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEB50:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32744), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEB70:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_088DEB78;
L_088DEB78:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(76), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(108), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(92), 0u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(128), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DEB78;
      }
      goto L_088DEBA0;
    }
L_088DEBA0:
    aot_gpr[5] = (48967u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 44564u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(325), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (16199u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(312), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 44564u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(316), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEBCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
      if (branch_taken) {
          goto L_088DEC6C;
      }
      goto L_088DEC08;
    }
L_088DEC08:
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088DEC14u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 141u, 0x08942B24u>(ctx, &aot_mem) && ctx.pc == 0x088DEC14u) goto L_088DEC14;
    return;
L_088DEC14:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088DEC20;
L_088DEC20:
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(212), 0u);
      if (branch_taken) {
          goto L_088DEC38;
      }
      goto L_088DEC28;
    }
L_088DEC28:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(168), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(172), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(176), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(144), 0u);
    goto L_088DEC38;
L_088DEC38:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(180), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(196), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(228), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(244), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(260), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(148), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(276), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DEC20;
      }
      goto L_088DEC64;
    }
L_088DEC64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEDE4;
      }
      goto L_088DEC6C;
    }
L_088DEC6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[16] + static_cast<std::uint32_t>(212));
    aot_gpr[9] = (aot_gpr[16] + static_cast<std::uint32_t>(168));
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(176));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(180));
    aot_gpr[30] = (aot_gpr[16] + static_cast<std::uint32_t>(196));
    aot_gpr[23] = (aot_gpr[16] + static_cast<std::uint32_t>(228));
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(244));
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(260));
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(148));
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(276));
    aot_gpr[17] = (2216u << 16u);
    goto L_088DECA8;
L_088DECA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[31] = (0x088DECCCu);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DECCCu) goto L_088DECCC;
    return;
L_088DECCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_088DED18;
      }
      goto L_088DECD8;
    }
L_088DECD8:
    aot_gpr[31] = (0x088DECE0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DECE0u) goto L_088DECE0;
    return;
L_088DECE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x088DECF0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DECF0u) goto L_088DECF0;
    return;
L_088DECF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(172), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088DED00u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DED00u) goto L_088DED00;
    return;
L_088DED00:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088DED10u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DED10u) goto L_088DED10;
    return;
L_088DED10:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    goto L_088DED18;
L_088DED18:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[31] = (0x088DED24u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DED24u) goto L_088DED24;
    return;
L_088DED24:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(180), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DED34u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DED34u) goto L_088DED34;
    return;
L_088DED34:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DED44u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DED44u) goto L_088DED44;
    return;
L_088DED44:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(228), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DED54u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DED54u) goto L_088DED54;
    return;
L_088DED54:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(244), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DED64u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DED64u) goto L_088DED64;
    return;
L_088DED64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(260), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DED74u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DED74u) goto L_088DED74;
    return;
L_088DED74:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DED84u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DED84u) goto L_088DED84;
    return;
L_088DED84:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(276), 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DECA8;
      }
      goto L_088DEDE4;
    }
L_088DEDE4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEE14:
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(322), static_cast<std::uint16_t>(0u));
    aot_gpr[10] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(325), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(292), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    goto L_088DEE40;
L_088DEE40:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DEE4C;
      }
      goto L_088DEE48;
    }
L_088DEE48:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(128), 0u);
    goto L_088DEE4C;
L_088DEE4C:
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEE64;
      }
      goto L_088DEE58;
    }
L_088DEE58:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[10]);
      if (branch_taken) {
          goto L_088DEE68;
      }
      goto L_088DEE64;
    }
L_088DEE64:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_088DEE68;
L_088DEE68:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEE80;
      }
      goto L_088DEE70;
    }
L_088DEE70:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(92), aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(76), aot_gpr[10]);
    goto L_088DEE80;
L_088DEE80:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DEE40;
      }
      goto L_088DEE94;
    }
L_088DEE94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEE9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088DEF44;
      }
      goto L_088DEEBC;
    }
L_088DEEBC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088DEECCu);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088DEECCu) goto L_088DEECC;
    return;
L_088DEECC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (0u < aot_gpr[17] ? 1u : 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(138), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (20563u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20575));
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088DEF10u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088DEF10u) goto L_088DEF10;
    return;
L_088DEF10:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DEF38u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DEF38u) goto L_088DEF38;
    return;
L_088DEF38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (0x088DEF44u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088DEF44u) goto L_088DEF44;
    return;
L_088DEF44:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEF58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[30] = (aot_gpr[5] | 0u);
    aot_gpr[23] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[8]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 8u, 0x088DF030u>(ctx, &aot_mem); return;
      }
      goto L_088DEFB0;
    }
L_088DEFB0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[23] == aot_gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 8u, 0x088DF030u>(ctx, &aot_mem); return;
      }
      goto L_088DEFBC;
    }
L_088DEFBC:
    aot_gpr[22] = (1u << 16u);
    aot_gpr[21] = (1u << 16u);
    aot_gpr[20] = (0u | 10000u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(14464));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4464));
    goto L_088DEFD0;
L_088DEFD0:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x088DEFDCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x088DEFDCu) goto L_088DEFDC;
    return;
L_088DEFDC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 5u, 0x088DF018u>(ctx, &aot_mem); return;
      }
      goto L_088DEFE8;
    }
L_088DEFE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[21]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 5u, 0x088DF018u>(ctx, &aot_mem); return;
      }
      goto L_088DEFF8;
    }
L_088DEFF8:
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    ctx.pc = 0x088DF000u; return;
}

void recomp_unit_0218(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0218_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_218(Runtime &runtime) {
    runtime.register_generated_unit(218u, 0x088DE000u, 4096u, &recomp_unit_0218, &recomp_unit_0218_entry);
    runtime.register_function(0x088DE000u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE010u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE01Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE04Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE054u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE064u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE070u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE07Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE08Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE090u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE0A8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE0B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE0C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE0D4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE0E8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE104u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE138u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE15Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE170u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE180u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE184u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE194u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE1B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE1D4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE1E8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE1F4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE208u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE210u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE220u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE240u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE260u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE268u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE284u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE2A0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE2B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE2BCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE2DCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE2E4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE2F0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE30Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE324u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE35Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE36Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE378u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE390u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE3E8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE3F0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE3FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE408u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE410u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE41Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE420u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE434u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE458u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE488u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE48Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE498u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE4A4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE4B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE4C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE4E0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE510u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE514u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE520u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE52Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE534u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE548u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE564u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE584u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE590u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE5B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE5CCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE5D0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE5DCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE5E8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE5F0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE5F8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE608u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE618u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE640u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE64Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE660u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE674u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE6ACu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE6B8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE6C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE6E0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE6E4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE6ECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE6FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE718u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE730u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE734u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE744u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE750u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE758u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE764u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE76Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE77Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE784u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE798u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE7A4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE7B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE7B8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE7D4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE7D8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE7FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE824u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE830u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE84Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE854u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE888u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE8B4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE8C0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE8ECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE904u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE910u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE924u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE93Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE96Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE970u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE998u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE9A4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE9B8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE9D4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE9E8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE9F4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DE9F8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEA08u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEA10u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEA24u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEA30u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEA34u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEA44u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEA4Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEA70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEA7Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEA8Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEA98u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEAB4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEAC0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEADCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEAE0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEAF4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEB1Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEB28u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEB3Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEB50u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEB70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEB78u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEBA0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEBCCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEC08u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEC14u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEC20u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEC28u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEC38u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEC64u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEC6Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DECA8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DECCCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DECD8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DECE0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DECF0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DED00u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DED10u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DED18u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DED24u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DED34u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DED44u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DED54u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DED64u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DED74u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DED84u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEDE4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEE14u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEE40u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEE48u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEE4Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEE58u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEE64u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEE68u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEE70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEE80u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEE94u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEE9Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEEBCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEECCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEF10u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEF38u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEF44u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEF58u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEFB0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEFBCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEFD0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEFDCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEFE8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x088DEFF8u, &recomp_unit_0218, "recomp_unit_0218");
}
} // namespace psprecomp
