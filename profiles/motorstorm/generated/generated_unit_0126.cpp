#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0126[1023] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 74,
    0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 94, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 123, 0, 124, 125, 0, 126, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165,
};
void recomp_unit_0126_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08882000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0126[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08882000;
    case 2u: goto L_08882010;
    case 3u: goto L_08882028;
    case 4u: goto L_08882040;
    case 5u: goto L_08882058;
    case 6u: goto L_08882070;
    case 7u: goto L_08882088;
    case 8u: goto L_08882090;
    case 9u: goto L_088820A8;
    case 10u: goto L_088820C0;
    case 11u: goto L_088820D8;
    case 12u: goto L_088820F0;
    case 13u: goto L_088820F8;
    case 14u: goto L_08882110;
    case 15u: goto L_08882128;
    case 16u: goto L_08882140;
    case 17u: goto L_08882158;
    case 18u: goto L_08882170;
    case 19u: goto L_08882188;
    case 20u: goto L_088821A0;
    case 21u: goto L_088821B8;
    case 22u: goto L_088821D0;
    case 23u: goto L_088821E8;
    case 24u: goto L_08882200;
    case 25u: goto L_08882218;
    case 26u: goto L_08882230;
    case 27u: goto L_08882248;
    case 28u: goto L_08882260;
    case 29u: goto L_08882278;
    case 30u: goto L_08882290;
    case 31u: goto L_088822A8;
    case 32u: goto L_088822C0;
    case 33u: goto L_088822D8;
    case 34u: goto L_088822F0;
    case 35u: goto L_08882308;
    case 36u: goto L_08882314;
    case 37u: goto L_0888234C;
    case 38u: goto L_08882364;
    case 39u: goto L_0888237C;
    case 40u: goto L_08882394;
    case 41u: goto L_088823AC;
    case 42u: goto L_088823C4;
    case 43u: goto L_088823DC;
    case 44u: goto L_088823E4;
    case 45u: goto L_088823EC;
    case 46u: goto L_08882404;
    case 47u: goto L_0888241C;
    case 48u: goto L_08882424;
    case 49u: goto L_0888243C;
    case 50u: goto L_08882454;
    case 51u: goto L_08882464;
    case 52u: goto L_08882474;
    case 53u: goto L_088824A0;
    case 54u: goto L_088824A8;
    case 55u: goto L_088824DC;
    case 56u: goto L_08882500;
    case 57u: goto L_08882534;
    case 58u: goto L_08882544;
    case 59u: goto L_0888254C;
    case 60u: goto L_08882578;
    case 61u: goto L_088825A0;
    case 62u: goto L_088825AC;
    case 63u: goto L_088825CC;
    case 64u: goto L_088825E0;
    case 65u: goto L_088825E8;
    case 66u: goto L_08882624;
    case 67u: goto L_08882678;
    case 68u: goto L_08882680;
    case 69u: goto L_088826C0;
    case 70u: goto L_088826CC;
    case 71u: goto L_088826DC;
    case 72u: goto L_088826E8;
    case 73u: goto L_088826F0;
    case 74u: goto L_088826FC;
    case 75u: goto L_0888270C;
    case 76u: goto L_08882720;
    case 77u: goto L_08882730;
    case 78u: goto L_08882738;
    case 79u: goto L_08882740;
    case 80u: goto L_08882750;
    case 81u: goto L_08882758;
    case 82u: goto L_08882768;
    case 83u: goto L_0888277C;
    case 84u: goto L_08882798;
    case 85u: goto L_088827A4;
    case 86u: goto L_088827AC;
    case 87u: goto L_088827C0;
    case 88u: goto L_088827F0;
    case 89u: goto L_08882808;
    case 90u: goto L_08882834;
    case 91u: goto L_08882854;
    case 92u: goto L_08882874;
    case 93u: goto L_08882890;
    case 94u: goto L_088828A0;
    case 95u: goto L_088828A4;
    case 96u: goto L_088828B4;
    case 97u: goto L_088828E8;
    case 98u: goto L_08882904;
    case 99u: goto L_08882920;
    case 100u: goto L_08882934;
    case 101u: goto L_08882954;
    case 102u: goto L_08882974;
    case 103u: goto L_08882994;
    case 104u: goto L_08882A08;
    case 105u: goto L_08882A20;
    case 106u: goto L_08882A34;
    case 107u: goto L_08882A48;
    case 108u: goto L_08882A5C;
    case 109u: goto L_08882A98;
    case 110u: goto L_08882AA4;
    case 111u: goto L_08882ADC;
    case 112u: goto L_08882B04;
    case 113u: goto L_08882B18;
    case 114u: goto L_08882B24;
    case 115u: goto L_08882B3C;
    case 116u: goto L_08882B48;
    case 117u: goto L_08882B54;
    case 118u: goto L_08882B60;
    case 119u: goto L_08882B70;
    case 120u: goto L_08882BAC;
    case 121u: goto L_08882BD0;
    case 122u: goto L_08882BDC;
    case 123u: goto L_08882BE0;
    case 124u: goto L_08882BE8;
    case 125u: goto L_08882BEC;
    case 126u: goto L_08882BF4;
    case 127u: goto L_08882C28;
    case 128u: goto L_08882C34;
    case 129u: goto L_08882C3C;
    case 130u: goto L_08882C40;
    case 131u: goto L_08882C48;
    case 132u: goto L_08882C54;
    case 133u: goto L_08882CAC;
    case 134u: goto L_08882CC0;
    case 135u: goto L_08882CD8;
    case 136u: goto L_08882D18;
    case 137u: goto L_08882D20;
    case 138u: goto L_08882D6C;
    case 139u: goto L_08882D70;
    case 140u: goto L_08882D98;
    case 141u: goto L_08882DA4;
    case 142u: goto L_08882DBC;
    case 143u: goto L_08882DC4;
    case 144u: goto L_08882DD4;
    case 145u: goto L_08882DE0;
    case 146u: goto L_08882DF0;
    case 147u: goto L_08882E00;
    case 148u: goto L_08882E28;
    case 149u: goto L_08882E5C;
    case 150u: goto L_08882E64;
    case 151u: goto L_08882E7C;
    case 152u: goto L_08882E88;
    case 153u: goto L_08882EAC;
    case 154u: goto L_08882EB8;
    case 155u: goto L_08882ED4;
    case 156u: goto L_08882ED8;
    case 157u: goto L_08882EE8;
    case 158u: goto L_08882F10;
    case 159u: goto L_08882F80;
    case 160u: goto L_08882F94;
    case 161u: goto L_08882FA4;
    case 162u: goto L_08882FC4;
    case 163u: goto L_08882FD0;
    case 164u: goto L_08882FEC;
    case 165u: goto L_08882FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08882000:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08882010u);
    aot_gpr[8] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882010u) goto L_08882010;
    return;
