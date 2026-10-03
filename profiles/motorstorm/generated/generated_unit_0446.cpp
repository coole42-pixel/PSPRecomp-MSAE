#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0446[1024] = {
    1, 0, 0, 2, 0, 0, 0, 3, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0,
    11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0,
    0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 30, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 46, 47, 0, 0,
    48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0,
    56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0,
    0, 0, 65, 0, 66, 0, 0, 67, 68, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 74,
    0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    79, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 96, 0, 0, 0, 0,
    0, 0, 97, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 106,
    0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 112, 0, 0, 0, 0, 113, 0, 114, 115, 0, 0, 0, 0, 116, 117,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0,
    0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 136, 0, 0, 0, 0, 0, 0, 137, 138, 0, 139, 0, 0, 0, 0,
    0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 150, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178,
    0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191,
};
void recomp_unit_0446_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089C2000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0446[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C2000;
    case 2u: goto L_089C200C;
    case 3u: goto L_089C201C;
    case 4u: goto L_089C2020;
    case 5u: goto L_089C2030;
    case 6u: goto L_089C2044;
    case 7u: goto L_089C204C;
    case 8u: goto L_089C2060;
    case 9u: goto L_089C206C;
    case 10u: goto L_089C2078;
    case 11u: goto L_089C2080;
    case 12u: goto L_089C2088;
    case 13u: goto L_089C20A8;
    case 14u: goto L_089C20B0;
    case 15u: goto L_089C20F4;
    case 16u: goto L_089C2124;
    case 17u: goto L_089C212C;
    case 18u: goto L_089C2140;
    case 19u: goto L_089C2164;
    case 20u: goto L_089C2188;
    case 21u: goto L_089C2198;
    case 22u: goto L_089C21A4;
    case 23u: goto L_089C21B4;
    case 24u: goto L_089C21BC;
    case 25u: goto L_089C21F0;
    case 26u: goto L_089C21F8;
    case 27u: goto L_089C2204;
    case 28u: goto L_089C220C;
    case 29u: goto L_089C2214;
    case 30u: goto L_089C2230;
    case 31u: goto L_089C2234;
    case 32u: goto L_089C2250;
    case 33u: goto L_089C2258;
    case 34u: goto L_089C22B0;
    case 35u: goto L_089C22CC;
    case 36u: goto L_089C22F0;
    case 37u: goto L_089C22F8;
    case 38u: goto L_089C2320;
    case 39u: goto L_089C2328;
    case 40u: goto L_089C2364;
    case 41u: goto L_089C2394;
    case 42u: goto L_089C23A4;
    case 43u: goto L_089C23B0;
    case 44u: goto L_089C23CC;
    case 45u: goto L_089C23E4;
    case 46u: goto L_089C23F0;
    case 47u: goto L_089C23F4;
    case 48u: goto L_089C2400;
    case 49u: goto L_089C2410;
    case 50u: goto L_089C2418;
    case 51u: goto L_089C2438;
    case 52u: goto L_089C243C;
    case 53u: goto L_089C245C;
    case 54u: goto L_089C2464;
    case 55u: goto L_089C2478;
    case 56u: goto L_089C2480;
    case 57u: goto L_089C248C;
    case 58u: goto L_089C2498;
    case 59u: goto L_089C24A0;
    case 60u: goto L_089C24A8;
    case 61u: goto L_089C24B0;
    case 62u: goto L_089C24DC;
    case 63u: goto L_089C24E8;
    case 64u: goto L_089C24F0;
    case 65u: goto L_089C2508;
    case 66u: goto L_089C2510;
    case 67u: goto L_089C251C;
    case 68u: goto L_089C2520;
    case 69u: goto L_089C2524;
    case 70u: goto L_089C2538;
    case 71u: goto L_089C2568;
    case 72u: goto L_089C2570;
    case 73u: goto L_089C2578;
    case 74u: goto L_089C257C;
    case 75u: goto L_089C2588;
    case 76u: goto L_089C2590;
    case 77u: goto L_089C25D4;
    case 78u: goto L_089C25E8;
    case 79u: goto L_089C2600;
    case 80u: goto L_089C2604;
    case 81u: goto L_089C2610;
    case 82u: goto L_089C2620;
    case 83u: goto L_089C2664;
    case 84u: goto L_089C268C;
    case 85u: goto L_089C2694;
    case 86u: goto L_089C26A8;
    case 87u: goto L_089C26CC;
    case 88u: goto L_089C26D4;
    case 89u: goto L_089C26F4;
    case 90u: goto L_089C26FC;
    case 91u: goto L_089C272C;
    case 92u: goto L_089C273C;
    case 93u: goto L_089C2748;
    case 94u: goto L_089C2754;
    case 95u: goto L_089C2768;
    case 96u: goto L_089C276C;
    case 97u: goto L_089C2788;
    case 98u: goto L_089C278C;
    case 99u: goto L_089C27A8;
    case 100u: goto L_089C27B8;
    case 101u: goto L_089C27D0;
    case 102u: goto L_089C27D8;
    case 103u: goto L_089C27E4;
    case 104u: goto L_089C27EC;
    case 105u: goto L_089C27F4;
    case 106u: goto L_089C27FC;
    case 107u: goto L_089C2804;
    case 108u: goto L_089C280C;
    case 109u: goto L_089C2828;
    case 110u: goto L_089C2834;
    case 111u: goto L_089C2840;
    case 112u: goto L_089C2844;
    case 113u: goto L_089C2858;
    case 114u: goto L_089C2860;
    case 115u: goto L_089C2864;
    case 116u: goto L_089C2878;
    case 117u: goto L_089C287C;
    case 118u: goto L_089C289C;
    case 119u: goto L_089C28A4;
    case 120u: goto L_089C28D8;
    case 121u: goto L_089C2900;
    case 122u: goto L_089C2908;
    case 123u: goto L_089C2920;
    case 124u: goto L_089C293C;
    case 125u: goto L_089C2964;
    case 126u: goto L_089C296C;
    case 127u: goto L_089C2974;
    case 128u: goto L_089C2984;
    case 129u: goto L_089C298C;
    case 130u: goto L_089C29A0;
    case 131u: goto L_089C29C0;
    case 132u: goto L_089C29E8;
    case 133u: goto L_089C2A20;
    case 134u: goto L_089C2A34;
    case 135u: goto L_089C2A40;
    case 136u: goto L_089C2A44;
    case 137u: goto L_089C2A60;
    case 138u: goto L_089C2A64;
    case 139u: goto L_089C2A6C;
    case 140u: goto L_089C2A88;
    case 141u: goto L_089C2A90;
    case 142u: goto L_089C2ABC;
    case 143u: goto L_089C2AC8;
    case 144u: goto L_089C2AD4;
    case 145u: goto L_089C2AE0;
    case 146u: goto L_089C2AEC;
    case 147u: goto L_089C2BCC;
    case 148u: goto L_089C2BD8;
    case 149u: goto L_089C2BE8;
    case 150u: goto L_089C2BEC;
    case 151u: goto L_089C2C0C;
    case 152u: goto L_089C2C18;
    case 153u: goto L_089C2C20;
    case 154u: goto L_089C2C28;
    case 155u: goto L_089C2C30;
    case 156u: goto L_089C2C3C;
    case 157u: goto L_089C2C50;
    case 158u: goto L_089C2C78;
    case 159u: goto L_089C2C9C;
    case 160u: goto L_089C2CB0;
    case 161u: goto L_089C2CB8;
    case 162u: goto L_089C2CC4;
    case 163u: goto L_089C2CFC;
    case 164u: goto L_089C2D18;
    case 165u: goto L_089C2D20;
    case 166u: goto L_089C2D4C;
    case 167u: goto L_089C2D54;
    case 168u: goto L_089C2D84;
    case 169u: goto L_089C2D8C;
    case 170u: goto L_089C2DAC;
    case 171u: goto L_089C2DDC;
    case 172u: goto L_089C2DEC;
    case 173u: goto L_089C2E14;
    case 174u: goto L_089C2E30;
    case 175u: goto L_089C2E5C;
    case 176u: goto L_089C2E80;
    case 177u: goto L_089C2EF4;
    case 178u: goto L_089C2EFC;
    case 179u: goto L_089C2F08;
    case 180u: goto L_089C2F1C;
    case 181u: goto L_089C2F28;
    case 182u: goto L_089C2F30;
    case 183u: goto L_089C2F38;
    case 184u: goto L_089C2F44;
    case 185u: goto L_089C2F4C;
    case 186u: goto L_089C2F74;
    case 187u: goto L_089C2F84;
    case 188u: goto L_089C2FAC;
    case 189u: goto L_089C2FC8;
    case 190u: goto L_089C2FF4;
    case 191u: goto L_089C2FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C2000:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089C2020;
    }
    goto L_089C200C;
