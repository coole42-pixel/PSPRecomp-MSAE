#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0009[1018] = {
    1, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0,
    11, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0,
    22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 49, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 105, 0, 0, 0,
    106, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115,
    0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 132, 133, 0, 134, 0, 0, 0, 135, 0,
    0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 148,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 166, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 179, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181,
};
void recomp_unit_0009_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0880D000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0009[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0880D000;
    case 2u: goto L_0880D008;
    case 3u: goto L_0880D014;
    case 4u: goto L_0880D01C;
    case 5u: goto L_0880D02C;
    case 6u: goto L_0880D03C;
    case 7u: goto L_0880D048;
    case 8u: goto L_0880D054;
    case 9u: goto L_0880D05C;
    case 10u: goto L_0880D06C;
    case 11u: goto L_0880D080;
    case 12u: goto L_0880D088;
    case 13u: goto L_0880D090;
    case 14u: goto L_0880D09C;
    case 15u: goto L_0880D0AC;
    case 16u: goto L_0880D0B8;
    case 17u: goto L_0880D0C4;
    case 18u: goto L_0880D0CC;
    case 19u: goto L_0880D0DC;
    case 20u: goto L_0880D0F0;
    case 21u: goto L_0880D0F8;
    case 22u: goto L_0880D100;
    case 23u: goto L_0880D10C;
    case 24u: goto L_0880D140;
    case 25u: goto L_0880D154;
    case 26u: goto L_0880D168;
    case 27u: goto L_0880D17C;
    case 28u: goto L_0880D190;
    case 29u: goto L_0880D198;
    case 30u: goto L_0880D1A0;
    case 31u: goto L_0880D1A8;
    case 32u: goto L_0880D1B0;
    case 33u: goto L_0880D1B8;
    case 34u: goto L_0880D1C4;
    case 35u: goto L_0880D1DC;
    case 36u: goto L_0880D204;
    case 37u: goto L_0880D210;
    case 38u: goto L_0880D21C;
    case 39u: goto L_0880D228;
    case 40u: goto L_0880D234;
    case 41u: goto L_0880D240;
    case 42u: goto L_0880D250;
    case 43u: goto L_0880D264;
    case 44u: goto L_0880D278;
    case 45u: goto L_0880D28C;
    case 46u: goto L_0880D298;
    case 47u: goto L_0880D2B0;
    case 48u: goto L_0880D2BC;
    case 49u: goto L_0880D2C4;
    case 50u: goto L_0880D2C8;
    case 51u: goto L_0880D2E8;
    case 52u: goto L_0880D314;
    case 53u: goto L_0880D328;
    case 54u: goto L_0880D334;
    case 55u: goto L_0880D348;
    case 56u: goto L_0880D34C;
    case 57u: goto L_0880D360;
    case 58u: goto L_0880D37C;
    case 59u: goto L_0880D3A4;
    case 60u: goto L_0880D3B8;
    case 61u: goto L_0880D3C0;
    case 62u: goto L_0880D404;
    case 63u: goto L_0880D43C;
    case 64u: goto L_0880D454;
    case 65u: goto L_0880D45C;
    case 66u: goto L_0880D484;
    case 67u: goto L_0880D498;
    case 68u: goto L_0880D4A0;
    case 69u: goto L_0880D4E4;
    case 70u: goto L_0880D524;
    case 71u: goto L_0880D53C;
    case 72u: goto L_0880D544;
    case 73u: goto L_0880D590;
    case 74u: goto L_0880D5A4;
    case 75u: goto L_0880D5AC;
    case 76u: goto L_0880D5F0;
    case 77u: goto L_0880D62C;
    case 78u: goto L_0880D634;
    case 79u: goto L_0880D64C;
    case 80u: goto L_0880D674;
    case 81u: goto L_0880D6B4;
    case 82u: goto L_0880D6C4;
    case 83u: goto L_0880D6E4;
    case 84u: goto L_0880D6EC;
    case 85u: goto L_0880D708;
    case 86u: goto L_0880D724;
    case 87u: goto L_0880D74C;
    case 88u: goto L_0880D754;
    case 89u: goto L_0880D764;
    case 90u: goto L_0880D76C;
    case 91u: goto L_0880D7A0;
    case 92u: goto L_0880D7A8;
    case 93u: goto L_0880D7B4;
    case 94u: goto L_0880D7C4;
    case 95u: goto L_0880D7CC;
    case 96u: goto L_0880D7D4;
    case 97u: goto L_0880D7DC;
    case 98u: goto L_0880D7E8;
    case 99u: goto L_0880D7F0;
    case 100u: goto L_0880D804;
    case 101u: goto L_0880D840;
    case 102u: goto L_0880D850;
    case 103u: goto L_0880D858;
    case 104u: goto L_0880D868;
    case 105u: goto L_0880D870;
    case 106u: goto L_0880D880;
    case 107u: goto L_0880D888;
    case 108u: goto L_0880D898;
    case 109u: goto L_0880D8A0;
    case 110u: goto L_0880D8B0;
    case 111u: goto L_0880D8B8;
    case 112u: goto L_0880D8CC;
    case 113u: goto L_0880D8DC;
    case 114u: goto L_0880D8EC;
    case 115u: goto L_0880D8FC;
    case 116u: goto L_0880D90C;
    case 117u: goto L_0880D91C;
    case 118u: goto L_0880D934;
    case 119u: goto L_0880D940;
    case 120u: goto L_0880D954;
    case 121u: goto L_0880D98C;
    case 122u: goto L_0880D9EC;
    case 123u: goto L_0880D9FC;
    case 124u: goto L_0880DA00;
    case 125u: goto L_0880DA48;
    case 126u: goto L_0880DA60;
    case 127u: goto L_0880DAA8;
    case 128u: goto L_0880DABC;
    case 129u: goto L_0880DAC4;
    case 130u: goto L_0880DB14;
    case 131u: goto L_0880DB58;
    case 132u: goto L_0880DB5C;
    case 133u: goto L_0880DB60;
    case 134u: goto L_0880DB68;
    case 135u: goto L_0880DB78;
    case 136u: goto L_0880DB8C;
    case 137u: goto L_0880DBB0;
    case 138u: goto L_0880DC00;
    case 139u: goto L_0880DC08;
    case 140u: goto L_0880DC44;
    case 141u: goto L_0880DC5C;
    case 142u: goto L_0880DC6C;
    case 143u: goto L_0880DC7C;
    case 144u: goto L_0880DC88;
    case 145u: goto L_0880DCD8;
    case 146u: goto L_0880DCE4;
    case 147u: goto L_0880DCF8;
    case 148u: goto L_0880DCFC;
    case 149u: goto L_0880DD0C;
    case 150u: goto L_0880DD24;
    case 151u: goto L_0880DD2C;
    case 152u: goto L_0880DD38;
    case 153u: goto L_0880DD4C;
    case 154u: goto L_0880DD50;
    case 155u: goto L_0880DD60;
    case 156u: goto L_0880DD78;
    case 157u: goto L_0880DD8C;
    case 158u: goto L_0880DDB4;
    case 159u: goto L_0880DDE4;
    case 160u: goto L_0880DE0C;
    case 161u: goto L_0880DE14;
    case 162u: goto L_0880DE3C;
    case 163u: goto L_0880DE44;
    case 164u: goto L_0880DE58;
    case 165u: goto L_0880DE6C;
    case 166u: goto L_0880DE70;
    case 167u: goto L_0880DE80;
    case 168u: goto L_0880DE98;
    case 169u: goto L_0880DEAC;
    case 170u: goto L_0880DEC8;
    case 171u: goto L_0880DEFC;
    case 172u: goto L_0880DF0C;
    case 173u: goto L_0880DF1C;
    case 174u: goto L_0880DF48;
    case 175u: goto L_0880DF64;
    case 176u: goto L_0880DF7C;
    case 177u: goto L_0880DF94;
    case 178u: goto L_0880DF9C;
    case 179u: goto L_0880DFB8;
    case 180u: goto L_0880DFBC;
    case 181u: goto L_0880DFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0880D000:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880D01C;
      }
      goto L_0880D008;
    }
