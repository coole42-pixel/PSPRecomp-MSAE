#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0384[1023] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 31, 0, 0, 0, 0, 32, 0, 0, 33,
    0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 71,
    0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 140, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 147, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 153,
    0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 157, 158, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 165,
};
void recomp_unit_0384_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08984004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0384[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08984004;
    case 2u: goto L_0898400C;
    case 3u: goto L_0898401C;
    case 4u: goto L_08984028;
    case 5u: goto L_08984044;
    case 6u: goto L_08984080;
    case 7u: goto L_089840A8;
    case 8u: goto L_089840B0;
    case 9u: goto L_089840B8;
    case 10u: goto L_089840C0;
    case 11u: goto L_089840D8;
    case 12u: goto L_089840E8;
    case 13u: goto L_089840F0;
    case 14u: goto L_089840F8;
    case 15u: goto L_08984128;
    case 16u: goto L_08984130;
    case 17u: goto L_08984140;
    case 18u: goto L_08984148;
    case 19u: goto L_08984150;
    case 20u: goto L_08984184;
    case 21u: goto L_0898418C;
    case 22u: goto L_08984194;
    case 23u: goto L_0898419C;
    case 24u: goto L_089841A4;
    case 25u: goto L_089841B4;
    case 26u: goto L_089841C4;
    case 27u: goto L_089841D0;
    case 28u: goto L_089841E0;
    case 29u: goto L_08984224;
    case 30u: goto L_0898425C;
    case 31u: goto L_08984260;
    case 32u: goto L_08984274;
    case 33u: goto L_08984280;
    case 34u: goto L_08984288;
    case 35u: goto L_089842A4;
    case 36u: goto L_089842B0;
    case 37u: goto L_089842C0;
    case 38u: goto L_089842CC;
    case 39u: goto L_089842D8;
    case 40u: goto L_089842E8;
    case 41u: goto L_08984328;
    case 42u: goto L_08984360;
    case 43u: goto L_08984370;
    case 44u: goto L_089843A8;
    case 45u: goto L_089843C0;
    case 46u: goto L_089843C8;
    case 47u: goto L_0898442C;
    case 48u: goto L_08984458;
    case 49u: goto L_089844FC;
    case 50u: goto L_08984518;
    case 51u: goto L_08984524;
    case 52u: goto L_08984530;
    case 53u: goto L_0898453C;
    case 54u: goto L_08984548;
    case 55u: goto L_08984554;
    case 56u: goto L_08984564;
    case 57u: goto L_08984570;
    case 58u: goto L_08984580;
    case 59u: goto L_08984598;
    case 60u: goto L_089845A0;
    case 61u: goto L_089845AC;
    case 62u: goto L_089845C0;
    case 63u: goto L_089845C8;
    case 64u: goto L_089845D4;
    case 65u: goto L_089845F0;
    case 66u: goto L_0898462C;
    case 67u: goto L_0898463C;
    case 68u: goto L_08984650;
    case 69u: goto L_08984668;
    case 70u: goto L_0898467C;
    case 71u: goto L_08984680;
    case 72u: goto L_08984688;
    case 73u: goto L_08984694;
    case 74u: goto L_089846A4;
    case 75u: goto L_089846B0;
    case 76u: goto L_089846C8;
    case 77u: goto L_089846CC;
    case 78u: goto L_089846DC;
    case 79u: goto L_089846F4;
    case 80u: goto L_089846F8;
    case 81u: goto L_08984728;
    case 82u: goto L_08984730;
    case 83u: goto L_08984748;
    case 84u: goto L_0898475C;
    case 85u: goto L_08984794;
    case 86u: goto L_089847A4;
    case 87u: goto L_089847B8;
    case 88u: goto L_089847C0;
    case 89u: goto L_089847D4;
    case 90u: goto L_089847E0;
    case 91u: goto L_089847EC;
    case 92u: goto L_08984800;
    case 93u: goto L_08984808;
    case 94u: goto L_0898482C;
    case 95u: goto L_0898485C;
    case 96u: goto L_08984888;
    case 97u: goto L_089848DC;
    case 98u: goto L_089848E4;
    case 99u: goto L_089848FC;
    case 100u: goto L_08984998;
    case 101u: goto L_089849A8;
    case 102u: goto L_089849C0;
    case 103u: goto L_089849CC;
    case 104u: goto L_089849FC;
    case 105u: goto L_08984A4C;
    case 106u: goto L_08984A54;
    case 107u: goto L_08984A60;
    case 108u: goto L_08984A88;
    case 109u: goto L_08984A94;
    case 110u: goto L_08984A9C;
    case 111u: goto L_08984AB8;
    case 112u: goto L_08984AC4;
    case 113u: goto L_08984AD0;
    case 114u: goto L_08984AE0;
    case 115u: goto L_08984AEC;
    case 116u: goto L_08984B14;
    case 117u: goto L_08984B24;
    case 118u: goto L_08984B30;
    case 119u: goto L_08984B40;
    case 120u: goto L_08984B84;
    case 121u: goto L_08984BBC;
    case 122u: goto L_08984BC0;
    case 123u: goto L_08984BCC;
    case 124u: goto L_08984BD8;
    case 125u: goto L_08984BE8;
    case 126u: goto L_08984C28;
    case 127u: goto L_08984C60;
    case 128u: goto L_08984C70;
    case 129u: goto L_08984CA8;
    case 130u: goto L_08984CC8;
    case 131u: goto L_08984CD0;
    case 132u: goto L_08984CD4;
    case 133u: goto L_08984CFC;
    case 134u: goto L_08984D34;
    case 135u: goto L_08984D60;
    case 136u: goto L_08984E30;
    case 137u: goto L_08984E3C;
    case 138u: goto L_08984E48;
    case 139u: goto L_08984E84;
    case 140u: goto L_08984E98;
    case 141u: goto L_08984E9C;
    case 142u: goto L_08984ECC;
    case 143u: goto L_08984EE0;
    case 144u: goto L_08984EF4;
    case 145u: goto L_08984F14;
    case 146u: goto L_08984F2C;
    case 147u: goto L_08984F30;
    case 148u: goto L_08984F38;
    case 149u: goto L_08984F44;
    case 150u: goto L_08984F54;
    case 151u: goto L_08984F60;
    case 152u: goto L_08984F7C;
    case 153u: goto L_08984F80;
    case 154u: goto L_08984F88;
    case 155u: goto L_08984F9C;
    case 156u: goto L_08984FA4;
    case 157u: goto L_08984FAC;
    case 158u: goto L_08984FB0;
    case 159u: goto L_08984FB8;
    case 160u: goto L_08984FC8;
    case 161u: goto L_08984FD4;
    case 162u: goto L_08984FDC;
    case 163u: goto L_08984FE4;
    case 164u: goto L_08984FEC;
    case 165u: goto L_08984FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08984004:
    aot_gpr[31] = (0x0898400Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x0898400Cu) goto L_0898400C;
    return;
L_0898400C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(112));
    aot_gpr[31] = (0x0898401Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x0898401Cu) goto L_0898401C;
    return;
