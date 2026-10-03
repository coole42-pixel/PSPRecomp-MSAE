#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0080[993] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19,
    0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0,
    0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 37, 0, 0, 38, 0, 39, 0, 0,
    40, 0, 41, 0, 42, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 50, 0, 51,
    0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 0, 57, 0, 58, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0,
    71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0,
    85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 101, 0, 0, 102, 0, 0, 103, 0,
    0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 112, 0,
    0, 113, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0,
    129, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 138,
    0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 163, 0, 0, 0, 164, 0, 0, 0, 0,
    165,
};
void recomp_unit_0080_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08854000u;
        entry_id = (entry_delta < 3972u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0080[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08854000;
    case 2u: goto L_0885400C;
    case 3u: goto L_0885401C;
    case 4u: goto L_08854030;
    case 5u: goto L_08854048;
    case 6u: goto L_08854058;
    case 7u: goto L_08854060;
    case 8u: goto L_08854088;
    case 9u: goto L_08854098;
    case 10u: goto L_088540A4;
    case 11u: goto L_088540BC;
    case 12u: goto L_088540C8;
    case 13u: goto L_088540F4;
    case 14u: goto L_08854104;
    case 15u: goto L_08854144;
    case 16u: goto L_08854150;
    case 17u: goto L_08854168;
    case 18u: goto L_08854170;
    case 19u: goto L_0885417C;
    case 20u: goto L_08854188;
    case 21u: goto L_08854194;
    case 22u: goto L_088541A0;
    case 23u: goto L_088541A8;
    case 24u: goto L_088541AC;
    case 25u: goto L_088541B8;
    case 26u: goto L_088541CC;
    case 27u: goto L_088541E0;
    case 28u: goto L_088541F4;
    case 29u: goto L_08854204;
    case 30u: goto L_08854210;
    case 31u: goto L_08854224;
    case 32u: goto L_08854254;
    case 33u: goto L_08854274;
    case 34u: goto L_088542B0;
    case 35u: goto L_088542D0;
    case 36u: goto L_088542DC;
    case 37u: goto L_088542E0;
    case 38u: goto L_088542EC;
    case 39u: goto L_088542F4;
    case 40u: goto L_08854300;
    case 41u: goto L_08854308;
    case 42u: goto L_08854310;
    case 43u: goto L_08854318;
    case 44u: goto L_08854324;
    case 45u: goto L_08854330;
    case 46u: goto L_0885434C;
    case 47u: goto L_08854358;
    case 48u: goto L_08854360;
    case 49u: goto L_08854368;
    case 50u: goto L_08854374;
    case 51u: goto L_0885437C;
    case 52u: goto L_08854388;
    case 53u: goto L_08854390;
    case 54u: goto L_0885439C;
    case 55u: goto L_088543A4;
    case 56u: goto L_088543AC;
    case 57u: goto L_088543B8;
    case 58u: goto L_088543C0;
    case 59u: goto L_088543CC;
    case 60u: goto L_088543D0;
    case 61u: goto L_08854400;
    case 62u: goto L_0885444C;
    case 63u: goto L_08854474;
    case 64u: goto L_08854494;
    case 65u: goto L_08854508;
    case 66u: goto L_0885451C;
    case 67u: goto L_0885452C;
    case 68u: goto L_088545AC;
    case 69u: goto L_088545E0;
    case 70u: goto L_088545F4;
    case 71u: goto L_08854600;
    case 72u: goto L_08854608;
    case 73u: goto L_08854614;
    case 74u: goto L_08854628;
    case 75u: goto L_08854638;
    case 76u: goto L_08854640;
    case 77u: goto L_08854650;
    case 78u: goto L_08854658;
    case 79u: goto L_08854670;
    case 80u: goto L_088546C0;
    case 81u: goto L_088546C8;
    case 82u: goto L_088546D4;
    case 83u: goto L_088546E8;
    case 84u: goto L_088546F8;
    case 85u: goto L_08854700;
    case 86u: goto L_08854710;
    case 87u: goto L_08854724;
    case 88u: goto L_08854734;
    case 89u: goto L_08854740;
    case 90u: goto L_08854798;
    case 91u: goto L_088547A4;
    case 92u: goto L_088547C4;
    case 93u: goto L_088547D0;
    case 94u: goto L_08854804;
    case 95u: goto L_0885481C;
    case 96u: goto L_08854828;
    case 97u: goto L_08854834;
    case 98u: goto L_08854840;
    case 99u: goto L_08854850;
    case 100u: goto L_0885485C;
    case 101u: goto L_08854860;
    case 102u: goto L_0885486C;
    case 103u: goto L_08854878;
    case 104u: goto L_08854884;
    case 105u: goto L_08854898;
    case 106u: goto L_088548A4;
    case 107u: goto L_088548C0;
    case 108u: goto L_088548CC;
    case 109u: goto L_088548D8;
    case 110u: goto L_088548E4;
    case 111u: goto L_088548EC;
    case 112u: goto L_088548F8;
    case 113u: goto L_08854904;
    case 114u: goto L_08854908;
    case 115u: goto L_08854910;
    case 116u: goto L_0885491C;
    case 117u: goto L_08854928;
    case 118u: goto L_08854930;
    case 119u: goto L_08854940;
    case 120u: goto L_08854960;
    case 121u: goto L_08854988;
    case 122u: goto L_088549AC;
    case 123u: goto L_088549B4;
    case 124u: goto L_088549C0;
    case 125u: goto L_088549D0;
    case 126u: goto L_088549E0;
    case 127u: goto L_088549E8;
    case 128u: goto L_088549F0;
    case 129u: goto L_08854A00;
    case 130u: goto L_08854A08;
    case 131u: goto L_08854A18;
    case 132u: goto L_08854A30;
    case 133u: goto L_08854A38;
    case 134u: goto L_08854A44;
    case 135u: goto L_08854A58;
    case 136u: goto L_08854A60;
    case 137u: goto L_08854A6C;
    case 138u: goto L_08854A7C;
    case 139u: goto L_08854A88;
    case 140u: goto L_08854A90;
    case 141u: goto L_08854AD0;
    case 142u: goto L_08854AEC;
    case 143u: goto L_08854B00;
    case 144u: goto L_08854B08;
    case 145u: goto L_08854B14;
    case 146u: goto L_08854B24;
    case 147u: goto L_08854B30;
    case 148u: goto L_08854B38;
    case 149u: goto L_08854B78;
    case 150u: goto L_08854B90;
    case 151u: goto L_08854BC0;
    case 152u: goto L_08854C04;
    case 153u: goto L_08854C20;
    case 154u: goto L_08854C28;
    case 155u: goto L_08854C48;
    case 156u: goto L_08854C5C;
    case 157u: goto L_08854DB0;
    case 158u: goto L_08854DC4;
    case 159u: goto L_08854DCC;
    case 160u: goto L_08854DE8;
    case 161u: goto L_08854DFC;
    case 162u: goto L_08854F58;
    case 163u: goto L_08854F5C;
    case 164u: goto L_08854F6C;
    case 165u: goto L_08854F80;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08854000:
    aot_gpr[4] = (0u | 75u);
    aot_gpr[31] = (0x0885400Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0885400Cu) goto L_0885400C;
    return;
L_0885400C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[2]);
    aot_gpr[4] = (0u | 80u);
    aot_gpr[31] = (0x0885401Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0885401Cu) goto L_0885401C;
    return;
L_0885401C:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08854030u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2000));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08854030u) goto L_08854030;
    return;
