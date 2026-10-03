#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0074[1021] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0,
    0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0,
    29, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0,
    41, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0,
    58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65,
    0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0,
    83, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0,
    94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 100, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0,
    0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0,
    0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 0,
    0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156,
    0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194,
    195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217,
};
void recomp_unit_0074_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0884E004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0074[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0884E004;
    case 2u: goto L_0884E00C;
    case 3u: goto L_0884E02C;
    case 4u: goto L_0884E030;
    case 5u: goto L_0884E03C;
    case 6u: goto L_0884E048;
    case 7u: goto L_0884E078;
    case 8u: goto L_0884E080;
    case 9u: goto L_0884E0A0;
    case 10u: goto L_0884E0C0;
    case 11u: goto L_0884E0CC;
    case 12u: goto L_0884E0D4;
    case 13u: goto L_0884E0F0;
    case 14u: goto L_0884E0F8;
    case 15u: goto L_0884E114;
    case 16u: goto L_0884E11C;
    case 17u: goto L_0884E124;
    case 18u: goto L_0884E13C;
    case 19u: goto L_0884E15C;
    case 20u: goto L_0884E164;
    case 21u: goto L_0884E18C;
    case 22u: goto L_0884E1A4;
    case 23u: goto L_0884E1AC;
    case 24u: goto L_0884E1B8;
    case 25u: goto L_0884E1C8;
    case 26u: goto L_0884E1E0;
    case 27u: goto L_0884E1E8;
    case 28u: goto L_0884E1F8;
    case 29u: goto L_0884E204;
    case 30u: goto L_0884E21C;
    case 31u: goto L_0884E224;
    case 32u: goto L_0884E22C;
    case 33u: goto L_0884E238;
    case 34u: goto L_0884E254;
    case 35u: goto L_0884E274;
    case 36u: goto L_0884E2B4;
    case 37u: goto L_0884E2CC;
    case 38u: goto L_0884E2D4;
    case 39u: goto L_0884E2E0;
    case 40u: goto L_0884E2F0;
    case 41u: goto L_0884E304;
    case 42u: goto L_0884E30C;
    case 43u: goto L_0884E31C;
    case 44u: goto L_0884E328;
    case 45u: goto L_0884E330;
    case 46u: goto L_0884E344;
    case 47u: goto L_0884E34C;
    case 48u: goto L_0884E35C;
    case 49u: goto L_0884E378;
    case 50u: goto L_0884E394;
    case 51u: goto L_0884E39C;
    case 52u: goto L_0884E3A4;
    case 53u: goto L_0884E3AC;
    case 54u: goto L_0884E3B8;
    case 55u: goto L_0884E3EC;
    case 56u: goto L_0884E3F4;
    case 57u: goto L_0884E3FC;
    case 58u: goto L_0884E404;
    case 59u: goto L_0884E40C;
    case 60u: goto L_0884E414;
    case 61u: goto L_0884E430;
    case 62u: goto L_0884E454;
    case 63u: goto L_0884E45C;
    case 64u: goto L_0884E470;
    case 65u: goto L_0884E480;
    case 66u: goto L_0884E490;
    case 67u: goto L_0884E4A0;
    case 68u: goto L_0884E4AC;
    case 69u: goto L_0884E4C0;
    case 70u: goto L_0884E4DC;
    case 71u: goto L_0884E4F0;
    case 72u: goto L_0884E4F8;
    case 73u: goto L_0884E50C;
    case 74u: goto L_0884E528;
    case 75u: goto L_0884E538;
    case 76u: goto L_0884E544;
    case 77u: goto L_0884E54C;
    case 78u: goto L_0884E554;
    case 79u: goto L_0884E564;
    case 80u: goto L_0884E56C;
    case 81u: goto L_0884E574;
    case 82u: goto L_0884E57C;
    case 83u: goto L_0884E584;
    case 84u: goto L_0884E58C;
    case 85u: goto L_0884E594;
    case 86u: goto L_0884E5A0;
    case 87u: goto L_0884E5A8;
    case 88u: goto L_0884E5B0;
    case 89u: goto L_0884E5BC;
    case 90u: goto L_0884E5C4;
    case 91u: goto L_0884E5D4;
    case 92u: goto L_0884E5F4;
    case 93u: goto L_0884E5FC;
    case 94u: goto L_0884E604;
    case 95u: goto L_0884E614;
    case 96u: goto L_0884E620;
    case 97u: goto L_0884E640;
    case 98u: goto L_0884E660;
    case 99u: goto L_0884E684;
    case 100u: goto L_0884E68C;
    case 101u: goto L_0884E694;
    case 102u: goto L_0884E6A0;
    case 103u: goto L_0884E6AC;
    case 104u: goto L_0884E6BC;
    case 105u: goto L_0884E6D0;
    case 106u: goto L_0884E6D8;
    case 107u: goto L_0884E6E8;
    case 108u: goto L_0884E6F4;
    case 109u: goto L_0884E708;
    case 110u: goto L_0884E718;
    case 111u: goto L_0884E724;
    case 112u: goto L_0884E74C;
    case 113u: goto L_0884E764;
    case 114u: goto L_0884E77C;
    case 115u: goto L_0884E788;
    case 116u: goto L_0884E790;
    case 117u: goto L_0884E798;
    case 118u: goto L_0884E7A0;
    case 119u: goto L_0884E7B0;
    case 120u: goto L_0884E7C0;
    case 121u: goto L_0884E7C8;
    case 122u: goto L_0884E7D8;
    case 123u: goto L_0884E800;
    case 124u: goto L_0884E824;
    case 125u: goto L_0884E834;
    case 126u: goto L_0884E83C;
    case 127u: goto L_0884E848;
    case 128u: goto L_0884E850;
    case 129u: goto L_0884E868;
    case 130u: goto L_0884E870;
    case 131u: goto L_0884E894;
    case 132u: goto L_0884E8A8;
    case 133u: goto L_0884E8B8;
    case 134u: goto L_0884E8C4;
    case 135u: goto L_0884E8D0;
    case 136u: goto L_0884E8E0;
    case 137u: goto L_0884E8EC;
    case 138u: goto L_0884E8F4;
    case 139u: goto L_0884E908;
    case 140u: goto L_0884E910;
    case 141u: goto L_0884E918;
    case 142u: goto L_0884E924;
    case 143u: goto L_0884E938;
    case 144u: goto L_0884E940;
    case 145u: goto L_0884E948;
    case 146u: goto L_0884E960;
    case 147u: goto L_0884E968;
    case 148u: goto L_0884E97C;
    case 149u: goto L_0884E988;
    case 150u: goto L_0884E9A8;
    case 151u: goto L_0884E9B0;
    case 152u: goto L_0884E9C0;
    case 153u: goto L_0884E9D4;
    case 154u: goto L_0884E9DC;
    case 155u: goto L_0884E9F4;
    case 156u: goto L_0884EA00;
    case 157u: goto L_0884EA08;
    case 158u: goto L_0884EA10;
    case 159u: goto L_0884EA34;
    case 160u: goto L_0884EA5C;
    case 161u: goto L_0884EA68;
    case 162u: goto L_0884EA74;
    case 163u: goto L_0884EA88;
    case 164u: goto L_0884EAA4;
    case 165u: goto L_0884EAB8;
    case 166u: goto L_0884EAD8;
    case 167u: goto L_0884EB1C;
    case 168u: goto L_0884EB28;
    case 169u: goto L_0884EB38;
    case 170u: goto L_0884EB44;
    case 171u: goto L_0884EB4C;
    case 172u: goto L_0884EB5C;
    case 173u: goto L_0884EB90;
    case 174u: goto L_0884EBA8;
    case 175u: goto L_0884EBD0;
    case 176u: goto L_0884EC10;
    case 177u: goto L_0884EC30;
    case 178u: goto L_0884EC48;
    case 179u: goto L_0884EC64;
    case 180u: goto L_0884EC6C;
    case 181u: goto L_0884ECA0;
    case 182u: goto L_0884ECBC;
    case 183u: goto L_0884ECCC;
    case 184u: goto L_0884ECE4;
    case 185u: goto L_0884ECFC;
    case 186u: goto L_0884ED0C;
    case 187u: goto L_0884ED14;
    case 188u: goto L_0884ED34;
    case 189u: goto L_0884ED6C;
    case 190u: goto L_0884ED7C;
    case 191u: goto L_0884ED88;
    case 192u: goto L_0884EDD4;
    case 193u: goto L_0884EDEC;
    case 194u: goto L_0884EE00;
    case 195u: goto L_0884EE04;
    case 196u: goto L_0884EE0C;
    case 197u: goto L_0884EE38;
    case 198u: goto L_0884EE58;
    case 199u: goto L_0884EE68;
    case 200u: goto L_0884EE98;
    case 201u: goto L_0884EEE8;
    case 202u: goto L_0884EF00;
    case 203u: goto L_0884EF14;
    case 204u: goto L_0884EF20;
    case 205u: goto L_0884EF34;
    case 206u: goto L_0884EF3C;
    case 207u: goto L_0884EF48;
    case 208u: goto L_0884EF5C;
    case 209u: goto L_0884EF64;
    case 210u: goto L_0884EF88;
    case 211u: goto L_0884EFA4;
    case 212u: goto L_0884EFB4;
    case 213u: goto L_0884EFC0;
    case 214u: goto L_0884EFC8;
    case 215u: goto L_0884EFD4;
    case 216u: goto L_0884EFE4;
    case 217u: goto L_0884EFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0884E004:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0884E030;
      }
      goto L_0884E00C;
    }
