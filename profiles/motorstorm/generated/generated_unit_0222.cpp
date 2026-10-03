#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0222[1013] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0,
    0, 0, 0, 9, 10, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 16, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0,
    20, 0, 0, 0, 0, 21, 22, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 29, 30, 0, 0,
    0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 37, 38, 0, 0, 0, 0, 39, 0, 0, 40,
    0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 44, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 48, 0, 0, 49, 0, 0, 0, 50, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0,
    54, 0, 0, 55, 0, 0, 0, 56, 57, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 63, 64, 0, 65, 66, 0, 67, 0,
    0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0,
    0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 85, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 102, 0,
    0, 0, 103, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 121, 0, 0, 0, 0,
    0, 122, 0, 123, 124, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    153, 0, 0, 154, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 160, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0,
    176, 0, 177, 0, 0, 178, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0,
    192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0,
    0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0,
    214, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 217, 0, 0, 0, 218, 0, 219,
};
void recomp_unit_0222_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088E2000u;
        entry_id = (entry_delta < 4052u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0222[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E2000;
    case 2u: goto L_088E2020;
    case 3u: goto L_088E202C;
    case 4u: goto L_088E2040;
    case 5u: goto L_088E2054;
    case 6u: goto L_088E205C;
    case 7u: goto L_088E2068;
    case 8u: goto L_088E2078;
    case 9u: goto L_088E208C;
    case 10u: goto L_088E2090;
    case 11u: goto L_088E2094;
    case 12u: goto L_088E20A0;
    case 13u: goto L_088E20AC;
    case 14u: goto L_088E20BC;
    case 15u: goto L_088E20D0;
    case 16u: goto L_088E20D4;
    case 17u: goto L_088E20D8;
    case 18u: goto L_088E20E4;
    case 19u: goto L_088E20F0;
    case 20u: goto L_088E2100;
    case 21u: goto L_088E2114;
    case 22u: goto L_088E2118;
    case 23u: goto L_088E211C;
    case 24u: goto L_088E2130;
    case 25u: goto L_088E213C;
    case 26u: goto L_088E2148;
    case 27u: goto L_088E2158;
    case 28u: goto L_088E216C;
    case 29u: goto L_088E2170;
    case 30u: goto L_088E2174;
    case 31u: goto L_088E2188;
    case 32u: goto L_088E2198;
    case 33u: goto L_088E21A4;
    case 34u: goto L_088E21B0;
    case 35u: goto L_088E21C0;
    case 36u: goto L_088E21D4;
    case 37u: goto L_088E21D8;
    case 38u: goto L_088E21DC;
    case 39u: goto L_088E21F0;
    case 40u: goto L_088E21FC;
    case 41u: goto L_088E2208;
    case 42u: goto L_088E2218;
    case 43u: goto L_088E222C;
    case 44u: goto L_088E2230;
    case 45u: goto L_088E2234;
    case 46u: goto L_088E2260;
    case 47u: goto L_088E22AC;
    case 48u: goto L_088E22B0;
    case 49u: goto L_088E22BC;
    case 50u: goto L_088E22CC;
    case 51u: goto L_088E22D0;
    case 52u: goto L_088E22EC;
    case 53u: goto L_088E22F8;
    case 54u: goto L_088E2300;
    case 55u: goto L_088E230C;
    case 56u: goto L_088E231C;
    case 57u: goto L_088E2320;
    case 58u: goto L_088E232C;
    case 59u: goto L_088E2334;
    case 60u: goto L_088E233C;
    case 61u: goto L_088E2344;
    case 62u: goto L_088E2350;
    case 63u: goto L_088E2360;
    case 64u: goto L_088E2364;
    case 65u: goto L_088E236C;
    case 66u: goto L_088E2370;
    case 67u: goto L_088E2378;
    case 68u: goto L_088E2384;
    case 69u: goto L_088E2390;
    case 70u: goto L_088E23A0;
    case 71u: goto L_088E23B0;
    case 72u: goto L_088E23B4;
    case 73u: goto L_088E23C4;
    case 74u: goto L_088E23D0;
    case 75u: goto L_088E23DC;
    case 76u: goto L_088E23E8;
    case 77u: goto L_088E23F8;
    case 78u: goto L_088E2408;
    case 79u: goto L_088E2410;
    case 80u: goto L_088E2418;
    case 81u: goto L_088E242C;
    case 82u: goto L_088E2438;
    case 83u: goto L_088E2444;
    case 84u: goto L_088E2454;
    case 85u: goto L_088E2458;
    case 86u: goto L_088E245C;
    case 87u: goto L_088E2494;
    case 88u: goto L_088E24E8;
    case 89u: goto L_088E2510;
    case 90u: goto L_088E2538;
    case 91u: goto L_088E257C;
    case 92u: goto L_088E2588;
    case 93u: goto L_088E259C;
    case 94u: goto L_088E25A8;
    case 95u: goto L_088E25B0;
    case 96u: goto L_088E25BC;
    case 97u: goto L_088E25C8;
    case 98u: goto L_088E25D0;
    case 99u: goto L_088E25D8;
    case 100u: goto L_088E25E0;
    case 101u: goto L_088E25EC;
    case 102u: goto L_088E25F8;
    case 103u: goto L_088E2608;
    case 104u: goto L_088E2610;
    case 105u: goto L_088E261C;
    case 106u: goto L_088E2628;
    case 107u: goto L_088E2638;
    case 108u: goto L_088E2644;
    case 109u: goto L_088E2654;
    case 110u: goto L_088E2678;
    case 111u: goto L_088E2690;
    case 112u: goto L_088E269C;
    case 113u: goto L_088E26E4;
    case 114u: goto L_088E26FC;
    case 115u: goto L_088E2714;
    case 116u: goto L_088E2720;
    case 117u: goto L_088E2728;
    case 118u: goto L_088E273C;
    case 119u: goto L_088E274C;
    case 120u: goto L_088E2768;
    case 121u: goto L_088E276C;
    case 122u: goto L_088E2784;
    case 123u: goto L_088E278C;
    case 124u: goto L_088E2790;
    case 125u: goto L_088E2794;
    case 126u: goto L_088E27B4;
    case 127u: goto L_088E27BC;
    case 128u: goto L_088E27D4;
    case 129u: goto L_088E27E0;
    case 130u: goto L_088E27F0;
    case 131u: goto L_088E27FC;
    case 132u: goto L_088E2808;
    case 133u: goto L_088E2828;
    case 134u: goto L_088E283C;
    case 135u: goto L_088E2844;
    case 136u: goto L_088E285C;
    case 137u: goto L_088E2870;
    case 138u: goto L_088E2898;
    case 139u: goto L_088E28A0;
    case 140u: goto L_088E28B4;
    case 141u: goto L_088E2958;
    case 142u: goto L_088E29A8;
    case 143u: goto L_088E29C4;
    case 144u: goto L_088E29DC;
    case 145u: goto L_088E29F0;
    case 146u: goto L_088E29FC;
    case 147u: goto L_088E2A10;
    case 148u: goto L_088E2A24;
    case 149u: goto L_088E2A54;
    case 150u: goto L_088E2AC4;
    case 151u: goto L_088E2ACC;
    case 152u: goto L_088E2AF0;
    case 153u: goto L_088E2B00;
    case 154u: goto L_088E2B0C;
    case 155u: goto L_088E2B18;
    case 156u: goto L_088E2B20;
    case 157u: goto L_088E2B2C;
    case 158u: goto L_088E2B38;
    case 159u: goto L_088E2B40;
    case 160u: goto L_088E2B4C;
    case 161u: goto L_088E2B50;
    case 162u: goto L_088E2B58;
    case 163u: goto L_088E2B60;
    case 164u: goto L_088E2B68;
    case 165u: goto L_088E2B8C;
    case 166u: goto L_088E2B94;
    case 167u: goto L_088E2B9C;
    case 168u: goto L_088E2BB4;
    case 169u: goto L_088E2BBC;
    case 170u: goto L_088E2BC4;
    case 171u: goto L_088E2BCC;
    case 172u: goto L_088E2BD4;
    case 173u: goto L_088E2BD8;
    case 174u: goto L_088E2BE0;
    case 175u: goto L_088E2BF0;
    case 176u: goto L_088E2C00;
    case 177u: goto L_088E2C08;
    case 178u: goto L_088E2C14;
    case 179u: goto L_088E2C18;
    case 180u: goto L_088E2C48;
    case 181u: goto L_088E2C88;
    case 182u: goto L_088E2C90;
    case 183u: goto L_088E2CAC;
    case 184u: goto L_088E2CD8;
    case 185u: goto L_088E2CE0;
    case 186u: goto L_088E2CE8;
    case 187u: goto L_088E2D08;
    case 188u: goto L_088E2D20;
    case 189u: goto L_088E2D48;
    case 190u: goto L_088E2D68;
    case 191u: goto L_088E2D78;
    case 192u: goto L_088E2D80;
    case 193u: goto L_088E2D8C;
    case 194u: goto L_088E2DAC;
    case 195u: goto L_088E2DDC;
    case 196u: goto L_088E2DE4;
    case 197u: goto L_088E2E08;
    case 198u: goto L_088E2E24;
    case 199u: goto L_088E2E30;
    case 200u: goto L_088E2E48;
    case 201u: goto L_088E2E4C;
    case 202u: goto L_088E2E60;
    case 203u: goto L_088E2E68;
    case 204u: goto L_088E2E74;
    case 205u: goto L_088E2E88;
    case 206u: goto L_088E2E90;
    case 207u: goto L_088E2E98;
    case 208u: goto L_088E2EB0;
    case 209u: goto L_088E2EB8;
    case 210u: goto L_088E2ED0;
    case 211u: goto L_088E2EDC;
    case 212u: goto L_088E2EEC;
    case 213u: goto L_088E2EF8;
    case 214u: goto L_088E2F00;
    case 215u: goto L_088E2F04;
    case 216u: goto L_088E2FB4;
    case 217u: goto L_088E2FB8;
    case 218u: goto L_088E2FC8;
    case 219u: goto L_088E2FD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E2000:
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E2054;
      }
      goto L_088E2020;
    }