L_08854030:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08854048u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2016));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08854048u) goto L_08854048;
    return;
L_08854048:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[2]);
    aot_gpr[31] = (0x08854058u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08854058u) goto L_08854058;
    return;
L_08854058:
    aot_gpr[31] = (0x08854060u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08854060u) goto L_08854060;
    return;
L_08854060:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2036));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[18]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[30] = (0u | 60u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[22] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[17]);
    goto L_08854088;
L_08854088:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(288)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08854098u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08854098u) goto L_08854098;
    return;
L_08854098:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[31] = (0x088540A4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088540A4u) goto L_088540A4;
    return;
L_088540A4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5596));
    aot_gpr[31] = (0x088540BCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 145u, 0x08873964u>(ctx, &aot_mem) && ctx.pc == 0x088540BCu) goto L_088540BC;
    return;
L_088540BC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854170;
      }
      goto L_088540C8;
    }
L_088540C8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 60000u);
    { const std::uint32_t dividend = aot_gpr[17]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[30]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(60) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_08854104;
      }
      goto L_088540F4;
    }
L_088540F4:
    aot_gpr[18] = (0u | 59u);
    aot_gpr[17] = (aot_gpr[18] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 99u);
      if (branch_taken) {
          goto L_08854144;
      }
      goto L_08854104;
    }
