#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0292[1022] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 14, 0, 15, 0, 0,
    0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0,
    29, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0,
    0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 55, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0,
    0, 60, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 90, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94,
    0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0,
    125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 140, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 142, 143, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 148, 0, 149, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0,
    156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 171,
};
void recomp_unit_0292_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08928000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0292[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08928000;
    case 2u: goto L_0892800C;
    case 3u: goto L_08928028;
    case 4u: goto L_08928094;
    case 5u: goto L_089280BC;
    case 6u: goto L_089280D8;
    case 7u: goto L_0892810C;
    case 8u: goto L_08928114;
    case 9u: goto L_08928120;
    case 10u: goto L_08928130;
    case 11u: goto L_08928148;
    case 12u: goto L_08928160;
    case 13u: goto L_08928168;
    case 14u: goto L_0892816C;
    case 15u: goto L_08928174;
    case 16u: goto L_08928190;
    case 17u: goto L_08928198;
    case 18u: goto L_089281A4;
    case 19u: goto L_089281BC;
    case 20u: goto L_089281D0;
    case 21u: goto L_089281DC;
    case 22u: goto L_08928214;
    case 23u: goto L_08928244;
    case 24u: goto L_0892824C;
    case 25u: goto L_08928254;
    case 26u: goto L_0892825C;
    case 27u: goto L_08928268;
    case 28u: goto L_08928274;
    case 29u: goto L_08928280;
    case 30u: goto L_08928298;
    case 31u: goto L_089282A0;
    case 32u: goto L_089282DC;
    case 33u: goto L_089282E4;
    case 34u: goto L_089282F0;
    case 35u: goto L_08928314;
    case 36u: goto L_0892832C;
    case 37u: goto L_08928338;
    case 38u: goto L_08928340;
    case 39u: goto L_0892835C;
    case 40u: goto L_0892836C;
    case 41u: goto L_08928378;
    case 42u: goto L_08928390;
    case 43u: goto L_0892839C;
    case 44u: goto L_089283A8;
    case 45u: goto L_089283BC;
    case 46u: goto L_089283C4;
    case 47u: goto L_089283E4;
    case 48u: goto L_0892840C;
    case 49u: goto L_089284D0;
    case 50u: goto L_08928564;
    case 51u: goto L_089285A0;
    case 52u: goto L_089285D0;
    case 53u: goto L_089285E4;
    case 54u: goto L_08928608;
    case 55u: goto L_08928614;
    case 56u: goto L_0892861C;
    case 57u: goto L_08928620;
    case 58u: goto L_0892866C;
    case 59u: goto L_08928678;
    case 60u: goto L_08928684;
    case 61u: goto L_08928690;
    case 62u: goto L_0892869C;
    case 63u: goto L_089286A4;
    case 64u: goto L_089286B0;
    case 65u: goto L_089286BC;
    case 66u: goto L_089286C0;
    case 67u: goto L_089286F0;
    case 68u: goto L_08928704;
    case 69u: goto L_08928714;
    case 70u: goto L_08928748;
    case 71u: goto L_0892877C;
    case 72u: goto L_089287A8;
    case 73u: goto L_089287D4;
    case 74u: goto L_089287FC;
    case 75u: goto L_08928814;
    case 76u: goto L_08928824;
    case 77u: goto L_08928834;
    case 78u: goto L_08928858;
    case 79u: goto L_08928870;
    case 80u: goto L_08928880;
    case 81u: goto L_08928888;
    case 82u: goto L_0892889C;
    case 83u: goto L_089288B4;
    case 84u: goto L_089288BC;
    case 85u: goto L_089288C4;
    case 86u: goto L_089288D0;
    case 87u: goto L_089288F0;
    case 88u: goto L_089288F8;
    case 89u: goto L_08928914;
    case 90u: goto L_08928920;
    case 91u: goto L_08928924;
    case 92u: goto L_08928934;
    case 93u: goto L_0892896C;
    case 94u: goto L_0892897C;
    case 95u: goto L_08928984;
    case 96u: goto L_0892899C;
    case 97u: goto L_089289A4;
    case 98u: goto L_089289AC;
    case 99u: goto L_089289B0;
    case 100u: goto L_089289CC;
    case 101u: goto L_089289FC;
    case 102u: goto L_08928A0C;
    case 103u: goto L_08928A14;
    case 104u: goto L_08928A1C;
    case 105u: goto L_08928A28;
    case 106u: goto L_08928A30;
    case 107u: goto L_08928A44;
    case 108u: goto L_08928A50;
    case 109u: goto L_08928A60;
    case 110u: goto L_08928A68;
    case 111u: goto L_08928A7C;
    case 112u: goto L_08928A90;
    case 113u: goto L_08928A9C;
    case 114u: goto L_08928AA8;
    case 115u: goto L_08928AC0;
    case 116u: goto L_08928AD8;
    case 117u: goto L_08928AEC;
    case 118u: goto L_08928B04;
    case 119u: goto L_08928B14;
    case 120u: goto L_08928B1C;
    case 121u: goto L_08928B24;
    case 122u: goto L_08928B54;
    case 123u: goto L_08928B60;
    case 124u: goto L_08928B74;
    case 125u: goto L_08928B80;
    case 126u: goto L_08928B90;
    case 127u: goto L_08928BA0;
    case 128u: goto L_08928BA8;
    case 129u: goto L_08928BB8;
    case 130u: goto L_08928BC4;
    case 131u: goto L_08928C30;
    case 132u: goto L_08928C90;
    case 133u: goto L_08928CB4;
    case 134u: goto L_08928CE8;
    case 135u: goto L_08928D00;
    case 136u: goto L_08928D0C;
    case 137u: goto L_08928D3C;
    case 138u: goto L_08928D48;
    case 139u: goto L_08928D60;
    case 140u: goto L_08928D64;
    case 141u: goto L_08928D80;
    case 142u: goto L_08928D94;
    case 143u: goto L_08928D98;
    case 144u: goto L_08928D9C;
    case 145u: goto L_08928DC4;
    case 146u: goto L_08928DE0;
    case 147u: goto L_08928E00;
    case 148u: goto L_08928E08;
    case 149u: goto L_08928E10;
    case 150u: goto L_08928E18;
    case 151u: goto L_08928E24;
    case 152u: goto L_08928E30;
    case 153u: goto L_08928E50;
    case 154u: goto L_08928E64;
    case 155u: goto L_08928E78;
    case 156u: goto L_08928E80;
    case 157u: goto L_08928E98;
    case 158u: goto L_08928EB4;
    case 159u: goto L_08928EB8;
    case 160u: goto L_08928EC8;
    case 161u: goto L_08928ED8;
    case 162u: goto L_08928EE0;
    case 163u: goto L_08928EFC;
    case 164u: goto L_08928F18;
    case 165u: goto L_08928F20;
    case 166u: goto L_08928F2C;
    case 167u: goto L_08928F3C;
    case 168u: goto L_08928FD0;
    case 169u: goto L_08928FD8;
    case 170u: goto L_08928FE4;
    case 171u: goto L_08928FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08928000:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[5]);
    goto L_0892800C;