L_089C200C:
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089C201C;
L_089C201C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089C2020;
L_089C2020:
    aot_gpr[2] = (aot_gpr[8] & 65535u);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 198u, 0x089C1FF0u>(ctx, &aot_mem); return;
      }
      goto L_089C2030;
    }
L_089C2030:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C2044u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C2044u) goto L_089C2044;
    return;
L_089C2044:
    aot_gpr[4] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 195u, 0x089C1F90u>(ctx, &aot_mem); return;
L_089C204C:
    aot_gpr[6] = (0u + 0u);
    aot_gpr[8] = (0u | 65535u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_089C2060;
L_089C2060:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[8];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C2078;
      }
      goto L_089C206C;
    }
L_089C206C:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    goto L_089C2078;
L_089C2078:
    if (aot_gpr[4] != aot_gpr[7]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(4)));
        goto L_089C2060;
    }
    goto L_089C2080;
L_089C2080:
    if (aot_gpr[6] == 0u) {
    aot_gpr[4] = (0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 195u, 0x089C1F90u>(ctx, &aot_mem); return;
    }
    goto L_089C2088;
L_089C2088:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[10] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089C20A8u);
    aot_gpr[11] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089C20A8u) goto L_089C20A8;
    return;
L_089C20A8:
    aot_gpr[4] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 195u, 0x089C1F90u>(ctx, &aot_mem); return;