L_0898401C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08984028u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08984028u) goto L_08984028;
    return;
L_08984028:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984044:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-624));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(596), aot_gpr[17]);
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(616), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(612), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(608), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(604), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(600), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(592), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_089840A8;
      }
      goto L_08984080;
    }
L_08984080:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(616)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(612)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(604)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(600)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(596)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(592)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089840A8:
    aot_gpr[31] = (0x089840B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089840B0u) goto L_089840B0;
    return;
L_089840B0:
    aot_gpr[31] = (0x089840B8u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089840B8u) goto L_089840B8;
    return;
L_089840B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08984080;
      }
      goto L_089840C0;
    }
L_089840C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08984128;
      }
      goto L_089840D8;
    }
L_089840D8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(29));
      if (branch_taken) {
          goto L_08984130;
      }
      goto L_089840E8;
    }
L_089840E8:
    aot_gpr[31] = (0x089840F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089840F0u) goto L_089840F0;
    return;
L_089840F0:
    aot_gpr[31] = (0x089840F8u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089840F8u) goto L_089840F8;
    return;
L_089840F8:
    aot_gpr[3] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(616)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(612)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(604)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(600)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(596)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(592)));
    if (aot_gpr[2] != 0u) aot_gpr[3] = (aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984128:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(3));
    goto L_089840E8;