L_0892800C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28984)));
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-28940)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089280BC;
      }
      goto L_08928028;
    }
L_08928028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28952)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-28939)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0892810C;
      }
      goto L_08928094;
    }
L_08928094:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0892810C;
      }
      goto L_089280BC;
    }
L_089280BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089280D8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089280D8u) goto L_089280D8;
    return;
L_089280D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[4]);
    goto L_0892810C;
L_0892810C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08928120;
      }
      goto L_08928114;
    }
L_08928114:
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[20] + aot_fpr[12];
    goto L_08928120;
L_08928120:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_08928130;
L_08928130:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928148:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08928168;
      }
      goto L_08928160;
    }
L_08928160:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0892816C;
      }
      goto L_08928168;
    }
L_08928168:
    aot_gpr[2] = (0u | 0u);
    goto L_0892816C;
L_0892816C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928174:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089281BC;
      }
      goto L_08928190;
    }
L_08928190:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089281BC;
      }
      goto L_08928198;
    }
L_08928198:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089281A4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08928148;
L_089281A4:
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[6] = (2195u << 16u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089281BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32440));
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 136u, 0x08A57AF8u>(ctx, &aot_mem) && ctx.pc == 0x089281BCu) goto L_089281BC;
    return;
L_089281BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089281D0:
    aot_gpr[4] = (0u << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089281DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
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
    aot_gpr[20] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0892824C;
      }
      goto L_08928214;
    }
L_08928214:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08928254;
      }
      goto L_08928244;
    }