L_0880D008:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0880D014u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0880D014u) goto L_0880D014;
    return;
L_0880D014:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2103), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0880D01C;
L_0880D01C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D02C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    goto L_0880D03C;
L_0880D03C:
    aot_gpr[6] = (aot_gpr[8] << 5u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    goto L_0880D048;
L_0880D048:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880D05C;
      }
      goto L_0880D054;
    }
L_0880D054:
    aot_gpr[9] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(272), 0u);
    goto L_0880D05C;
L_0880D05C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[7] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880D048;
      }
      goto L_0880D06C;
    }
L_0880D06C:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D03C;
      }
      goto L_0880D080;
    }
L_0880D080:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D090;
      }
      goto L_0880D088;
    }
L_0880D088:
    aot_gpr[31] = (0x0880D090u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0880D090u) goto L_0880D090;
    return;
L_0880D090:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D09C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    goto L_0880D0AC;
L_0880D0AC:
    aot_gpr[6] = (aot_gpr[8] << 5u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    goto L_0880D0B8;
L_0880D0B8:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880D0CC;
      }
      goto L_0880D0C4;
    }
L_0880D0C4:
    aot_gpr[9] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1136), 0u);
    goto L_0880D0CC;
L_0880D0CC:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[7] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880D0B8;
      }
      goto L_0880D0DC;
    }