L_088E2020:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(816)));
    aot_gpr[31] = (0x088E202Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 125u, 0x08A52A28u>(ctx, &aot_mem) && ctx.pc == 0x088E202Cu) goto L_088E202C;
    return;
L_088E202C:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(816), aot_gpr[2]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (aot_gpr[4] | 0u);
        goto L_088E2040;
    }
    goto L_088E2040;
L_088E2040:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(816), aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E2020;
      }
      goto L_088E2054;
    }
L_088E2054:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2094;
      }
      goto L_088E205C;
    }
L_088E205C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E2068u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 126u, 0x08A52A30u>(ctx, &aot_mem) && ctx.pc == 0x088E2068u) goto L_088E2068;
    return;
L_088E2068:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E2090;
      }
      goto L_088E2078;
    }
L_088E2078:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E208Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 101u, 0x088CF7B4u>(ctx, &aot_mem) && ctx.pc == 0x088E208Cu) goto L_088E208C;
    return;
L_088E208C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088E2090;
L_088E2090:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), aot_gpr[4]);
    goto L_088E2094;
L_088E2094:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E20D8;
      }
      goto L_088E20A0;
    }
L_088E20A0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E20ACu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 127u, 0x08A52A38u>(ctx, &aot_mem) && ctx.pc == 0x088E20ACu) goto L_088E20AC;
    return;