L_08928244:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08928268;
      }
      goto L_0892824C;
    }
L_0892824C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089286C0;
      }
      goto L_08928254;
    }
L_08928254:
    aot_gpr[31] = (0x0892825Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892825Cu) goto L_0892825C;
    return;
L_0892825C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08928268;
L_08928268:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(-29052));
      if (branch_taken) {
          goto L_08928280;
      }
      goto L_08928274;
    }
L_08928274:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[31] = (0x08928280u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 28u, 0x08935318u>(ctx, &aot_mem) && ctx.pc == 0x08928280u) goto L_08928280;
    return;
L_08928280:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0892866C;
      }
      goto L_08928298;
    }
L_08928298:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[23] = (2216u << 16u);
    goto L_089282A0;
L_089282A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[17] & 4u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[30] = (aot_gpr[17] & 8u);
    aot_gpr[21] = (aot_gpr[17] & 64u);
    aot_gpr[22] = (aot_gpr[17] & 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[30] = (0u < aot_gpr[30] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u < aot_gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_089282F0;
      }
      goto L_089282DC;
    }
L_089282DC:
    aot_gpr[31] = (0x089282E4u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 71u, 0x0893F780u>(ctx, &aot_mem) && ctx.pc == 0x089282E4u) goto L_089282E4;
    return;
L_089282E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_089282F0;
L_089282F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(78)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[7] = (16u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-12880), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x08928314u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08928314u) goto L_08928314;
    return;
L_08928314:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892835C;
      }
      goto L_0892832C;
    }
L_0892832C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892835C;
      }
      goto L_08928338;
    }
L_08928338:
    aot_gpr[31] = (0x08928340u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 28u, 0x08935318u>(ctx, &aot_mem) && ctx.pc == 0x08928340u) goto L_08928340;
    return;
L_08928340:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_0892835C;
L_0892835C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(79)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          goto L_08928390;
      }
      goto L_0892836C;
    }
L_0892836C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08928378u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 105u, 0x08935BE8u>(ctx, &aot_mem) && ctx.pc == 0x08928378u) goto L_08928378;
    return;
L_08928378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089283BC;
      }
      goto L_08928390;
    }
L_08928390:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089283BC;
      }
      goto L_0892839C;
    }
L_0892839C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089283A8u);
    aot_gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 105u, 0x08935BE8u>(ctx, &aot_mem) && ctx.pc == 0x089283A8u) goto L_089283A8;
    return;
L_089283A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_089283BC;
L_089283BC:
    if (aot_gpr[30] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(68)));
        goto L_089285E4;
    }
    goto L_089283C4;
L_089283C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] & 16u);
    aot_gpr[16] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[17] & 32u);
    aot_gpr[17] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (0x089283E4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x089283E4u) goto L_089283E4;
    return;
L_089283E4:
    aot_gpr[4] = (aot_gpr[30] & 255u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[16] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(-28940), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28939), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089285A0;
      }
      goto L_0892840C;
    }
L_0892840C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (59648u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (59136u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (8960u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (9216u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (56578u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(66)));
    aot_gpr[6] = (56575u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089284D0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089284D0u) goto L_089284D0;
    return;
L_089284D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (59392u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (59136u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (8960u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(66)));
    aot_gpr[6] = (56575u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08928564u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928564u) goto L_08928564;
    return;
L_08928564:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (9216u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[5] = (96u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
      if (branch_taken) {
          goto L_089285D0;
      }
      goto L_089285A0;
    }
L_089285A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089285D0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089285D0u) goto L_089285D0;
    return;
L_089285D0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28940), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28939), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08928608;
      }
      goto L_089285E4;
    }
L_089285E4:
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08928608u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928608u) goto L_08928608;
    return;
L_08928608:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
        goto L_08928620;
    }
    goto L_08928614;
L_08928614:
    aot_gpr[31] = (0x0892861Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 79u, 0x0893F890u>(ctx, &aot_mem) && ctx.pc == 0x0892861Cu) goto L_0892861C;
    return;
L_0892861C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    goto L_08928620;
L_08928620:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089282A0;
      }
      goto L_0892866C;
    }
L_0892866C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928684;
      }
      goto L_08928678;
    }
L_08928678:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08928684u);
    aot_gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 105u, 0x08935BE8u>(ctx, &aot_mem) && ctx.pc == 0x08928684u) goto L_08928684;
    return;
