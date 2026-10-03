#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0422[1023] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 10, 0, 11, 0,
    0, 0, 12, 13, 14, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 0, 22, 0,
    23, 0, 0, 24, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 33, 34, 0, 0, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0,
    45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48,
    0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 54,
    0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 68, 0, 0, 0, 69, 0, 70, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 98, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124,
};
void recomp_unit_0422_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089AA000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0422[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089AA000;
    case 2u: goto L_089AA008;
    case 3u: goto L_089AA01C;
    case 4u: goto L_089AA028;
    case 5u: goto L_089AA030;
    case 6u: goto L_089AA094;
    case 7u: goto L_089AA0CC;
    case 8u: goto L_089AA0DC;
    case 9u: goto L_089AA0E4;
    case 10u: goto L_089AA0F0;
    case 11u: goto L_089AA0F8;
    case 12u: goto L_089AA108;
    case 13u: goto L_089AA10C;
    case 14u: goto L_089AA110;
    case 15u: goto L_089AA114;
    case 16u: goto L_089AA12C;
    case 17u: goto L_089AA144;
    case 18u: goto L_089AA150;
    case 19u: goto L_089AA158;
    case 20u: goto L_089AA164;
    case 21u: goto L_089AA16C;
    case 22u: goto L_089AA178;
    case 23u: goto L_089AA180;
    case 24u: goto L_089AA18C;
    case 25u: goto L_089AA194;
    case 26u: goto L_089AA1A0;
    case 27u: goto L_089AA1A8;
    case 28u: goto L_089AA20C;
    case 29u: goto L_089AA240;
    case 30u: goto L_089AA248;
    case 31u: goto L_089AA254;
    case 32u: goto L_089AA25C;
    case 33u: goto L_089AA26C;
    case 34u: goto L_089AA270;
    case 35u: goto L_089AA28C;
    case 36u: goto L_089AA2A4;
    case 37u: goto L_089AA2B0;
    case 38u: goto L_089AA2B8;
    case 39u: goto L_089AA2C4;
    case 40u: goto L_089AA2CC;
    case 41u: goto L_089AA2D8;
    case 42u: goto L_089AA2E0;
    case 43u: goto L_089AA2EC;
    case 44u: goto L_089AA2F4;
    case 45u: goto L_089AA300;
    case 46u: goto L_089AA308;
    case 47u: goto L_089AA374;
    case 48u: goto L_089AA37C;
    case 49u: goto L_089AA388;
    case 50u: goto L_089AA390;
    case 51u: goto L_089AA3B4;
    case 52u: goto L_089AA3D4;
    case 53u: goto L_089AA3F8;
    case 54u: goto L_089AA3FC;
    case 55u: goto L_089AA410;
    case 56u: goto L_089AA418;
    case 57u: goto L_089AA420;
    case 58u: goto L_089AA428;
    case 59u: goto L_089AA430;
    case 60u: goto L_089AA448;
    case 61u: goto L_089AA450;
    case 62u: goto L_089AA468;
    case 63u: goto L_089AA4A8;
    case 64u: goto L_089AA6A8;
    case 65u: goto L_089AA6B4;
    case 66u: goto L_089AA6EC;
    case 67u: goto L_089AA7DC;
    case 68u: goto L_089AA7E0;
    case 69u: goto L_089AA7F0;
    case 70u: goto L_089AA7F8;
    case 71u: goto L_089AA800;
    case 72u: goto L_089AA878;
    case 73u: goto L_089AA87C;
    case 74u: goto L_089AAA74;
    case 75u: goto L_089AAA88;
    case 76u: goto L_089AAAA4;
    case 77u: goto L_089AAABC;
    case 78u: goto L_089AAAC0;
    case 79u: goto L_089AAACC;
    case 80u: goto L_089AAAD8;
    case 81u: goto L_089AAAE8;
    case 82u: goto L_089AAB1C;
    case 83u: goto L_089AAB24;
    case 84u: goto L_089AAB48;
    case 85u: goto L_089AAB78;
    case 86u: goto L_089AAB98;
    case 87u: goto L_089AABA4;
    case 88u: goto L_089AABAC;
    case 89u: goto L_089AABE4;
    case 90u: goto L_089AABF0;
    case 91u: goto L_089AAC28;
    case 92u: goto L_089AAC34;
    case 93u: goto L_089AAC80;
    case 94u: goto L_089AACDC;
    case 95u: goto L_089AAD38;
    case 96u: goto L_089AAD58;
    case 97u: goto L_089AAD90;
    case 98u: goto L_089AADA0;
    case 99u: goto L_089AADA4;
    case 100u: goto L_089AADB4;
    case 101u: goto L_089AADEC;
    case 102u: goto L_089AADF8;
    case 103u: goto L_089AAE2C;
    case 104u: goto L_089AAE4C;
    case 105u: goto L_089AAE54;
    case 106u: goto L_089AAE60;
    case 107u: goto L_089AAE6C;
    case 108u: goto L_089AAEA0;
    case 109u: goto L_089AAEB8;
    case 110u: goto L_089AAEC0;
    case 111u: goto L_089AAEF8;
    case 112u: goto L_089AAF04;
    case 113u: goto L_089AAF38;
    case 114u: goto L_089AAF48;
    case 115u: goto L_089AAF50;
    case 116u: goto L_089AAF68;
    case 117u: goto L_089AAF70;
    case 118u: goto L_089AAF7C;
    case 119u: goto L_089AAF84;
    case 120u: goto L_089AAFA8;
    case 121u: goto L_089AAFB8;
    case 122u: goto L_089AAFC0;
    case 123u: goto L_089AAFEC;
    case 124u: goto L_089AAFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089AA000:
    aot_gpr[11] = (aot_gpr[16] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 136u, 0x089A9F14u>(ctx, &aot_mem); return;
L_089AA008:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(180));
    aot_gpr[5] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AA028;
      }
      goto L_089AA01C;
    }