L_08854104:
    { const std::uint32_t dividend = aot_gpr[17]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (0u | 1000u);
    aot_gpr[5] = (0u | 100u);
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[17]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[30]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[17] = (ctx.hi);
    goto L_08854144;
L_08854144:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x08854150u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08854150u) goto L_08854150;
    return;
L_08854150:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08854168u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08854168u) goto L_08854168;
    return;
L_08854168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854188;
      }
      goto L_08854170;
    }
L_08854170:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x0885417Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0885417Cu) goto L_0885417C;
    return;
L_0885417C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08854188u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08854188u) goto L_08854188;
    return;
L_08854188:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08854194u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08854194u) goto L_08854194;
    return;
L_08854194:
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088541A8;
      }
      goto L_088541A0;
    }
L_088541A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_088541AC;
      }
      goto L_088541A8;
    }
L_088541A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    goto L_088541AC;
L_088541AC:
    aot_gpr[17] = (aot_gpr[19] & 3u);
    aot_gpr[31] = (0x088541B8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x088541B8u) goto L_088541B8;
    return;
L_088541B8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088541CCu);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 183u, 0x0888CB68u>(ctx, &aot_mem) && ctx.pc == 0x088541CCu) goto L_088541CC;
    return;
L_088541CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088541E0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x088541E0u) goto L_088541E0;
    return;
L_088541E0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[31] = (0x088541F4u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x088541F4u) goto L_088541F4;
    return;
L_088541F4:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08854088;
      }
      goto L_08854204;
    }
L_08854204:
    aot_gpr[4] = (0u | 71u);
    aot_gpr[31] = (0x08854210u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08854210u) goto L_08854210;
    return;
L_08854210:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08854224u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x08854224u) goto L_08854224;
    return;
L_08854224:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(376)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(380)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854254:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854274:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088542B0u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088542B0u) goto L_088542B0;
    return;
L_088542B0:
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x088542D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2040));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088542D0u) goto L_088542D0;
    return;
L_088542D0:
    aot_gpr[4] = (2214u << 16u);
    { const bool branch_taken = aot_gpr[22] != aot_gpr[2];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2056));
      if (branch_taken) {
          goto L_088542E0;
      }
      goto L_088542DC;
    }
L_088542DC:
    aot_gpr[20] = (0u | 2u);
    goto L_088542E0;
L_088542E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854390;
      }
      goto L_088542EC;
    }
L_088542EC:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885434C;
      }
      goto L_088542F4;
    }
L_088542F4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08854300u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08854300u) goto L_08854300;
    return;
L_08854300:
    aot_gpr[31] = (0x08854308u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08854308u) goto L_08854308;
    return;
L_08854308:
    if (aot_gpr[2] != aot_gpr[20]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_08854318;
    }
    goto L_08854310;
L_08854310:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08854318;
      }
      goto L_08854318;
    }
L_08854318:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08854324u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x08854324u) goto L_08854324;
    return;
L_08854324:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08854330u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08854330u) goto L_08854330;
    return;
L_08854330:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088543D0;
      }
      goto L_0885434C;
    }
L_0885434C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08854358u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08854358u) goto L_08854358;
    return;
L_08854358:
    aot_gpr[31] = (0x08854360u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08854360u) goto L_08854360;
    return;
L_08854360:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[20];
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885437C;
      }
      goto L_08854368;
    }