L_08928684:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089286A4;
      }
      goto L_08928690;
    }
L_08928690:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089286A4;
      }
      goto L_0892869C;
    }
L_0892869C:
    aot_gpr[31] = (0x089286A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 28u, 0x08935318u>(ctx, &aot_mem) && ctx.pc == 0x089286A4u) goto L_089286A4;
    return;
L_089286A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089286C0;
      }
      goto L_089286B0;
    }
L_089286B0:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[31] = (0x089286BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x089286BCu) goto L_089286BC;
    return;
L_089286BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_089286C0;
L_089286C0:
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
L_089286F0:
    aot_gpr[5] = (256u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] << 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928704:
    aot_gpr[5] = (65280u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] >> 20u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928714:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[6] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[8]);
      if (branch_taken) {
          goto L_08928814;
      }
      goto L_08928748;
    }
L_08928748:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[4] << 8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0892877Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x0892877Cu) goto L_0892877C;
    return;
L_0892877C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[31] = (0x089287A8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089287A8u) goto L_089287A8;
    return;
L_089287A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(9)));
    aot_gpr[8] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x089287D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x089287D4u) goto L_089287D4;
    return;
L_089287D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x089287FCu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 9u, 0x0891D080u>(ctx, &aot_mem) && ctx.pc == 0x089287FCu) goto L_089287FC;
    return;
L_089287FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(9)));
      if (branch_taken) {
          goto L_08928824;
      }
      goto L_08928814;
    }
L_08928814:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    goto L_08928824;
L_08928824:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08928858;
      }
      goto L_08928834;
    }
L_08928834:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(264), 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08928834;
      }
      goto L_08928858;
    }
L_08928858:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928870:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_089288C4;
      }
      goto L_08928880;
    }
L_08928880:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089288C4;
      }
      goto L_08928888;
    }
L_08928888:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089288BC;
      }
      goto L_0892889C;
    }
L_0892889C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089288B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089288B4u) goto L_089288B4;
    return;
L_089288B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089288C4;
      }
      goto L_089288BC;
    }
L_089288BC:
    aot_gpr[31] = (0x089288C4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x089288C4u) goto L_089288C4;
    return;
L_089288C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089288D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(21)));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_08928914;
      }
      goto L_089288F0;
    }
L_089288F0:
    aot_gpr[31] = (0x089288F8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x089288F8u) goto L_089288F8;
    return;
L_089288F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08928924;
      }
      goto L_08928914;
    }
L_08928914:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08928920u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 9u, 0x0891D080u>(ctx, &aot_mem) && ctx.pc == 0x08928920u) goto L_08928920;
    return;
L_08928920:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08928924;
L_08928924:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928934:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089289AC;
      }
      goto L_0892896C;
    }
L_0892896C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0892897Cu);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0892897Cu) goto L_0892897C;
    return;
L_0892897C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089289A4;
      }
      goto L_08928984;
    }
L_08928984:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_0892896C;
      }
      goto L_0892899C;
    }
L_0892899C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089289AC;
      }
      goto L_089289A4;
    }
L_089289A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089289B0;
      }
      goto L_089289AC;
    }
L_089289AC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089289B0;
L_089289B0:
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
L_089289CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (aot_gpr[5] << 8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[11] = (aot_gpr[8] | 0u);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_08928A0C;
      }
      goto L_089289FC;
    }
L_089289FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    goto L_08928A0C;
L_08928A0C:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928A28;
      }
      goto L_08928A14;
    }
L_08928A14:
    aot_gpr[31] = (0x08928A1Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    goto L_08928704;
L_08928A1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    goto L_08928A28;
L_08928A28:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928A44;
      }
      goto L_08928A30;
    }
L_08928A30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(264)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    goto L_08928A44;
L_08928A44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928A60;
      }
      goto L_08928A50;
    }
L_08928A50:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(264), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    goto L_08928A60;
L_08928A60:
    aot_gpr[31] = (0x08928A68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    goto L_089286F0;
L_08928A68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928A7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08928A90u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10848));
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 142u, 0x08A57B88u>(ctx, &aot_mem) && ctx.pc == 0x08928A90u) goto L_08928A90;
    return;
L_08928A90:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08928A9Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29248));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08928A9Cu) goto L_08928A9C;
    return;
L_08928A9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928AA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08928AC0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 150u, 0x08A57BFCu>(ctx, &aot_mem) && ctx.pc == 0x08928AC0u) goto L_08928AC0;
    return;
