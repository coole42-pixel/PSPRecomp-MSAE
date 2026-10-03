#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0462[1012] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 10, 0,
    11, 0, 12, 0, 0, 13, 0, 14, 15, 16, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0,
    0, 24, 0, 0, 25, 26, 0, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 33, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38,
    0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0,
    0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0,
    0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0,
    0, 72, 73, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 103, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 112, 113, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118,
    0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0,
    0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    159, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0,
    0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 0, 189, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0,
    194, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 200, 0, 201, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0,
    211, 0, 212, 0, 0, 0, 213, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227,
};
void recomp_unit_0462_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089D2000u;
        entry_id = (entry_delta < 4048u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0462[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D2000;
    case 2u: goto L_089D2014;
    case 3u: goto L_089D2024;
    case 4u: goto L_089D202C;
    case 5u: goto L_089D203C;
    case 6u: goto L_089D2044;
    case 7u: goto L_089D2058;
    case 8u: goto L_089D2064;
    case 9u: goto L_089D206C;
    case 10u: goto L_089D2078;
    case 11u: goto L_089D2080;
    case 12u: goto L_089D2088;
    case 13u: goto L_089D2094;
    case 14u: goto L_089D209C;
    case 15u: goto L_089D20A0;
    case 16u: goto L_089D20A4;
    case 17u: goto L_089D20AC;
    case 18u: goto L_089D20B8;
    case 19u: goto L_089D20C4;
    case 20u: goto L_089D20D4;
    case 21u: goto L_089D20DC;
    case 22u: goto L_089D20F0;
    case 23u: goto L_089D20F8;
    case 24u: goto L_089D2104;
    case 25u: goto L_089D2110;
    case 26u: goto L_089D2114;
    case 27u: goto L_089D2124;
    case 28u: goto L_089D212C;
    case 29u: goto L_089D2138;
    case 30u: goto L_089D2144;
    case 31u: goto L_089D2150;
    case 32u: goto L_089D2180;
    case 33u: goto L_089D2194;
    case 34u: goto L_089D2198;
    case 35u: goto L_089D21C8;
    case 36u: goto L_089D21E8;
    case 37u: goto L_089D21F4;
    case 38u: goto L_089D21FC;
    case 39u: goto L_089D220C;
    case 40u: goto L_089D2218;
    case 41u: goto L_089D223C;
    case 42u: goto L_089D2244;
    case 43u: goto L_089D2254;
    case 44u: goto L_089D2260;
    case 45u: goto L_089D2268;
    case 46u: goto L_089D2274;
    case 47u: goto L_089D2284;
    case 48u: goto L_089D2290;
    case 49u: goto L_089D22B4;
    case 50u: goto L_089D22C8;
    case 51u: goto L_089D22D0;
    case 52u: goto L_089D22E0;
    case 53u: goto L_089D2300;
    case 54u: goto L_089D2320;
    case 55u: goto L_089D2358;
    case 56u: goto L_089D2364;
    case 57u: goto L_089D236C;
    case 58u: goto L_089D2384;
    case 59u: goto L_089D238C;
    case 60u: goto L_089D239C;
    case 61u: goto L_089D23C0;
    case 62u: goto L_089D23E4;
    case 63u: goto L_089D2414;
    case 64u: goto L_089D241C;
    case 65u: goto L_089D2424;
    case 66u: goto L_089D2434;
    case 67u: goto L_089D243C;
    case 68u: goto L_089D2448;
    case 69u: goto L_089D2450;
    case 70u: goto L_089D246C;
    case 71u: goto L_089D2474;
    case 72u: goto L_089D2484;
    case 73u: goto L_089D2488;
    case 74u: goto L_089D248C;
    case 75u: goto L_089D2498;
    case 76u: goto L_089D24A4;
    case 77u: goto L_089D24B0;
    case 78u: goto L_089D24BC;
    case 79u: goto L_089D24C4;
    case 80u: goto L_089D24DC;
    case 81u: goto L_089D2500;
    case 82u: goto L_089D2510;
    case 83u: goto L_089D251C;
    case 84u: goto L_089D2528;
    case 85u: goto L_089D2534;
    case 86u: goto L_089D2540;
    case 87u: goto L_089D2548;
    case 88u: goto L_089D2564;
    case 89u: goto L_089D256C;
    case 90u: goto L_089D2574;
    case 91u: goto L_089D2590;
    case 92u: goto L_089D25A4;
    case 93u: goto L_089D25AC;
    case 94u: goto L_089D25D4;
    case 95u: goto L_089D25FC;
    case 96u: goto L_089D2604;
    case 97u: goto L_089D260C;
    case 98u: goto L_089D261C;
    case 99u: goto L_089D2628;
    case 100u: goto L_089D2630;
    case 101u: goto L_089D264C;
    case 102u: goto L_089D2660;
    case 103u: goto L_089D2664;
    case 104u: goto L_089D2678;
    case 105u: goto L_089D2690;
    case 106u: goto L_089D26D4;
    case 107u: goto L_089D26DC;
    case 108u: goto L_089D26E4;
    case 109u: goto L_089D2700;
    case 110u: goto L_089D272C;
    case 111u: goto L_089D2730;
    case 112u: goto L_089D2734;
    case 113u: goto L_089D2738;
    case 114u: goto L_089D2754;
    case 115u: goto L_089D275C;
    case 116u: goto L_089D2764;
    case 117u: goto L_089D2770;
    case 118u: goto L_089D277C;
    case 119u: goto L_089D2784;
    case 120u: goto L_089D2794;
    case 121u: goto L_089D279C;
    case 122u: goto L_089D27AC;
    case 123u: goto L_089D27B4;
    case 124u: goto L_089D27BC;
    case 125u: goto L_089D27C4;
    case 126u: goto L_089D27EC;
    case 127u: goto L_089D27FC;
    case 128u: goto L_089D2814;
    case 129u: goto L_089D281C;
    case 130u: goto L_089D2830;
    case 131u: goto L_089D2834;
    case 132u: goto L_089D284C;
    case 133u: goto L_089D2854;
    case 134u: goto L_089D285C;
    case 135u: goto L_089D2864;
    case 136u: goto L_089D28BC;
    case 137u: goto L_089D28D0;
    case 138u: goto L_089D28E4;
    case 139u: goto L_089D28F4;
    case 140u: goto L_089D2904;
    case 141u: goto L_089D290C;
    case 142u: goto L_089D2914;
    case 143u: goto L_089D2920;
    case 144u: goto L_089D292C;
    case 145u: goto L_089D2948;
    case 146u: goto L_089D295C;
    case 147u: goto L_089D297C;
    case 148u: goto L_089D2990;
    case 149u: goto L_089D2998;
    case 150u: goto L_089D29A4;
    case 151u: goto L_089D29B0;
    case 152u: goto L_089D29C0;
    case 153u: goto L_089D29D4;
    case 154u: goto L_089D29DC;
    case 155u: goto L_089D2A34;
    case 156u: goto L_089D2A44;
    case 157u: goto L_089D2A58;
    case 158u: goto L_089D2A6C;
    case 159u: goto L_089D2A80;
    case 160u: goto L_089D2A88;
    case 161u: goto L_089D2A94;
    case 162u: goto L_089D2AA0;
    case 163u: goto L_089D2AAC;
    case 164u: goto L_089D2AB4;
    case 165u: goto L_089D2AB8;
    case 166u: goto L_089D2AE8;
    case 167u: goto L_089D2B18;
    case 168u: goto L_089D2B1C;
    case 169u: goto L_089D2B4C;
    case 170u: goto L_089D2B54;
    case 171u: goto L_089D2B60;
    case 172u: goto L_089D2B6C;
    case 173u: goto L_089D2B78;
    case 174u: goto L_089D2BA8;
    case 175u: goto L_089D2BB8;
    case 176u: goto L_089D2BD4;
    case 177u: goto L_089D2BF4;
    case 178u: goto L_089D2C00;
    case 179u: goto L_089D2C0C;
    case 180u: goto L_089D2C14;
    case 181u: goto L_089D2C64;
    case 182u: goto L_089D2C70;
    case 183u: goto L_089D2C78;
    case 184u: goto L_089D2C88;
    case 185u: goto L_089D2C9C;
    case 186u: goto L_089D2CA8;
    case 187u: goto L_089D2CB0;
    case 188u: goto L_089D2CB8;
    case 189u: goto L_089D2CC4;
    case 190u: goto L_089D2CC8;
    case 191u: goto L_089D2CD8;
    case 192u: goto L_089D2CE4;
    case 193u: goto L_089D2CF0;
    case 194u: goto L_089D2D00;
    case 195u: goto L_089D2D04;
    case 196u: goto L_089D2D38;
    case 197u: goto L_089D2D40;
    case 198u: goto L_089D2D48;
    case 199u: goto L_089D2D84;
    case 200u: goto L_089D2D8C;
    case 201u: goto L_089D2D94;
    case 202u: goto L_089D2DA4;
    case 203u: goto L_089D2DAC;
    case 204u: goto L_089D2DB4;
    case 205u: goto L_089D2DBC;
    case 206u: goto L_089D2E24;
    case 207u: goto L_089D2E34;
    case 208u: goto L_089D2E44;
    case 209u: goto L_089D2E68;
    case 210u: goto L_089D2E78;
    case 211u: goto L_089D2E80;
    case 212u: goto L_089D2E88;
    case 213u: goto L_089D2E98;
    case 214u: goto L_089D2E9C;
    case 215u: goto L_089D2EB0;
    case 216u: goto L_089D2ECC;
    case 217u: goto L_089D2F04;
    case 218u: goto L_089D2F0C;
    case 219u: goto L_089D2F14;
    case 220u: goto L_089D2F28;
    case 221u: goto L_089D2F50;
    case 222u: goto L_089D2F5C;
    case 223u: goto L_089D2F60;
    case 224u: goto L_089D2F84;
    case 225u: goto L_089D2FAC;
    case 226u: goto L_089D2FB8;
    case 227u: goto L_089D2FCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D2000:
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089D2024;
      }
      goto L_089D2014;
    }