L_08854368:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08854374u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08854374u) goto L_08854374;
    return;
L_08854374:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088543D0;
      }
      goto L_0885437C;
    }
L_0885437C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08854388u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08854388u) goto L_08854388;
    return;
L_08854388:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088543D0;
      }
      goto L_08854390;
    }
L_08854390:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0885439Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0885439Cu) goto L_0885439C;
    return;
L_0885439C:
    aot_gpr[31] = (0x088543A4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088543A4u) goto L_088543A4;
    return;
L_088543A4:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088543C0;
      }
      goto L_088543AC;
    }
L_088543AC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088543B8u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088543B8u) goto L_088543B8;
    return;
L_088543B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088543D0;
      }
      goto L_088543C0;
    }
L_088543C0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088543CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088543CCu) goto L_088543CC;
    return;
L_088543CC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_088543D0;
L_088543D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854400:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[11] & 255u);
    aot_gpr[11] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(72));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0885444Cu);
    aot_gpr[10] = (aot_gpr[11] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885444Cu) goto L_0885444C;
    return;
L_0885444C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[4]));
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
L_08854474:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854494:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[5]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x08854508u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08854508u) goto L_08854508;
    return;
L_08854508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0885451Cu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0885451Cu) goto L_0885451C;
    return;
L_0885451C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885452C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[18]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088545ACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088545ACu) goto L_088545AC;
    return;
L_088545AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[18]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088545E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088545E0u) goto L_088545E0;
    return;
L_088545E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088545F4u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x088545F4u) goto L_088545F4;
    return;
L_088545F4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[31] = (0x08854600u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 106u, 0x089319B0u>(ctx, &aot_mem) && ctx.pc == 0x08854600u) goto L_08854600;
    return;
L_08854600:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08854640;
      }
      goto L_08854608;
    }
L_08854608:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x08854614u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 41u, 0x0891F368u>(ctx, &aot_mem) && ctx.pc == 0x08854614u) goto L_08854614;
    return;
L_08854614:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08854628u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08854628u) goto L_08854628;
    return;
L_08854628:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x08854638u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 41u, 0x0891F368u>(ctx, &aot_mem) && ctx.pc == 0x08854638u) goto L_08854638;
    return;
L_08854638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854650;
      }
      goto L_08854640;
    }
L_08854640:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08854650u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08854650u) goto L_08854650;
    return;
L_08854650:
    aot_gpr[31] = (0x08854658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 122u, 0x08931B30u>(ctx, &aot_mem) && ctx.pc == 0x08854658u) goto L_08854658;
    return;
L_08854658:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854670:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[7]));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[16] = (aot_gpr[6] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088546C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088546C0u) goto L_088546C0;
    return;
L_088546C0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08854700;
      }
      goto L_088546C8;
    }
L_088546C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x088546D4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 41u, 0x0891F368u>(ctx, &aot_mem) && ctx.pc == 0x088546D4u) goto L_088546D4;
    return;
L_088546D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088546E8u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x088546E8u) goto L_088546E8;
    return;
L_088546E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x088546F8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 41u, 0x0891F368u>(ctx, &aot_mem) && ctx.pc == 0x088546F8u) goto L_088546F8;
    return;
L_088546F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854710;
      }
      goto L_08854700;
    }
L_08854700:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08854710u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08854710u) goto L_08854710;
    return;
L_08854710:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854724:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08854734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 122u, 0x08931B30u>(ctx, &aot_mem) && ctx.pc == 0x08854734u) goto L_08854734;
    return;
L_08854734:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854740:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[4]);
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[22]);
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(2072));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2088));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[31]);
    aot_gpr[31] = (0x08854798u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08854798u) goto L_08854798;
    return;
L_08854798:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088547A4u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088547A4u) goto L_088547A4;
    return;
L_088547A4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(2108));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088547C4u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088547C4u) goto L_088547C4;
    return;
L_088547C4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088547D0u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088547D0u) goto L_088547D0;
    return;
