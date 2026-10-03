#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0134[1016] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 27, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 40, 0, 41, 0, 42, 0, 43, 44, 0, 0, 0, 0, 45, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 50, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0,
    68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 83, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0,
    90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99,
    0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116,
    0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 163, 0, 0, 0, 164, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176,
    0, 0, 177, 0, 0, 178, 0, 0, 179, 180, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 187, 188,
    0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0,
    0, 199, 0, 200, 201, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214,
};
void recomp_unit_0134_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0888A000u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0134[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0888A000;
    case 2u: goto L_0888A008;
    case 3u: goto L_0888A010;
    case 4u: goto L_0888A020;
    case 5u: goto L_0888A034;
    case 6u: goto L_0888A048;
    case 7u: goto L_0888A058;
    case 8u: goto L_0888A05C;
    case 9u: goto L_0888A080;
    case 10u: goto L_0888A098;
    case 11u: goto L_0888A0A0;
    case 12u: goto L_0888A0C0;
    case 13u: goto L_0888A0D4;
    case 14u: goto L_0888A0E8;
    case 15u: goto L_0888A100;
    case 16u: goto L_0888A114;
    case 17u: goto L_0888A120;
    case 18u: goto L_0888A138;
    case 19u: goto L_0888A14C;
    case 20u: goto L_0888A160;
    case 21u: goto L_0888A16C;
    case 22u: goto L_0888A178;
    case 23u: goto L_0888A190;
    case 24u: goto L_0888A1A4;
    case 25u: goto L_0888A1C8;
    case 26u: goto L_0888A1E4;
    case 27u: goto L_0888A1E8;
    case 28u: goto L_0888A214;
    case 29u: goto L_0888A220;
    case 30u: goto L_0888A238;
    case 31u: goto L_0888A244;
    case 32u: goto L_0888A268;
    case 33u: goto L_0888A274;
    case 34u: goto L_0888A288;
    case 35u: goto L_0888A2BC;
    case 36u: goto L_0888A2C4;
    case 37u: goto L_0888A2D4;
    case 38u: goto L_0888A2DC;
    case 39u: goto L_0888A2E8;
    case 40u: goto L_0888A304;
    case 41u: goto L_0888A30C;
    case 42u: goto L_0888A314;
    case 43u: goto L_0888A31C;
    case 44u: goto L_0888A320;
    case 45u: goto L_0888A334;
    case 46u: goto L_0888A338;
    case 47u: goto L_0888A348;
    case 48u: goto L_0888A358;
    case 49u: goto L_0888A360;
    case 50u: goto L_0888A368;
    case 51u: goto L_0888A36C;
    case 52u: goto L_0888A390;
    case 53u: goto L_0888A398;
    case 54u: goto L_0888A3A8;
    case 55u: goto L_0888A3BC;
    case 56u: goto L_0888A3C0;
    case 57u: goto L_0888A3C8;
    case 58u: goto L_0888A3D0;
    case 59u: goto L_0888A3D8;
    case 60u: goto L_0888A3F4;
    case 61u: goto L_0888A3FC;
    case 62u: goto L_0888A428;
    case 63u: goto L_0888A440;
    case 64u: goto L_0888A44C;
    case 65u: goto L_0888A458;
    case 66u: goto L_0888A464;
    case 67u: goto L_0888A478;
    case 68u: goto L_0888A480;
    case 69u: goto L_0888A490;
    case 70u: goto L_0888A498;
    case 71u: goto L_0888A4A8;
    case 72u: goto L_0888A4B0;
    case 73u: goto L_0888A4B8;
    case 74u: goto L_0888A4CC;
    case 75u: goto L_0888A4D4;
    case 76u: goto L_0888A4E8;
    case 77u: goto L_0888A4F0;
    case 78u: goto L_0888A524;
    case 79u: goto L_0888A538;
    case 80u: goto L_0888A540;
    case 81u: goto L_0888A554;
    case 82u: goto L_0888A568;
    case 83u: goto L_0888A56C;
    case 84u: goto L_0888A588;
    case 85u: goto L_0888A5A8;
    case 86u: goto L_0888A5B0;
    case 87u: goto L_0888A5E0;
    case 88u: goto L_0888A5EC;
    case 89u: goto L_0888A5F8;
    case 90u: goto L_0888A600;
    case 91u: goto L_0888A614;
    case 92u: goto L_0888A660;
    case 93u: goto L_0888A688;
    case 94u: goto L_0888A690;
    case 95u: goto L_0888A6A8;
    case 96u: goto L_0888A6B4;
    case 97u: goto L_0888A6D4;
    case 98u: goto L_0888A6E8;
    case 99u: goto L_0888A6FC;
    case 100u: goto L_0888A704;
    case 101u: goto L_0888A710;
    case 102u: goto L_0888A724;
    case 103u: goto L_0888A740;
    case 104u: goto L_0888A760;
    case 105u: goto L_0888A768;
    case 106u: goto L_0888A780;
    case 107u: goto L_0888A794;
    case 108u: goto L_0888A7AC;
    case 109u: goto L_0888A7B4;
    case 110u: goto L_0888A7C8;
    case 111u: goto L_0888A7DC;
    case 112u: goto L_0888A7FC;
    case 113u: goto L_0888A80C;
    case 114u: goto L_0888A84C;
    case 115u: goto L_0888A864;
    case 116u: goto L_0888A87C;
    case 117u: goto L_0888A884;
    case 118u: goto L_0888A89C;
    case 119u: goto L_0888A8B0;
    case 120u: goto L_0888A8B8;
    case 121u: goto L_0888A8D8;
    case 122u: goto L_0888A8FC;
    case 123u: goto L_0888A90C;
    case 124u: goto L_0888A91C;
    case 125u: goto L_0888A928;
    case 126u: goto L_0888A930;
    case 127u: goto L_0888A958;
    case 128u: goto L_0888A964;
    case 129u: goto L_0888A990;
    case 130u: goto L_0888A99C;
    case 131u: goto L_0888A9B8;
    case 132u: goto L_0888A9CC;
    case 133u: goto L_0888A9D8;
    case 134u: goto L_0888A9EC;
    case 135u: goto L_0888AA2C;
    case 136u: goto L_0888AA38;
    case 137u: goto L_0888AA44;
    case 138u: goto L_0888AA50;
    case 139u: goto L_0888AA54;
    case 140u: goto L_0888AA5C;
    case 141u: goto L_0888AA88;
    case 142u: goto L_0888AA94;
    case 143u: goto L_0888AAB0;
    case 144u: goto L_0888AAC4;
    case 145u: goto L_0888AAD0;
    case 146u: goto L_0888AAE4;
    case 147u: goto L_0888AB04;
    case 148u: goto L_0888AB10;
    case 149u: goto L_0888AB1C;
    case 150u: goto L_0888AB48;
    case 151u: goto L_0888AB54;
    case 152u: goto L_0888AB70;
    case 153u: goto L_0888AB84;
    case 154u: goto L_0888AB90;
    case 155u: goto L_0888ABA4;
    case 156u: goto L_0888ABF0;
    case 157u: goto L_0888AC0C;
    case 158u: goto L_0888AC14;
    case 159u: goto L_0888AC30;
    case 160u: goto L_0888AC54;
    case 161u: goto L_0888AC60;
    case 162u: goto L_0888AC7C;
    case 163u: goto L_0888AC88;
    case 164u: goto L_0888AC98;
    case 165u: goto L_0888AC9C;
    case 166u: goto L_0888ACA8;
    case 167u: goto L_0888ACB0;
    case 168u: goto L_0888ACCC;
    case 169u: goto L_0888AD18;
    case 170u: goto L_0888AD24;
    case 171u: goto L_0888AD3C;
    case 172u: goto L_0888AD48;
    case 173u: goto L_0888AD58;
    case 174u: goto L_0888AD64;
    case 175u: goto L_0888AD70;
    case 176u: goto L_0888AD7C;
    case 177u: goto L_0888AD88;
    case 178u: goto L_0888AD94;
    case 179u: goto L_0888ADA0;
    case 180u: goto L_0888ADA4;
    case 181u: goto L_0888ADAC;
    case 182u: goto L_0888ADB4;
    case 183u: goto L_0888ADC0;
    case 184u: goto L_0888ADD4;
    case 185u: goto L_0888ADE0;
    case 186u: goto L_0888ADF0;
    case 187u: goto L_0888ADF8;
    case 188u: goto L_0888ADFC;
    case 189u: goto L_0888AE04;
    case 190u: goto L_0888AE0C;
    case 191u: goto L_0888AE14;
    case 192u: goto L_0888AE20;
    case 193u: goto L_0888AE30;
    case 194u: goto L_0888AE3C;
    case 195u: goto L_0888AE48;
    case 196u: goto L_0888AE54;
    case 197u: goto L_0888AE68;
    case 198u: goto L_0888AE74;
    case 199u: goto L_0888AE84;
    case 200u: goto L_0888AE8C;
    case 201u: goto L_0888AE90;
    case 202u: goto L_0888AE94;
    case 203u: goto L_0888AEBC;
    case 204u: goto L_0888AF08;
    case 205u: goto L_0888AF14;
    case 206u: goto L_0888AF28;
    case 207u: goto L_0888AF34;
    case 208u: goto L_0888AF48;
    case 209u: goto L_0888AF54;
    case 210u: goto L_0888AF74;
    case 211u: goto L_0888AFA8;
    case 212u: goto L_0888AFC0;
    case 213u: goto L_0888AFCC;
    case 214u: goto L_0888AFDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0888A000:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A010;
      }
      goto L_0888A008;
    }