L_0884E00C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884E02Cu);
    aot_gpr[10] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 18u, 0x0884A104u>(ctx, &aot_mem) && ctx.pc == 0x0884E02Cu) goto L_0884E02C;
    return;
L_0884E02C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    goto L_0884E030;
L_0884E030:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884E03Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884E03Cu) goto L_0884E03C;
    return;
L_0884E03C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_0884E048;
L_0884E048:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(568)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(572)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E078:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E080:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23968), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E0A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0884E0C0u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884E0C0u) goto L_0884E0C0;
    return;
L_0884E0C0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884E0CCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 124u, 0x0881C898u>(ctx, &aot_mem) && ctx.pc == 0x0884E0CCu) goto L_0884E0CC;
    return;
L_0884E0CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E114;
      }
      goto L_0884E0D4;
    }
L_0884E0D4:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-296));
    aot_gpr[31] = (0x0884E0F0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-284));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E0F0u) goto L_0884E0F0;
    return;
L_0884E0F0:
    aot_gpr[31] = (0x0884E0F8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 76u, 0x0888D4E8u>(ctx, &aot_mem) && ctx.pc == 0x0884E0F8u) goto L_0884E0F8;
    return;
L_0884E0F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[4]);
      if (branch_taken) {
          goto L_0884E124;
      }
      goto L_0884E114;
    }