L_08928AC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08928B04;
      }
      goto L_08928AD8;
    }
L_08928AD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[31] = (0x08928AECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x08928AECu) goto L_08928AEC;
    return;
L_08928AEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08928AD8;
      }
      goto L_08928B04;
    }
L_08928B04:
    aot_gpr[2] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928B14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928B1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928B24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          goto L_08928C90;
      }
      goto L_08928B54;
    }
L_08928B54:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29224)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928C90;
      }
      goto L_08928B60;
    }
L_08928B60:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08928BB8;
      }
      goto L_08928B74;
    }
L_08928B74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29212)));
    goto L_08928B80;
L_08928B80:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[4] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928BA8;
      }
      goto L_08928B90;
    }
L_08928B90:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (aot_gpr[4] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928BA8;
      }
      goto L_08928BA0;
    }
L_08928BA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08928BB8;
      }
      goto L_08928BA8;
    }
L_08928BA8:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08928B80;
      }
      goto L_08928BB8;
    }
L_08928BB8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[4];
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08928C90;
      }
      goto L_08928BC4;
    }
L_08928BC4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29220)));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29216)));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[8]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[4] << 2u);
    aot_gpr[11] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[18]);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[11] = (17352u << 16u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_gpr[7] = (65280u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[9] = (0u | 34u);
    aot_gpr[31] = (0x08928C30u);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 105u, 0x0891B844u>(ctx, &aot_mem) && ctx.pc == 0x08928C30u) goto L_08928C30;
    return;
L_08928C30:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29232)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29224)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_fpr[13] = aot_fpr[14] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u | 34u);
    aot_gpr[11] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08928C90u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 105u, 0x0891B844u>(ctx, &aot_mem) && ctx.pc == 0x08928C90u) goto L_08928C90;
    return;
L_08928C90:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928CB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08928CE8u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08928CE8u) goto L_08928CE8;
    return;
L_08928CE8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1840));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928D9C;
      }
      goto L_08928D00;
    }
L_08928D00:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08928D0Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 200u, 0x08A53EF4u>(ctx, &aot_mem) && ctx.pc == 0x08928D0Cu) goto L_08928D0C;
    return;
L_08928D0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08928D3Cu);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928D3Cu) goto L_08928D3C;
    return;
L_08928D3C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928D64;
      }
      goto L_08928D48;
    }
L_08928D48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08928D60u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 195u, 0x0891BFD0u>(ctx, &aot_mem) && ctx.pc == 0x08928D60u) goto L_08928D60;
    return;
L_08928D60:
    aot_gpr[20] = (aot_gpr[21] | 0u);
    goto L_08928D64;
L_08928D64:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29336), aot_gpr[20]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29332), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08928D98;
      }
      goto L_08928D80;
    }
L_08928D80:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08928D94u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 22u, 0x08A53168u>(ctx, &aot_mem) && ctx.pc == 0x08928D94u) goto L_08928D94;
    return;
L_08928D94:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08928D98;
L_08928D98:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_08928D9C;
L_08928D9C:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08928DC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08928E50;
      }
      goto L_08928DE0;
    }
L_08928DE0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1840));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08928E10;
      }
      goto L_08928E00;
    }
L_08928E00:
    aot_gpr[31] = (0x08928E08u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 11u, 0x08A540A8u>(ctx, &aot_mem) && ctx.pc == 0x08928E08u) goto L_08928E08;
    return;
L_08928E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928E18;
      }
      goto L_08928E10;
    }
L_08928E10:
    aot_gpr[31] = (0x08928E18u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 11u, 0x08A540A8u>(ctx, &aot_mem) && ctx.pc == 0x08928E18u) goto L_08928E18;
    return;
L_08928E18:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08928E24u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08928E24u) goto L_08928E24;
    return;
L_08928E24:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08928E50;
      }
      goto L_08928E30;
    }
L_08928E30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08928E50u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928E50u) goto L_08928E50;
    return;
L_08928E50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928E64:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (aot_gpr[5] & 3u);
    aot_gpr[4] = (aot_gpr[4] & 3u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 6u, 0x08929054u>(ctx, &aot_mem); return;
      }
      goto L_08928E78;
    }
L_08928E78:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08928EB8;
      }
      goto L_08928E80;
    }