L_0888A008:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    goto L_0888A010;
L_0888A010:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0888A048;
      }
      goto L_0888A020;
    }
L_0888A020:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[31] = (0x0888A034u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 166u, 0x0888BA80u>(ctx, &aot_mem) && ctx.pc == 0x0888A034u) goto L_0888A034;
    return;
L_0888A034:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888A020;
      }
      goto L_0888A048;
    }
L_0888A048:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0888A0D4;
      }
      goto L_0888A058;
    }
L_0888A058:
    aot_gpr[20] = (4096u << 16u);
    goto L_0888A05C;
L_0888A05C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[20]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A0C0;
      }
      goto L_0888A080;
    }
L_0888A080:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & 128u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A0C0;
      }
      goto L_0888A098;
    }
L_0888A098:
    aot_gpr[31] = (0x0888A0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 255u, 0x0888BFD0u>(ctx, &aot_mem) && ctx.pc == 0x0888A0A0u) goto L_0888A0A0;
    return;
L_0888A0A0:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_0888A0C0;
L_0888A0C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888A05C;
      }
      goto L_0888A0D4;
    }
L_0888A0D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0888A114;
      }
      goto L_0888A0E8;
    }
L_0888A0E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0888A100u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 98u, 0x0888B6D0u>(ctx, &aot_mem) && ctx.pc == 0x0888A100u) goto L_0888A100;
    return;