L_089AA01C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(692)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 183u, 0x0898BD40u>(ctx, &aot_mem); return;
L_089AA028:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA030:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-784));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(768), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(756), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(772), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(764), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(760), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(752), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[31] = (0x089AA094u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089AA094u) goto L_089AA094;
    return;
L_089AA094:
    aot_gpr[5] = (2203u << 16u);
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[7] = (2203u << 16u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26340));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26276));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-25612));
    aot_gpr[8] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[31] = (0x089AA0CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 100u, 0x089B37D4u>(ctx, &aot_mem) && ctx.pc == 0x089AA0CCu) goto L_089AA0CC;
    return;
L_089AA0CC:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AA0DCu);
    aot_gpr[19] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 5u, 0x08990038u>(ctx, &aot_mem) && ctx.pc == 0x089AA0DCu) goto L_089AA0DC;
    return;
L_089AA0DC:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089AA10C;
      }
      goto L_089AA0E4;
    }
L_089AA0E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(772)));
      if (branch_taken) {
          goto L_089AA110;
      }
      goto L_089AA0F0;
    }
L_089AA0F0:
    if (static_cast<std::int32_t>(aot_gpr[19]) <= 0) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(768)));
        goto L_089AA114;
    }
    goto L_089AA0F8;
L_089AA0F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 2u);
      if (branch_taken) {
          goto L_089AA12C;
      }
      goto L_089AA108;
    }
L_089AA108:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(28));
    goto L_089AA10C;
L_089AA10C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(772)));
    goto L_089AA110;
L_089AA110:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(768)));
    goto L_089AA114;
L_089AA114:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(764)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(760)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(756)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(752)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(784));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA12C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15864));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA144:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AA150u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 123u, 0x089A9C04u>(ctx, &aot_mem) && ctx.pc == 0x089AA150u) goto L_089AA150;
    return;
L_089AA150:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(28));
    goto L_089AA10C;
L_089AA158:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AA164u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 40u, 0x089A92E4u>(ctx, &aot_mem) && ctx.pc == 0x089AA164u) goto L_089AA164;
    return;
L_089AA164:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(28));
    goto L_089AA10C;
L_089AA16C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AA178u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 51u, 0x089A94BCu>(ctx, &aot_mem) && ctx.pc == 0x089AA178u) goto L_089AA178;
    return;
L_089AA178:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(28));
    goto L_089AA10C;
L_089AA180:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AA18Cu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 68u, 0x089A9750u>(ctx, &aot_mem) && ctx.pc == 0x089AA18Cu) goto L_089AA18C;
    return;
L_089AA18C:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(28));
    goto L_089AA10C;
L_089AA194:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AA1A0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    goto L_089AA008;
L_089AA1A0:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(28));
    goto L_089AA10C;