L_08882010:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[11] | 0u);
    aot_gpr[31] = (0x08882028u);
    aot_gpr[8] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882028u) goto L_08882028;
    return;
L_08882028:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08882040u);
    aot_gpr[8] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882040u) goto L_08882040;
    return;
L_08882040:
    aot_gpr[4] = (0u | 15u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[12] | 0u);
    aot_gpr[31] = (0x08882058u);
    aot_gpr[8] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882058u) goto L_08882058;
    return;
L_08882058:
    aot_gpr[4] = (0u | 18u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 4096u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882070u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882070u) goto L_08882070;
    return;
L_08882070:
    aot_gpr[4] = (0u | 19u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 8192u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882088u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882088u) goto L_08882088;
    return;
L_08882088:
    { const bool branch_taken = aot_gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_088820F8;
      }
      goto L_08882090;
    }
L_08882090:
    aot_gpr[4] = (0u | 21u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 16384u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088820A8u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088820A8u) goto L_088820A8;
    return;
L_088820A8:
    aot_gpr[4] = (0u | 20u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088820C0u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088820C0u) goto L_088820C0;
    return;
L_088820C0:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 256u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088820D8u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088820D8u) goto L_088820D8;
    return;
L_088820D8:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 512u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088820F0u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088820F0u) goto L_088820F0;
    return;
L_088820F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882158;
      }
      goto L_088820F8;
    }
L_088820F8:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 16384u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882110u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882110u) goto L_08882110;
    return;
L_08882110:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882128u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882128u) goto L_08882128;
    return;
L_08882128:
    aot_gpr[4] = (0u | 20u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 256u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882140u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882140u) goto L_08882140;
    return;
L_08882140:
    aot_gpr[4] = (0u | 21u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 512u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882158u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882158u) goto L_08882158;
    return;
L_08882158:
    aot_gpr[4] = (0u | 22u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882170u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882170u) goto L_08882170;
    return;