L_0888A100:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888A0E8;
      }
      goto L_0888A114;
    }
L_0888A114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A138;
      }
      goto L_0888A120;
    }
L_0888A120:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0888A138u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888A138u) goto L_0888A138;
    return;
L_0888A138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0888A1A4;
      }
      goto L_0888A14C;
    }
L_0888A14C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 49u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x0888A160u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888A160u) goto L_0888A160;
    return;
L_0888A160:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A190;
      }
      goto L_0888A16C;
    }
L_0888A16C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A190;
      }
      goto L_0888A178;
    }
L_0888A178:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0888A190u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888A190u) goto L_0888A190;
    return;
L_0888A190:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888A14C;
      }
      goto L_0888A1A4;
    }
L_0888A1A4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A1C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
      if (branch_taken) {
          goto L_0888A214;
      }
      goto L_0888A1E4;
    }
L_0888A1E4:
    aot_gpr[6] = (0u | 0u);
    goto L_0888A1E8;
L_0888A1E8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888A1E8;
      }
      goto L_0888A214;
    }
L_0888A214:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A238;
      }
      goto L_0888A220;
    }
L_0888A220:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0888A238u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888A238u) goto L_0888A238;
    return;
L_0888A238:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A244:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0888A268u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 207u, 0x0888BCE8u>(ctx, &aot_mem) && ctx.pc == 0x0888A268u) goto L_0888A268;
    return;