L_0884E114:
    aot_gpr[31] = (0x0884E11Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 115u, 0x0881C828u>(ctx, &aot_mem) && ctx.pc == 0x0884E11Cu) goto L_0884E11C;
    return;
L_0884E11C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_0884E124;
L_0884E124:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E13C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23976), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E15C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E164:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E238;
      }
      goto L_0884E18C;
    }
L_0884E18C:
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-264));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884E1A4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E1A4u) goto L_0884E1A4;
    return;
L_0884E1A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E238;
      }
      goto L_0884E1AC;
    }
L_0884E1AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884E1B8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884E1B8u) goto L_0884E1B8;
    return;
L_0884E1B8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0884E1C8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x0884E1C8u) goto L_0884E1C8;
    return;
L_0884E1C8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884E1E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-248));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E1E0u) goto L_0884E1E0;
    return;
L_0884E1E0:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884E1F8;
      }
      goto L_0884E1E8;
    }
L_0884E1E8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26496), aot_gpr[4]);
      if (branch_taken) {
          goto L_0884E22C;
      }
      goto L_0884E1F8;
    }
L_0884E1F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0884E204u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x0884E204u) goto L_0884E204;
    return;
L_0884E204:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884E21Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-240));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E21Cu) goto L_0884E21C;
    return;
L_0884E21C:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884E22C;
      }
      goto L_0884E224;
    }
L_0884E224:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26496), 0u);
    goto L_0884E22C;
L_0884E22C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7488), aot_gpr[4]);
    goto L_0884E238;
L_0884E238:
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
L_0884E254:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23984), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E274:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[18] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(26492)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884E2D4;
      }
      goto L_0884E2B4;
    }
L_0884E2B4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26528)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E2D4;
      }
      goto L_0884E2CC;
    }
L_0884E2CC:
    aot_gpr[31] = (0x0884E2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 135u, 0x08899F18u>(ctx, &aot_mem) && ctx.pc == 0x0884E2D4u) goto L_0884E2D4;
    return;
L_0884E2D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E304;
      }
      goto L_0884E2E0;
    }
L_0884E2E0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884E2F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-232));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884E2F0u) goto L_0884E2F0;
    return;
L_0884E2F0:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x0884E304u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26536), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 135u, 0x0889B8D8u>(ctx, &aot_mem) && ctx.pc == 0x0884E304u) goto L_0884E304;
    return;