L_08882170:
    aot_gpr[4] = (0u | 23u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882188u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882188u) goto L_08882188;
    return;
L_08882188:
    aot_gpr[4] = (0u | 24u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088821A0u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088821A0u) goto L_088821A0;
    return;
L_088821A0:
    aot_gpr[4] = (0u | 25u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088821B8u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088821B8u) goto L_088821B8;
    return;
L_088821B8:
    aot_gpr[4] = (0u | 26u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088821D0u);
    aot_gpr[8] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088821D0u) goto L_088821D0;
    return;
L_088821D0:
    aot_gpr[4] = (0u | 27u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 64u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088821E8u);
    aot_gpr[8] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088821E8u) goto L_088821E8;
    return;
L_088821E8:
    aot_gpr[4] = (0u | 28u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 128u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882200u);
    aot_gpr[8] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882200u) goto L_08882200;
    return;
L_08882200:
    aot_gpr[4] = (0u | 29u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 32u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882218u);
    aot_gpr[8] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882218u) goto L_08882218;
    return;
L_08882218:
    aot_gpr[4] = (0u | 34u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 8192u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882230u);
    aot_gpr[8] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882230u) goto L_08882230;
    return;
L_08882230:
    aot_gpr[4] = (0u | 35u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882248u);
    aot_gpr[8] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882248u) goto L_08882248;
    return;
L_08882248:
    aot_gpr[4] = (0u | 36u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 4096u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882260u);
    aot_gpr[8] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882260u) goto L_08882260;
    return;
L_08882260:
    aot_gpr[4] = (0u | 37u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 16384u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882278u);
    aot_gpr[8] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882278u) goto L_08882278;
    return;
L_08882278:
    aot_gpr[4] = (0u | 30u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08882290u);
    aot_gpr[8] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882290u) goto L_08882290;
    return;
L_08882290:
    aot_gpr[4] = (0u | 31u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[11] | 0u);
    aot_gpr[31] = (0x088822A8u);
    aot_gpr[8] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088822A8u) goto L_088822A8;
    return;
L_088822A8:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[12] | 0u);
    aot_gpr[31] = (0x088822C0u);
    aot_gpr[8] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088822C0u) goto L_088822C0;
    return;
L_088822C0:
    aot_gpr[4] = (0u | 33u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x088822D8u);
    aot_gpr[8] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088822D8u) goto L_088822D8;
    return;
L_088822D8:
    aot_gpr[4] = (0u | 38u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 256u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088822F0u);
    aot_gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088822F0u) goto L_088822F0;
    return;
L_088822F0:
    aot_gpr[4] = (0u | 39u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 512u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882308u);
    aot_gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882308u) goto L_08882308;
    return;
L_08882308:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882314:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[16] = (0u | 32768u);
    aot_gpr[20] = (1u << 16u);
    aot_gpr[19] = (2u << 16u);
    aot_gpr[18] = (4u << 16u);
    aot_gpr[17] = (8u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    goto L_0888234C;
L_0888234C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08882364u);
    aot_gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882364u) goto L_08882364;
    return;
L_08882364:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 64u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0888237Cu);
    aot_gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x0888237Cu) goto L_0888237C;
    return;
L_0888237C:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 128u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08882394u);
    aot_gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882394u) goto L_08882394;
    return;
L_08882394:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 32u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088823ACu);
    aot_gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088823ACu) goto L_088823AC;
    return;
L_088823AC:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088823C4u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088823C4u) goto L_088823C4;
    return;
L_088823C4:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 4096u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088823DCu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x088823DCu) goto L_088823DC;
    return;
L_088823DC:
    aot_gpr[31] = (0x088823E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 128u, 0x089438FCu>(ctx, &aot_mem) && ctx.pc == 0x088823E4u) goto L_088823E4;
    return;
L_088823E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882424;
      }
      goto L_088823EC;
    }
L_088823EC:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 16384u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882404u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882404u) goto L_08882404;
    return;
L_08882404:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 8192u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0888241Cu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x0888241Cu) goto L_0888241C;
    return;
L_0888241C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882454;
      }
      goto L_08882424;
    }
L_08882424:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 8192u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0888243Cu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x0888243Cu) goto L_0888243C;
    return;
L_0888243C:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 16384u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08882454u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 168u, 0x08881E78u>(ctx, &aot_mem) && ctx.pc == 0x08882454u) goto L_08882454;
    return;