L_0888A268:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A274:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A288:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0888A2BCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0888A2BCu) goto L_0888A2BC;
    return;
L_0888A2BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A320;
      }
      goto L_0888A2C4;
    }
L_0888A2C4:
    aot_gpr[21] = (4096u << 16u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (61440u << 16u);
    goto L_0888A2D4;
L_0888A2D4:
    aot_gpr[31] = (0x0888A2DCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0888A2DCu) goto L_0888A2DC;
    return;
L_0888A2DC:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A314;
      }
      goto L_0888A2E8;
    }
L_0888A2E8:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[18] = (aot_gpr[18] << 4u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] & aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_0888A30C;
      }
      goto L_0888A304;
    }
L_0888A304:
    aot_gpr[18] = (aot_gpr[18] ^ aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] & aot_gpr[21]);
    goto L_0888A30C;
L_0888A30C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888A2D4;
      }
      goto L_0888A314;
    }
L_0888A314:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A320;
      }
      goto L_0888A31C;
    }
L_0888A31C:
    aot_gpr[18] = (0u | 1u);
    goto L_0888A320;
L_0888A320:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A368;
      }
      goto L_0888A334;
    }
L_0888A334:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0888A338;
L_0888A338:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0888A360;
      }
      goto L_0888A348;
    }
L_0888A348:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888A338;
      }
      goto L_0888A358;
    }
L_0888A358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A368;
      }
      goto L_0888A360;
    }
L_0888A360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A36C;
      }
      goto L_0888A368;
    }
L_0888A368:
    aot_gpr[2] = (0u | 0u);
    goto L_0888A36C;
L_0888A36C:
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
L_0888A390:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0888A3BC;
      }
      goto L_0888A398;
    }
L_0888A398:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A3BC;
      }
      goto L_0888A3A8;
    }
L_0888A3A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888A3C0;
      }
      goto L_0888A3BC;
    }
L_0888A3BC:
    aot_gpr[2] = (0u | 0u);
    goto L_0888A3C0;
L_0888A3C0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A3C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A3D0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A3D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0888A464;
      }
      goto L_0888A3F4;
    }
L_0888A3F4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A428;
      }
      goto L_0888A3FC;
    }
L_0888A3FC:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888A464;
      }
      goto L_0888A428;
    }
L_0888A428:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x0888A440u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 146u, 0x08918D74u>(ctx, &aot_mem) && ctx.pc == 0x0888A440u) goto L_0888A440;
    return;
L_0888A440:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[31] = (0x0888A44Cu);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 158u, 0x08918FB8u>(ctx, &aot_mem) && ctx.pc == 0x0888A44Cu) goto L_0888A44C;
    return;
L_0888A44C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[31] = (0x0888A458u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 161u, 0x08918FF0u>(ctx, &aot_mem) && ctx.pc == 0x0888A458u) goto L_0888A458;
    return;
L_0888A458:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[31] = (0x0888A464u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 1u, 0x08919000u>(ctx, &aot_mem) && ctx.pc == 0x0888A464u) goto L_0888A464;
    return;
L_0888A464:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A478:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A490;
      }
      goto L_0888A480;
    }
L_0888A480:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (8192u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_0888A490;
L_0888A490:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4A8;
      }
      goto L_0888A498;
    }
L_0888A498:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0888A4A8;
L_0888A4A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A4B0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4CC;
      }
      goto L_0888A4B8;
    }