L_0880D0DC:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D0AC;
      }
      goto L_0880D0F0;
    }
L_0880D0F0:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D100;
      }
      goto L_0880D0F8;
    }
L_0880D0F8:
    aot_gpr[31] = (0x0880D100u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0880D100u) goto L_0880D100;
    return;
L_0880D100:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D10C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(944)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1072)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1008)));
      if (branch_taken) {
          goto L_0880D190;
      }
      goto L_0880D140;
    }
L_0880D140:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2102)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D190;
      }
      goto L_0880D154;
    }
L_0880D154:
    aot_gpr[6] = (aot_gpr[8] << 2u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(944)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0880D17C;
      }
      goto L_0880D168;
    }
L_0880D168:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(944), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1072), 0u);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1008), 0u);
      if (branch_taken) {
          goto L_0880D190;
      }
      goto L_0880D17C;
    }
L_0880D17C:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D154;
      }
      goto L_0880D190;
    }
L_0880D190:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D1C4;
      }
      goto L_0880D198;
    }
L_0880D198:
    aot_gpr[31] = (0x0880D1A0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x0880D1A0u) goto L_0880D1A0;
    return;
L_0880D1A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D1B0;
      }
      goto L_0880D1A8;
    }
L_0880D1A8:
    aot_gpr[31] = (0x0880D1B0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 49u, 0x0894B364u>(ctx, &aot_mem) && ctx.pc == 0x0880D1B0u) goto L_0880D1B0;
    return;
L_0880D1B0:
    aot_gpr[31] = (0x0880D1B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 31u, 0x0894B1E8u>(ctx, &aot_mem) && ctx.pc == 0x0880D1B8u) goto L_0880D1B8;
    return;
L_0880D1B8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880D1C4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x0880D1C4u) goto L_0880D1C4;
    return;
L_0880D1C4:
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
L_0880D1DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[20] = (0u | 0u);
    goto L_0880D204;
L_0880D204:
    aot_gpr[18] = (aot_gpr[20] << 5u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    goto L_0880D210;
L_0880D210:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D228;
      }
      goto L_0880D21C;
    }
L_0880D21C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0880D228u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880D02C;
L_0880D228:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D240;
      }
      goto L_0880D234;
    }
L_0880D234:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0880D240u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880D09C;
L_0880D240:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880D210;
      }
      goto L_0880D250;
    }
L_0880D250:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[20] & 255u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D204;
      }
      goto L_0880D264;
    }
L_0880D264:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2102)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D2B0;
      }
      goto L_0880D278;
    }
L_0880D278:
    aot_gpr[4] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(944)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D298;
      }
      goto L_0880D28C;
    }