L_089AA1A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-784));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(764), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(752), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(768), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(760), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(756), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[31] = (0x089AA20Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089AA20Cu) goto L_089AA20C;
    return;
L_089AA20C:
    aot_gpr[5] = (2203u << 16u);
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[7] = (2203u << 16u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26340));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26276));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-25612));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[31] = (0x089AA240u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 100u, 0x089B37D4u>(ctx, &aot_mem) && ctx.pc == 0x089AA240u) goto L_089AA240;
    return;
L_089AA240:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AA26C;
      }
      goto L_089AA248;
    }
L_089AA248:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
        goto L_089AA270;
    }
    goto L_089AA254;
L_089AA254:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089AA270;
      }
      goto L_089AA25C;
    }
L_089AA25C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 2u);
      if (branch_taken) {
          goto L_089AA28C;
      }
      goto L_089AA26C;
    }
L_089AA26C:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    goto L_089AA270;
L_089AA270:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(768)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(764)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(760)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(756)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(752)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(784));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA28C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15828));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA2A4:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AA2B0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 123u, 0x089A9C04u>(ctx, &aot_mem) && ctx.pc == 0x089AA2B0u) goto L_089AA2B0;
    return;
L_089AA2B0:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    goto L_089AA270;
L_089AA2B8:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AA2C4u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 40u, 0x089A92E4u>(ctx, &aot_mem) && ctx.pc == 0x089AA2C4u) goto L_089AA2C4;
    return;
L_089AA2C4:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    goto L_089AA270;
L_089AA2CC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AA2D8u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 51u, 0x089A94BCu>(ctx, &aot_mem) && ctx.pc == 0x089AA2D8u) goto L_089AA2D8;
    return;
L_089AA2D8:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    goto L_089AA270;
L_089AA2E0:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AA2ECu);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 68u, 0x089A9750u>(ctx, &aot_mem) && ctx.pc == 0x089AA2ECu) goto L_089AA2EC;
    return;
L_089AA2EC:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    goto L_089AA270;
L_089AA2F4:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AA300u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    goto L_089AA008;
L_089AA300:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    goto L_089AA270;
L_089AA308:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[31] = (0x089AA374u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089AA374u) goto L_089AA374;
    return;
L_089AA374:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089AA3B4;
      }
      goto L_089AA37C;
    }
L_089AA37C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089AA3B4;
      }
      goto L_089AA388;
    }
L_089AA388:
    aot_gpr[31] = (0x089AA390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 28u, 0x089A9104u>(ctx, &aot_mem) && ctx.pc == 0x089AA390u) goto L_089AA390;
    return;
L_089AA390:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    aot_gpr[31] = (0x089AA3B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 31u, 0x089A9150u>(ctx, &aot_mem) && ctx.pc == 0x089AA3B4u) goto L_089AA3B4;
    return;
L_089AA3B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA3D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_089AA410;
      }
      goto L_089AA3F8;
    }
L_089AA3F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089AA3FC;
L_089AA3FC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA410:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089AA3FC;
      }
      goto L_089AA418;
    }
L_089AA418:
    aot_gpr[31] = (0x089AA420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 23u, 0x089AD1D0u>(ctx, &aot_mem) && ctx.pc == 0x089AA420u) goto L_089AA420;
    return;
L_089AA420:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AA430;
      }
      goto L_089AA428;
    }
L_089AA428:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-27));
    goto L_089AA3F8;
L_089AA430:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (2203u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21608));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089AA428;
      }
      goto L_089AA448;
    }
L_089AA448:
    aot_gpr[31] = (0x089AA450u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 192u, 0x0898BD98u>(ctx, &aot_mem) && ctx.pc == 0x089AA450u) goto L_089AA450;
    return;
L_089AA450:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(100)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089AA468u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23800));
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 162u, 0x0898BC30u>(ctx, &aot_mem) && ctx.pc == 0x089AA468u) goto L_089AA468;
    return;
L_089AA468:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-10));
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    goto L_089AA3F8;
L_089AA4A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(696)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(692)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(688)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(684)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(680)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(676)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(672)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(704));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA6A8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_089AA4A8;
      }
      goto L_089AA6B4;
    }
L_089AA6B4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[4] = (2203u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25604));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(44));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    aot_gpr[11] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(61));
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AA6ECu);
    aot_gpr[10] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AA6ECu) goto L_089AA6EC;
    return;