L_0888A4B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (57344u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_0888A4CC;
L_0888A4CC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A4E8;
      }
      goto L_0888A4D4;
    }
L_0888A4D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0888A4E8;
L_0888A4E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A4F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0888A568;
      }
      goto L_0888A524;
    }
L_0888A524:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 47u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x0888A538u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888A538u) goto L_0888A538;
    return;
L_0888A538:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A554;
      }
      goto L_0888A540;
    }
L_0888A540:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_0888A56C;
      }
      goto L_0888A554;
    }
L_0888A554:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888A524;
      }
      goto L_0888A568;
    }
L_0888A568:
    aot_gpr[2] = (0u | 0u);
    goto L_0888A56C;
L_0888A56C:
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
L_0888A588:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26032), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A5A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A5B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0888A600;
      }
      goto L_0888A5E0;
    }
L_0888A5E0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888A5ECu);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888A5ECu) goto L_0888A5EC;
    return;
L_0888A5EC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888A5F8u);
    aot_gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888A5F8u) goto L_0888A5F8;
    return;
L_0888A5F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_0888A600;
L_0888A600:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A614:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[31] = (0x0888A660u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888A660u) goto L_0888A660;
    return;
L_0888A660:
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr[24] = aot_fpr[24] - aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[24] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0888A6A8;
      }
      goto L_0888A688;
    }
L_0888A688:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0888A80C;
      }
      goto L_0888A690;
    }
L_0888A690:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888A80C;
      }
      goto L_0888A6A8;
    }
L_0888A6A8:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[20];
    aot_gpr[18] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888A6D4;
      }
      goto L_0888A6B4;
    }
L_0888A6B4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0888A6D4;
L_0888A6D4:
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0888A6E8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 89u, 0x08944CB8u>(ctx, &aot_mem) && ctx.pc == 0x0888A6E8u) goto L_0888A6E8;
    return;
L_0888A6E8:
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0888A6FCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 89u, 0x08944CB8u>(ctx, &aot_mem) && ctx.pc == 0x0888A6FCu) goto L_0888A6FC;
    return;
L_0888A6FC:
    aot_gpr[31] = (0x0888A704u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 86u, 0x08944C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A704u) goto L_0888A704;
    return;
L_0888A704:
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x0888A710u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 86u, 0x08944C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A710u) goto L_0888A710;
    return;
L_0888A710:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[24] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_0888A794;
      }
      goto L_0888A724;
    }
L_0888A724:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[24] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A80C;
      }
      goto L_0888A740;
    }
L_0888A740:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_0888A780;
      }
      goto L_0888A760;
    }
L_0888A760:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888A80C;
      }
      goto L_0888A768;
    }
L_0888A768:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888A80C;
      }
      goto L_0888A780;
    }
L_0888A780:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] / aot_fpr[20];
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888A80C;
      }
      goto L_0888A794;
    }
L_0888A794:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888A7C8;
      }
      goto L_0888A7AC;
    }
L_0888A7AC:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0888A80C;
      }
      goto L_0888A7B4;
    }
L_0888A7B4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888A80C;
      }
      goto L_0888A7C8;
    }
L_0888A7C8:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888A7DCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 91u, 0x08944CF8u>(ctx, &aot_mem) && ctx.pc == 0x0888A7DCu) goto L_0888A7DC;
    return;
L_0888A7DC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = aot_fpr[20] / aot_fpr[12];
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888A7FCu);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 90u, 0x08944CDCu>(ctx, &aot_mem) && ctx.pc == 0x0888A7FCu) goto L_0888A7FC;
    return;
L_0888A7FC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888A80Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x0888A80Cu) goto L_0888A80C;
    return;
L_0888A80C:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A84C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0888A87C;
      }
      goto L_0888A864;
    }
L_0888A864:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[2] = (0u | 1u);
    goto L_0888A87C;
L_0888A87C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A884:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0888A8B0;
      }
      goto L_0888A89C;
    }
