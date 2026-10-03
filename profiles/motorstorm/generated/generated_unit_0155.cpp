#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0155[1023] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 16, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0,
    0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0,
    0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58,
    0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 67, 0, 0, 68, 0, 0, 0, 0,
    69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 182,
    183, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 188, 189, 0, 0, 0, 190, 0, 0,
    191, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 199, 0, 200, 0, 0, 201,
};
void recomp_unit_0155_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0889F000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0155[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889F000;
    case 2u: goto L_0889F008;
    case 3u: goto L_0889F024;
    case 4u: goto L_0889F02C;
    case 5u: goto L_0889F034;
    case 6u: goto L_0889F048;
    case 7u: goto L_0889F068;
    case 8u: goto L_0889F080;
    case 9u: goto L_0889F098;
    case 10u: goto L_0889F0A0;
    case 11u: goto L_0889F0A8;
    case 12u: goto L_0889F0BC;
    case 13u: goto L_0889F0CC;
    case 14u: goto L_0889F0D8;
    case 15u: goto L_0889F0E0;
    case 16u: goto L_0889F0E8;
    case 17u: goto L_0889F0F4;
    case 18u: goto L_0889F124;
    case 19u: goto L_0889F12C;
    case 20u: goto L_0889F13C;
    case 21u: goto L_0889F150;
    case 22u: goto L_0889F158;
    case 23u: goto L_0889F168;
    case 24u: goto L_0889F170;
    case 25u: goto L_0889F184;
    case 26u: goto L_0889F18C;
    case 27u: goto L_0889F19C;
    case 28u: goto L_0889F22C;
    case 29u: goto L_0889F234;
    case 30u: goto L_0889F23C;
    case 31u: goto L_0889F25C;
    case 32u: goto L_0889F26C;
    case 33u: goto L_0889F294;
    case 34u: goto L_0889F2A0;
    case 35u: goto L_0889F2BC;
    case 36u: goto L_0889F2D8;
    case 37u: goto L_0889F2E8;
    case 38u: goto L_0889F2F0;
    case 39u: goto L_0889F304;
    case 40u: goto L_0889F31C;
    case 41u: goto L_0889F324;
    case 42u: goto L_0889F32C;
    case 43u: goto L_0889F338;
    case 44u: goto L_0889F34C;
    case 45u: goto L_0889F388;
    case 46u: goto L_0889F394;
    case 47u: goto L_0889F3BC;
    case 48u: goto L_0889F3C8;
    case 49u: goto L_0889F3E8;
    case 50u: goto L_0889F3F4;
    case 51u: goto L_0889F408;
    case 52u: goto L_0889F414;
    case 53u: goto L_0889F430;
    case 54u: goto L_0889F438;
    case 55u: goto L_0889F454;
    case 56u: goto L_0889F460;
    case 57u: goto L_0889F468;
    case 58u: goto L_0889F47C;
    case 59u: goto L_0889F48C;
    case 60u: goto L_0889F49C;
    case 61u: goto L_0889F4A4;
    case 62u: goto L_0889F4BC;
    case 63u: goto L_0889F4C4;
    case 64u: goto L_0889F4CC;
    case 65u: goto L_0889F4D4;
    case 66u: goto L_0889F4DC;
    case 67u: goto L_0889F4E0;
    case 68u: goto L_0889F4EC;
    case 69u: goto L_0889F500;
    case 70u: goto L_0889F50C;
    case 71u: goto L_0889F520;
    case 72u: goto L_0889F53C;
    case 73u: goto L_0889F558;
    case 74u: goto L_0889F568;
    case 75u: goto L_0889F58C;
    case 76u: goto L_0889F598;
    case 77u: goto L_0889F5C4;
    case 78u: goto L_0889F5CC;
    case 79u: goto L_0889F5F8;
    case 80u: goto L_0889F610;
    case 81u: goto L_0889F620;
    case 82u: goto L_0889F640;
    case 83u: goto L_0889F648;
    case 84u: goto L_0889F654;
    case 85u: goto L_0889F674;
    case 86u: goto L_0889F68C;
    case 87u: goto L_0889F6A4;
    case 88u: goto L_0889F6BC;
    case 89u: goto L_0889F6D4;
    case 90u: goto L_0889F6E4;
    case 91u: goto L_0889F6EC;
    case 92u: goto L_0889F704;
    case 93u: goto L_0889F71C;
    case 94u: goto L_0889F73C;
    case 95u: goto L_0889F744;
    case 96u: goto L_0889F74C;
    case 97u: goto L_0889F754;
    case 98u: goto L_0889F75C;
    case 99u: goto L_0889F774;
    case 100u: goto L_0889F78C;
    case 101u: goto L_0889F7AC;
    case 102u: goto L_0889F7CC;
    case 103u: goto L_0889F7D4;
    case 104u: goto L_0889F7EC;
    case 105u: goto L_0889F804;
    case 106u: goto L_0889F824;
    case 107u: goto L_0889F844;
    case 108u: goto L_0889F84C;
    case 109u: goto L_0889F854;
    case 110u: goto L_0889F888;
    case 111u: goto L_0889F898;
    case 112u: goto L_0889F8C0;
    case 113u: goto L_0889F8E4;
    case 114u: goto L_0889F8EC;
    case 115u: goto L_0889F918;
    case 116u: goto L_0889F930;
    case 117u: goto L_0889F948;
    case 118u: goto L_0889F960;
    case 119u: goto L_0889F978;
    case 120u: goto L_0889F990;
    case 121u: goto L_0889F9A8;
    case 122u: goto L_0889F9C0;
    case 123u: goto L_0889F9D8;
    case 124u: goto L_0889F9F0;
    case 125u: goto L_0889FA00;
    case 126u: goto L_0889FA0C;
    case 127u: goto L_0889FA14;
    case 128u: goto L_0889FA1C;
    case 129u: goto L_0889FA24;
    case 130u: goto L_0889FA48;
    case 131u: goto L_0889FA50;
    case 132u: goto L_0889FA78;
    case 133u: goto L_0889FA98;
    case 134u: goto L_0889FAC4;
    case 135u: goto L_0889FAD0;
    case 136u: goto L_0889FAD8;
    case 137u: goto L_0889FAE0;
    case 138u: goto L_0889FB14;
    case 139u: goto L_0889FB24;
    case 140u: goto L_0889FB2C;
    case 141u: goto L_0889FB50;
    case 142u: goto L_0889FB58;
    case 143u: goto L_0889FB60;
    case 144u: goto L_0889FB68;
    case 145u: goto L_0889FB9C;
    case 146u: goto L_0889FBAC;
    case 147u: goto L_0889FBB0;
    case 148u: goto L_0889FBD0;
    case 149u: goto L_0889FBF4;
    case 150u: goto L_0889FC00;
    case 151u: goto L_0889FC10;
    case 152u: goto L_0889FC38;
    case 153u: goto L_0889FC58;
    case 154u: goto L_0889FC70;
    case 155u: goto L_0889FC88;
    case 156u: goto L_0889FCA0;
    case 157u: goto L_0889FCB8;
    case 158u: goto L_0889FCD0;
    case 159u: goto L_0889FCD8;
    case 160u: goto L_0889FCE0;
    case 161u: goto L_0889FD14;
    case 162u: goto L_0889FD24;
    case 163u: goto L_0889FD48;
    case 164u: goto L_0889FD70;
    case 165u: goto L_0889FD80;
    case 166u: goto L_0889FD98;
    case 167u: goto L_0889FDA4;
    case 168u: goto L_0889FDB4;
    case 169u: goto L_0889FDC0;
    case 170u: goto L_0889FDE4;
    case 171u: goto L_0889FDF8;
    case 172u: goto L_0889FE1C;
    case 173u: goto L_0889FE30;
    case 174u: goto L_0889FE44;
    case 175u: goto L_0889FE64;
    case 176u: goto L_0889FE8C;
    case 177u: goto L_0889FEA4;
    case 178u: goto L_0889FEB8;
    case 179u: goto L_0889FEDC;
    case 180u: goto L_0889FEE8;
    case 181u: goto L_0889FEF4;
    case 182u: goto L_0889FEFC;
    case 183u: goto L_0889FF00;
    case 184u: goto L_0889FF04;
    case 185u: goto L_0889FF20;
    case 186u: goto L_0889FF3C;
    case 187u: goto L_0889FF44;
    case 188u: goto L_0889FF60;
    case 189u: goto L_0889FF64;
    case 190u: goto L_0889FF74;
    case 191u: goto L_0889FF80;
    case 192u: goto L_0889FF88;
    case 193u: goto L_0889FF9C;
    case 194u: goto L_0889FFA8;
    case 195u: goto L_0889FFB0;
    case 196u: goto L_0889FFCC;
    case 197u: goto L_0889FFD4;
    case 198u: goto L_0889FFE0;
    case 199u: goto L_0889FFE4;
    case 200u: goto L_0889FFEC;
    case 201u: goto L_0889FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0889F000:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F02C;
      }
      goto L_0889F008;
    }