L_088E20AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(852), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E20D4;
      }
      goto L_088E20BC;
    }
L_088E20BC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E20D0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 155u, 0x088D4F88u>(ctx, &aot_mem) && ctx.pc == 0x088E20D0u) goto L_088E20D0;
    return;
L_088E20D0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088E20D4;
L_088E20D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(852), aot_gpr[4]);
    goto L_088E20D8;
L_088E20D8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(856)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E211C;
      }
      goto L_088E20E4;
    }
L_088E20E4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E20F0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 128u, 0x08A52A40u>(ctx, &aot_mem) && ctx.pc == 0x088E20F0u) goto L_088E20F0;
    return;
L_088E20F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(856), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E2118;
      }
      goto L_088E2100;
    }
L_088E2100:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E2114u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 150u, 0x088DDB78u>(ctx, &aot_mem) && ctx.pc == 0x088E2114u) goto L_088E2114;
    return;
L_088E2114:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088E2118;
L_088E2118:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(856), aot_gpr[4]);
    goto L_088E211C;
L_088E211C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[21] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E2188;
      }
      goto L_088E2130;
    }
L_088E2130:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2174;
      }
      goto L_088E213C;
    }
L_088E213C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088E2148u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 129u, 0x08A52A48u>(ctx, &aot_mem) && ctx.pc == 0x088E2148u) goto L_088E2148;
    return;
L_088E2148:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(860), aot_gpr[2]);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E2170;
      }
      goto L_088E2158;
    }
L_088E2158:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E216Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 7u, 0x088E708Cu>(ctx, &aot_mem) && ctx.pc == 0x088E216Cu) goto L_088E216C;
    return;
L_088E216C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_088E2170;
L_088E2170:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(860), aot_gpr[4]);
    goto L_088E2174;