L_089C20B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(11));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x089C20F4u);
    aot_gpr[17] = (aot_gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C20F4u) goto L_089C20F4;
    return;
L_089C20F4:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[31] = (0x089C2124u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 137u, 0x089CCB70u>(ctx, &aot_mem) && ctx.pc == 0x089C2124u) goto L_089C2124;
    return;
L_089C2124:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C2140;
      }
      goto L_089C212C;
    }
L_089C212C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_089C2140;
L_089C2140:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_089C2164:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[9] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
      if (branch_taken) {
          goto L_089C2230;
      }
      goto L_089C2188;
    }
L_089C2188:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (aot_gpr[9] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C2234;
      }
      goto L_089C2198;
    }
L_089C2198:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089C2234;
      }
      goto L_089C21A4;
    }
L_089C21A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C2230;
      }
      goto L_089C21B4;
    }
L_089C21B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C2234;
      }
      goto L_089C21BC;
    }
L_089C21BC:
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[3] = (aot_gpr[6] << 6u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(488), aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089C21F0u);
    aot_gpr[9] = (aot_gpr[29] + 0u);
    goto L_089C20B0;
L_089C21F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C2234;
      }
      goto L_089C21F8;
    }
L_089C21F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C2250;
      }
      goto L_089C2204;
    }
L_089C2204:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C220Cu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C220Cu) goto L_089C220C;
    return;
L_089C220C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089C2234;
      }
      goto L_089C2214;
    }
L_089C2214:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2230:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C2234;
L_089C2234:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2250:
    aot_gpr[17] = (0u | 54509u);
    goto L_089C2234;
L_089C2258:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[2] = (aot_gpr[17] << 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[3] = (aot_gpr[17] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[20] = (aot_gpr[8] + aot_gpr[3]);
    aot_gpr[31] = (0x089C22B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C22B0u) goto L_089C22B0;
    return;
L_089C22B0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u | 54509u);
      if (branch_taken) {
          goto L_089C22F0;
      }
      goto L_089C22CC;
    }
L_089C22CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C22F0:
    aot_gpr[31] = (0x089C22F8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C22F8u) goto L_089C22F8;
    return;
L_089C22F8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(6));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[31] = (0x089C2320u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 102u, 0x089CC8C8u>(ctx, &aot_mem) && ctx.pc == 0x089C2320u) goto L_089C2320;
    return;
L_089C2320:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C22CC;
      }
      goto L_089C2328;
    }