L_0884E304:
    aot_gpr[31] = (0x0884E30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E30Cu) goto L_0884E30C;
    return;
L_0884E30C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_0884E344;
      }
      goto L_0884E31C;
    }
L_0884E31C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E35C;
      }
      goto L_0884E328;
    }
L_0884E328:
    aot_gpr[31] = (0x0884E330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 6u, 0x0889A07Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E330u) goto L_0884E330;
    return;
L_0884E330:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884E35C;
      }
      goto L_0884E344;
    }
L_0884E344:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884E35C;
      }
      goto L_0884E34C;
    }
L_0884E34C:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884E35C;
L_0884E35C:
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
L_0884E378:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0884E394u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-216));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 200u, 0x08893D68u>(ctx, &aot_mem) && ctx.pc == 0x0884E394u) goto L_0884E394;
    return;
L_0884E394:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E3AC;
      }
      goto L_0884E39C;
    }
L_0884E39C:
    aot_gpr[31] = (0x0884E3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 135u, 0x08899F18u>(ctx, &aot_mem) && ctx.pc == 0x0884E3A4u) goto L_0884E3A4;
    return;
L_0884E3A4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7488), 0u);
    goto L_0884E3AC;
L_0884E3AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E3B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884E3FC;
      }
      goto L_0884E3EC;
    }
L_0884E3EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0884E620;
      }
      goto L_0884E3F4;
    }
L_0884E3F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E414;
      }
      goto L_0884E3FC;
    }
L_0884E3FC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884E54C;
      }
      goto L_0884E404;
    }
L_0884E404:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E5FC;
      }
      goto L_0884E40C;
    }
L_0884E40C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E620;
      }
      goto L_0884E414;
    }
L_0884E414:
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-232));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884E430u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-196));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E430u) goto L_0884E430;
    return;
L_0884E430:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[18] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E4AC;
      }
      goto L_0884E454;
    }
L_0884E454:
    aot_gpr[31] = (0x0884E45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 109u, 0x0889B6D4u>(ctx, &aot_mem) && ctx.pc == 0x0884E45Cu) goto L_0884E45C;
    return;
L_0884E45C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7921)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E490;
      }
      goto L_0884E470;
    }
L_0884E470:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884E480u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-188));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884E480u) goto L_0884E480;
    return;
L_0884E480:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884E4AC;
      }
      goto L_0884E490;
    }
L_0884E490:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884E4A0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-172));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884E4A0u) goto L_0884E4A0;
    return;
L_0884E4A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_0884E4AC;
L_0884E4AC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884E4C0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-160));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E4C0u) goto L_0884E4C0;
    return;
L_0884E4C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E4F8;
      }
      goto L_0884E4DC;
    }
L_0884E4DC:
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[31] = (0x0884E4F0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 157u, 0x0889A978u>(ctx, &aot_mem) && ctx.pc == 0x0884E4F0u) goto L_0884E4F0;
    return;
L_0884E4F0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[18]));
      if (branch_taken) {
          goto L_0884E544;
      }
      goto L_0884E4F8;
    }
L_0884E4F8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884E50Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-152));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E50Cu) goto L_0884E50C;
    return;
L_0884E50C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E544;
      }
      goto L_0884E528;
    }
L_0884E528:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884E538u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-216));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884E538u) goto L_0884E538;
    return;
L_0884E538:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_0884E544;
L_0884E544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E620;
      }
      goto L_0884E54C;
    }
L_0884E54C:
    aot_gpr[31] = (0x0884E554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x0884E554u) goto L_0884E554;
    return;
L_0884E554:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
        goto L_0884E574;
    }
    goto L_0884E564;
L_0884E564:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884E5F4;
      }
      goto L_0884E56C;
    }
L_0884E56C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E5C4;
      }
      goto L_0884E574;
    }
L_0884E574:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E5F4;
      }
      goto L_0884E57C;
    }
L_0884E57C:
    aot_gpr[31] = (0x0884E584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 117u, 0x0889A7D8u>(ctx, &aot_mem) && ctx.pc == 0x0884E584u) goto L_0884E584;
    return;
L_0884E584:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E5A0;
      }
      goto L_0884E58C;
    }
L_0884E58C:
    aot_gpr[31] = (0x0884E594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 166u, 0x0889AA30u>(ctx, &aot_mem) && ctx.pc == 0x0884E594u) goto L_0884E594;
    return;