L_089D2014:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(22656)));
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089D2024;
L_089D2024:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D202C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089D203Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D203Cu) goto L_089D203C;
    return;
L_089D203C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D209C;
      }
      goto L_089D2044;
    }
L_089D2044:
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(292)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(292), aot_gpr[4]);
        goto L_089D20AC;
    }
    goto L_089D2058;
L_089D2058:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D20A0;
      }
      goto L_089D2064;
    }
L_089D2064:
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[2] = (0u + 0u);
        goto L_089D20A4;
    }
    goto L_089D206C;
L_089D206C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2080;
      }
      goto L_089D2078;
    }
L_089D2078:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089D20B8;
L_089D2080:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D20A0;
      }
      goto L_089D2088;
    }
L_089D2088:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(84)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (aot_gpr[2] + 0u);
        goto L_089D2080;
    }
    goto L_089D2094;
L_089D2094:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    goto L_089D209C;
L_089D209C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089D20A0;
L_089D20A0:
    aot_gpr[2] = (0u + 0u);
    goto L_089D20A4;
L_089D20A4:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D20AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2800)));
    goto L_089D2058;
L_089D20B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    goto L_089D209C;
L_089D20C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089D20D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D20D4u) goto L_089D20D4;
    return;
L_089D20D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D2114;
      }
      goto L_089D20DC;
    }