L_0880D28C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880D298u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_0880D10C;
L_0880D298:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2102)));
    aot_gpr[18] = (aot_gpr[18] & 255u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D278;
      }
      goto L_0880D2B0;
    }
L_0880D2B0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2103))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0880D2C8;
      }
      goto L_0880D2BC;
    }
L_0880D2BC:
    aot_gpr[31] = (0x0880D2C4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0880D2C4u) goto L_0880D2C4;
    return;
L_0880D2C4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2103), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_0880D2C8;
L_0880D2C8:
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
L_0880D2E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] << 5u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    goto L_0880D314;
L_0880D314:
    aot_gpr[16] = (aot_gpr[18] << 2u);
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D34C;
      }
      goto L_0880D328;
    }
L_0880D328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D34C;
      }
      goto L_0880D334;
    }
L_0880D334:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0880D348u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 25u, 0x0891F258u>(ctx, &aot_mem) && ctx.pc == 0x0880D348u) goto L_0880D348;
    return;
L_0880D348:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1264), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_0880D34C;
L_0880D34C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] & 255u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D314;
      }
      goto L_0880D360;
    }
L_0880D360:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D37C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2100)));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[7] << 5u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D454;
      }
      goto L_0880D3A4;
    }
L_0880D3A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_0880D454;
      }
      goto L_0880D3B8;
    }
L_0880D3B8:
    aot_gpr[7] = (aot_gpr[6] << 4u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2100)));
    goto L_0880D3C0;
L_0880D3C0:
    aot_gpr[11] = (aot_gpr[6] & 255u);
    aot_gpr[2] = (aot_gpr[10] & 255u);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[2] = (aot_gpr[2] << 5u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[11] << 2u);
    aot_gpr[3] = (aot_gpr[9] & 255u);
    aot_gpr[11] = (aot_gpr[2] + aot_gpr[11]);
    aot_gpr[3] = (aot_gpr[3] << 1u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(1776)));
    aot_gpr[3] = (aot_gpr[8] << (aot_gpr[3] & 31u));
    aot_gpr[11] = (aot_gpr[11] & aot_gpr[3]);
    aot_gpr[11] = (0u < aot_gpr[11] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[10] = (aot_gpr[10] << 7u);
      if (branch_taken) {
          goto L_0880D43C;
      }
      goto L_0880D404;
    }
L_0880D404:
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[9]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(400)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (aot_gpr[10] << 2u);
    aot_gpr[10] = (aot_gpr[11] + aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[9] << 4u);
    aot_gpr[11] = (aot_gpr[4] + aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(144));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0880D43C;
L_0880D43C:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[10] ? 1u : 0u);
    if (aot_gpr[10] != 0u) {
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2100)));
        goto L_0880D3C0;
    }
    goto L_0880D454;
L_0880D454:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D45C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2100)));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[7] << 5u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D53C;
      }
      goto L_0880D484;
    }
L_0880D484:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_0880D53C;
      }
      goto L_0880D498;
    }
L_0880D498:
    aot_gpr[7] = (aot_gpr[6] << 4u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2100)));
    goto L_0880D4A0;
L_0880D4A0:
    aot_gpr[11] = (aot_gpr[6] & 255u);
    aot_gpr[2] = (aot_gpr[10] & 255u);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[2] = (aot_gpr[2] << 5u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[11] << 2u);
    aot_gpr[3] = (aot_gpr[9] & 255u);
    aot_gpr[11] = (aot_gpr[2] + aot_gpr[11]);
    aot_gpr[3] = (aot_gpr[3] << 1u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(1776)));
    aot_gpr[3] = (aot_gpr[8] << (aot_gpr[3] & 31u));
    aot_gpr[11] = (aot_gpr[11] & aot_gpr[3]);
    aot_gpr[11] = (0u < aot_gpr[11] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[10] = (aot_gpr[10] << 7u);
      if (branch_taken) {
          goto L_0880D524;
      }
      goto L_0880D4E4;
    }
L_0880D4E4:
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[9]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(400)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (aot_gpr[10] << 2u);
    aot_gpr[10] = (aot_gpr[11] + aot_gpr[10]);
    aot_gpr[11] = (aot_gpr[9] << 4u);
    aot_gpr[11] = (aot_gpr[4] + aot_gpr[11]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(16));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0880D524;