L_0884E594:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884E5BC;
      }
      goto L_0884E5A0;
    }
L_0884E5A0:
    aot_gpr[31] = (0x0884E5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 122u, 0x0889A810u>(ctx, &aot_mem) && ctx.pc == 0x0884E5A8u) goto L_0884E5A8;
    return;
L_0884E5A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E5BC;
      }
      goto L_0884E5B0;
    }
L_0884E5B0:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_0884E5BC;
L_0884E5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E5F4;
      }
      goto L_0884E5C4;
    }
L_0884E5C4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884E5D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-140));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884E5D4u) goto L_0884E5D4;
    return;
L_0884E5D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    goto L_0884E5F4;
L_0884E5F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E620;
      }
      goto L_0884E5FC;
    }
L_0884E5FC:
    aot_gpr[31] = (0x0884E604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E604u) goto L_0884E604;
    return;
L_0884E604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 11u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884E620;
      }
      goto L_0884E614;
    }
L_0884E614:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    goto L_0884E620;
L_0884E620:
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
L_0884E640:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23992), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E660:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0884E6AC;
      }
      goto L_0884E684;
    }
L_0884E684:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0884E6D8;
      }
      goto L_0884E68C;
    }
L_0884E68C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884E6F4;
      }
      goto L_0884E694;
    }
L_0884E694:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0884E6A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 141u, 0x08888DF0u>(ctx, &aot_mem) && ctx.pc == 0x0884E6A0u) goto L_0884E6A0;
    return;
L_0884E6A0:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884E6F4;
      }
      goto L_0884E6AC;
    }
L_0884E6AC:
    aot_gpr[17] = (0u | 5u);
    aot_gpr[4] = (0u | 265u);
    aot_gpr[31] = (0x0884E6BCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884E6BCu) goto L_0884E6BC;
    return;
L_0884E6BC:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884E6D0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884E6D0u) goto L_0884E6D0;
    return;
L_0884E6D0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_0884E6F4;
      }
      goto L_0884E6D8;
    }
L_0884E6D8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[31] = (0x0884E6E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x0884E6E8u) goto L_0884E6E8;
    return;
L_0884E6E8:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884E6F4;
      }
      goto L_0884E6F4;
    }
L_0884E6F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E708:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0884E718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 49u, 0x0884A484u>(ctx, &aot_mem) && ctx.pc == 0x0884E718u) goto L_0884E718;
    return;
L_0884E718:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E724:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EAA4;
      }
      goto L_0884E74C;
    }
L_0884E74C:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-80)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E764:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884E790;
      }
      goto L_0884E77C;
    }
L_0884E77C:
    aot_gpr[5] = (0u | 6u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884E824;
      }
      goto L_0884E788;
    }
L_0884E788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E848;
      }
      goto L_0884E790;
    }
L_0884E790:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884E800;
      }
      goto L_0884E798;
    }
L_0884E798:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E848;
      }
      goto L_0884E7A0;
    }
L_0884E7A0:
    aot_gpr[17] = (0u | 1u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0884E7B0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25236), static_cast<std::uint8_t>(aot_gpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 207u, 0x0886CEACu>(ctx, &aot_mem) && ctx.pc == 0x0884E7B0u) goto L_0884E7B0;
    return;
L_0884E7B0:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24932), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0884E7C0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 125u, 0x08865A40u>(ctx, &aot_mem) && ctx.pc == 0x0884E7C0u) goto L_0884E7C0;
    return;
L_0884E7C0:
    aot_gpr[31] = (0x0884E7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 12u, 0x0886D0A8u>(ctx, &aot_mem) && ctx.pc == 0x0884E7C8u) goto L_0884E7C8;
    return;
L_0884E7C8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x0884E7D8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 110u, 0x088D57F0u>(ctx, &aot_mem) && ctx.pc == 0x0884E7D8u) goto L_0884E7D8;
    return;
L_0884E7D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[17]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884E848;
      }
      goto L_0884E800;
    }
L_0884E800:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884E848;
      }
      goto L_0884E824;
    }
L_0884E824:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 8192u);
    aot_gpr[31] = (0x0884E834u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6560));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 89u, 0x089347ACu>(ctx, &aot_mem) && ctx.pc == 0x0884E834u) goto L_0884E834;
    return;
L_0884E834:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E848;
      }
      goto L_0884E83C;
    }