L_089C2328:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2364:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089C24A8;
      }
      goto L_089C2394;
    }
L_089C2394:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C2418;
      }
      goto L_089C23A4;
    }
L_089C23A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089C2418;
      }
      goto L_089C23B0;
    }
L_089C23B0:
    aot_gpr[2] = (aot_gpr[17] << 4u);
    aot_gpr[3] = (aot_gpr[17] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089C23CCu);
    aot_gpr[18] = (aot_gpr[7] + aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C23CCu) goto L_089C23CC;
    return;
L_089C23CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089C2464;
      }
      goto L_089C23E4;
    }
L_089C23E4:
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089C2438;
      }
      goto L_089C23F0;
    }
L_089C23F0:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089C23F4;
L_089C23F4:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    goto L_089C2400;
L_089C2400:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[5]));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[4];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C2400;
      }
      goto L_089C2410;
    }
L_089C2410:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), 0u);
    goto L_089C2418;
L_089C2418:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2438:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089C243C;
L_089C243C:
    aot_gpr[3] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089C243C;
    }
    goto L_089C245C;
L_089C245C:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089C23F4;
L_089C2464:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089C2478u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    goto L_089C2258;
L_089C2478:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C2418;
      }
      goto L_089C2480;
    }
L_089C2480:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 54509u);
      if (branch_taken) {
          goto L_089C2418;
      }
      goto L_089C248C;
    }
L_089C248C:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C2498u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C2498u) goto L_089C2498;
    return;
L_089C2498:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C2418;
      }
      goto L_089C24A0;
    }
L_089C24A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089C23E4;
L_089C24A8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C2418;
L_089C24B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089C2520;
      }
      goto L_089C24DC;
    }
L_089C24DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C251C;
      }
      goto L_089C24E8;
    }
L_089C24E8:
    aot_gpr[31] = (0x089C24F0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C24F0u) goto L_089C24F0;
    return;
L_089C24F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089C251C;
      }
      goto L_089C2508;
    }
L_089C2508:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089C251C;
      }
      goto L_089C2510;
    }
L_089C2510:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089C2538;
      }
      goto L_089C251C;
    }
L_089C251C:
    aot_gpr[2] = (0u + 0u);
    goto L_089C2520;
L_089C2520:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089C2524;
L_089C2524:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2538:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[3] & 65535u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] & 255u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C257C;
      }
      goto L_089C2568;
    }
L_089C2568:
    aot_gpr[31] = (0x089C2570u);
    // nop
    goto L_089C2364;
L_089C2570:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089C2524;
      }
      goto L_089C2578;
    }
L_089C2578:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    goto L_089C257C;
L_089C257C:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089C2538;
    }
    goto L_089C2588;
L_089C2588:
    aot_gpr[2] = (0u + 0u);
    goto L_089C2520;
L_089C2590:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[31] = (0x089C25D4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C25D4u) goto L_089C25D4;
    return;
L_089C25D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 54509u);
      if (branch_taken) {
          goto L_089C26A8;
      }
      goto L_089C25E8;
    }
L_089C25E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[17] << 4u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (aot_gpr[2] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089C26CC;
      }
      goto L_089C2600;
    }
L_089C2600:
    aot_gpr[2] = (aot_gpr[7] + 0u);
    goto L_089C2604;
L_089C2604:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    goto L_089C2610;
L_089C2610:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[5]));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[4];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C2610;
      }
      goto L_089C2620;
    }
L_089C2620:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[3] << 6u);
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[31] = (0x089C2664u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C2664u) goto L_089C2664;
    return;
L_089C2664:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(6));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[31] = (0x089C268Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 89u, 0x089CC7B4u>(ctx, &aot_mem) && ctx.pc == 0x089C268Cu) goto L_089C268C;
    return;
L_089C268C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C26A8;
      }
      goto L_089C2694;
    }
L_089C2694:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(68), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089C26A8;
L_089C26A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C26CC:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089C26D4;
L_089C26D4:
    aot_gpr[3] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_089C26D4;
    }
    goto L_089C26F4;
L_089C26F4:
    aot_gpr[2] = (aot_gpr[7] + 0u);
    goto L_089C2604;
L_089C26FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089C27FC;
      }
      goto L_089C272C;
    }