L_0889F008:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0889F024u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F024u) goto L_0889F024;
    return;
L_0889F024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F034;
      }
      goto L_0889F02C;
    }
L_0889F02C:
    aot_gpr[31] = (0x0889F034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0889F034u) goto L_0889F034;
    return;
L_0889F034:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F048:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0889F098;
      }
      goto L_0889F068;
    }
L_0889F068:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0889F080u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0889F080u) goto L_0889F080;
    return;
L_0889F080:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889F0A0;
      }
      goto L_0889F098;
    }
L_0889F098:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0889F0A0;
L_0889F0A0:
    aot_gpr[31] = (0x0889F0A8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0889F0A8u) goto L_0889F0A8;
    return;
L_0889F0A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F0BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889F0CCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1208));
    goto L_0889F048;
L_0889F0CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F0D8:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F0E0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F0E8:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F0F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0889F124u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F124u) goto L_0889F124;
    return;
L_0889F124:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F13C;
      }
      goto L_0889F12C;
    }
L_0889F12C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889F13Cu);
    aot_gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0889F13Cu) goto L_0889F13C;
    return;
L_0889F13C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F150:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889F168;
      }
      goto L_0889F158;
    }
L_0889F158:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F170;
      }
      goto L_0889F168;
    }
L_0889F168:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F184;
      }
      goto L_0889F170;
    }