L_0880D524:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[10] ? 1u : 0u);
    if (aot_gpr[10] != 0u) {
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2100)));
        goto L_0880D4A0;
    }
    goto L_0880D53C;
L_0880D53C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D544:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[6] << 5u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[21] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(272)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880D64C;
      }
      goto L_0880D590;
    }
L_0880D590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0880D64C;
      }
      goto L_0880D5A4;
    }
L_0880D5A4:
    aot_gpr[17] = (aot_gpr[21] << 4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    goto L_0880D5AC;
L_0880D5AC:
    aot_gpr[5] = (aot_gpr[21] & 255u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[19] & 255u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] << 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1904)));
    aot_gpr[7] = (aot_gpr[18] << (aot_gpr[7] & 31u));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[7]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] << 7u);
      if (branch_taken) {
          goto L_0880D634;
      }
      goto L_0880D5F0;
    }
L_0880D5F0:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(400)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1072)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0880D62Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 104u, 0x0894B814u>(ctx, &aot_mem) && ctx.pc == 0x0880D62Cu) goto L_0880D62C;
    return;
L_0880D62C:
    aot_gpr[31] = (0x0880D634u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 62u, 0x0894B480u>(ctx, &aot_mem) && ctx.pc == 0x0880D634u) goto L_0880D634;
    return;
L_0880D634:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] & 255u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
        goto L_0880D5AC;
    }
    goto L_0880D64C;
L_0880D64C:
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
L_0880D674:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    aot_gpr[23] = (0u | 1u);
    aot_gpr[31] = (0x0880D6B4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 144u, 0x0880CC24u>(ctx, &aot_mem) && ctx.pc == 0x0880D6B4u) goto L_0880D6B4;
    return;
L_0880D6B4:
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7652)));
    goto L_0880D6C4;
L_0880D6C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2100)));
    aot_gpr[18] = (aot_gpr[21] << 2u);
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1136)));
      if (branch_taken) {
          goto L_0880D7E8;
      }
      goto L_0880D6E4;
    }
L_0880D6E4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D7E8;
      }
      goto L_0880D6EC;
    }
L_0880D6EC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1264));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880D7E8;
      }
      goto L_0880D708;
    }
L_0880D708:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2100)));
      if (branch_taken) {
          goto L_0880D764;
      }
      goto L_0880D724;
    }
L_0880D724:
    aot_gpr[4] = (aot_gpr[16] & 255u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[21] & 255u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2032)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D754;
      }
      goto L_0880D74C;
    }
L_0880D74C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = aot_fpr[12] - aot_fpr[13];
      if (branch_taken) {
          goto L_0880D754;
      }
      goto L_0880D754;
    }
L_0880D754:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7652)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2100)));
      if (branch_taken) {
          goto L_0880D76C;
      }
      goto L_0880D764;
    }
L_0880D764:
    aot_gpr[23] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7652)));
    goto L_0880D76C;
L_0880D76C:
    aot_gpr[4] = (aot_gpr[16] & 255u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[21] & 255u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2032)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] & 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(22180), aot_gpr[20]);
    aot_gpr[16] = (0u < aot_gpr[16] ? 1u : 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0880D7A0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 16u, 0x08918224u>(ctx, &aot_mem) && ctx.pc == 0x0880D7A0u) goto L_0880D7A0;
    return;
L_0880D7A0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D7B4;
      }
      goto L_0880D7A8;
    }
L_0880D7A8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880D7B4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_0880D37C;
L_0880D7B4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0880D7C4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 25u, 0x0891F258u>(ctx, &aot_mem) && ctx.pc == 0x0880D7C4u) goto L_0880D7C4;
    return;
L_0880D7C4:
    aot_gpr[31] = (0x0880D7CCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 135u, 0x0891F9A8u>(ctx, &aot_mem) && ctx.pc == 0x0880D7CCu) goto L_0880D7CC;
    return;