L_089D20DC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(292)));
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
        goto L_089D2144;
    }
    goto L_089D20F0;
L_089D20F0:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
        goto L_089D2114;
    }
    goto L_089D20F8;
L_089D20F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D2124;
      }
      goto L_089D2104;
    }
L_089D2104:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    goto L_089D2110;
L_089D2110:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    goto L_089D2114;
L_089D2114:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2124:
    if (aot_gpr[3] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
        goto L_089D2114;
    }
    goto L_089D212C;
L_089D212C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(84)));
    if (aot_gpr[2] != aot_gpr[4]) {
    aot_gpr[3] = (aot_gpr[2] + 0u);
        goto L_089D2124;
    }
    goto L_089D2138;
L_089D2138:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    goto L_089D2110;
L_089D2144:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(292), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    goto L_089D2114;
L_089D2150:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(260)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D21C8;
      }
      goto L_089D2180;
    }
L_089D2180:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(22284));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[3] << 6u);
      if (branch_taken) {
          goto L_089D21E8;
      }
      goto L_089D2194;
    }
L_089D2194:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(22284));
    goto L_089D2198;
L_089D2198:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(296)));
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D21C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D21E8:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[31] = (0x089D21F4u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D21F4u) goto L_089D21F4;
    return;
L_089D21F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D21C8;
      }
      goto L_089D21FC;
    }