L_088547D0:
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[5] = (0u | 5u);
    { const std::uint32_t dividend = aot_gpr[21]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[17]);
    aot_gpr[23] = (aot_gpr[16] << 2u);
    aot_gpr[17] = (ctx.hi);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[23] = (aot_gpr[16] + aot_gpr[23]);
      if (branch_taken) {
          goto L_08854910;
      }
      goto L_08854804;
    }
L_08854804:
    { const std::uint32_t dividend = aot_gpr[21]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[21] = (ctx.lo);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[20];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
      if (branch_taken) {
          goto L_08854884;
      }
      goto L_0885481C;
    }
L_0885481C:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08854828u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08854828u) goto L_08854828;
    return;
L_08854828:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08854834u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08854834u) goto L_08854834;
    return;
L_08854834:
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08854860;
      }
      goto L_08854840;
    }
L_08854840:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08854850u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08854850u) goto L_08854850;
    return;
L_08854850:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0885485Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0885485Cu) goto L_0885485C;
    return;
L_0885485C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    goto L_08854860;
L_08854860:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[31] = (0x0885486Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885486Cu) goto L_0885486C;
    return;
L_0885486C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08854878u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08854878u) goto L_08854878;
    return;
L_08854878:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[23] + aot_gpr[18]);
      if (branch_taken) {
          goto L_08854908;
      }
      goto L_08854884;
    }
L_08854884:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[16]);
    aot_gpr[31] = (0x08854898u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08854898u) goto L_08854898;
    return;
L_08854898:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088548A4u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x088548A4u) goto L_088548A4;
    return;
L_088548A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[6] = (aot_gpr[21] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[23] + aot_gpr[18]);
      if (branch_taken) {
          goto L_088548EC;
      }
      goto L_088548C0;
    }
L_088548C0:
    aot_gpr[6] = (aot_gpr[18] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088548EC;
      }
      goto L_088548CC;
    }
L_088548CC:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088548D8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088548D8u) goto L_088548D8;
    return;
L_088548D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088548E4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x088548E4u) goto L_088548E4;
    return;
L_088548E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08854908;
      }
      goto L_088548EC;
    }
L_088548EC:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088548F8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088548F8u) goto L_088548F8;
    return;
L_088548F8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08854904u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08854904u) goto L_08854904;
    return;
L_08854904:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    goto L_08854908;
L_08854908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854930;
      }
      goto L_08854910;
    }
L_08854910:
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885491Cu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885491Cu) goto L_0885491C;
    return;
L_0885491C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08854928u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08854928u) goto L_08854928;
    return;
L_08854928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[23] + aot_gpr[18]);
    goto L_08854930;
L_08854930:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[31] = (0x08854940u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08854940u) goto L_08854940;
    return;
L_08854940:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08854960u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08854960u) goto L_08854960;
    return;
L_08854960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08854A30;
      }
      goto L_08854988;
    }
L_08854988:
    aot_gpr[8] = (15820u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_gpr[8] = (aot_gpr[8] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[6] = (0u | 1u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088549AC;
L_088549AC:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[19];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_088549C0;
      }
      goto L_088549B4;
    }
L_088549B4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(69)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088549E8;
      }
      goto L_088549C0;
    }
L_088549C0:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(aot_gpr[6]));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[19];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088549F0;
      }
      goto L_088549D0;
    }
L_088549D0:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088549F0;
      }
      goto L_088549E0;
    }
L_088549E0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088549F0;
      }
      goto L_088549E8;
    }
L_088549E8:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088549F0;
L_088549F0:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08854A08;
      }
      goto L_08854A00;
    }
L_08854A00:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08854A18;
      }
      goto L_08854A08;
    }
L_08854A08:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
        goto L_08854A18;
    }
    goto L_08854A18;
L_08854A18:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[19] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088549AC;
      }
      goto L_08854A30;
    }
L_08854A30:
    aot_gpr[31] = (0x08854A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08854A38u) goto L_08854A38;
    return;
L_08854A38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854B90;
      }
      goto L_08854A44;
    }
L_08854A44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (8255u << 16u);
        goto L_08854A90;
    }
    goto L_08854A58;
L_08854A58:
    aot_gpr[31] = (0x08854A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 195u, 0x0881CDD4u>(ctx, &aot_mem) && ctx.pc == 0x08854A60u) goto L_08854A60;
    return;