L_0889F170:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    goto L_0889F184;
L_0889F184:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F18C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0889F22C;
      }
      goto L_0889F19C;
    }
L_0889F19C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[7] << 6u);
    aot_gpr[9] = (aot_gpr[7] << 3u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[9]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    goto L_0889F22C;
L_0889F22C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F234:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F23C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26656), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F25C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0889F26Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AFCCu;
    return;
L_0889F26C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] >> 9u);
    aot_gpr[5] = (aot_gpr[5] << 23u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0889F2A0;
      }
      goto L_0889F294;
    }
L_0889F294:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0889F2A0;
L_0889F2A0:
    aot_gpr[4] = (14854u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 14269u);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F2BC:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F2D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0889F32C;
      }
      goto L_0889F2E8;
    }
L_0889F2E8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F32C;
      }
      goto L_0889F2F0;
    }
L_0889F2F0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F324;
      }
      goto L_0889F304;
    }
L_0889F304:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0889F31Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F31Cu) goto L_0889F31C;
    return;
L_0889F31C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F32C;
      }
      goto L_0889F324;
    }
L_0889F324:
    aot_gpr[31] = (0x0889F32Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0889F32Cu) goto L_0889F32C;
    return;
L_0889F32C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F338:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F34C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6196));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16752u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889F388u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0889F338;
L_0889F388:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F394:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    if (aot_gpr[8] != 0u) {
    aot_gpr[7] = (0u | 2u);
        goto L_0889F3BC;
    }
    goto L_0889F3BC;
L_0889F3BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889F3E8;
      }
      goto L_0889F3C8;
    }
L_0889F3C8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[9]);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x0889F3E8u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F3E8u) goto L_0889F3E8;
    return;
L_0889F3E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F3F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889F408u);
    aot_gpr[5] = (0u | 0u);
    goto L_0889F394;
L_0889F408:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889F468;
      }
      goto L_0889F430;
    }
L_0889F430:
    aot_gpr[31] = (0x0889F438u);
    // nop
    goto L_0889F25C;
L_0889F438:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = aot_fpr[0] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F460;
      }
      goto L_0889F454;
    }
L_0889F454:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889F460u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    goto L_0889F3F4;
L_0889F460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F468;
      }
      goto L_0889F468;
    }
L_0889F468:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F47C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] ^ 2u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F48C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] ^ 3u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F49C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F4A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0889F4CC;
      }
      goto L_0889F4BC;
    }
L_0889F4BC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F4D4;
      }
      goto L_0889F4C4;
    }
L_0889F4C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F4E0;
      }
      goto L_0889F4CC;
    }