L_08984130:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 301 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(3));
        goto L_089840E8;
    }
    goto L_08984140;
L_08984140:
    aot_gpr[31] = (0x08984148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 131u, 0x08987924u>(ctx, &aot_mem) && ctx.pc == 0x08984148u) goto L_08984148;
    return;
L_08984148:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089840E8;
      }
      goto L_08984150;
    }
L_08984150:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(2744));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2744), aot_gpr[3]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08984184u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 203u, 0x0898DE24u>(ctx, &aot_mem) && ctx.pc == 0x08984184u) goto L_08984184;
    return;
L_08984184:
    aot_gpr[31] = (0x0898418Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898418Cu) goto L_0898418C;
    return;
L_0898418C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089840E8;
      }
      goto L_08984194;
    }
L_08984194:
    aot_gpr[31] = (0x0898419Cu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x0898419Cu) goto L_0898419C;
    return;
L_0898419C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(3500));
      if (branch_taken) {
          goto L_089840E8;
      }
      goto L_089841A4;
    }
L_089841A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), 0u);
      if (branch_taken) {
          goto L_0898425C;
      }
      goto L_089841B4;
    }
L_089841B4:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089841C4u);
    aot_gpr[5] = (0u | 32770u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089841C4u) goto L_089841C4;
    return;
L_089841C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089841D0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089841D0u) goto L_089841D0;
    return;
L_089841D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_08984260;
      }
      goto L_089841E0;
    }
L_089841E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[5]);
      if (branch_taken) {
          goto L_08984260;
      }
      goto L_08984224;
    }
L_08984224:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[5]);
    goto L_0898425C;
L_0898425C:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(124));
    goto L_08984260;
L_08984260:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(148));
    aot_gpr[31] = (0x08984274u);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(420));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08984274u) goto L_08984274;
    return;
L_08984274:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08984280u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 218u, 0x08983C90u>(ctx, &aot_mem) && ctx.pc == 0x08984280u) goto L_08984280;
    return;
L_08984280:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(452));
      if (branch_taken) {
          goto L_089843C8;
      }
      goto L_08984288;
    }
L_08984288:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089842A4u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089842A4u) goto L_089842A4;
    return;
L_089842A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089842B0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 236u, 0x08983F50u>(ctx, &aot_mem) && ctx.pc == 0x089842B0u) goto L_089842B0;
    return;
L_089842B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089842C0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089842C0u) goto L_089842C0;
    return;
L_089842C0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089842CCu);
    aot_gpr[5] = (0u | 32769u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089842CCu) goto L_089842CC;
    return;
L_089842CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089842D8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089842D8u) goto L_089842D8;
    return;
L_089842D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08984360;
      }
      goto L_089842E8;
    }
L_089842E8:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(56), aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[5]);
      if (branch_taken) {
          goto L_08984360;
      }
      goto L_08984328;
    }
L_08984328:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[5]);
    goto L_08984360;
L_08984360:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089843A8;
      }
      goto L_08984370;
    }
L_08984370:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(52), aot_gpr[29]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[2]);
    goto L_089843A8;
L_089843A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(25));
    aot_gpr[31] = (0x089843C0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 107u, 0x0898669Cu>(ctx, &aot_mem) && ctx.pc == 0x089843C0u) goto L_089843C0;
    return;