L_088E2174:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E2130;
      }
      goto L_088E2188;
    }
L_088E2188:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E21F0;
      }
      goto L_088E2198;
    }
L_088E2198:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E21DC;
      }
      goto L_088E21A4;
    }
L_088E21A4:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088E21B0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 130u, 0x08A52A50u>(ctx, &aot_mem) && ctx.pc == 0x088E21B0u) goto L_088E21B0;
    return;
L_088E21B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(868), aot_gpr[2]);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E21D8;
      }
      goto L_088E21C0;
    }
L_088E21C0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E21D4u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 69u, 0x088DE584u>(ctx, &aot_mem) && ctx.pc == 0x088E21D4u) goto L_088E21D4;
    return;
L_088E21D4:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_088E21D8;
L_088E21D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(868), aot_gpr[4]);
    goto L_088E21DC;
L_088E21DC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E2198;
      }
      goto L_088E21F0;
    }
L_088E21F0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2234;
      }
      goto L_088E21FC;
    }
L_088E21FC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E2208u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 131u, 0x08A52A58u>(ctx, &aot_mem) && ctx.pc == 0x088E2208u) goto L_088E2208;
    return;
L_088E2208:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E2230;
      }
      goto L_088E2218;
    }
L_088E2218:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E222Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 92u, 0x088CE8F0u>(ctx, &aot_mem) && ctx.pc == 0x088E222Cu) goto L_088E222C;
    return;
L_088E222C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088E2230;
L_088E2230:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[4]);
    goto L_088E2234;
L_088E2234:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_088E2260:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_088E22EC;
      }
      goto L_088E22AC;
    }
L_088E22AC:
    aot_gpr[23] = (aot_gpr[16] | 0u);
    goto L_088E22B0;
L_088E22B0:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E22D0;
      }
      goto L_088E22BC;
    }
L_088E22BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(816)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088E22CCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 3u, 0x088FF034u>(ctx, &aot_mem) && ctx.pc == 0x088E22CCu) goto L_088E22CC;
    return;
L_088E22CC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088E22D0;
L_088E22D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(816), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E22B0;
      }
      goto L_088E22EC;
    }
L_088E22EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[19] & 32u);
      if (branch_taken) {
          goto L_088E232C;
      }
      goto L_088E22F8;
    }
L_088E22F8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E232C;
      }
      goto L_088E2300;
    }
L_088E2300:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E2320;
      }
      goto L_088E230C;
    }
L_088E230C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(200)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E231Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 120u, 0x088CF94Cu>(ctx, &aot_mem) && ctx.pc == 0x088E231Cu) goto L_088E231C;
    return;
L_088E231C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088E2320;
L_088E2320:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(856)));
      if (branch_taken) {
          goto L_088E2334;
      }
      goto L_088E232C;
    }
L_088E232C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(856)));
    goto L_088E2334;
L_088E2334:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[19] & 32u);
      if (branch_taken) {
          goto L_088E236C;
      }
      goto L_088E233C;
    }
L_088E233C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E236C;
      }
      goto L_088E2344;
    }
L_088E2344:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E2364;
      }
      goto L_088E2350;
    }
L_088E2350:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(856)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E2360u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 154u, 0x088DDBB4u>(ctx, &aot_mem) && ctx.pc == 0x088E2360u) goto L_088E2360;
    return;
L_088E2360:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_088E2364;
L_088E2364:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(856), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E2370;
      }
      goto L_088E236C;
    }
L_088E236C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(856), 0u);
    goto L_088E2370;
L_088E2370:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[16] | 0u);
    goto L_088E2378;
L_088E2378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E23B4;
      }
      goto L_088E2384;
    }
L_088E2384:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E23B0;
      }
      goto L_088E2390;
    }
L_088E2390:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E23A0u);
    aot_gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E23A0u) goto L_088E23A0;
    return;
L_088E23A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_088E23B0;
L_088E23B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(860), aot_gpr[4]);
    goto L_088E23B4;
L_088E23B4:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E2378;
      }
      goto L_088E23C4;
    }
L_088E23C4:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[16] | 0u);
    aot_gpr[22] = (aot_gpr[17] | 0u);
    goto L_088E23D0;
L_088E23D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2418;
      }
      goto L_088E23DC;
    }
L_088E23DC:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E2408;
      }
      goto L_088E23E8;
    }
L_088E23E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088E23F8u);
    aot_gpr[6] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E23F8u) goto L_088E23F8;
    return;