L_0884E83C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0884E848u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 22u, 0x088D51E8u>(ctx, &aot_mem) && ctx.pc == 0x0884E848u) goto L_0884E848;
    return;
L_0884E848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EAA4;
      }
      goto L_0884E850;
    }
L_0884E850:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884E908;
      }
      goto L_0884E868;
    }
L_0884E868:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E908;
      }
      goto L_0884E870;
    }
L_0884E870:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-120));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-100));
      if (branch_taken) {
          goto L_0884E8D0;
      }
      goto L_0884E894;
    }
L_0884E894:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(25244)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E8D0;
      }
      goto L_0884E8A8;
    }
L_0884E8A8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0884E8B8u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E8B8u) goto L_0884E8B8;
    return;
L_0884E8B8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884E8C4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E8C4u) goto L_0884E8C4;
    return;
L_0884E8C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0884E8F4;
      }
      goto L_0884E8D0;
    }
L_0884E8D0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0884E8E0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E8E0u) goto L_0884E8E0;
    return;
L_0884E8E0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884E8ECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E8ECu) goto L_0884E8EC;
    return;
L_0884E8EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0884E8F4;
L_0884E8F4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_0884E908;
L_0884E908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EAA4;
      }
      goto L_0884E910;
    }
L_0884E910:
    aot_gpr[31] = (0x0884E918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x0884E918u) goto L_0884E918;
    return;
L_0884E918:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884E940;
      }
      goto L_0884E924;
    }
L_0884E924:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0884E938u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 2u, 0x0888900Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E938u) goto L_0884E938;
    return;
L_0884E938:
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884E940;
L_0884E940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EAA4;
      }
      goto L_0884E948;
    }
L_0884E948:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884E9A8;
      }
      goto L_0884E960;
    }
L_0884E960:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E9A8;
      }
      goto L_0884E968;
    }
L_0884E968:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E988;
      }
      goto L_0884E97C;
    }
L_0884E97C:
    aot_gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884E9A8;
      }
      goto L_0884E988;
    }
L_0884E988:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_0884E9A8;
L_0884E9A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EAA4;
      }
      goto L_0884E9B0;
    }
L_0884E9B0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28696)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E9D4;
      }
      goto L_0884E9C0;
    }
L_0884E9C0:
    aot_gpr[4] = (0u | 9u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0884E9D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 145u, 0x08888E50u>(ctx, &aot_mem) && ctx.pc == 0x0884E9D4u) goto L_0884E9D4;
    return;
L_0884E9D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EAA4;
      }
      goto L_0884E9DC;
    }
L_0884E9DC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 13 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
        goto L_0884EA08;
    }
    goto L_0884E9F4;
L_0884E9F4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884EAA4;
      }
      goto L_0884EA00;
    }
L_0884EA00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EA34;
      }
      goto L_0884EA08;
    }
L_0884EA08:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EAA4;
      }
      goto L_0884EA10;
    }
L_0884EA10:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[6]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884EAA4;
      }
      goto L_0884EA34;
    }
L_0884EA34:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7917), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-120));
    aot_gpr[31] = (0x0884EA5Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-100));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EA5Cu) goto L_0884EA5C;
    return;
L_0884EA5C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884EA68u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EA68u) goto L_0884EA68;
    return;
L_0884EA68:
    aot_gpr[4] = (0u | 34u);
    aot_gpr[31] = (0x0884EA74u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884EA74u) goto L_0884EA74;
    return;
L_0884EA74:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884EA88u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884EA88u) goto L_0884EA88;
    return;
L_0884EA88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_0884EAA4;
L_0884EAA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EAB8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24000), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EAD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[10] & 255u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0884EB1Cu);
    aot_gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884EB1Cu) goto L_0884EB1C;
    return;
L_0884EB1C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884EB28u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 195u, 0x0888CD10u>(ctx, &aot_mem) && ctx.pc == 0x0884EB28u) goto L_0884EB28;
    return;
L_0884EB28:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884EB38u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 217u, 0x08893E54u>(ctx, &aot_mem) && ctx.pc == 0x0884EB38u) goto L_0884EB38;
    return;
L_0884EB38:
    aot_gpr[20] = (0u | 1u);
    aot_gpr[31] = (0x0884EB44u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 84u, 0x0886D588u>(ctx, &aot_mem) && ctx.pc == 0x0884EB44u) goto L_0884EB44;
    return;
L_0884EB44:
    if (aot_gpr[2] != 0u) {
    aot_gpr[20] = (0u | 2u);
        goto L_0884EB4C;
    }
    goto L_0884EB4C;