L_089843C0:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089840E8;
L_089843C8:
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(480));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(164));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(440)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(444)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(468)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(472)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    goto L_0898442C;
L_0898442C:
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
          goto L_0898442C;
      }
      goto L_08984458;
    }
L_08984458:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(552));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(236));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
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
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(19), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(23), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(27), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(31), aot_gpr[11]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[2]);
    goto L_08984288;
L_089844FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08984518u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08984518u) goto L_08984518;
    return;
L_08984518:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08984524u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08984524u) goto L_08984524;
    return;
L_08984524:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08984530u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08984530u) goto L_08984530;
    return;
L_08984530:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898453Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0898453Cu) goto L_0898453C;
    return;
L_0898453C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08984548u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08984548u) goto L_08984548;
    return;
L_08984548:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08984554u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08984554u) goto L_08984554;
    return;
L_08984554:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x08984564u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x08984564u) goto L_08984564;
    return;
L_08984564:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08984570u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 232u, 0x08983F00u>(ctx, &aot_mem) && ctx.pc == 0x08984570u) goto L_08984570;
    return;
L_08984570:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(112));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08984598;
      }
      goto L_08984580;
    }
L_08984580:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984598:
    aot_gpr[31] = (0x089845A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089845A0u) goto L_089845A0;
    return;
L_089845A0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089845ACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 229u, 0x08983EC0u>(ctx, &aot_mem) && ctx.pc == 0x089845ACu) goto L_089845AC;
    return;
L_089845AC:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(124));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08984580;
      }
      goto L_089845C0;
    }
L_089845C0:
    aot_gpr[31] = (0x089845C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089845C8u) goto L_089845C8;
    return;
L_089845C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089845D4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089845D4u) goto L_089845D4;
    return;
L_089845D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089845F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-736));
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(724), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(708), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(720), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(716), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(712), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(704), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(700), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(696), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(692), aot_gpr[17]);
    aot_gpr[31] = (0x0898462Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(688), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x0898462Cu) goto L_0898462C;
    return;
L_0898462C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(200));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898463Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898463Cu) goto L_0898463C;
    return;
L_0898463C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(2744));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0898475C;
      }
      goto L_08984650;
    }
L_08984650:
    aot_gpr[16] = (aot_gpr[21] + static_cast<std::uint32_t>(2));
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(340));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(164));
    goto L_08984668;
L_08984668:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[16] - aot_gpr[21]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089846CC;
      }
      goto L_0898467C;
    }
L_0898467C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08984680;
L_08984680:
    aot_gpr[31] = (0x08984688u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x08984688u) goto L_08984688;
    return;
L_08984688:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x08984694u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x08984694u) goto L_08984694;
    return;
L_08984694:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (0u | 32769u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08984794;
      }
      goto L_089846A4;
    }
L_089846A4:
    aot_gpr[2] = (0u | 32770u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08984998;
      }
      goto L_089846B0;
    }
L_089846B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] - aot_gpr[21]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08984680;
      }
      goto L_089846C8;
    }
L_089846C8:
    aot_gpr[2] = (2217u << 16u);
    goto L_089846CC;
L_089846CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2744)));
    aot_gpr[2] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[6] & 2u);
      if (branch_taken) {
          goto L_08984728;
      }
      goto L_089846DC;
    }
L_089846DC:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[2] = (aot_gpr[6] & 2u);
      if (branch_taken) {
          goto L_08984728;
      }
      goto L_089846F4;
    }
L_089846F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(724)));
    goto L_089846F8;
L_089846F8:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(720)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(716)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(712)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(708)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(704)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(700)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(696)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(692)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(688)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984728:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_089849C0;
      }
      goto L_08984730;
    }
L_08984730:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(2744));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(724)));
      if (branch_taken) {
          goto L_089846F8;
      }
      goto L_08984748;
    }
L_08984748:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(200));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898475Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(380), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898475Cu) goto L_0898475C;
    return;