L_088E23F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_088E2408;
L_088E2408:
    aot_gpr[31] = (0x088E2410u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(868), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 125u, 0x088DE9D4u>(ctx, &aot_mem) && ctx.pc == 0x088E2410u) goto L_088E2410;
    return;
L_088E2410:
    aot_gpr[31] = (0x088E2418u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(868)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 130u, 0x088DEA10u>(ctx, &aot_mem) && ctx.pc == 0x088E2418u) goto L_088E2418;
    return;
L_088E2418:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E23D0;
      }
      goto L_088E242C;
    }
L_088E242C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E245C;
      }
      goto L_088E2438;
    }
L_088E2438:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E2458;
      }
      goto L_088E2444;
    }
L_088E2444:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E2454u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 97u, 0x088CE960u>(ctx, &aot_mem) && ctx.pc == 0x088E2454u) goto L_088E2454;
    return;
L_088E2454:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_088E2458;
L_088E2458:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[4]);
    goto L_088E245C;
L_088E245C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(616), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2494:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1200));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(972), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088E24E8u);
    aot_gpr[6] = (0u | 976u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E24E8u) goto L_088E24E8;
    return;
L_088E24E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(976));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E2510u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    goto L_088E2260;
L_088E2510:
    aot_gpr[2] = (aot_gpr[21] | 0u);
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
L_088E2538:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E259C;
      }
      goto L_088E257C;
    }
L_088E257C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(816)));
    aot_gpr[31] = (0x088E2588u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 2u, 0x088FF024u>(ctx, &aot_mem) && ctx.pc == 0x088E2588u) goto L_088E2588;
    return;
L_088E2588:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E257C;
      }
      goto L_088E259C;
    }
L_088E259C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[19] & 32u);
      if (branch_taken) {
          goto L_088E25BC;
      }
      goto L_088E25A8;
    }
L_088E25A8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E25BC;
      }
      goto L_088E25B0;
    }
L_088E25B0:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E25BCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 118u, 0x088CF8C0u>(ctx, &aot_mem) && ctx.pc == 0x088E25BCu) goto L_088E25BC;
    return;
L_088E25BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(856)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[19] & 32u);
      if (branch_taken) {
          goto L_088E25D8;
      }
      goto L_088E25C8;
    }
L_088E25C8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E25D8;
      }
      goto L_088E25D0;
    }
L_088E25D0:
    aot_gpr[31] = (0x088E25D8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 182u, 0x088DDE18u>(ctx, &aot_mem) && ctx.pc == 0x088E25D8u) goto L_088E25D8;
    return;
L_088E25D8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088E25E0;
L_088E25E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E25F8;
      }
      goto L_088E25EC;
    }
L_088E25EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_088E25F8;
L_088E25F8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E25E0;
      }
      goto L_088E2608;
    }
L_088E2608:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088E2610;
L_088E2610:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2628;
      }
      goto L_088E261C;
    }
L_088E261C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_088E2628;
L_088E2628:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E2610;
      }
      goto L_088E2638;
    }
L_088E2638:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2654;
      }
      goto L_088E2644;
    }
L_088E2644:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E2654u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 96u, 0x088CE92Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2654u) goto L_088E2654;
    return;
L_088E2654:
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
L_088E2678:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(976));
    aot_gpr[31] = (0x088E2690u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    goto L_088E2538;
L_088E2690:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E269C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[6] & 2u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088E2714;
      }
      goto L_088E26E4;
    }
L_088E26E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2714;
      }
      goto L_088E26FC;
    }
L_088E26FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2720;
      }
      goto L_088E2714;
    }
L_088E2714:
    aot_gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(192), static_cast<std::uint16_t>(aot_gpr[21]));
      if (branch_taken) {
          goto L_088E2728;
      }
      goto L_088E2720;
    }
L_088E2720:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(192), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088E2728;
L_088E2728:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(192))))));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088E2898;
      }
      goto L_088E273C;
    }
L_088E273C:
    aot_gpr[4] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_088E2790;
      }
      goto L_088E274C;
    }
L_088E274C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E276C;
      }
      goto L_088E2768;
    }
L_088E2768:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(148)));
    goto L_088E276C;
L_088E276C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088E2794;
      }
      goto L_088E2784;
    }
L_088E2784:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088E2794;
      }
      goto L_088E278C;
    }
L_088E278C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(156)));
    goto L_088E2790;