L_0884EB4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[19] = (0u | 0u);
    if (aot_gpr[21] != 0u) {
    aot_gpr[19] = (0u | 3u);
        goto L_0884EB5C;
    }
    goto L_0884EB5C;
L_0884EB5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24916)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24920)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 0 ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0884EBA8;
      }
      goto L_0884EB90;
    }
L_0884EB90:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7980)));
    if (aot_gpr[4] == aot_gpr[17]) {
    aot_gpr[18] = (0u | 4u);
        goto L_0884EBA8;
    }
    goto L_0884EBA8;
L_0884EBA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
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
L_0884EBD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[31] = (0x0884EC10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 127u, 0x08826B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EC10u) goto L_0884EC10;
    return;
L_0884EC10:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
    aot_gpr[31] = (0x0884EC30u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EC30u) goto L_0884EC30;
    return;
L_0884EC30:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[21] = (aot_gpr[22] | 0u);
    aot_gpr[20] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0884EC48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0884EC48u) goto L_0884EC48;
    return;
L_0884EC48:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3472)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0884ED34;
      }
      goto L_0884EC64;
    }
L_0884EC64:
    aot_gpr[23] = (0u | 1u);
    aot_gpr[17] = (0u | 0u);
    goto L_0884EC6C;
L_0884EC6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0884ECA0u);
    aot_gpr[10] = (0u | 0u);
    goto L_0884EAD8;
L_0884ECA0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0884ECBCu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x0884ECBCu) goto L_0884ECBC;
    return;
L_0884ECBC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0884ECCCu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x0884ECCCu) goto L_0884ECCC;
    return;
L_0884ECCC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0884ECE4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0884ECE4u) goto L_0884ECE4;
    return;
L_0884ECE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0884ECFCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0884ECFCu) goto L_0884ECFC;
    return;
L_0884ECFC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x0884ED0Cu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x0884ED0Cu) goto L_0884ED0C;
    return;
L_0884ED0C:
    aot_gpr[31] = (0x0884ED14u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0884ED14u) goto L_0884ED14;
    return;
L_0884ED14:
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[18]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0884EC6C;
      }
      goto L_0884ED34;
    }
L_0884ED34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884ED6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0884ED7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 128u, 0x08826B44u>(ctx, &aot_mem) && ctx.pc == 0x0884ED7Cu) goto L_0884ED7C;
    return;
L_0884ED7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884ED88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
    aot_gpr[31] = (0x0884EDD4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EDD4u) goto L_0884EDD4;
    return;
L_0884EDD4:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[22] = (aot_gpr[23] | 0u);
    aot_gpr[21] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0884EDECu);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x0884EDECu) goto L_0884EDEC;
    return;
L_0884EDEC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884EE68;
      }
      goto L_0884EE00;
    }
L_0884EE00:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    goto L_0884EE04;
L_0884EE04:
    aot_gpr[31] = (0x0884EE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 117u, 0x0886D790u>(ctx, &aot_mem) && ctx.pc == 0x0884EE0Cu) goto L_0884EE0C;
    return;
L_0884EE0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884EE38u);
    aot_gpr[10] = (aot_gpr[2] | 0u);
    goto L_0884EAD8;
L_0884EE38:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0884EE58u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 183u, 0x0888CB68u>(ctx, &aot_mem) && ctx.pc == 0x0884EE58u) goto L_0884EE58;
    return;
L_0884EE58:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884EE04;
      }
      goto L_0884EE68;
    }
L_0884EE68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EE98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-528));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(488), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(492), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(496), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(500), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(504), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(508), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[31]);
    aot_gpr[31] = (0x0884EEE8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EEE8u) goto L_0884EEE8;
    return;
L_0884EEE8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884EF00u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-16));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EF00u) goto L_0884EF00;
    return;
L_0884EF00:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884EF14u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(0));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EF14u) goto L_0884EF14;
    return;
L_0884EF14:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884EF20u);
    aot_gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884EF20u) goto L_0884EF20;
    return;
L_0884EF20:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x0884EF34u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 120u, 0x08888C48u>(ctx, &aot_mem) && ctx.pc == 0x0884EF34u) goto L_0884EF34;
    return;
L_0884EF34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(480), aot_gpr[17]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 19u, 0x0884F0E0u>(ctx, &aot_mem); return;
      }
      goto L_0884EF3C;
    }