L_0888A89C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[2] = (0u | 1u);
    goto L_0888A8B0;
L_0888A8B0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A8B8:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_fpr[17] = __builtin_bit_cast(float, 0u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[16];
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0888A8FC;
      }
      goto L_0888A8D8;
    }
L_0888A8D8:
    aot_fpr[17] = aot_fpr[12] - aot_fpr[14];
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[13] = aot_fpr[17] / aot_fpr[13];
    aot_fpr[15] = aot_fpr[16] + aot_fpr[15];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = aot_fpr[15] - aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888A928;
      }
      goto L_0888A8FC;
    }
L_0888A8FC:
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[14] - aot_fpr[13];
        goto L_0888A91C;
    }
    goto L_0888A90C;
L_0888A90C:
    aot_gpr[4] = (0u | 1u);
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0888A928;
      }
      goto L_0888A91C;
    }
L_0888A91C:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[0] = aot_fpr[12] / aot_fpr[15];
    aot_fpr[0] = aot_fpr[13] + aot_fpr[0];
    goto L_0888A928;
L_0888A928:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A930:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0888A958u);
    aot_gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888A958u) goto L_0888A958;
    return;
L_0888A958:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0888AA2C;
      }
      goto L_0888A964;
    }
L_0888A964:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (65280u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (20224u << 16u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_0888A99C;
      }
      goto L_0888A990;
    }
L_0888A990:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    goto L_0888A99C;
L_0888A99C:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[31] = (0x0888A9B8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0888A8B8;
L_0888A9B8:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888A9D8;
      }
      goto L_0888A9CC;
    }
L_0888A9CC:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888A9EC;
      }
      goto L_0888A9D8;
    }
L_0888A9D8:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[18];
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_0888A9EC;
L_0888A9EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (256u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0888ABF0;
      }
      goto L_0888AA2C;
    }
L_0888AA2C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888AA38u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888AA38u) goto L_0888AA38;
    return;
L_0888AA38:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AA54;
      }
      goto L_0888AA44;
    }
L_0888AA44:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888AA50u);
    aot_gpr[5] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888AA50u) goto L_0888AA50;
    return;
L_0888AA50:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_0888AA54;
L_0888AA54:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AB04;
      }
      goto L_0888AA5C;
    }
L_0888AA5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (65280u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (20224u << 16u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_0888AA94;
      }
      goto L_0888AA88;
    }
L_0888AA88:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    goto L_0888AA94;
L_0888AA94:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[31] = (0x0888AAB0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0888A8B8;
L_0888AAB0:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888AAD0;
      }
      goto L_0888AAC4;
    }
L_0888AAC4:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888AAE4;
      }
      goto L_0888AAD0;
    }
L_0888AAD0:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[18];
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_0888AAE4;
L_0888AAE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (256u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_0888ABF0;
      }
      goto L_0888AB04;
    }
L_0888AB04:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888AB10u);
    aot_gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888AB10u) goto L_0888AB10;
    return;
L_0888AB10:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ABF0;
      }
      goto L_0888AB1C;
    }
L_0888AB1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (65280u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (20224u << 16u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_0888AB54;
      }
      goto L_0888AB48;
    }
L_0888AB48:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    goto L_0888AB54;
L_0888AB54:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[31] = (0x0888AB70u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0888A8B8;
L_0888AB70:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888AB90;
      }
      goto L_0888AB84;
    }
L_0888AB84:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888ABA4;
      }
      goto L_0888AB90;
    }
L_0888AB90:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[18];
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_0888ABA4;
L_0888ABA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0888ABF0;
L_0888ABF0:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_0888AC0C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888AC14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0888AC30u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888AC30u) goto L_0888AC30;
    return;
L_0888AC30:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0888AC60;
      }
      goto L_0888AC54;
    }
L_0888AC54:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888ACB0;
      }
      goto L_0888AC60;
    }
L_0888AC60:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[16]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0888ACA8;
      }
      goto L_0888AC7C;
    }