L_08854A60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08854A6Cu);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 196u, 0x0881CDF0u>(ctx, &aot_mem) && ctx.pc == 0x08854A6Cu) goto L_08854A6C;
    return;
L_08854A6C:
    aot_gpr[5] = (aot_gpr[2] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x08854A7Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08854A7Cu) goto L_08854A7C;
    return;
L_08854A7C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08854A88u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08854A88u) goto L_08854A88;
    return;
L_08854A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854AD0;
      }
      goto L_08854A90;
    }
L_08854A90:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16191));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (20043u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20053));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (8270u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22351));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (20559u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21076));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (16160u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22856));
    aot_gpr[5] = (0u | 16191u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_08854AD0;
L_08854AD0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08854AECu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2124));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x08854AECu) goto L_08854AEC;
    return;
L_08854AEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (8255u << 16u);
        goto L_08854B38;
    }
    goto L_08854B00;
L_08854B00:
    aot_gpr[31] = (0x08854B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 197u, 0x0881CE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08854B08u) goto L_08854B08;
    return;
L_08854B08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08854B14u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 198u, 0x0881CE28u>(ctx, &aot_mem) && ctx.pc == 0x08854B14u) goto L_08854B14;
    return;
L_08854B14:
    aot_gpr[5] = (aot_gpr[2] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x08854B24u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08854B24u) goto L_08854B24;
    return;
L_08854B24:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08854B30u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08854B30u) goto L_08854B30;
    return;
L_08854B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854B78;
      }
      goto L_08854B38;
    }
L_08854B38:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16191));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (20043u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20053));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (8270u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22351));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (20559u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21076));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (16160u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22856));
    aot_gpr[5] = (0u | 16191u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_08854B78;
L_08854B78:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08854B90u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2148));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x08854B90u) goto L_08854B90;
    return;
L_08854B90:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854BC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08854C04u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2352));
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 6u, 0x08940124u>(ctx, &aot_mem) && ctx.pc == 0x08854C04u) goto L_08854C04;
    return;
L_08854C04:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08854C20u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x08854C20u) goto L_08854C20;
    return;
L_08854C20:
    aot_gpr[31] = (0x08854C28u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 166u, 0x08943B80u>(ctx, &aot_mem) && ctx.pc == 0x08854C28u) goto L_08854C28;
    return;
L_08854C28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 5u);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2072));
    aot_gpr[4] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (2218u << 16u);
      if (branch_taken) {
          goto L_08854DB0;
      }
      goto L_08854C48;
    }
L_08854C48:
    aot_gpr[9] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08854C5Cu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 32u, 0x08A4C268u>(ctx, &aot_mem) && ctx.pc == 0x08854C5Cu) goto L_08854C5C;
    return;
L_08854C5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (16856u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[16] = aot_fpr[17] / aot_fpr[16];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[2] = (16784u << 16u);
    aot_gpr[7] = (17000u << 16u);
    aot_gpr[8] = (16300u << 16u);
    aot_gpr[8] = (aot_gpr[8] | 52429u);
    aot_gpr[10] = (16153u << 16u);
    aot_gpr[10] = (aot_gpr[10] | 39322u);
    aot_gpr[3] = (16064u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[15] = aot_fpr[18] / aot_fpr[15];
    aot_gpr[6] = (0u | 4u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[20] / aot_fpr[12];
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[17] = aot_fpr[0] / aot_fpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[2];
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[3]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[19];
    aot_fpr[13] = aot_fpr[13] - aot_fpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[2];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[2];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[2];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x08854DB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-29132)));
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 106u, 0x0892FAE8u>(ctx, &aot_mem) && ctx.pc == 0x08854DB0u) goto L_08854DB0;
    return;
L_08854DB0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08854DC4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2088));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08854DC4u) goto L_08854DC4;
    return;
L_08854DC4:
    aot_gpr[31] = (0x08854DCCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08854DCCu) goto L_08854DCC;
    return;
L_08854DCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08854F5C;
    }
    goto L_08854DE8;