L_089D21FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(22284));
      if (branch_taken) {
          goto L_089D2198;
      }
      goto L_089D220C;
    }
L_089D220C:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089D2218;
L_089D2218:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(296)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(260)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_089D2218;
      }
      goto L_089D223C;
    }
L_089D223C:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(22284));
    goto L_089D2198;
L_089D2244:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089D2254u);
    // nop
    goto L_089D2150;
L_089D2254:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2260:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089D2284;
      }
      goto L_089D2268;
    }
L_089D2268:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D2284;
      }
      goto L_089D2274;
    }
L_089D2274:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1036)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2284:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_089D22C8;
      }
      goto L_089D22B4;
    }
L_089D22B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D22C8:
    aot_gpr[31] = (0x089D22D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D22D0u) goto L_089D22D0;
    return;
L_089D22D0:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
      if (branch_taken) {
          goto L_089D22B4;
      }
      goto L_089D22E0;
    }
L_089D22E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(336)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[25] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D22B4;
      }
      goto L_089D2300;
    }
L_089D2300:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(348)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[25];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2320:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(244)));
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_089D2384;
      }
      goto L_089D2358;
    }
L_089D2358:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D2384;
      }
      goto L_089D2364;
    }
L_089D2364:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D2384;
      }
      goto L_089D236C;
    }
L_089D236C:
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
L_089D2384:
    aot_gpr[31] = (0x089D238Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D238Cu) goto L_089D238C;
    return;
L_089D238C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
      if (branch_taken) {
          goto L_089D236C;
      }
      goto L_089D239C;
    }
L_089D239C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(340)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[25] == 0u;
    aot_gpr[6] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D236C;
      }
      goto L_089D23C0;
    }
L_089D23C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(348)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[25];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D23E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[20] + static_cast<std::uint32_t>(22284));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D25AC;
      }
      goto L_089D2414;
    }
L_089D2414:
    aot_gpr[31] = (0x089D241Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D241Cu) goto L_089D241C;
    return;
L_089D241C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D25AC;
      }
      goto L_089D2424;
    }
L_089D2424:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2564;
      }
      goto L_089D2434;
    }
L_089D2434:
    aot_gpr[31] = (0x089D243Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D243Cu) goto L_089D243C;
    return;
L_089D243C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089D24DC;
      }
      goto L_089D2448;
    }
L_089D2448:
    aot_gpr[31] = (0x089D2450u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089D20C4;
L_089D2450:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D246Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D246Cu) goto L_089D246C;
    return;
L_089D246C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D248C;
      }
      goto L_089D2474;
    }
L_089D2474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
        goto L_089D2500;
    }
    goto L_089D2484;
L_089D2484:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089D2488;
L_089D2488:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    goto L_089D248C;
L_089D248C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D2498u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D2498u) goto L_089D2498;
    return;
L_089D2498:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D24A4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D24A4u) goto L_089D24A4;
    return;
L_089D24A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D24B0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D24B0u) goto L_089D24B0;
    return;
L_089D24B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D24BCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D24BCu) goto L_089D24BC;
    return;