L_0898475C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(724)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(720)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(716)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(712)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(708)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(704)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(700)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(696)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(692)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(688)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984794:
    aot_gpr[4] = (aot_gpr[30] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089847A4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089847A4u) goto L_089847A4;
    return;
L_089847A4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(160));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(160) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_089847C0;
      }
      goto L_089847B8;
    }
L_089847B8:
    aot_gpr[20] = (aot_gpr[3] + 0u);
    aot_gpr[4] = (aot_gpr[3] + 0u);
    goto L_089847C0;
L_089847C0:
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089847D4u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089847D4u) goto L_089847D4;
    return;
L_089847D4:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089847E0u);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    goto L_089844FC;
L_089847E0:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089847ECu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089847ECu) goto L_089847EC;
    return;
L_089847EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
      if (branch_taken) {
          goto L_08984808;
      }
      goto L_08984800;
    }
L_08984800:
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    goto L_08984808;
L_08984808:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12440));
    aot_gpr[6] = (aot_gpr[2] >> 24u);
    aot_gpr[7] = ((aot_gpr[2] >> 16u) & 0x000000FFu);
    aot_gpr[8] = (aot_gpr[2] & 65535u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(212));
    aot_gpr[31] = (0x0898482Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0898482Cu) goto L_0898482C;
    return;
L_0898482C:
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(268));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(200), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(202), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_0898485C;
L_0898485C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[23];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0898485C;
      }
      goto L_08984888;
    }
L_08984888:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[3]);
      if (branch_taken) {
          goto L_089848E4;
      }
      goto L_089848DC;
    }
L_089848DC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[2]);
    goto L_089848E4;
L_089848E4:
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[6]);
      if (branch_taken) {
          goto L_08984668;
      }
      goto L_089848FC;
    }
L_089848FC:
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(19), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(23), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(27), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(31), aot_gpr[11]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[9]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[11]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(19), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(23), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(27), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(31), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[2]);
    goto L_08984668;
L_08984998:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089849A8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089849A8u) goto L_089849A8;
    return;
L_089849A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(376), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[3]);
    goto L_08984668;
L_089849C0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(724)));
      if (branch_taken) {
          goto L_08984730;
      }
      goto L_089849CC;
    }
L_089849CC:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(720)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(716)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(712)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(708)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(704)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(700)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(696)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(692)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(688)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089849FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-640));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(608), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(616), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(612), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(632), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(628), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(624), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2764)));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(180), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2760)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08984A60;
      }
      goto L_08984A4C;
    }
L_08984A4C:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08984A54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08984A54u) goto L_08984A54;
    return;
L_08984A54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
      if (branch_taken) {
          goto L_08984CD4;
      }
      goto L_08984A60;
    }
L_08984A60:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(116));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(160));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(436));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08984A88u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08984A88u) goto L_08984A88;
    return;
L_08984A88:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08984A94u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 218u, 0x08983C90u>(ctx, &aot_mem) && ctx.pc == 0x08984A94u) goto L_08984A94;
    return;
L_08984A94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(436)));
      if (branch_taken) {
          goto L_08984CFC;
      }
      goto L_08984A9C;
    }
L_08984A9C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(276));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08984AB8u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x08984AB8u) goto L_08984AB8;
    return;
L_08984AB8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08984AC4u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    goto L_089844FC;
L_08984AC4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08984AD0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x08984AD0u) goto L_08984AD0;
    return;
L_08984AD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), 0u);
      if (branch_taken) {
          goto L_08984BBC;
      }
      goto L_08984AE0;
    }
L_08984AE0:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 301 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(26));
      if (branch_taken) {
          goto L_08984B14;
      }
      goto L_08984AEC;
    }
L_08984AEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(628)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(620)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(616)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(612)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984B14:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08984B24u);
    aot_gpr[5] = (0u | 32770u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x08984B24u) goto L_08984B24;
    return;
L_08984B24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08984B30u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x08984B30u) goto L_08984B30;
    return;