L_08882454:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08882464u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 169u, 0x08881EA4u>(ctx, &aot_mem) && ctx.pc == 0x08882464u) goto L_08882464;
    return;
L_08882464:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888234C;
      }
      goto L_08882474;
    }
L_08882474:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7824), static_cast<std::uint8_t>(0u));
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
L_088824A0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088824A8:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[11] = (2218u << 16u);
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[13] = (2218u << 16u);
    aot_gpr[14] = (0u | 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-6544));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(-6976));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(7584));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(7784));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7744));
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(5296));
    goto L_088824DC;
L_088824DC:
    aot_gpr[4] = (aot_gpr[14] + aot_gpr[13]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[8] = (aot_gpr[14] << 2u);
    aot_gpr[12] = (0u | 0u);
    aot_gpr[2] = (aot_gpr[14] + aot_gpr[3]);
    aot_gpr[10] = (aot_gpr[14] + aot_gpr[11]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[14] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[14] + aot_gpr[5]);
    goto L_08882500;
L_08882500:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[15] = (static_cast<std::int32_t>(aot_gpr[12]) < 40 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[15] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882500;
      }
      goto L_08882534;
    }
L_08882534:
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[14]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088824DC;
      }
      goto L_08882544;
    }
L_08882544:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888254C:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6976));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7744));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088825A0;
      }
      goto L_08882578;
    }
L_08882578:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(7584));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(7828)));
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_088825E0;
      }
      goto L_088825A0;
    }
L_088825A0:
    aot_gpr[7] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088825E0;
      }
      goto L_088825AC;
    }
L_088825AC:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(7584));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) > 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_088825E0;
      }
      goto L_088825CC;
    }
L_088825CC:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(7832)));
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    goto L_088825E0;
L_088825E0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088825E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7824)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882678;
      }
      goto L_08882624;
    }
L_08882624:
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7104));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7784));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6544));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5296));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6976));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-6560));
      if (branch_taken) {
          goto L_08882680;
      }
      goto L_08882678;
    }
L_08882678:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7824), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088827C0;
      }
      goto L_08882680;
    }
L_08882680:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[21]);
    aot_gpr[30] = (aot_gpr[21] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[21] + aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[21] + aot_gpr[18]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[4]);
    goto L_088826C0;
L_088826C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[23];
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088826F0;
      }
      goto L_088826CC;
    }
L_088826CC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088826DCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 94u, 0x089347FCu>(ctx, &aot_mem) && ctx.pc == 0x088826DCu) goto L_088826DC;
    return;
L_088826DC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088826F0;
      }
      goto L_088826E8;
    }
L_088826E8:
    aot_gpr[16] = (0u | 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088826F0;
L_088826F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_08882730;
      }
      goto L_088826FC;
    }
L_088826FC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888270Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 94u, 0x089347FCu>(ctx, &aot_mem) && ctx.pc == 0x0888270Cu) goto L_0888270C;
    return;
L_0888270C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882730;
      }
      goto L_08882720;
    }
L_08882720:
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[16] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08882730;
L_08882730:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08882758;
      }
      goto L_08882738;
    }
L_08882738:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882750;
      }
      goto L_08882740;
    }
L_08882740:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08882768;
      }
      goto L_08882750;
    }
L_08882750:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08882768;
      }
      goto L_08882758;
    }
L_08882758:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 4u);
        goto L_08882768;
    }
    goto L_08882768;
L_08882768:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[16]));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0888277Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_0888254C;
L_0888277C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 40 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088826C0;
      }
      goto L_08882798;
    }
L_08882798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088827AC;
      }
      goto L_088827A4;
    }
L_088827A4:
    aot_gpr[31] = (0x088827ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 164u, 0x08943B64u>(ctx, &aot_mem) && ctx.pc == 0x088827ACu) goto L_088827AC;
    return;
L_088827AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08882680;
      }
      goto L_088827C0;
    }
L_088827C0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088827F0:
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7744));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882808:
    aot_gpr[5] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(7828), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (2218u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7832), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882834:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25784), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882854:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882874:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088828A4;
      }
      goto L_08882890;
    }
L_08882890:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088828A0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 125u, 0x08A4D910u>(ctx, &aot_mem) && ctx.pc == 0x088828A0u) goto L_088828A0;
    return;
L_088828A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_088828A4;
L_088828A4:
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088828B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088828E8u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088828E8u) goto L_088828E8;
    return;