L_089C272C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C2788;
      }
      goto L_089C273C;
    }
L_089C273C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089C2788;
      }
      goto L_089C2748;
    }
L_089C2748:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C2754u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C2754u) goto L_089C2754;
    return;
L_089C2754:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C27A8;
      }
      goto L_089C2768;
    }
L_089C2768:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089C276C;
L_089C276C:
    aot_gpr[3] = (aot_gpr[17] << 4u);
    aot_gpr[2] = (aot_gpr[17] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    goto L_089C2788;
L_089C2788:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089C278C;
L_089C278C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C27A8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-8));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089C276C;
    }
    goto L_089C27B8;
L_089C27B8:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089C27D0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    goto L_089C2590;
L_089C27D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C2788;
      }
      goto L_089C27D8;
    }
L_089C27D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C2804;
      }
      goto L_089C27E4;
    }
L_089C27E4:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C27ECu);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C27ECu) goto L_089C27EC;
    return;
L_089C27EC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (aot_gpr[2] + 0u);
        goto L_089C2788;
    }
    goto L_089C27F4;
L_089C27F4:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089C278C;
L_089C27FC:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C2788;
L_089C2804:
    aot_gpr[18] = (0u | 54509u);
    goto L_089C2788;
L_089C280C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089C2844;
      }
      goto L_089C2828;
    }
L_089C2828:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089C2840;
      }
      goto L_089C2834;
    }
L_089C2834:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089C287C;
      }
      goto L_089C2840;
    }
L_089C2840:
    aot_gpr[2] = (0u + 0u);
    goto L_089C2844;
L_089C2844:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2858:
    aot_gpr[31] = (0x089C2860u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), 0u);
    goto L_089C26FC;
L_089C2860:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(88)));
    goto L_089C2864;
L_089C2864:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[2] & 255u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089C2840;
      }
      goto L_089C2878;
    }
L_089C2878:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_089C287C;
L_089C287C:
    aot_gpr[2] = (aot_gpr[3] << 4u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089C2864;
      }
      goto L_089C289C;
    }
L_089C289C:
    // nop
    goto L_089C2858;
L_089C28A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089C28D8u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C28D8u) goto L_089C28D8;
    return;
L_089C28D8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[31] = (0x089C2900u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 83u, 0x089CC730u>(ctx, &aot_mem) && ctx.pc == 0x089C2900u) goto L_089C2900;
    return;
L_089C2900:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C2920;
      }
      goto L_089C2908;
    }
L_089C2908:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_089C2920;
L_089C2920:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_089C293C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C298C;
      }
      goto L_089C2964;
    }
L_089C2964:
    aot_gpr[31] = (0x089C296Cu);
    // nop
    goto L_089C28A4;
L_089C296C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C298C;
      }
      goto L_089C2974;
    }
L_089C2974:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u | 54509u);
      if (branch_taken) {
          goto L_089C298C;
      }
      goto L_089C2984;
    }
L_089C2984:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089C298Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C298Cu) goto L_089C298C;
    return;
L_089C298C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C29A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[31] = (0x089C29C0u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089C29C0u) goto L_089C29C0;
    return;
L_089C29C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] & 2047u);
    aot_gpr[3] = ((aot_gpr[3] >> 11u) & 0x0000001Fu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C29E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
      if (branch_taken) {
          goto L_089C2A60;
      }
      goto L_089C2A20;
    }
L_089C2A20:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089C2A34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C2A34u) goto L_089C2A34;
    return;
L_089C2A34:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(6) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C2A64;
      }
      goto L_089C2A40;
    }
L_089C2A40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089C2A44;
L_089C2A44:
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
L_089C2A60:
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    goto L_089C2A64;
L_089C2A64:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089C2A44;
      }
      goto L_089C2A6C;
    }
L_089C2A6C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[18] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13072));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2A88:
    aot_gpr[2] = (2204u << 16u);
    aot_gpr[25] = (aot_gpr[2] + static_cast<std::uint32_t>(13528));
    goto L_089C2A90;
L_089C2A90:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[25];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2ABC:
    aot_gpr[2] = (2204u << 16u);
    aot_gpr[25] = (aot_gpr[2] + static_cast<std::uint32_t>(12744));
    goto L_089C2A90;