L_0884EF3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 25u, 0x0884F134u>(ctx, &aot_mem); return;
      }
      goto L_0884EF48;
    }
L_0884EF48:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3472)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(476), aot_gpr[22]);
    aot_gpr[31] = (0x0884EF5Cu);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 118u, 0x0886D7B4u>(ctx, &aot_mem) && ctx.pc == 0x0884EF5Cu) goto L_0884EF5C;
    return;
L_0884EF5C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 18u, 0x0884F0D4u>(ctx, &aot_mem); return;
      }
      goto L_0884EF64;
    }
L_0884EF64:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3496));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(336));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(472), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(400));
    aot_gpr[30] = (0u | 44100u);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    goto L_0884EF88;
L_0884EF88:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(472)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(484), aot_gpr[16]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0884EFA4u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 146u, 0x08933840u>(ctx, &aot_mem) && ctx.pc == 0x0884EFA4u) goto L_0884EFA4;
    return;
L_0884EFA4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884EFB4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x0884EFB4u) goto L_0884EFB4;
    return;
L_0884EFB4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884EFC0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0297_entry, 297u, 74u, 0x0892D4E4u>(ctx, &aot_mem) && ctx.pc == 0x0884EFC0u) goto L_0884EFC0;
    return;
L_0884EFC0:
    aot_gpr[31] = (0x0884EFC8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x0884EFC8u) goto L_0884EFC8;
    return;
L_0884EFC8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(336))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 2u, 0x0884F004u>(ctx, &aot_mem); return;
      }
      goto L_0884EFD4;
    }
L_0884EFD4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884EFE4u);
    aot_gpr[6] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0884EFE4u) goto L_0884EFE4;
    return;
L_0884EFE4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(463), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884EFF4u);
    aot_gpr[5] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x0884EFF4u) goto L_0884EFF4;
    return;
L_0884EFF4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 2u, 0x0884F004u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 1u, 0x0884F000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0074(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0074_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_74(Runtime &runtime) {
    runtime.register_generated_unit(74u, 0x0884E000u, 4096u, &recomp_unit_0074, &recomp_unit_0074_entry);
    runtime.register_function(0x0884E004u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E00Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E02Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E030u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E03Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E048u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E078u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E080u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E0A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E0C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E0CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E0D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E0F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E0F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E114u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E11Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E124u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E13Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E15Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E164u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E18Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E1A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E1ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E1B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E1C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E1E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E1E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E1F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E204u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E21Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E224u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E22Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E238u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E254u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E274u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E2B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E2CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E2D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E2E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E2F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E304u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E30Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E31Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E328u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E330u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E344u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E34Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E35Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E378u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E394u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E39Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E3A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E3ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E3B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E3ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E3F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E3FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E404u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E40Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E414u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E430u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E454u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E45Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E470u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E480u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E490u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E4A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E4ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E4C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E4DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E4F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E4F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E50Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E528u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E538u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E544u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E54Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E554u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E564u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E56Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E574u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E57Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E584u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E58Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E594u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E5A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E5A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E5B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E5BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E5C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E5D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E5F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E5FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E604u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E614u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E620u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E640u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E660u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E684u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E68Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E694u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E6A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E6ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E6BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E6D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E6D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E6E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E6F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E708u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E718u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E724u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E74Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E764u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E77Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E788u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E790u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E798u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E7A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E7B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E7C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E7C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E7D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E800u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E824u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E834u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E83Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E848u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E850u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E868u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E870u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E894u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E8A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E8B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E8C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E8D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E8E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E8ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E8F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E908u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E910u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E918u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E924u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E938u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E940u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E948u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E960u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E968u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E97Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E988u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E9A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E9B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E9C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E9D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E9DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884E9F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EA00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EA08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EA10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EA34u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EA5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EA68u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EA74u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EA88u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EAA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EAB8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EAD8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EB1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EB28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EB38u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EB44u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EB4Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EB5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EB90u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EBA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EBD0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EC10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EC30u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EC48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EC64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EC6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884ECA0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884ECBCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884ECCCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884ECE4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884ECFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884ED0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884ED14u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884ED34u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884ED6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884ED7Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884ED88u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EDD4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EDECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EE00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EE04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EE0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EE38u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EE58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EE68u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EE98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EEE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EF00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EF14u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EF20u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EF34u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EF3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EF48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EF5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EF64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EF88u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EFA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EFB4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EFC0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EFC8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EFD4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EFE4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0884EFF4u, &recomp_unit_0074, "recomp_unit_0074");
}
} // namespace psprecomp