L_089D24BC:
    aot_gpr[31] = (0x089D24C4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D24C4u) goto L_089D24C4;
    return;
L_089D24C4:
    aot_gpr[3] = (aot_gpr[20] + static_cast<std::uint32_t>(22284));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(372)));
    aot_gpr[2] = (aot_gpr[16] << 2u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_089D24DC;
L_089D24DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2500:
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D2488;
      }
      goto L_089D2510;
    }
L_089D2510:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D251Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D251Cu) goto L_089D251C;
    return;
L_089D251C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D2528u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D2528u) goto L_089D2528;
    return;
L_089D2528:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D2534u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D2534u) goto L_089D2534;
    return;
L_089D2534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D2540u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D2540u) goto L_089D2540;
    return;
L_089D2540:
    aot_gpr[31] = (0x089D2548u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D2548u) goto L_089D2548;
    return;
L_089D2548:
    aot_gpr[3] = (aot_gpr[20] + static_cast<std::uint32_t>(22284));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(372)));
    aot_gpr[2] = (aot_gpr[16] << 2u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_089D24DC;
L_089D2564:
    aot_gpr[31] = (0x089D256Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D256Cu) goto L_089D256C;
    return;
L_089D256C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2434;
      }
      goto L_089D2574;
    }
L_089D2574:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(344)));
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D2434;
      }
      goto L_089D2590;
    }
L_089D2590:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(348)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089D25A4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D25A4u) goto L_089D25A4;
    return;
L_089D25A4:
    // nop
    goto L_089D2434;
L_089D25AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(10));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D25D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D26E4;
      }
      goto L_089D25FC;
    }
L_089D25FC:
    aot_gpr[31] = (0x089D2604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D2604u) goto L_089D2604;
    return;
L_089D2604:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D26E4;
      }
      goto L_089D260C;
    }
L_089D260C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D264C;
      }
      goto L_089D261C;
    }
L_089D261C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D264C;
      }
      goto L_089D2628;
    }
L_089D2628:
    aot_gpr[31] = (0x089D2630u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089D23E4;
L_089D2630:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D264C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(248)));
    aot_gpr[3] = (aot_gpr[17] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089D2678;
      }
      goto L_089D2660;
    }
L_089D2660:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    goto L_089D2664;
L_089D2664:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2678:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    aot_gpr[31] = (0x089D2690u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2690u) goto L_089D2690;
    return;
L_089D2690:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[31] = (0x089D26D4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D26D4u) goto L_089D26D4;
    return;
L_089D26D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089D2628;
      }
      goto L_089D26DC;
    }
L_089D26DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    goto L_089D2664;
L_089D26E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2700:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[17] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D2754;
      }
      goto L_089D272C;
    }
L_089D272C:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D2730;
L_089D2730:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089D2734;
L_089D2734:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089D2738;
L_089D2738:
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
L_089D2754:
    aot_gpr[31] = (0x089D275Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D275Cu) goto L_089D275C;
    return;
L_089D275C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D2730;
      }
      goto L_089D2764;
    }
L_089D2764:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    if (static_cast<std::int32_t>(aot_gpr[19]) <= 0) {
    aot_gpr[2] = (aot_gpr[16] + 0u);
        goto L_089D2734;
    }
    goto L_089D2770;
L_089D2770:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u + 0u);
    goto L_089D2784;
L_089D277C:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[18];
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D2730;
      }
      goto L_089D2784;
    }
L_089D2784:
    aot_gpr[16] = (aot_gpr[20] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D2794u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D2794u) goto L_089D2794;
    return;
L_089D2794:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089D277C;
      }
      goto L_089D279C;
    }
L_089D279C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D277C;
      }
      goto L_089D27AC;
    }
L_089D27AC:
    aot_gpr[31] = (0x089D27B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089D27B4u) goto L_089D27B4;
    return;
L_089D27B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D277C;
      }
      goto L_089D27BC;
    }
L_089D27BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089D2738;
L_089D27C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089D2834;
      }
      goto L_089D27EC;
    }