L_08854DE8:
    aot_gpr[9] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08854DFCu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 32u, 0x08A4C268u>(ctx, &aot_mem) && ctx.pc == 0x08854DFCu) goto L_08854DFC;
    return;
L_08854DFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (16784u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[7] = (16856u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (16912u << 16u);
    aot_gpr[8] = (16300u << 16u);
    aot_gpr[8] = (aot_gpr[8] | 52429u);
    aot_gpr[10] = (16153u << 16u);
    aot_gpr[10] = (aot_gpr[10] | 39322u);
    aot_gpr[3] = (16064u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[16] = aot_fpr[17] / aot_fpr[16];
    aot_gpr[7] = (17000u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[13] = aot_fpr[18] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[6] = (0u | 4u);
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[17] = aot_fpr[0] / aot_fpr[17];
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[2];
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[3]);
    aot_fpr[15] = aot_fpr[15] + aot_fpr[19];
    aot_fpr[14] = aot_fpr[14] - aot_fpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[2];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[15] = aot_fpr[15] + aot_fpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[2];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] - aot_fpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[2];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x08854F58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-29132)));
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 106u, 0x0892FAE8u>(ctx, &aot_mem) && ctx.pc == 0x08854F58u) goto L_08854F58;
    return;
L_08854F58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08854F5C;
L_08854F5C:
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 2u, 0x088550DCu>(ctx, &aot_mem); return;
      }
      goto L_08854F6C;
    }
L_08854F6C:
    aot_gpr[9] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08854F80u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 32u, 0x08A4C268u>(ctx, &aot_mem) && ctx.pc == 0x08854F80u) goto L_08854F80;
    return;
L_08854F80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (16912u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[7] = (16856u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (17036u << 16u);
    aot_gpr[8] = (16300u << 16u);
    aot_gpr[8] = (aot_gpr[8] | 52429u);
    aot_gpr[10] = (16153u << 16u);
    aot_gpr[10] = (aot_gpr[10] | 39322u);
    aot_gpr[3] = (16064u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[16] = aot_fpr[17] / aot_fpr[16];
    aot_gpr[7] = (16948u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[13] = aot_fpr[18] / aot_fpr[13];
    ctx.pc = 0x08855000u; return;
}

void recomp_unit_0080(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0080_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_80(Runtime &runtime) {
    runtime.register_generated_unit(80u, 0x08854000u, 4096u, &recomp_unit_0080, &recomp_unit_0080_entry);
    runtime.register_function(0x08854000u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885400Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885401Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854030u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854048u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854058u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854060u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854088u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854098u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088540A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088540BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088540C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088540F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854104u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854144u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854150u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854168u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854170u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885417Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854188u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854194u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088541A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088541A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088541ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088541B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088541CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088541E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088541F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854204u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854210u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854224u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854254u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854274u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088542B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088542D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088542DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088542E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088542ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088542F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854300u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854308u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854310u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854318u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854324u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854330u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885434Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854358u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854360u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854368u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854374u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885437Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854388u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854390u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885439Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088543A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088543ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088543B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088543C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088543CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088543D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854400u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885444Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854474u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854494u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854508u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885451Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885452Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088545ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088545E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088545F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854600u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854608u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854614u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854628u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854638u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854640u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854650u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854658u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854670u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088546C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088546C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088546D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088546E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088546F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854700u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854710u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854724u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854734u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854740u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854798u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088547A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088547C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088547D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854804u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885481Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854828u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854834u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854840u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854850u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885485Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854860u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885486Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854878u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854884u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854898u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088548A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088548C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088548CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088548D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088548E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088548ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088548F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854904u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854908u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854910u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0885491Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854928u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854930u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854940u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854960u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854988u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088549ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088549B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088549C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088549D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088549E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088549E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x088549F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854A90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854AD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854AECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854B00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854B08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854B14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854B24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854B30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854B38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854B78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854B90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854BC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854C04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854C20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854C28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854C48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854C5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854DB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854DC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854DCCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854DE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854DFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854F58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854F5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854F6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08854F80u, &recomp_unit_0080, "recomp_unit_0080");
}
} // namespace psprecomp