L_0880D7CC:
    aot_gpr[31] = (0x0880D7D4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x0880D7D4u) goto L_0880D7D4;
    return;
L_0880D7D4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D7E8;
      }
      goto L_0880D7DC;
    }
L_0880D7DC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880D7E8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_0880D45C;
L_0880D7E8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D940;
      }
      goto L_0880D7F0;
    }
L_0880D7F0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0880D804u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 51u, 0x0891F41Cu>(ctx, &aot_mem) && ctx.pc == 0x0880D804u) goto L_0880D804;
    return;
L_0880D804:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2064)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2068)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2072)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2080)));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2084)));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2088)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2064), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0880D840;
    }
    goto L_0880D840;
L_0880D840:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880D858;
      }
      goto L_0880D850;
    }
L_0880D850:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2068), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0880D858;
L_0880D858:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880D870;
      }
      goto L_0880D868;
    }
L_0880D868:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2072), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_0880D870;
L_0880D870:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880D888;
      }
      goto L_0880D880;
    }
L_0880D880:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2080), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0880D888;
L_0880D888:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880D8A0;
      }
      goto L_0880D898;
    }
L_0880D898:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2084), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0880D8A0;
L_0880D8A0:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880D8B8;
      }
      goto L_0880D8B0;
    }
L_0880D8B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2088), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[19] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_0880D8B8;
L_0880D8B8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2064)));
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2064), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
        goto L_0880D8CC;
    }
    goto L_0880D8CC;
L_0880D8CC:
    ctx.set_fpu_condition((aot_fpr[2] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2068), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
        goto L_0880D8DC;
    }
    goto L_0880D8DC;
L_0880D8DC:
    ctx.set_fpu_condition((aot_fpr[1] < aot_fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2072), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
        goto L_0880D8EC;
    }
    goto L_0880D8EC;
L_0880D8EC:
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2080), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
        goto L_0880D8FC;
    }
    goto L_0880D8FC;
L_0880D8FC:
    ctx.set_fpu_condition((aot_fpr[2] <= aot_fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2084), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
        goto L_0880D90C;
    }
    goto L_0880D90C;
L_0880D90C:
    ctx.set_fpu_condition((aot_fpr[1] <= aot_fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2088), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
        goto L_0880D91C;
    }
    goto L_0880D91C;
L_0880D91C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2096)));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D940;
      }
      goto L_0880D934;
    }
L_0880D934:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880D940u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_0880D544;
L_0880D940:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] & 255u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D6C4;
      }
      goto L_0880D954;
    }
L_0880D954:
    aot_gpr[2] = (aot_gpr[23] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D98C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 255u);
    aot_gpr[17] = (aot_gpr[6] & 255u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[18] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(272)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(400)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[31] = (0x0880D9ECu);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 51u, 0x088C9498u>(ctx, &aot_mem) && ctx.pc == 0x0880D9ECu) goto L_0880D9EC;
    return;
L_0880D9EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0880DA48;
      }
      goto L_0880D9FC;
    }
L_0880D9FC:
    aot_gpr[6] = (aot_gpr[5] & 255u);
    goto L_0880DA00;
L_0880DA00:
    aot_gpr[7] = (aot_gpr[18] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[8] = (aot_gpr[17] & 255u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[8] << 1u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1648)));
    aot_gpr[8] = (aot_gpr[4] << (aot_gpr[8] & 31u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1648), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_0880DA00;
      }
      goto L_0880DA48;
    }
L_0880DA48:
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
L_0880DA60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[6] << 5u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(272)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0880DB8C;
      }
      goto L_0880DAA8;
    }
L_0880DAA8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0880DB8C;
      }
      goto L_0880DABC;
    }
L_0880DABC:
    aot_gpr[21] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
    goto L_0880DAC4;
L_0880DAC4:
    aot_gpr[5] = (aot_gpr[17] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[7] = (aot_gpr[4] & 255u);
    aot_gpr[8] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[10] = (aot_gpr[7] << 5u);
    aot_gpr[6] = (aot_gpr[19] & 255u);
    aot_gpr[10] = (aot_gpr[16] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[9] = (aot_gpr[6] & 255u);
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[9] << 1u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(1648)));
    aot_gpr[9] = (aot_gpr[20] << (aot_gpr[9] & 31u));
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[9]);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0880DB5C;
      }
      goto L_0880DB14;
    }