L_08984B30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
        goto L_08984BC0;
    }
    goto L_08984B40;
L_08984B40:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[6] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[6]) < 8 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[6]);
      if (branch_taken) {
          goto L_08984BBC;
      }
      goto L_08984B84;
    }
L_08984B84:
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    goto L_08984BBC;
L_08984BBC:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08984BC0;
L_08984BC0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08984BCCu);
    aot_gpr[5] = (0u | 32769u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x08984BCCu) goto L_08984BCC;
    return;
L_08984BCC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08984BD8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x08984BD8u) goto L_08984BD8;
    return;
L_08984BD8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_08984C60;
      }
      goto L_08984BE8;
    }
L_08984BE8:
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(48), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[6]) < 8 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[6]);
      if (branch_taken) {
          goto L_08984C60;
      }
      goto L_08984C28;
    }
L_08984C28:
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    goto L_08984C60;
L_08984C60:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_08984CA8;
      }
      goto L_08984C70;
    }
L_08984C70:
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), aot_gpr[29]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    goto L_08984CA8;
L_08984CA8:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(26));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (0x08984CC8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 107u, 0x0898669Cu>(ctx, &aot_mem) && ctx.pc == 0x08984CC8u) goto L_08984CC8;
    return;
L_08984CC8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08984AEC;
      }
      goto L_08984CD0;
    }
L_08984CD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    goto L_08984CD4;
L_08984CD4:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(628)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(620)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(616)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(612)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984CFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(456)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(496));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(140));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(460)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(560));
    goto L_08984D34;
L_08984D34:
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
          goto L_08984D34;
      }
      goto L_08984D60;
    }
L_08984D60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(568));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(468));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(19), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(23), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(27), aot_gpr[11]));
    aot_gpr[12] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(31), aot_gpr[12]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[11]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[12] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[12]));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(19), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(23), aot_gpr[10]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(27), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[11]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(31), aot_gpr[12]);
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(464)));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[12]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[16]);
      if (branch_taken) {
          goto L_08984A9C;
      }
      goto L_08984E30;
    }
L_08984E30:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(124));
    aot_gpr[31] = (0x08984E3Cu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 98u, 0x08986644u>(ctx, &aot_mem) && ctx.pc == 0x08984E3Cu) goto L_08984E3C;
    return;
L_08984E3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[3]);
    goto L_08984A9C;
L_08984E48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-736));
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(696), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(724), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(720), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(716), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(712), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(708), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(704), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(700), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(692), aot_gpr[17]);
    aot_gpr[31] = (0x08984E84u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(688), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x08984E84u) goto L_08984E84;
    return;
L_08984E84:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-26188)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[23] = (2216u << 16u);
      if (branch_taken) {
          goto L_08984ECC;
      }
      goto L_08984E98;
    }
L_08984E98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08984E9C;
L_08984E9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(724)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(720)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(716)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(712)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(708)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(704)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(700)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(696)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(692)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(688)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984ECC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[3];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08984E9C;
      }
      goto L_08984EE0;
    }
L_08984EE0:
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(200));
    aot_gpr[4] = (aot_gpr[30] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08984EF4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08984EF4u) goto L_08984EF4;
    return;
L_08984EF4:
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(340));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(164));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    goto L_08984F14;
L_08984F14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[16] - aot_gpr[18]);
    aot_gpr[3] = (aot_gpr[5] & 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_08984F80;
      }
      goto L_08984F2C;
    }
L_08984F2C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08984F30;
L_08984F30:
    aot_gpr[31] = (0x08984F38u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x08984F38u) goto L_08984F38;
    return;
L_08984F38:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x08984F44u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x08984F44u) goto L_08984F44;
    return;
L_08984F44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (0u | 32769u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08984FEC;
      }
      goto L_08984F54;
    }
L_08984F54:
    aot_gpr[2] = (0u | 32770u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 13u, 0x089851B4u>(ctx, &aot_mem); return;
      }
      goto L_08984F60;
    }