L_0889F4CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F4E0;
      }
      goto L_0889F4D4;
    }
L_0889F4D4:
    aot_gpr[31] = (0x0889F4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F4DCu) goto L_0889F4DC;
    return;
L_0889F4DC:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0889F4E0;
L_0889F4E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F4EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889F500u);
    aot_gpr[5] = (0u | 1u);
    goto L_0889F394;
L_0889F500:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F50C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889F520u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0889F25C;
L_0889F520:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F558;
      }
      goto L_0889F53C;
    }
L_0889F53C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0889F558u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F558u) goto L_0889F558;
    return;
L_0889F558:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F568:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0889F58Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F58Cu) goto L_0889F58C;
    return;
L_0889F58C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F598:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1120));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1092), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1096), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1100), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1104), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1108), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1112), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1116), aot_gpr[31]);
    aot_gpr[31] = (0x0889F5C4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 142u, 0x089EEBC0u>(ctx, &aot_mem) && ctx.pc == 0x0889F5C4u) goto L_0889F5C4;
    return;
L_0889F5C4:
    aot_gpr[31] = (0x0889F5CCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0889F50C;
L_0889F5CC:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(1028));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(16648));
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(16672));
    aot_gpr[31] = (0x0889F5F8u);
    aot_gpr[17] = (aot_gpr[7] + static_cast<std::uint32_t>(16708));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F5F8u) goto L_0889F5F8;
    return;
L_0889F5F8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 361u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889F610u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F610u) goto L_0889F610;
    return;
L_0889F610:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0889F648;
      }
      goto L_0889F620;
    }
L_0889F620:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 366u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16724));
    aot_gpr[31] = (0x0889F640u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16732));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F640u) goto L_0889F640;
    return;
L_0889F640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F674;
      }
      goto L_0889F648;
    }
L_0889F648:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F674;
      }
      goto L_0889F654;
    }
L_0889F654:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 370u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16740));
    aot_gpr[31] = (0x0889F674u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16732));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F674u) goto L_0889F674;
    return;
L_0889F674:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889F68Cu);
    aot_gpr[21] = (aot_gpr[7] + static_cast<std::uint32_t>(16752));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F68Cu) goto L_0889F68C;
    return;
L_0889F68C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 379u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0889F6A4u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F6A4u) goto L_0889F6A4;
    return;
L_0889F6A4:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889F6BCu);
    aot_gpr[21] = (aot_gpr[7] + static_cast<std::uint32_t>(16768));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F6BCu) goto L_0889F6BC;
    return;
L_0889F6BC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 380u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0889F6D4u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F6D4u) goto L_0889F6D4;
    return;
L_0889F6D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(29)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889F744;
      }
      goto L_0889F6E4;
    }
L_0889F6E4:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0889F844;
      }
      goto L_0889F6EC;
    }
L_0889F6EC:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 9u);
    aot_gpr[31] = (0x0889F704u);
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(16788));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F704u) goto L_0889F704;
    return;
L_0889F704:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 387u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889F71Cu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F71Cu) goto L_0889F71C;
    return;
L_0889F71C:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 388u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16808));
    aot_gpr[31] = (0x0889F73Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16820));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F73Cu) goto L_0889F73C;
    return;
L_0889F73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F844;
      }
      goto L_0889F744;
    }
L_0889F744:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889F75C;
      }
      goto L_0889F74C;
    }
L_0889F74C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F7D4;
      }
      goto L_0889F754;
    }
L_0889F754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F844;
      }
      goto L_0889F75C;
    }
L_0889F75C:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[31] = (0x0889F774u);
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(16788));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F774u) goto L_0889F774;
    return;
L_0889F774:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 394u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889F78Cu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F78Cu) goto L_0889F78C;
    return;
L_0889F78C:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 395u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16808));
    aot_gpr[31] = (0x0889F7ACu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16832));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F7ACu) goto L_0889F7AC;
    return;
L_0889F7AC:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 396u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16840));
    aot_gpr[31] = (0x0889F7CCu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16852));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F7CCu) goto L_0889F7CC;
    return;
L_0889F7CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F844;
      }
      goto L_0889F7D4;
    }
L_0889F7D4:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 3u);
    aot_gpr[31] = (0x0889F7ECu);
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(16788));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F7ECu) goto L_0889F7EC;
    return;