L_0880DB14:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] << 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1648)));
    aot_gpr[6] = (aot_gpr[21] << (aot_gpr[6] & 31u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[7] & 255u);
      if (branch_taken) {
          goto L_0880DB60;
      }
      goto L_0880DB58;
    }
L_0880DB58:
    aot_gpr[7] = (aot_gpr[20] | 0u);
    goto L_0880DB5C;
L_0880DB5C:
    aot_gpr[4] = (aot_gpr[7] & 255u);
    goto L_0880DB60;
L_0880DB60:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DB78;
      }
      goto L_0880DB68;
    }
L_0880DB68:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880DB78u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_0880D98C;
L_0880DB78:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] & 255u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2100)));
        goto L_0880DAC4;
    }
    goto L_0880DB8C;
L_0880DB8C:
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
L_0880DBB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
      if (branch_taken) {
          goto L_0880DDB4;
      }
      goto L_0880DC00;
    }
L_0880DC00:
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    goto L_0880DC08;
L_0880DC08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0880DC44u);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880DC44u) goto L_0880DC44;
    return;
L_0880DC44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0880DC5Cu);
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880DC5Cu) goto L_0880DC5C;
    return;
L_0880DC5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[21] = (0u | 0u);
    goto L_0880DC6C;
L_0880DC6C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0880DC7Cu);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880DC7Cu) goto L_0880DC7C;
    return;
L_0880DC7C:
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DD8C;
      }
      goto L_0880DC88;
    }
L_0880DC88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(80));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
      if (branch_taken) {
          goto L_0880DD78;
      }
      goto L_0880DCD8;
    }
L_0880DCD8:
    aot_gpr[6] = (0u | 17u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0880DD2C;
      }
      goto L_0880DCE4;
    }
L_0880DCE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0880DD24;
      }
      goto L_0880DCF8;
    }
L_0880DCF8:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_0880DCFC;
L_0880DCFC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880DD0Cu);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0880DD0Cu) goto L_0880DD0C;
    return;
L_0880DD0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[19]);
      if (branch_taken) {
          goto L_0880DCFC;
      }
      goto L_0880DD24;
    }
L_0880DD24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DD78;
      }
      goto L_0880DD2C;
    }
L_0880DD2C:
    aot_gpr[6] = (0u | 11u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0880DD78;
      }
      goto L_0880DD38;
    }
L_0880DD38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0880DD78;
      }
      goto L_0880DD4C;
    }
L_0880DD4C:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_0880DD50;
L_0880DD50:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880DD60u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0880DD60u) goto L_0880DD60;
    return;
L_0880DD60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[19]);
      if (branch_taken) {
          goto L_0880DD50;
      }
      goto L_0880DD78;
    }
L_0880DD78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0880DC6C;
      }
      goto L_0880DD8C;
    }
L_0880DD8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[5]);
      if (branch_taken) {
          goto L_0880DC08;
      }
      goto L_0880DDB4;
    }
L_0880DDB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DDE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    goto L_0880DE0C;
L_0880DE0C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    goto L_0880DE14;
L_0880DE14:
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[7] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(2032)));
    aot_gpr[6] = (aot_gpr[6] & 8u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DE44;
      }
      goto L_0880DE3C;
    }
L_0880DE3C:
    aot_gpr[6] = (aot_gpr[17] << (aot_gpr[4] & 31u));
    aot_gpr[18] = (aot_gpr[18] | aot_gpr[6]);
    goto L_0880DE44;
L_0880DE44:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_0880DE14;
      }
      goto L_0880DE58;
    }
L_0880DE58:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880DE0C;
      }
      goto L_0880DE6C;
    }
L_0880DE6C:
    aot_gpr[19] = (0u | 0u);
    goto L_0880DE70;
L_0880DE70:
    aot_gpr[4] = (aot_gpr[17] << (aot_gpr[19] & 31u));
    aot_gpr[4] = (aot_gpr[18] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DE98;
      }
      goto L_0880DE80;
    }