L_089C2AC8:
    aot_gpr[2] = (2204u << 16u);
    aot_gpr[25] = (aot_gpr[2] + static_cast<std::uint32_t>(12720));
    goto L_089C2A90;
L_089C2AD4:
    aot_gpr[2] = (2204u << 16u);
    aot_gpr[25] = (aot_gpr[2] + static_cast<std::uint32_t>(12732));
    goto L_089C2A90;
L_089C2AE0:
    aot_gpr[2] = (2204u << 16u);
    aot_gpr[25] = (aot_gpr[2] + static_cast<std::uint32_t>(12436));
    goto L_089C2A90;
L_089C2AEC:
    aot_gpr[2] = (2204u << 16u);
    aot_gpr[25] = (aot_gpr[2] + static_cast<std::uint32_t>(30876));
    goto L_089C2A90;
L_089C2BCC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2C20;
      }
      goto L_089C2BD8;
    }
L_089C2BD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089C2C28;
      }
      goto L_089C2BE8;
    }
L_089C2BE8:
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089C2BEC;
L_089C2BEC:
    aot_gpr[6] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (aot_gpr[6] << 3u);
    aot_gpr[2] = (aot_gpr[6] << 6u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[3] << 3u);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[6];
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
      if (branch_taken) {
          goto L_089C2C20;
      }
      goto L_089C2C0C;
    }
L_089C2C0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(436)));
    if (aot_gpr[5] != aot_gpr[2]) {
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
        goto L_089C2BEC;
    }
    goto L_089C2C18;
L_089C2C18:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2C20:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 65535u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2C28:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2C30:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089C2CB8;
      }
      goto L_089C2C3C;
    }
L_089C2C3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] << 3u);
      if (branch_taken) {
          goto L_089C2CB8;
      }
      goto L_089C2C50;
    }
L_089C2C50:
    aot_gpr[2] = (aot_gpr[5] << 6u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[6] >> 5u);
    aot_gpr[5] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] << 2u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[3] << (aot_gpr[6] & 31u));
      if (branch_taken) {
          goto L_089C2CB8;
      }
      goto L_089C2C78;
    }
L_089C2C78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(576)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_089C2CB0;
      }
      goto L_089C2C9C;
    }
L_089C2C9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(576)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089C2CB0;
L_089C2CB0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2CB8:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2CC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[7] = (0u | 54502u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C2D18;
      }
      goto L_089C2CFC;
    }
L_089C2CFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2D18:
    aot_gpr[31] = (0x089C2D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C2D20u) goto L_089C2D20;
    return;
L_089C2D20:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[31] = (0x089C2D4Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[9]));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 83u, 0x089CC730u>(ctx, &aot_mem) && ctx.pc == 0x089C2D4Cu) goto L_089C2D4C;
    return;
L_089C2D4C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C2CFC;
      }
      goto L_089C2D54;
    }
L_089C2D54:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[7] = (0u | 54509u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
      if (branch_taken) {
          goto L_089C2CFC;
      }
      goto L_089C2D84;
    }
L_089C2D84:
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089C2D8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C2D8Cu) goto L_089C2D8C;
    return;
L_089C2D8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2DAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
      if (branch_taken) {
          goto L_089C2F30;
      }
      goto L_089C2DDC;
    }
L_089C2DDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[17] << 6u);
      if (branch_taken) {
          goto L_089C2F30;
      }
      goto L_089C2DEC;
    }
L_089C2DEC:
    aot_gpr[2] = (aot_gpr[17] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(376)));
    aot_gpr[3] = (aot_gpr[6] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[6] << 5u);
      if (branch_taken) {
          goto L_089C2F30;
      }
      goto L_089C2E14;
    }
L_089C2E14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(436)));
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr[20] = (aot_gpr[3] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 54003u);
      if (branch_taken) {
          goto L_089C2E5C;
      }
      goto L_089C2E30;
    }
L_089C2E30:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2E5C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[31] = (0x089C2E80u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2E80u) goto L_089C2E80;
    return;
L_089C2E80:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(30556));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(460)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (2204u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(10728));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C2EF4u);
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(436));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C2EF4u) goto L_089C2EF4;
    return;
L_089C2EF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C2E30;
      }
      goto L_089C2EFC;
    }