L_089D27EC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    aot_gpr[16] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(372)));
    goto L_089D27FC;
L_089D27FC:
    aot_gpr[3] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D281C;
      }
      goto L_089D2814;
    }
L_089D2814:
    aot_gpr[31] = (0x089D281Cu);
    // nop
    goto L_089D23E4;
L_089D281C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(372)));
        goto L_089D27FC;
    }
    goto L_089D2830;
L_089D2830:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089D2834;
L_089D2834:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D284C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D285C;
      }
      goto L_089D2854;
    }
L_089D2854:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1036), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_089D285C;
L_089D285C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2864:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089D2C0C;
      }
      goto L_089D28BC;
    }
L_089D28BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D2C0C;
      }
      goto L_089D28D0;
    }
L_089D28D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(240)));
    aot_gpr[2] = (aot_gpr[22] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D2C0C;
      }
      goto L_089D28E4;
    }
L_089D28E4:
    aot_gpr[16] = (aot_gpr[3] + static_cast<std::uint32_t>(22284));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D2AB8;
      }
      goto L_089D28F4;
    }
L_089D28F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(19));
      if (branch_taken) {
          goto L_089D2AB8;
      }
      goto L_089D2904;
    }
L_089D2904:
    aot_gpr[31] = (0x089D290Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D290Cu) goto L_089D290C;
    return;
L_089D290C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(19));
        goto L_089D2AB8;
    }
    goto L_089D2914;
L_089D2914:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089D2B1C;
      }
      goto L_089D2920;
    }
L_089D2920:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089D2B1C;
      }
      goto L_089D292C;
    }
L_089D292C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[3] = (aot_gpr[22] << 4u);
    aot_gpr[2] = (aot_gpr[22] << 6u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (aot_gpr[5] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089D2B1C;
      }
      goto L_089D2948;
    }
L_089D2948:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2800)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(248)));
    aot_gpr[3] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_089D2AE8;
      }
      goto L_089D295C;
    }
L_089D295C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(372)));
    aot_gpr[21] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[6] + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[8] - aot_gpr[6]);
      if (branch_taken) {
          goto L_089D29A4;
      }
      goto L_089D297C;
    }
L_089D297C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D2B18;
      }
      goto L_089D2990;
    }
L_089D2990:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[18];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089D2AE8;
      }
      goto L_089D2998;
    }
L_089D2998:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D297C;
      }
      goto L_089D29A4;
    }
L_089D29A4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(88));
    aot_gpr[31] = (0x089D29B0u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D29B0u) goto L_089D29B0;
    return;
L_089D29B0:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089D2AB8;
      }
      goto L_089D29C0;
    }
L_089D29C0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D2C00;
      }
      goto L_089D29D4;
    }
L_089D29D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    goto L_089D29DC;
L_089D29DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[31] = (0x089D2A34u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D2A34u) goto L_089D2A34;
    return;
L_089D2A34:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[31] = (0x089D2A44u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D2A44u) goto L_089D2A44;
    return;
L_089D2A44:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1084)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D2A58u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D2A58u) goto L_089D2A58;
    return;
L_089D2A58:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D2A6Cu);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D2A6Cu) goto L_089D2A6C;
    return;
L_089D2A6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
        goto L_089D2B4C;
    }
    goto L_089D2A80;
L_089D2A80:
    aot_gpr[31] = (0x089D2A88u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D2A88u) goto L_089D2A88;
    return;
L_089D2A88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D2A94u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D2A94u) goto L_089D2A94;
    return;
L_089D2A94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D2AA0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D2AA0u) goto L_089D2AA0;
    return;
L_089D2AA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D2AACu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D2AACu) goto L_089D2AAC;
    return;
L_089D2AAC:
    aot_gpr[31] = (0x089D2AB4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D2AB4u) goto L_089D2AB4;
    return;
L_089D2AB4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
    goto L_089D2AB8;
L_089D2AB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2AE8:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2B18:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_089D2B1C;
L_089D2B1C:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(17));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2B4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2A80;
      }
      goto L_089D2B54;
    }