L_0888AC7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AC98;
      }
      goto L_0888AC88;
    }
L_0888AC88:
    aot_fpr[14] = aot_fpr[15] + aot_fpr[14];
    aot_fpr[14] = aot_fpr[14] - aot_fpr[16];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0888AC9C;
      }
      goto L_0888AC98;
    }
L_0888AC98:
    aot_gpr[2] = (0u | 1u);
    goto L_0888AC9C;
L_0888AC9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888ACB0;
      }
      goto L_0888ACA8;
    }
L_0888ACA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0888ACB0;
L_0888ACB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888ACCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    aot_gpr[18] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0888AE04;
      }
      goto L_0888AD18;
    }
L_0888AD18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0888AE94;
      }
      goto L_0888AD24;
    }
L_0888AD24:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888AE94;
      }
      goto L_0888AD3C;
    }
L_0888AD3C:
    aot_gpr[22] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0888AD48u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888AD48u) goto L_0888AD48;
    return;
L_0888AD48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888AD58u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 204u, 0x08893DACu>(ctx, &aot_mem) && ctx.pc == 0x0888AD58u) goto L_0888AD58;
    return;
L_0888AD58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[22];
    aot_gpr[21] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888ADA4;
      }
      goto L_0888AD64;
    }
L_0888AD64:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0888AD70u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888A274;
L_0888AD70:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ADA4;
      }
      goto L_0888AD7C;
    }
L_0888AD7C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888AD88u);
    aot_gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888AD88u) goto L_0888AD88;
    return;
L_0888AD88:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888ADA4;
      }
      goto L_0888AD94;
    }
L_0888AD94:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888ADA0u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888ADA0u) goto L_0888ADA0;
    return;
L_0888ADA0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_0888ADA4;
L_0888ADA4:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ADF8;
      }
      goto L_0888ADAC;
    }
L_0888ADAC:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ADF8;
      }
      goto L_0888ADB4;
    }
L_0888ADB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0888ADC0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 209u, 0x08893DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888ADC0u) goto L_0888ADC0;
    return;
L_0888ADC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888ADF0;
      }
      goto L_0888ADD4;
    }
L_0888ADD4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ADF0;
      }
      goto L_0888ADE0;
    }
L_0888ADE0:
    aot_gpr[4] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_0888ADF0;
L_0888ADF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ADFC;
      }
      goto L_0888ADF8;
    }
L_0888ADF8:
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    goto L_0888ADFC;
L_0888ADFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0888AE94;
      }
      goto L_0888AE04;
    }
L_0888AE04:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0888AE94;
      }
      goto L_0888AE0C;
    }
L_0888AE0C:
    aot_gpr[31] = (0x0888AE14u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888AE14u) goto L_0888AE14;
    return;
L_0888AE14:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AE90;
      }
      goto L_0888AE20;
    }
L_0888AE20:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888AE90;
      }
      goto L_0888AE30;
    }
L_0888AE30:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888AE3Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 204u, 0x08893DACu>(ctx, &aot_mem) && ctx.pc == 0x0888AE3Cu) goto L_0888AE3C;
    return;
L_0888AE3C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AE8C;
      }
      goto L_0888AE48;
    }
L_0888AE48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0888AE54u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 209u, 0x08893DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888AE54u) goto L_0888AE54;
    return;
L_0888AE54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888AE84;
      }
      goto L_0888AE68;
    }
L_0888AE68:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AE84;
      }
      goto L_0888AE74;
    }
L_0888AE74:
    aot_gpr[4] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_0888AE84;
L_0888AE84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AE90;
      }
      goto L_0888AE8C;
    }
L_0888AE8C:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    goto L_0888AE90;
L_0888AE90:
    aot_gpr[2] = (0u | 1u);
    goto L_0888AE94;
L_0888AE94:
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
L_0888AEBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_fpr[22] = aot_fpr[22] - aot_fpr[12];
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x0888AF08u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888AF08u) goto L_0888AF08;
    return;
L_0888AF08:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888AF14u);
    aot_gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888AF14u) goto L_0888AF14;
    return;