L_0889F7EC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 402u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889F804u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F804u) goto L_0889F804;
    return;
L_0889F804:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 403u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16808));
    aot_gpr[31] = (0x0889F824u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16832));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F824u) goto L_0889F824;
    return;
L_0889F824:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 404u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16840));
    aot_gpr[31] = (0x0889F844u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16852));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F844u) goto L_0889F844;
    return;
L_0889F844:
    aot_gpr[31] = (0x0889F84Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0889F84Cu) goto L_0889F84C;
    return;
L_0889F84C:
    aot_gpr[31] = (0x0889F854u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F854u) goto L_0889F854;
    return;
L_0889F854:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 7u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16660));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0889F888u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F888u) goto L_0889F888;
    return;
L_0889F888:
    aot_gpr[16] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0889F898u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x0889F898u) goto L_0889F898;
    return;
L_0889F898:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1100)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1108)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F8C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1136));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1104), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1108), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1112), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1116), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1120), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1124), aot_gpr[31]);
    aot_gpr[31] = (0x0889F8E4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0889F50C;
L_0889F8E4:
    aot_gpr[31] = (0x0889F8ECu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 142u, 0x089EEBC0u>(ctx, &aot_mem) && ctx.pc == 0x0889F8ECu) goto L_0889F8EC;
    return;
L_0889F8EC:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[7] + static_cast<std::uint32_t>(16672));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(1028));
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(16648));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889F918u);
    aot_gpr[20] = (aot_gpr[7] + static_cast<std::uint32_t>(16752));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F918u) goto L_0889F918;
    return;
L_0889F918:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 428u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0889F930u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F930u) goto L_0889F930;
    return;
L_0889F930:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889F948u);
    aot_gpr[20] = (aot_gpr[7] + static_cast<std::uint32_t>(16768));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F948u) goto L_0889F948;
    return;
L_0889F948:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 429u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0889F960u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F960u) goto L_0889F960;
    return;
L_0889F960:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889F978u);
    aot_gpr[20] = (aot_gpr[7] + static_cast<std::uint32_t>(16864));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F978u) goto L_0889F978;
    return;
L_0889F978:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 430u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0889F990u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F990u) goto L_0889F990;
    return;
L_0889F990:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889F9A8u);
    aot_gpr[20] = (aot_gpr[7] + static_cast<std::uint32_t>(16820));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F9A8u) goto L_0889F9A8;
    return;
L_0889F9A8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 432u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0889F9C0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F9C0u) goto L_0889F9C0;
    return;
L_0889F9C0:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889F9D8u);
    aot_gpr[18] = (aot_gpr[7] + static_cast<std::uint32_t>(16832));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F9D8u) goto L_0889F9D8;
    return;
L_0889F9D8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 433u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889F9F0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889F9F0u) goto L_0889F9F0;
    return;
L_0889F9F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889FA14;
      }
      goto L_0889FA00;
    }
L_0889FA00:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FA50;
      }
      goto L_0889FA0C;
    }
L_0889FA0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB58;
      }
      goto L_0889FA14;
    }
L_0889FA14:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889FB2C;
      }
      goto L_0889FA1C;
    }
L_0889FA1C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB58;
      }
      goto L_0889FA24;
    }
L_0889FA24:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 475u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16672));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16788));
    aot_gpr[31] = (0x0889FA48u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16944));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889FA48u) goto L_0889FA48;
    return;
L_0889FA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB58;
      }
      goto L_0889FA50;
    }
L_0889FA50:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(16672));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 439u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16788));
    aot_gpr[31] = (0x0889FA78u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16876));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889FA78u) goto L_0889FA78;
    return;
L_0889FA78:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 440u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16880));
    aot_gpr[31] = (0x0889FA98u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16852));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889FA98u) goto L_0889FA98;
    return;
L_0889FA98:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16896));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1092), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1096), aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1100), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FAD0;
      }
      goto L_0889FAC4;
    }
L_0889FAC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5496)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(5496), aot_gpr[4]);
    goto L_0889FAD0;
L_0889FAD0:
    aot_gpr[31] = (0x0889FAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0889FAD8u) goto L_0889FAD8;
    return;
L_0889FAD8:
    aot_gpr[31] = (0x0889FAE0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FAE0u) goto L_0889FAE0;
    return;
L_0889FAE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(1092));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (0u | 7u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16924));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0889FB14u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889FB14u) goto L_0889FB14;
    return;