L_089D2B54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2A80;
      }
      goto L_089D2B60;
    }
L_089D2B60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_089D2A80;
      }
      goto L_089D2B6C;
    }
L_089D2B6C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x089D2B78u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089D2B78u) goto L_089D2B78;
    return;
L_089D2B78:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D2BB8;
      }
      goto L_089D2BA8;
    }
L_089D2BA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089D2BB8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089D2BB8u) goto L_089D2BB8;
    return;
L_089D2BB8:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(22284));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(280)));
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(280), aot_gpr[3]);
        goto L_089D2BD4;
    }
    goto L_089D2BD4;
L_089D2BD4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(372)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[3]);
    aot_gpr[31] = (0x089D2BF4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089D202C;
L_089D2BF4:
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    goto L_089D2AB8;
L_089D2C00:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    goto L_089D29DC;
L_089D2C0C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    goto L_089D2AB8;
L_089D2C14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[11]);
      if (branch_taken) {
          goto L_089D2D84;
      }
      goto L_089D2C64;
    }
L_089D2C64:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D2D84;
      }
      goto L_089D2C70;
    }
L_089D2C70:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D2D84;
      }
      goto L_089D2C78;
    }
L_089D2C78:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_089D2D04;
      }
      goto L_089D2C88;
    }
L_089D2C88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(276)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_089D2D84;
      }
      goto L_089D2C9C;
    }
L_089D2C9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(19));
      if (branch_taken) {
          goto L_089D2D04;
      }
      goto L_089D2CA8;
    }
L_089D2CA8:
    aot_gpr[31] = (0x089D2CB0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D2CB0u) goto L_089D2CB0;
    return;
L_089D2CB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D2D8C;
      }
      goto L_089D2CB8;
    }
L_089D2CB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089D2D00;
      }
      goto L_089D2CC4;
    }
L_089D2CC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089D2CC8;
L_089D2CC8:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[20] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[31] = (0x089D2CD8u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_089D2150;
L_089D2CD8:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D2D00;
      }
      goto L_089D2CE4;
    }
L_089D2CE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_089D2D38;
      }
      goto L_089D2CF0;
    }
L_089D2CF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089D2CC8;
    }
    goto L_089D2D00;
L_089D2D00:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(18));
    goto L_089D2D04;
L_089D2D04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2D38:
    aot_gpr[31] = (0x089D2D40u);
    aot_gpr[4] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D2D40u) goto L_089D2D40;
    return;
L_089D2D40:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D2D94;
      }
      goto L_089D2D48;
    }
L_089D2D48:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2D84:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    goto L_089D2D04;
L_089D2D8C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(19));
    goto L_089D2D04;
L_089D2D94:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (0x089D2DA4u);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 214u, 0x08A42BC0u>(ctx, &aot_mem) && ctx.pc == 0x089D2DA4u) goto L_089D2DA4;
    return;
L_089D2DA4:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[19]));
        goto L_089D2DBC;
    }
    goto L_089D2DAC;
L_089D2DAC:
    aot_gpr[31] = (0x089D2DB4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D2DB4u) goto L_089D2DB4;
    return;
L_089D2DB4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(18));
    goto L_089D2D04;
L_089D2DBC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[23]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D2E34;
      }
      goto L_089D2E24;
    }
L_089D2E24:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    goto L_089D2D04;
L_089D2E34:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    goto L_089D2D04;
L_089D2E44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(260)));
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D2E9C;
      }
      goto L_089D2E68;
    }
L_089D2E68:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(22588)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_089D2E9C;
      }
      goto L_089D2E78;
    }
L_089D2E78:
    aot_gpr[31] = (0x089D2E80u);
    // nop
    goto L_089D2244;
L_089D2E80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D2E98;
      }
      goto L_089D2E88;
    }
L_089D2E88:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089D2EB0;
      }
      goto L_089D2E98;
    }
L_089D2E98:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(11));
    goto L_089D2E9C;