L_088E2790:
    aot_gpr[4] = (2218u << 16u);
    goto L_088E2794;
L_088E2794:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088E27B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E27B4u) goto L_088E27B4;
    return;
L_088E27B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E285C;
      }
      goto L_088E27BC;
    }
L_088E27BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E285C;
      }
      goto L_088E27D4;
    }
L_088E27D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x088E27E0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 24u, 0x088C01E4u>(ctx, &aot_mem) && ctx.pc == 0x088E27E0u) goto L_088E27E0;
    return;
L_088E27E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E2844;
      }
      goto L_088E27F0;
    }
L_088E27F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x088E27FCu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 24u, 0x088C01E4u>(ctx, &aot_mem) && ctx.pc == 0x088E27FCu) goto L_088E27FC;
    return;
L_088E27FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088E2844;
      }
      goto L_088E2808;
    }
L_088E2808:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[23] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088E2828u);
    aot_gpr[22] = (aot_gpr[6] + aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 24u, 0x088C01E4u>(ctx, &aot_mem) && ctx.pc == 0x088E2828u) goto L_088E2828;
    return;
L_088E2828:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088E283Cu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E283Cu) goto L_088E283C;
    return;
L_088E283C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E285C;
      }
      goto L_088E2844;
    }
L_088E2844:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E27D4;
      }
      goto L_088E285C;
    }
L_088E285C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E2870u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 46u, 0x088C0344u>(ctx, &aot_mem) && ctx.pc == 0x088E2870u) goto L_088E2870;
    return;
L_088E2870:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[20] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(192))))));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E273C;
      }
      goto L_088E2898;
    }
L_088E2898:
    aot_gpr[31] = (0x088E28A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088E28A0u) goto L_088E28A0;
    return;
L_088E28A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088E28B4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 51u, 0x0891F41Cu>(ctx, &aot_mem) && ctx.pc == 0x088E28B4u) goto L_088E28B4;
    return;
L_088E28B4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2958:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[7] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(196), aot_gpr[7]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[23] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[6] << 5u);
      if (branch_taken) {
          goto L_088E2A24;
      }
      goto L_088E29A8;
    }
L_088E29A8:
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(360));
    aot_gpr[20] = (0u | 20u);
    aot_gpr[18] = (aot_gpr[6] << 6u);
    aot_gpr[17] = (0u | 21u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(488));
    aot_gpr[22] = (0u | 0u);
    goto L_088E29C4;
L_088E29C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088E29F0;
      }
      goto L_088E29DC;
    }
L_088E29DC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E29F0u);
    aot_gpr[7] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 71u, 0x08828AA8u>(ctx, &aot_mem) && ctx.pc == 0x088E29F0u) goto L_088E29F0;
    return;
L_088E29F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E2A10;
      }
      goto L_088E29FC;
    }
L_088E29FC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E2A10u);
    aot_gpr[7] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 71u, 0x08828AA8u>(ctx, &aot_mem) && ctx.pc == 0x088E2A10u) goto L_088E2A10;
    return;
L_088E2A10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E29C4;
      }
      goto L_088E2A24;
    }
L_088E2A24:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2A54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[22] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(196), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[8] << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 16u));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[21] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088E2AC4;
L_088E2AC4:
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088E2AF0;
      }
      goto L_088E2ACC;
    }
L_088E2ACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 16u));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088E2B60;
      }
      goto L_088E2AF0;
    }
L_088E2AF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2B60;
      }
      goto L_088E2B00;
    }
L_088E2B00:
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[23] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E2B20;
      }
      goto L_088E2B0C;
    }
L_088E2B0C:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088E2B18u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E2B18u) goto L_088E2B18;
    return;
L_088E2B18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E2B50;
      }
      goto L_088E2B20;
    }
L_088E2B20:
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[23] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E2B40;
      }
      goto L_088E2B2C;
    }
L_088E2B2C:
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x088E2B38u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E2B38u) goto L_088E2B38;
    return;
L_088E2B38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E2B50;
      }
      goto L_088E2B40;
    }
L_088E2B40:
    aot_gpr[6] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088E2B4Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E2B4Cu) goto L_088E2B4C;
    return;
L_088E2B4C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088E2B50;
L_088E2B50:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2B60;
      }
      goto L_088E2B58;
    }
L_088E2B58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_088E2B60;
L_088E2B60:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2BF0;
      }
      goto L_088E2B68;
    }