L_089AA6EC:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089AA4A8;
L_089AA7DC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089AA7E0;
L_089AA7E0:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x089AA7F0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 82u, 0x089B3678u>(ctx, &aot_mem) && ctx.pc == 0x089AA7F0u) goto L_089AA7F0;
    return;
L_089AA7F0:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    goto L_089AA6A8;
L_089AA7F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089AA7E0;
L_089AA800:
    aot_gpr[2] = (0u + 0u);
    goto L_089AA7E0;
L_089AA878:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(680)));
    goto L_089AA87C;
L_089AA87C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(676)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(672)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(668)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(664)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(660)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(656)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAA74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (aot_gpr[3] == 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
        goto L_089AAAC0;
    }
    goto L_089AAA88;
L_089AAA88:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15772));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAAA4:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[3] = (aot_gpr[5] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[2]);
    goto L_089AAABC;
L_089AAABC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089AAAC0;
L_089AAAC0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089AAA74;
      }
      goto L_089AAACC;
    }
L_089AAACC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x089AAAD8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 46u, 0x089B33B8u>(ctx, &aot_mem) && ctx.pc == 0x089AAAD8u) goto L_089AAAD8;
    return;
L_089AAAD8:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089AAB78;
      }
      goto L_089AAAE8;
    }
L_089AAAE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[4] = (2203u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25604));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(44));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    aot_gpr[11] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(61));
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AAB1Cu);
    aot_gpr[10] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AAB1Cu) goto L_089AAB1C;
    return;
L_089AAB1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(680)));
    goto L_089AA87C;
L_089AAB24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[5] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    goto L_089AAABC;
L_089AAB48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[5] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    goto L_089AAABC;
L_089AAB78:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    goto L_089AA878;
L_089AAB98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(96), 0u);
        goto L_089AABA4;
    }
    goto L_089AABA4;
L_089AABA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AABAC:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(42));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AABE4u);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AABE4u) goto L_089AABE4;
    return;
L_089AABE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AABF0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(73));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AAC28u);
    aot_gpr[11] = (aot_gpr[8] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AAC28u) goto L_089AAC28;
    return;
L_089AAC28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAC34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[19] = (aot_gpr[4] + 0u);
    aot_gpr[24] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_gpr[25] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(40));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[11] = (0u + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AAD38;
      }
      goto L_089AAC80;
    }
L_089AAC80:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[3] = (2u << 16u);
    aot_gpr[3] = (aot_gpr[3] | 16365u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AACDCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[25]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AACDCu) goto L_089AACDC;
    return;
L_089AACDC:
    aot_gpr[12] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[29] + static_cast<std::uint32_t>(19), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[29] + static_cast<std::uint32_t>(23), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[29] + static_cast<std::uint32_t>(27), aot_gpr[4]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[29] + static_cast<std::uint32_t>(31), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[29] + static_cast<std::uint32_t>(35), aot_gpr[2]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]));
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]));
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]));
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(11), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(15), aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(19), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[3]));
    goto L_089AAD38;
L_089AAD38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[12] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAD58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[8] = (aot_gpr[4] + 0u);
    aot_gpr[9] = (aot_gpr[4] + 0u);
    aot_gpr[11] = (aot_gpr[4] + static_cast<std::uint32_t>(21));
    aot_gpr[12] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(38));
    aot_gpr[10] = (0u + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AADA4;
      }
      goto L_089AAD90;
    }
L_089AAD90:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AADA0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AADA0u) goto L_089AADA0;
    return;
L_089AADA0:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089AADA4;
L_089AADA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AADB4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AADECu);
    aot_gpr[11] = (aot_gpr[8] + static_cast<std::uint32_t>(21));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AADECu) goto L_089AADEC;
    return;
L_089AADEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AADF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-21));
    { const bool branch_taken = aot_gpr[16] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
      if (branch_taken) {
          goto L_089AAE4C;
      }
      goto L_089AAE2C;
    }
L_089AAE2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAE4C:
    aot_gpr[31] = (0x089AAE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 23u, 0x089AD1D0u>(ctx, &aot_mem) && ctx.pc == 0x089AAE54u) goto L_089AAE54;
    return;
L_089AAE54:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-27));
      if (branch_taken) {
          goto L_089AAE2C;
      }
      goto L_089AAE60;
    }