L_088828E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882934;
      }
      goto L_08882904;
    }
L_08882904:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[5] << 6u);
    aot_gpr[31] = (0x08882920u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08882920u) goto L_08882920;
    return;
L_08882920:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08882934;
L_08882934:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08882954:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25792), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882974:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25800), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882994:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-224));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7860), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7864), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[16] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7868), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[31] = (0x08882A08u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08882A08u) goto L_08882A08;
    return;
L_08882A08:
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(7836), aot_gpr[2]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08882A20u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08882A20u) goto L_08882A20;
    return;
L_08882A20:
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(7840), aot_gpr[2]);
    aot_gpr[31] = (0x08882A34u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08882A34u) goto L_08882A34;
    return;
L_08882A34:
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(7844), aot_gpr[2]);
    aot_gpr[31] = (0x08882A48u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08882A48u) goto L_08882A48;
    return;
L_08882A48:
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(7848), aot_gpr[2]);
    aot_gpr[31] = (0x08882A5Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08882A5Cu) goto L_08882A5C;
    return;
L_08882A5C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7852), aot_gpr[2]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(7836)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(7840)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(7844)));
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(7848)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (48373u << 16u);
      if (branch_taken) {
          goto L_08882CD8;
      }
      goto L_08882A98;
    }
L_08882A98:
    aot_gpr[4] = (aot_gpr[4] | 49807u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[23] = (2218u << 16u);
    goto L_08882AA4;
L_08882AA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[22] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[5]);
      if (branch_taken) {
          goto L_08882B18;
      }
      goto L_08882ADC;
    }
L_08882ADC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08882B04u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08882B04u) goto L_08882B04;
    return;
L_08882B04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-3948)));
      if (branch_taken) {
          goto L_08882B24;
      }
      goto L_08882B18;
    }
L_08882B18:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-3948)));
    goto L_08882B24;
L_08882B24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[5]);
    aot_gpr[31] = (0x08882B3Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08882B3Cu) goto L_08882B3C;
    return;
L_08882B3C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882BE0;
      }
      goto L_08882B48;
    }
L_08882B48:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x08882B54u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x08882B54u) goto L_08882B54;
    return;
L_08882B54:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882BE0;
      }
      goto L_08882B60;
    }
L_08882B60:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08882B70u);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08882B70u) goto L_08882B70;
    return;
L_08882B70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    aot_gpr[4] = (24948u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    aot_gpr[6] = (20563u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20575));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08882BACu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08882BACu) goto L_08882BAC;
    return;
L_08882BAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08882BD0u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08882BD0u) goto L_08882BD0;
    return;
L_08882BD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (0x08882BDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08882BDCu) goto L_08882BDC;
    return;
L_08882BDC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08882BE0;
L_08882BE0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08882BEC;
      }
      goto L_08882BE8;
    }
L_08882BE8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08882BEC;
L_08882BEC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882CAC;
      }
      goto L_08882BF4;
    }
L_08882BF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[20] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08882C28u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08882C28u) goto L_08882C28;
    return;
L_08882C28:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882C40;
      }
      goto L_08882C34;
    }
L_08882C34:
    aot_gpr[31] = (0x08882C3Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08882C3Cu) goto L_08882C3C;
    return;
L_08882C3C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08882C40;
L_08882C40:
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), aot_gpr[18]);
      if (branch_taken) {
          goto L_08882C54;
      }
      goto L_08882C48;
    }
L_08882C48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_08882C54;
L_08882C54:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 10u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (256u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[5] = (aot_gpr[6] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] | 2048u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[5] = (4u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08882CC0;
      }
      goto L_08882CAC;
    }
L_08882CAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[20] = (aot_gpr[22] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    goto L_08882CC0;
L_08882CC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[4]);
      if (branch_taken) {
          goto L_08882AA4;
      }
      goto L_08882CD8;
    }
L_08882CD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7856), aot_gpr[4]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882D18:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882D20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(7856)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08882DBC;
      }
      goto L_08882D6C;
    }
L_08882D6C:
    aot_gpr[20] = (0u | 0u);
    goto L_08882D70;
L_08882D70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(7836)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(7844)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x08882D98u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08882D98u) goto L_08882D98;
    return;
L_08882D98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08882DA4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08882DA4u) goto L_08882DA4;
    return;
L_08882DA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(7856)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_08882D70;
      }
      goto L_08882DBC;
    }