L_088E2B68:
    aot_gpr[6] = (aot_gpr[20] << 5u);
    aot_gpr[7] = (aot_gpr[20] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[30] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(620));
    goto L_088E2B8C;
L_088E2B8C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E2BF0;
      }
      goto L_088E2B94;
    }
L_088E2B94:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2BF0;
      }
      goto L_088E2B9C;
    }
L_088E2B9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_088E2BE0;
      }
      goto L_088E2BB4;
    }
L_088E2BB4:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2BCC;
      }
      goto L_088E2BBC;
    }
L_088E2BBC:
    aot_gpr[31] = (0x088E2BC4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 51u, 0x088D2538u>(ctx, &aot_mem) && ctx.pc == 0x088E2BC4u) goto L_088E2BC4;
    return;
L_088E2BC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088E2BD8;
      }
      goto L_088E2BCC;
    }
L_088E2BCC:
    aot_gpr[31] = (0x088E2BD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 106u, 0x088D2A18u>(ctx, &aot_mem) && ctx.pc == 0x088E2BD4u) goto L_088E2BD4;
    return;
L_088E2BD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_088E2BD8;
L_088E2BD8:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    goto L_088E2BE0;
L_088E2BE0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E2B8C;
      }
      goto L_088E2BF0;
    }
L_088E2BF0:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[23] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2AC4;
      }
      goto L_088E2C00;
    }
L_088E2C00:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C18;
      }
      goto L_088E2C08;
    }
L_088E2C08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C18;
      }
      goto L_088E2C14;
    }
L_088E2C14:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(616), aot_gpr[20]);
    goto L_088E2C18;
L_088E2C18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2C48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[5] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088E2C88u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E2C88u) goto L_088E2C88;
    return;
L_088E2C88:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_088E2D80;
      }
      goto L_088E2C90;
    }
L_088E2C90:
    aot_gpr[4] = (aot_gpr[4] | 4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E2CACu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E2CACu) goto L_088E2CAC;
    return;
L_088E2CAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[17] << 3u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[17]) < 4 ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(780));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[16] ? 1u : 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (1u << 16u);
    goto L_088E2CD8;
L_088E2CD8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2D78;
      }
      goto L_088E2CE0;
    }
L_088E2CE0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2D78;
      }
      goto L_088E2CE8;
    }
L_088E2CE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-11));
    aot_gpr[11] = (aot_gpr[10] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2D68;
      }
      goto L_088E2D08;
    }
L_088E2D08:
    aot_gpr[10] = (aot_gpr[10] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[10]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-32600)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2D20:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[10] = (aot_gpr[11] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088E2D68;
      }
      goto L_088E2D48;
    }
L_088E2D48:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[10] = (aot_gpr[11] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[10]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_088E2D68;
L_088E2D68:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E2CD8;
      }
      goto L_088E2D78;
    }
L_088E2D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2D8C;
      }
      goto L_088E2D80;
    }
L_088E2D80:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[4]);
    goto L_088E2D8C;
L_088E2D8C:
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
L_088E2DAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(194))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088E2DDCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E2DDCu) goto L_088E2DDC;
    return;
L_088E2DDC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_088E2E68;
      }
      goto L_088E2DE4;
    }
L_088E2DE4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E2E08u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E2E08u) goto L_088E2E08;
    return;
L_088E2E08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[16] << 2u);
      if (branch_taken) {
          goto L_088E2E60;
      }
      goto L_088E2E24;
    }
L_088E2E24:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[7]);
    aot_gpr[6] = (0u | 20u);
    aot_gpr[7] = (0u | 0u);
    goto L_088E2E30;
L_088E2E30:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E2E4C;
      }
      goto L_088E2E48;
    }
L_088E2E48:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(836), aot_gpr[8]);
    goto L_088E2E4C;
L_088E2E4C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E2E30;
      }
      goto L_088E2E60;
    }
L_088E2E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2E74;
      }
      goto L_088E2E68;
    }
L_088E2E68:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(196), aot_gpr[4]);
    goto L_088E2E74;
L_088E2E74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2E88:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2E98;
      }
      goto L_088E2E90;
    }
L_088E2E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2FC8;
      }
      goto L_088E2E98;
    }
L_088E2E98:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 255u);
      if (branch_taken) {
          goto L_088E2FC8;
      }
      goto L_088E2EB0;
    }
L_088E2EB0:
    aot_gpr[8] = (0u | 32u);
    aot_gpr[9] = (0u | 0u);
    goto L_088E2EB8;
L_088E2EB8:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088E2FB8;
      }
      goto L_088E2ED0;
    }