L_0888AF14:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888AF34;
      }
      goto L_0888AF28;
    }
L_0888AF28:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 3u, 0x0888B024u>(ctx, &aot_mem); return;
      }
      goto L_0888AF34;
    }
L_0888AF34:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0888AFCC;
      }
      goto L_0888AF48;
    }
L_0888AF48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AFC0;
      }
      goto L_0888AF54;
    }
L_0888AF54:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[22];
    aot_gpr[19] = (2218u << 16u);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x0888AF74u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AF74u) goto L_0888AF74;
    return;
L_0888AF74:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = aot_fpr[0] - aot_fpr[22];
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7324)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x0888AFA8u);
    aot_fpr[20] = aot_fpr[20] + aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AFA8u) goto L_0888AFA8;
    return;
L_0888AFA8:
    aot_fpr[14] = aot_fpr[0] - aot_fpr[22];
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = aot_fpr[26] + aot_fpr[22];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 3u, 0x0888B024u>(ctx, &aot_mem); return;
      }
      goto L_0888AFC0;
    }
L_0888AFC0:
    aot_gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 3u, 0x0888B024u>(ctx, &aot_mem); return;
      }
      goto L_0888AFCC;
    }
L_0888AFCC:
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x0888AFDCu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AFDCu) goto L_0888AFDC;
    return;
L_0888AFDC:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = aot_fpr[0] - aot_fpr[22];
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7324)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x0888B000u; return;
}

void recomp_unit_0134(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0134_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_134(Runtime &runtime) {
    runtime.register_generated_unit(134u, 0x0888A000u, 4096u, &recomp_unit_0134, &recomp_unit_0134_entry);
    runtime.register_function(0x0888A000u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A008u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A010u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A020u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A034u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A048u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A058u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A05Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A080u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A098u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A0A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A0C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A0D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A0E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A100u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A114u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A120u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A138u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A14Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A160u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A16Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A178u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A190u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A1A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A1C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A1E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A1E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A214u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A220u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A238u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A244u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A268u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A274u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A288u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A2BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A2C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A2D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A2DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A2E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A304u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A30Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A314u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A31Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A320u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A334u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A338u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A348u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A358u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A360u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A368u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A36Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A390u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A398u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A3A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A3BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A3C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A3C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A3D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A3D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A3F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A3FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A428u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A440u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A44Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A458u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A464u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A478u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A480u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A490u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A498u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A4A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A4B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A4B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A4CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A4D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A4E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A4F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A524u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A538u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A540u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A554u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A568u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A56Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A588u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A5A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A5B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A5E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A5ECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A5F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A600u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A614u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A660u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A688u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A690u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A6A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A6B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A6D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A6E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A6FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A704u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A710u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A724u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A740u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A760u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A768u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A780u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A794u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A7ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A7B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A7C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A7DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A7FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A80Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A84Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A864u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A87Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A884u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A89Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A8B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A8B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A8D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A8FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A90Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A91Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A928u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A930u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A958u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A964u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A990u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A99Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A9B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A9CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A9D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888A9ECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AA2Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AA38u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AA44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AA50u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AA54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AA5Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AA88u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AA94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AAB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AAC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AAD0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AAE4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AB04u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AB10u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AB1Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AB48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AB54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AB70u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AB84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AB90u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ABA4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ABF0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AC0Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AC14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AC30u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AC54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AC60u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AC7Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AC88u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AC98u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AC9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ACA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ACB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ACCCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AD18u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AD24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AD3Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AD48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AD58u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AD64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AD70u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AD7Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AD88u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AD94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ADA0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ADA4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ADACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ADB4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ADC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ADD4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ADE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ADF0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ADF8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888ADFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE04u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE0Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE20u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE30u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE3Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE68u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE90u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AE94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AEBCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AF08u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AF14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AF28u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AF34u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AF48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AF54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AF74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AFA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AFC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AFCCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x0888AFDCu, &recomp_unit_0134, "recomp_unit_0134");
}
} // namespace psprecomp