L_0889FB14:
    aot_gpr[16] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0889FB24u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x0889FB24u) goto L_0889FB24;
    return;
L_0889FB24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0889FBB0;
      }
      goto L_0889FB2C;
    }
L_0889FB2C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 472u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16672));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16788));
    aot_gpr[31] = (0x0889FB50u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16940));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889FB50u) goto L_0889FB50;
    return;
L_0889FB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB58;
      }
      goto L_0889FB58;
    }
L_0889FB58:
    aot_gpr[31] = (0x0889FB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0889FB60u) goto L_0889FB60;
    return;
L_0889FB60:
    aot_gpr[31] = (0x0889FB68u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FB68u) goto L_0889FB68;
    return;
L_0889FB68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 7u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16924));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0889FB9Cu);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889FB9Cu) goto L_0889FB9C;
    return;
L_0889FB9C:
    aot_gpr[16] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0889FBACu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x0889FBACu) goto L_0889FBAC;
    return;
L_0889FBAC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_0889FBB0;
L_0889FBB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1120)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1124)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1136));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FBD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1152));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1124), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1128), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1132), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1136), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1140), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1144), aot_gpr[31]);
    aot_gpr[31] = (0x0889FBF4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0889F50C;
L_0889FBF4:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x0889FC00u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 142u, 0x089EEBC0u>(ctx, &aot_mem) && ctx.pc == 0x0889FC00u) goto L_0889FC00;
    return;
L_0889FC00:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1092));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0889FC10u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FC10u) goto L_0889FC10;
    return;
L_0889FC10:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(16672));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 499u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16788));
    aot_gpr[31] = (0x0889FC38u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16876));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889FC38u) goto L_0889FC38;
    return;
L_0889FC38:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(16648));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0889FC58u);
    aot_gpr[20] = (aot_gpr[7] + static_cast<std::uint32_t>(16752));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889FC58u) goto L_0889FC58;
    return;
L_0889FC58:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 500u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0889FC70u);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889FC70u) goto L_0889FC70;
    return;
L_0889FC70:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0889FC88u);
    aot_gpr[20] = (aot_gpr[7] + static_cast<std::uint32_t>(16768));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889FC88u) goto L_0889FC88;
    return;
L_0889FC88:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 501u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0889FCA0u);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889FCA0u) goto L_0889FCA0;
    return;
L_0889FCA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0889FCB8u);
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(16956));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889FCB8u) goto L_0889FCB8;
    return;
L_0889FCB8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 502u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889FCD0u);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x0889FCD0u) goto L_0889FCD0;
    return;
L_0889FCD0:
    aot_gpr[31] = (0x0889FCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0889FCD8u) goto L_0889FCD8;
    return;
L_0889FCD8:
    aot_gpr[31] = (0x0889FCE0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FCE0u) goto L_0889FCE0;
    return;
L_0889FCE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (0u | 7u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16948));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0889FD14u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889FD14u) goto L_0889FD14;
    return;
L_0889FD14:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[31] = (0x0889FD24u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x0889FD24u) goto L_0889FD24;
    return;
L_0889FD24:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1124)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1128)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1132)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1136)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1140)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1152));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FD48:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FD70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889FD80u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    goto L_0889FD48;
L_0889FD80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0889FD98u);
    aot_gpr[4] = (aot_gpr[9] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889FD98u) goto L_0889FD98;
    return;
L_0889FD98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FDA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889FDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x0889FDB4u) goto L_0889FDB4;
    return;
L_0889FDB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FDC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6036));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889FDE4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 229u, 0x0889EEE4u>(ctx, &aot_mem) && ctx.pc == 0x0889FDE4u) goto L_0889FDE4;
    return;
L_0889FDE4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1224));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889FDF8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16652));
    goto L_0889F34C;
L_0889FDF8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6164));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1248), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1252), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1256));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889FE1Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16660));
    goto L_0889F34C;
L_0889FE1C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6132));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1280), aot_gpr[4]);
    aot_gpr[31] = (0x0889FE30u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1284));
    goto L_0889F2BC;
L_0889FE30:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1292));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889FE44u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16948));
    goto L_0889F34C;
L_0889FE44:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6068));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1316), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1336));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889FE64u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16856));
    goto L_0889F34C;