L_089D2E9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2EB0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2ECC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D2F84;
      }
      goto L_089D2F04;
    }
L_089D2F04:
    aot_gpr[31] = (0x089D2F0Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D2F0Cu) goto L_089D2F0C;
    return;
L_089D2F0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D2F84;
      }
      goto L_089D2F14;
    }
L_089D2F14:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089D2F28u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2F28u) goto L_089D2F28;
    return;
L_089D2F28:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(304)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D2FAC;
      }
      goto L_089D2F50;
    }
L_089D2F50:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
        (void)rt.invoke_chained_direct<&recomp_unit_0463_entry, 463u, 5u, 0x089D306Cu>(ctx, &aot_mem); return;
    }
    goto L_089D2F5C;
L_089D2F5C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    goto L_089D2F60;
L_089D2F60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2F84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2FAC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089D2F60;
      }
      goto L_089D2FB8;
    }
L_089D2FB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1256)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0463_entry, 463u, 7u, 0x089D30C8u>(ctx, &aot_mem); return;
      }
      goto L_089D2FCC;
    }
L_089D2FCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1256)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D3004u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0462(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0462_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_462(Runtime &runtime) {
    runtime.register_generated_unit(462u, 0x089D2000u, 4096u, &recomp_unit_0462, &recomp_unit_0462_entry);
    runtime.register_function(0x089D2000u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2014u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2024u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D202Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D203Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2044u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2058u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2064u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D206Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2078u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2080u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2088u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2094u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D209Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D20A0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D20A4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D20ACu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D20B8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D20C4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D20D4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D20DCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D20F0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D20F8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2104u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2110u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2114u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2124u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D212Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2138u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2144u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2150u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2180u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2194u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2198u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D21C8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D21E8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D21F4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D21FCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D220Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2218u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D223Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2244u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2254u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2260u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2268u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2274u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2284u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2290u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D22B4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D22C8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D22D0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D22E0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2300u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2320u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2358u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2364u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D236Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2384u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D238Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D239Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D23C0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D23E4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2414u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D241Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2424u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2434u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D243Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2448u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2450u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D246Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2474u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2484u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2488u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D248Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2498u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D24A4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D24B0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D24BCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D24C4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D24DCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2500u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2510u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D251Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2528u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2534u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2540u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2548u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2564u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D256Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2574u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2590u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D25A4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D25ACu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D25D4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D25FCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2604u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D260Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D261Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2628u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2630u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D264Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2660u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2664u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2678u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2690u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D26D4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D26DCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D26E4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2700u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D272Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2730u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2734u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2738u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2754u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D275Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2764u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2770u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D277Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2784u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2794u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D279Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D27ACu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D27B4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D27BCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D27C4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D27ECu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D27FCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2814u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D281Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2830u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2834u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D284Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2854u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D285Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2864u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D28BCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D28D0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D28E4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D28F4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2904u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D290Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2914u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2920u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D292Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2948u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D295Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D297Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2990u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2998u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D29A4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D29B0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D29C0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D29D4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D29DCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2A34u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2A44u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2A58u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2A6Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2A80u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2A88u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2A94u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2AA0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2AACu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2AB4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2AB8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2AE8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2B18u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2B1Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2B4Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2B54u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2B60u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2B6Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2B78u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2BA8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2BB8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2BD4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2BF4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2C00u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2C0Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2C14u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2C64u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2C70u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2C78u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2C88u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2C9Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2CA8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2CB0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2CB8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2CC4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2CC8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2CD8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2CE4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2CF0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2D00u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2D04u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2D38u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2D40u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2D48u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2D84u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2D8Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2D94u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2DA4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2DACu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2DB4u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2DBCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2E24u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2E34u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2E44u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2E68u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2E78u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2E80u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2E88u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2E98u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2E9Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2EB0u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2ECCu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2F04u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2F0Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2F14u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2F28u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2F50u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2F5Cu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2F60u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2F84u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2FACu, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2FB8u, &recomp_unit_0462, "recomp_unit_0462");
    runtime.register_function(0x089D2FCCu, &recomp_unit_0462, "recomp_unit_0462");
}
} // namespace psprecomp