L_08928E80:
    aot_gpr[6] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[8]);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928EB4;
      }
      goto L_08928E98;
    }
L_08928E98:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08928E98;
      }
      goto L_08928EB4;
    }
L_08928EB4:
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    goto L_08928EB8;
L_08928EB8:
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[9] = (aot_gpr[4] < static_cast<std::uint32_t>(129) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08928FD8;
      }
      goto L_08928EC8;
    }
L_08928EC8:
    aot_gpr[5] = (aot_gpr[5] & 63u);
    aot_gpr[7] = (aot_gpr[7] & 63u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08928FD8;
      }
      goto L_08928ED8;
    }
L_08928ED8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F20;
      }
      goto L_08928EE0;
    }
L_08928EE0:
    aot_gpr[7] = (0u | 64u);
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] >> 2u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F18;
      }
      goto L_08928EFC;
    }
L_08928EFC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08928EFC;
      }
      goto L_08928F18;
    }
L_08928F18:
    aot_gpr[5] = (aot_gpr[7] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    goto L_08928F20;
L_08928F20:
    aot_gpr[7] = (aot_gpr[4] >> 6u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928FD8;
      }
      goto L_08928F2C;
    }
L_08928F2C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928FD0;
      }
      goto L_08928F3C;
    }
L_08928F3C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(24), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(28), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(36), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(40), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(44), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(48), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(52), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(56), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(60), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08928F3C;
      }
      goto L_08928FD0;
    }
L_08928FD0:
    aot_gpr[5] = (aot_gpr[7] << 6u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    goto L_08928FD8;
L_08928FD8:
    aot_gpr[7] = (aot_gpr[4] >> 2u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 3u, 0x08929018u>(ctx, &aot_mem); return;
      }
      goto L_08928FE4;
    }
L_08928FE4:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 2u, 0x08929010u>(ctx, &aot_mem); return;
      }
      goto L_08928FF4;
    }
L_08928FF4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    ctx.pc = 0x08929000u; return;
}

void recomp_unit_0292(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0292_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_292(Runtime &runtime) {
    runtime.register_generated_unit(292u, 0x08928000u, 4096u, &recomp_unit_0292, &recomp_unit_0292_entry);
    runtime.register_function(0x08928000u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892800Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928028u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928094u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089280BCu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089280D8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892810Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928114u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928120u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928130u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928148u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928160u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928168u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892816Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928174u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928190u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928198u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089281A4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089281BCu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089281D0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089281DCu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928214u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928244u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892824Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928254u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892825Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928268u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928274u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928280u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928298u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089282A0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089282DCu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089282E4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089282F0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928314u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892832Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928338u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928340u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892835Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892836Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928378u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928390u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892839Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089283A8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089283BCu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089283C4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089283E4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892840Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089284D0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928564u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089285A0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089285D0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089285E4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928608u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928614u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892861Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928620u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892866Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928678u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928684u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928690u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892869Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089286A4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089286B0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089286BCu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089286C0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089286F0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928704u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928714u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928748u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892877Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089287A8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089287D4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089287FCu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928814u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928824u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928834u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928858u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928870u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928880u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928888u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892889Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089288B4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089288BCu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089288C4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089288D0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089288F0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089288F8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928914u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928920u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928924u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928934u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892896Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892897Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928984u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x0892899Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089289A4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089289ACu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089289B0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089289CCu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x089289FCu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A0Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A14u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A1Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A28u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A30u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A44u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A50u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A60u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A68u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A7Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A90u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928A9Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928AA8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928AC0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928AD8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928AECu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928B04u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928B14u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928B1Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928B24u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928B54u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928B60u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928B74u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928B80u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928B90u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928BA0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928BA8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928BB8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928BC4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928C30u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928C90u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928CB4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928CE8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928D00u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928D0Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928D3Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928D48u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928D60u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928D64u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928D80u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928D94u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928D98u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928D9Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928DC4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928DE0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928E00u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928E08u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928E10u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928E18u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928E24u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928E30u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928E50u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928E64u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928E78u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928E80u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928E98u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928EB4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928EB8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928EC8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928ED8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928EE0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928EFCu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928F18u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928F20u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928F2Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928F3Cu, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928FD0u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928FD8u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928FE4u, &recomp_unit_0292, "recomp_unit_0292");
    runtime.register_function(0x08928FF4u, &recomp_unit_0292, "recomp_unit_0292");
}
} // namespace psprecomp