L_088E2ED0:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2FB8;
      }
      goto L_088E2EDC;
    }
L_088E2EDC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(32)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1020));
    goto L_088E2EEC;
L_088E2EEC:
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[11]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_088E2F00;
      }
      goto L_088E2EF8;
    }
L_088E2EF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088E2F04;
      }
      goto L_088E2F00;
    }
L_088E2F00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(52)));
    goto L_088E2F04;
L_088E2F04:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_gpr[12] = (aot_gpr[2] & 255u);
    aot_gpr[3] = (aot_gpr[3] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[3]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[3] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[2] >> 8u);
    aot_gpr[12] = (aot_gpr[12] & 255u);
    aot_gpr[13] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] >> 16u);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[14] = (static_cast<std::int32_t>(aot_gpr[11]) < 8 ? 1u : 0u);
    aot_gpr[15] = (ctx.lo);
    aot_gpr[15] = (aot_gpr[15] << 24u);
    aot_gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[15]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[15]));
    aot_gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
    aot_gpr[15] = (aot_gpr[15] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[12] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-4));
    aot_gpr[12] = (ctx.lo);
    aot_gpr[12] = (aot_gpr[12] << 24u);
    aot_gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[12]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[12]));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (aot_gpr[3] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[2] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[2] << 24u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 24u));
    { const bool branch_taken = aot_gpr[14] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_088E2EEC;
      }
      goto L_088E2FB4;
    }
L_088E2FB4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_088E2FB8;
L_088E2FB8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[5] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E2EB8;
      }
      goto L_088E2FC8;
    }
L_088E2FC8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2FD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 2u, 0x088E3008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 1u, 0x088E3004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0222(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0222_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_222(Runtime &runtime) {
    runtime.register_generated_unit(222u, 0x088E2000u, 4096u, &recomp_unit_0222, &recomp_unit_0222_entry);
    runtime.register_function(0x088E2000u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2020u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E202Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2040u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2054u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E205Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2068u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2078u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E208Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2090u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2094u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E20A0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E20ACu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E20BCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E20D0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E20D4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E20D8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E20E4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E20F0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2100u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2114u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2118u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E211Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2130u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E213Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2148u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2158u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E216Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2170u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2174u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2188u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2198u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E21A4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E21B0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E21C0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E21D4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E21D8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E21DCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E21F0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E21FCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2208u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2218u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E222Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2230u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2234u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2260u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E22ACu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E22B0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E22BCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E22CCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E22D0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E22ECu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E22F8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2300u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E230Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E231Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2320u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E232Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2334u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E233Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2344u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2350u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2360u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2364u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E236Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2370u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2378u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2384u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2390u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E23A0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E23B0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E23B4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E23C4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E23D0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E23DCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E23E8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E23F8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2408u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2410u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2418u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E242Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2438u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2444u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2454u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2458u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E245Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2494u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E24E8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2510u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2538u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E257Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2588u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E259Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E25A8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E25B0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E25BCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E25C8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E25D0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E25D8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E25E0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E25ECu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E25F8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2608u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2610u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E261Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2628u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2638u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2644u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2654u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2678u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2690u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E269Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E26E4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E26FCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2714u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2720u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2728u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E273Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E274Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2768u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E276Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2784u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E278Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2790u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2794u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E27B4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E27BCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E27D4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E27E0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E27F0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E27FCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2808u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2828u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E283Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2844u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E285Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2870u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2898u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E28A0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E28B4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2958u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E29A8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E29C4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E29DCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E29F0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E29FCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2A10u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2A24u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2A54u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2AC4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2ACCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2AF0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B00u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B0Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B18u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B20u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B2Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B38u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B40u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B4Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B50u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B58u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B60u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B68u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B8Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B94u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2B9Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2BB4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2BBCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2BC4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2BCCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2BD4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2BD8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2BE0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2BF0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2C00u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2C08u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2C14u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2C18u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2C48u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2C88u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2C90u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2CACu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2CD8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2CE0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2CE8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2D08u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2D20u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2D48u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2D68u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2D78u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2D80u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2D8Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2DACu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2DDCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2DE4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2E08u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2E24u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2E30u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2E48u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2E4Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2E60u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2E68u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2E74u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2E88u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2E90u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2E98u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2EB0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2EB8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2ED0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2EDCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2EECu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2EF8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2F00u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2F04u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2FB4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2FB8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2FC8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x088E2FD0u, &recomp_unit_0222, "recomp_unit_0222");
}
} // namespace psprecomp