L_089AAE60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-26));
      if (branch_taken) {
          goto L_089AAE2C;
      }
      goto L_089AAE6C;
    }
L_089AAE6C:
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(148), aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16316)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(88));
    aot_gpr[9] = (aot_gpr[16] + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_089AAE2C;
      }
      goto L_089AAEA0;
    }
L_089AAEA0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AAEB8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AAEB8u) goto L_089AAEB8;
    return;
L_089AAEB8:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    goto L_089AAE2C;
L_089AAEC0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(294));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AAEF8u);
    aot_gpr[11] = (aot_gpr[8] + static_cast<std::uint32_t>(21));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AAEF8u) goto L_089AAEF8;
    return;
L_089AAEF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAF04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089AAF38u);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 91u, 0x089926A0u>(ctx, &aot_mem) && ctx.pc == 0x089AAF38u) goto L_089AAF38;
    return;
L_089AAF38:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(120));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089AAF68;
      }
      goto L_089AAF48;
    }
L_089AAF48:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089AAF50;
L_089AAF50:
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
L_089AAF68:
    aot_gpr[31] = (0x089AAF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 91u, 0x089926A0u>(ctx, &aot_mem) && ctx.pc == 0x089AAF70u) goto L_089AAF70;
    return;
L_089AAF70:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(152));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[19];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089AAF48;
      }
      goto L_089AAF7C;
    }
L_089AAF7C:
    aot_gpr[31] = (0x089AAF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 91u, 0x089926A0u>(ctx, &aot_mem) && ctx.pc == 0x089AAF84u) goto L_089AAF84;
    return;
L_089AAF84:
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(47));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(232));
    aot_gpr[9] = (aot_gpr[16] + 0u);
    aot_gpr[10] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[19];
    aot_gpr[11] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
      if (branch_taken) {
          goto L_089AAF48;
      }
      goto L_089AAFA8;
    }
L_089AAFA8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AAFB8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AAFB8u) goto L_089AAFB8;
    return;
L_089AAFB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089AAF50;
L_089AAFC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089AAFECu);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 91u, 0x089926A0u>(ctx, &aot_mem) && ctx.pc == 0x089AAFECu) goto L_089AAFEC;
    return;
L_089AAFEC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 9u, 0x089AB078u>(ctx, &aot_mem); return;
      }
      goto L_089AAFF8;
    }
L_089AAFF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 6u, 0x089AB060u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 1u, 0x089AB004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0422(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0422_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_422(Runtime &runtime) {
    runtime.register_generated_unit(422u, 0x089AA000u, 4096u, &recomp_unit_0422, &recomp_unit_0422_entry);
    runtime.register_function(0x089AA000u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA008u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA01Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA028u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA030u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA094u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA0CCu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA0DCu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA0E4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA0F0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA0F8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA108u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA10Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA110u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA114u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA12Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA144u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA150u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA158u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA164u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA16Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA178u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA180u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA18Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA194u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA1A0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA1A8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA20Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA240u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA248u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA254u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA25Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA26Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA270u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA28Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA2A4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA2B0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA2B8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA2C4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA2CCu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA2D8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA2E0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA2ECu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA2F4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA300u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA308u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA374u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA37Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA388u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA390u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA3B4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA3D4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA3F8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA3FCu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA410u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA418u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA420u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA428u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA430u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA448u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA450u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA468u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA4A8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA6A8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA6B4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA6ECu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA7DCu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA7E0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA7F0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA7F8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA800u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA878u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AA87Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAA74u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAA88u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAAA4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAABCu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAAC0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAACCu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAAD8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAAE8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAB1Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAB24u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAB48u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAB78u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAB98u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AABA4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AABACu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AABE4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AABF0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAC28u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAC34u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAC80u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AACDCu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAD38u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAD58u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAD90u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AADA0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AADA4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AADB4u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AADECu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AADF8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAE2Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAE4Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAE54u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAE60u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAE6Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAEA0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAEB8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAEC0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAEF8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAF04u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAF38u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAF48u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAF50u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAF68u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAF70u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAF7Cu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAF84u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAFA8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAFB8u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAFC0u, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAFECu, &recomp_unit_0422, "recomp_unit_0422");
    runtime.register_function(0x089AAFF8u, &recomp_unit_0422, "recomp_unit_0422");
}
} // namespace psprecomp