L_0889FE64:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6100));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1360), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24776));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1396), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1364));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0889FE8Cu);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FE8Cu) goto L_0889FE8C;
    return;
L_0889FE8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1400), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1404), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1408));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0889FEA4u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FEA4u) goto L_0889FEA4;
    return;
L_0889FEA4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FEB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(26676)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF04;
      }
      goto L_0889FEDC;
    }
L_0889FEDC:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x0889FEE8u);
    aot_gpr[4] = (0u | 1472u);
    goto L_0889FDA4;
L_0889FEE8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF00;
      }
      goto L_0889FEF4;
    }
L_0889FEF4:
    aot_gpr[31] = (0x0889FEFCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0889FDC0;
L_0889FEFC:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0889FF00;
L_0889FF00:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(26676), aot_gpr[17]);
    goto L_0889FF04;
L_0889FF04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(26676)));
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
L_0889FF20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26676)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF64;
      }
      goto L_0889FF3C;
    }
L_0889FF3C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF60;
      }
      goto L_0889FF44;
    }
L_0889FF44:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0889FF60u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889FF60u) goto L_0889FF60;
    return;
L_0889FF60:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(26676), 0u);
    goto L_0889FF64;
L_0889FF64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FF74:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1400), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1404), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FF80:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1400), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FF88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1400)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_0889FFB0;
      }
      goto L_0889FF9C;
    }
L_0889FF9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1404)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFD4;
      }
      goto L_0889FFA8;
    }
L_0889FFA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FFEC;
      }
      goto L_0889FFB0;
    }
L_0889FFB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1400)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0889FFCCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889FFCCu) goto L_0889FFCC;
    return;
L_0889FFCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFEC;
      }
      goto L_0889FFD4;
    }
L_0889FFD4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1404)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0889FFE4;
      }
      goto L_0889FFE0;
    }
L_0889FFE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1404), 0u);
    goto L_0889FFE4;
L_0889FFE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFEC;
      }
      goto L_0889FFEC;
    }
L_0889FFEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FFF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    ctx.pc = 0x088A0000u; return;
}

void recomp_unit_0155(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0155_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_155(Runtime &runtime) {
    runtime.register_generated_unit(155u, 0x0889F000u, 4096u, &recomp_unit_0155, &recomp_unit_0155_entry);
    runtime.register_function(0x0889F000u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F008u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F024u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F02Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F034u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F048u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F068u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F080u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F098u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F0A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F0A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F0BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F0CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F0D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F0E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F0E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F0F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F124u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F12Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F13Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F150u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F158u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F168u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F170u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F184u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F18Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F19Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F22Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F234u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F23Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F25Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F26Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F294u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F2A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F2BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F2D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F2E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F2F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F304u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F31Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F324u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F32Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F338u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F34Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F388u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F394u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F3BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F3C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F3E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F3F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F408u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F414u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F430u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F438u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F454u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F460u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F468u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F47Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F48Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F49Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F4A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F4BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F4C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F4CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F4D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F4DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F4E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F4ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F500u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F50Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F520u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F53Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F558u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F568u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F58Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F598u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F5C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F5CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F5F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F610u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F620u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F640u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F648u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F654u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F674u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F68Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F6A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F6BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F6D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F6E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F6ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F704u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F71Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F73Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F744u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F74Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F754u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F75Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F774u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F78Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F7ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F7CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F7D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F7ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F804u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F824u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F844u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F84Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F854u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F888u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F898u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F8C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F8E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F8ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F918u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F930u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F948u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F960u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F978u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F990u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F9A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F9C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F9D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889F9F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FA00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FA0Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FA14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FA1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FA24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FA48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FA50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FA78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FA98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FAC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FAD0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FAD8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FAE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FB14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FB24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FB2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FB50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FB58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FB60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FB68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FB9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FBACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FBB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FBD0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FBF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FC00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FC10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FC38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FC58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FC70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FC88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FCA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FCB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FCD0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FCD8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FCE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FD14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FD24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FD48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FD70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FD80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FD98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FDA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FDB4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FDC0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FDE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FDF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FE1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FE30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FE44u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FE64u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FE8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FEA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FEB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FEDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FEE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FEF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FEFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FF00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FF04u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FF20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FF3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FF44u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FF60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FF64u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FF74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FF80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FF88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FF9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FFA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FFB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FFCCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FFD4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FFE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FFE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FFECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x0889FFF8u, &recomp_unit_0155, "recomp_unit_0155");
}
} // namespace psprecomp