L_08882DBC:
    aot_gpr[31] = (0x08882DC4u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(7836));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08882DC4u) goto L_08882DC4;
    return;
L_08882DC4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08882DD4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7840));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08882DD4u) goto L_08882DD4;
    return;
L_08882DD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08882DE0u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(7844));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08882DE0u) goto L_08882DE0;
    return;
L_08882DE0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08882DF0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7848));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08882DF0u) goto L_08882DF0;
    return;
L_08882DF0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08882E00u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7852));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08882E00u) goto L_08882E00;
    return;
L_08882E00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882E28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3952)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882E64;
      }
      goto L_08882E5C;
    }
L_08882E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882EE8;
      }
      goto L_08882E64;
    }
L_08882E64:
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(7856)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_08882EE8;
      }
      goto L_08882E7C;
    }
L_08882E7C:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7848)));
    aot_gpr[19] = (2218u << 16u);
    goto L_08882E88;
L_08882E88:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(7836)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882ED8;
      }
      goto L_08882EAC;
    }
L_08882EAC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08882EB8u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 151u, 0x08883BF4u>(ctx, &aot_mem) && ctx.pc == 0x08882EB8u) goto L_08882EB8;
    return;
L_08882EB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7848)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882EAC;
      }
      goto L_08882ED4;
    }
L_08882ED4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(7856)));
    goto L_08882ED8;
L_08882ED8:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08882E88;
      }
      goto L_08882EE8;
    }
L_08882EE8:
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
L_08882F10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[30] = (2216u << 16u);
    aot_gpr[23] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 4u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[7] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x08882F80u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08882F80u) goto L_08882F80;
    return;
L_08882F80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(7856)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 4u, 0x08883028u>(ctx, &aot_mem); return;
      }
      goto L_08882F94;
    }
L_08882F94:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    goto L_08882FA4;
L_08882FA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(7836)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(7844)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 3u, 0x08883018u>(ctx, &aot_mem); return;
      }
      goto L_08882FC4;
    }
L_08882FC4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08882FD0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x08882FD0u) goto L_08882FD0;
    return;
L_08882FD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(7848)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 2u, 0x08883014u>(ctx, &aot_mem); return;
      }
      goto L_08882FEC;
    }
L_08882FEC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08882FF8u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08883D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08882FF8u) goto L_08882FF8;
    return;
L_08882FF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(7848)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08883000u; return;
}

void recomp_unit_0126(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0126_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_126(Runtime &runtime) {
    runtime.register_generated_unit(126u, 0x08882000u, 4096u, &recomp_unit_0126, &recomp_unit_0126_entry);
    runtime.register_function(0x08882000u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882010u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882028u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882040u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882058u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882070u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882088u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882090u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088820A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088820C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088820D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088820F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088820F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882110u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882128u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882140u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882158u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882170u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882188u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088821A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088821B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088821D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088821E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882200u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882218u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882230u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882248u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882260u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882278u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882290u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088822A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088822C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088822D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088822F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882308u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882314u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x0888234Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882364u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x0888237Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882394u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088823ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088823C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088823DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088823E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088823ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882404u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x0888241Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882424u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x0888243Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882454u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882464u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882474u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088824A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088824A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088824DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882500u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882534u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882544u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x0888254Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882578u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088825A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088825ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088825CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088825E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088825E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882624u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882678u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882680u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088826C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088826CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088826DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088826E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088826F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088826FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x0888270Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882720u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882730u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882738u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882740u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882750u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882758u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882768u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x0888277Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882798u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088827A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088827ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088827C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088827F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882808u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882834u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882854u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882874u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882890u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088828A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088828A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088828B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x088828E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882904u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882920u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882934u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882954u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882974u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882994u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882A08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882A20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882A34u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882A48u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882A5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882A98u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882AA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882ADCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882B04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882B18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882B24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882B3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882B48u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882B54u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882B60u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882B70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882BACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882BD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882BDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882BE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882BE8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882BECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882BF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882C28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882C34u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882C3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882C40u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882C48u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882C54u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882CACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882CC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882CD8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882D18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882D20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882D6Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882D70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882D98u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882DA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882DBCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882DC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882DD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882DE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882DF0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882E00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882E28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882E5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882E64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882E7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882E88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882EACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882EB8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882ED4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882ED8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882EE8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882F10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882F80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882F94u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882FA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882FC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882FD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882FECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x08882FF8u, &recomp_unit_0126, "recomp_unit_0126");
}
} // namespace psprecomp