L_0880DE80:
    aot_gpr[4] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(912)));
    aot_gpr[31] = (0x0880DE98u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880DBB0;
L_0880DE98:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] & 255u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880DE70;
      }
      goto L_0880DEAC;
    }
L_0880DEAC:
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
L_0880DEC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2177u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7476)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-16448));
    aot_gpr[31] = (0x0880DEFCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2456));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 23u, 0x08810188u>(ctx, &aot_mem) && ctx.pc == 0x0880DEFCu) goto L_0880DEFC;
    return;
L_0880DEFC:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[11] = (aot_gpr[16] | 0u);
    goto L_0880DF0C;
L_0880DF0C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[2] = (aot_gpr[11] | 0u);
    goto L_0880DF1C;
L_0880DF1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(272), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(912), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(1136), 0u);
    aot_gpr[10] = (aot_gpr[9] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(2032), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(1520), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(1648), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(1776), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(1904), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(1264), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[10] = (0u | 0u);
    goto L_0880DF48;
L_0880DF48:
    aot_gpr[3] = (aot_gpr[2] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(aot_gpr[10]));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[10]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880DF48;
      }
      goto L_0880DF64;
    }
L_0880DF64:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880DF1C;
      }
      goto L_0880DF7C;
    }
L_0880DF7C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0880DF0C;
      }
      goto L_0880DF94;
    }
L_0880DF94:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    goto L_0880DF9C;
L_0880DF9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0880DF9C;
      }
      goto L_0880DFB8;
    }
L_0880DFB8:
    aot_gpr[4] = (0u | 0u);
    goto L_0880DFBC;
L_0880DFBC:
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(944), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1008), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1072), 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880DFBC;
      }
      goto L_0880DFE4;
    }
L_0880DFE4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2103), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2100), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2101), static_cast<std::uint8_t>(0u));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x0880E000u; return;
}

void recomp_unit_0009(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0009_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_9(Runtime &runtime) {
    runtime.register_generated_unit(9u, 0x0880D000u, 4096u, &recomp_unit_0009, &recomp_unit_0009_entry);
    runtime.register_function(0x0880D000u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D008u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D014u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D01Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D02Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D03Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D048u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D054u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D05Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D06Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D080u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D088u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D090u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D09Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D0ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D0B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D0C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D0CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D0DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D0F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D0F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D100u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D10Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D140u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D154u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D168u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D17Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D190u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D198u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D1A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D1A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D1B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D1B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D1C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D1DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D204u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D210u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D21Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D228u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D234u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D240u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D250u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D264u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D278u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D28Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D298u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D2B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D2BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D2C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D2C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D2E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D314u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D328u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D334u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D348u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D34Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D360u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D37Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D3A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D3B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D3C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D404u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D43Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D454u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D45Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D484u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D498u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D4A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D4E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D524u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D53Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D544u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D590u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D5A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D5ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D5F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D62Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D634u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D64Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D674u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D6B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D6C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D6E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D6ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D708u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D724u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D74Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D754u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D764u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D76Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D7A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D7A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D7B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D7C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D7CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D7D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D7DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D7E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D7F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D804u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D840u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D850u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D858u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D868u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D870u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D880u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D888u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D898u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D8A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D8B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D8B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D8CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D8DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D8ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D8FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D90Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D91Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D934u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D940u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D954u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D98Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D9ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880D9FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DA00u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DA48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DA60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DAA8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DABCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DAC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DB14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DB58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DB5Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DB60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DB68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DB78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DB8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DBB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DC00u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DC08u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DC44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DC5Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DC6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DC7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DC88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DCD8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DCE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DCF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DCFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DD0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DD24u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DD2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DD38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DD4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DD50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DD60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DD78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DD8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DDB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DDE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DE0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DE14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DE3Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DE44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DE58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DE6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DE70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DE80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DE98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DEACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DEC8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DEFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DF0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DF1Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DF48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DF64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DF7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DF94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DF9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DFB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DFBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0880DFE4u, &recomp_unit_0009, "recomp_unit_0009");
}
} // namespace psprecomp