L_089C2EFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(428)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u + 0u);
        goto L_089C2E30;
    }
    goto L_089C2F08;
L_089C2F08:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(192)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C2F1Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C2F1Cu) goto L_089C2F1C;
    return;
L_089C2F1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == aot_gpr[22]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(188)));
        goto L_089C2F38;
    }
    goto L_089C2F28;
L_089C2F28:
    aot_gpr[16] = (0u + 0u);
    goto L_089C2E30;
L_089C2F30:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C2E30;
L_089C2F38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C2F44u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C2F44u) goto L_089C2F44;
    return;
L_089C2F44:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(428), 0u);
    goto L_089C2E30;
L_089C2F4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 8u, 0x089C3060u>(ctx, &aot_mem); return;
      }
      goto L_089C2F74;
    }
L_089C2F74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] << 6u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 8u, 0x089C3060u>(ctx, &aot_mem); return;
      }
      goto L_089C2F84;
    }
L_089C2F84:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[3] = (aot_gpr[6] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[6] << 3u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 8u, 0x089C3060u>(ctx, &aot_mem); return;
      }
      goto L_089C2FAC;
    }
L_089C2FAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    aot_gpr[4] = (aot_gpr[6] << 5u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (0u | 54003u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 5u, 0x089C3028u>(ctx, &aot_mem); return;
      }
      goto L_089C2FC8;
    }
L_089C2FC8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C2FF4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C2FF4u) goto L_089C2FF4;
    return;
L_089C2FF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 5u, 0x089C3028u>(ctx, &aot_mem); return;
      }
      goto L_089C2FFC;
    }
L_089C2FFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.pc = 0x089C3000u; return;
}

void recomp_unit_0446(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0446_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_446(Runtime &runtime) {
    runtime.register_generated_unit(446u, 0x089C2000u, 4096u, &recomp_unit_0446, &recomp_unit_0446_entry);
    runtime.register_function(0x089C2000u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C200Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C201Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2020u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2030u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2044u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C204Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2060u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C206Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2078u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2080u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2088u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C20A8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C20B0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C20F4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2124u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C212Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2140u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2164u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2188u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2198u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C21A4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C21B4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C21BCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C21F0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C21F8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2204u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C220Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2214u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2230u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2234u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2250u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2258u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C22B0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C22CCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C22F0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C22F8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2320u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2328u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2364u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2394u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C23A4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C23B0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C23CCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C23E4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C23F0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C23F4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2400u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2410u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2418u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2438u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C243Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C245Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2464u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2478u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2480u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C248Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2498u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C24A0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C24A8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C24B0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C24DCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C24E8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C24F0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2508u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2510u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C251Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2520u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2524u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2538u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2568u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2570u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2578u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C257Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2588u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2590u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C25D4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C25E8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2600u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2604u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2610u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2620u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2664u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C268Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2694u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C26A8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C26CCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C26D4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C26F4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C26FCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C272Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C273Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2748u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2754u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2768u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C276Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2788u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C278Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C27A8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C27B8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C27D0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C27D8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C27E4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C27ECu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C27F4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C27FCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2804u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C280Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2828u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2834u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2840u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2844u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2858u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2860u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2864u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2878u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C287Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C289Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C28A4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C28D8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2900u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2908u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2920u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C293Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2964u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C296Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2974u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2984u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C298Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C29A0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C29C0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C29E8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2A20u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2A34u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2A40u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2A44u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2A60u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2A64u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2A6Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2A88u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2A90u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2ABCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2AC8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2AD4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2AE0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2AECu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2BCCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2BD8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2BE8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2BECu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2C0Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2C18u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2C20u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2C28u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2C30u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2C3Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2C50u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2C78u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2C9Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2CB0u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2CB8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2CC4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2CFCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2D18u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2D20u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2D4Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2D54u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2D84u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2D8Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2DACu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2DDCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2DECu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2E14u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2E30u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2E5Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2E80u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2EF4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2EFCu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2F08u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2F1Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2F28u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2F30u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2F38u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2F44u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2F4Cu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2F74u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2F84u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2FACu, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2FC8u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2FF4u, &recomp_unit_0446, "recomp_unit_0446");
    runtime.register_function(0x089C2FFCu, &recomp_unit_0446, "recomp_unit_0446");
}
} // namespace psprecomp