L_08984F60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] - aot_gpr[18]);
    aot_gpr[3] = (aot_gpr[5] & 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08984F30;
      }
      goto L_08984F7C;
    }
L_08984F7C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    goto L_08984F80;
L_08984F80:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 15u, 0x089851DCu>(ctx, &aot_mem); return;
      }
      goto L_08984F88;
    }
L_08984F88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4232)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 19u, 0x08985200u>(ctx, &aot_mem); return;
      }
      goto L_08984F9C;
    }
L_08984F9C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08984FB0;
L_08984FA4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 19u, 0x08985200u>(ctx, &aot_mem); return;
      }
      goto L_08984FAC;
    }
L_08984FAC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08984FB0;
L_08984FB0:
    aot_gpr[31] = (0x08984FB8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 45u, 0x08989308u>(ctx, &aot_mem) && ctx.pc == 0x08984FB8u) goto L_08984FB8;
    return;
L_08984FB8:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[30] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08984E98;
      }
      goto L_08984FC8;
    }
L_08984FC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
        goto L_08984FA4;
    }
    goto L_08984FD4;
L_08984FD4:
    aot_gpr[31] = (0x08984FDCu);
    // nop
    goto L_089849FC;
L_08984FDC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
        goto L_08984FA4;
    }
    goto L_08984FE4;
L_08984FE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08984E9C;
L_08984FEC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(148));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x08984FFCu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08984FFCu) goto L_08984FFC;
    return;
L_08984FFC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08985000u; return;
}

void recomp_unit_0384(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0384_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_384(Runtime &runtime) {
    runtime.register_generated_unit(384u, 0x08984000u, 4096u, &recomp_unit_0384, &recomp_unit_0384_entry);
    runtime.register_function(0x08984004u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898400Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898401Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984028u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984044u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984080u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089840A8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089840B0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089840B8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089840C0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089840D8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089840E8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089840F0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089840F8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984128u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984130u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984140u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984148u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984150u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984184u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898418Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984194u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898419Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089841A4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089841B4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089841C4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089841D0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089841E0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984224u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898425Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984260u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984274u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984280u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984288u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089842A4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089842B0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089842C0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089842CCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089842D8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089842E8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984328u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984360u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984370u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089843A8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089843C0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089843C8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898442Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984458u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089844FCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984518u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984524u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984530u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898453Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984548u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984554u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984564u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984570u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984580u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984598u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089845A0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089845ACu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089845C0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089845C8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089845D4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089845F0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898462Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898463Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984650u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984668u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898467Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984680u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984688u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984694u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089846A4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089846B0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089846C8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089846CCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089846DCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089846F4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089846F8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984728u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984730u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984748u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898475Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984794u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089847A4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089847B8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089847C0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089847D4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089847E0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089847ECu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984800u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984808u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898482Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x0898485Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984888u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089848DCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089848E4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089848FCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984998u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089849A8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089849C0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089849CCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x089849FCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984A4Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984A54u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984A60u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984A88u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984A94u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984A9Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984AB8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984AC4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984AD0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984AE0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984AECu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984B14u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984B24u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984B30u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984B40u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984B84u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984BBCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984BC0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984BCCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984BD8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984BE8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984C28u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984C60u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984C70u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984CA8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984CC8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984CD0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984CD4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984CFCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984D34u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984D60u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984E30u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984E3Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984E48u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984E84u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984E98u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984E9Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984ECCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984EE0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984EF4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984F14u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984F2Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984F30u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984F38u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984F44u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984F54u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984F60u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984F7Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984F80u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984F88u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984F9Cu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984FA4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984FACu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984FB0u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984FB8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984FC8u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984FD4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984FDCu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984FE4u, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984FECu, &recomp_unit_0384, "recomp_unit_0384");
    runtime.register_function(0x08984FFCu, &recomp_unit_0384, "recomp_unit_0384");
}
} // namespace psprecomp
