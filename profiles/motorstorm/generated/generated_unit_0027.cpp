#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0027[1023] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 22, 0, 23, 0, 0, 24, 0, 25, 0, 0, 26, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 31, 32, 0, 0, 33, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 46, 0,
    0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0,
    55, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0,
    0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0,
    105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110,
    0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 119, 0, 120, 0,
    0, 121, 0, 122, 0, 0, 123, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 137, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162,
    0, 0, 0, 0, 163, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 169, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 195,
};
void recomp_unit_0027_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0881F000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0027[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0881F000;
    case 2u: goto L_0881F008;
    case 3u: goto L_0881F01C;
    case 4u: goto L_0881F028;
    case 5u: goto L_0881F040;
    case 6u: goto L_0881F060;
    case 7u: goto L_0881F070;
    case 8u: goto L_0881F094;
    case 9u: goto L_0881F0A0;
    case 10u: goto L_0881F0A8;
    case 11u: goto L_0881F0B4;
    case 12u: goto L_0881F0CC;
    case 13u: goto L_0881F0EC;
    case 14u: goto L_0881F0FC;
    case 15u: goto L_0881F120;
    case 16u: goto L_0881F12C;
    case 17u: goto L_0881F134;
    case 18u: goto L_0881F14C;
    case 19u: goto L_0881F1A8;
    case 20u: goto L_0881F1B0;
    case 21u: goto L_0881F1C0;
    case 22u: goto L_0881F1C4;
    case 23u: goto L_0881F1CC;
    case 24u: goto L_0881F1D8;
    case 25u: goto L_0881F1E0;
    case 26u: goto L_0881F1EC;
    case 27u: goto L_0881F1F0;
    case 28u: goto L_0881F248;
    case 29u: goto L_0881F258;
    case 30u: goto L_0881F268;
    case 31u: goto L_0881F288;
    case 32u: goto L_0881F28C;
    case 33u: goto L_0881F298;
    case 34u: goto L_0881F29C;
    case 35u: goto L_0881F2B8;
    case 36u: goto L_0881F2C0;
    case 37u: goto L_0881F2CC;
    case 38u: goto L_0881F2E4;
    case 39u: goto L_0881F2F0;
    case 40u: goto L_0881F310;
    case 41u: goto L_0881F330;
    case 42u: goto L_0881F338;
    case 43u: goto L_0881F35C;
    case 44u: goto L_0881F368;
    case 45u: goto L_0881F374;
    case 46u: goto L_0881F378;
    case 47u: goto L_0881F384;
    case 48u: goto L_0881F39C;
    case 49u: goto L_0881F3A8;
    case 50u: goto L_0881F3B4;
    case 51u: goto L_0881F3CC;
    case 52u: goto L_0881F3E8;
    case 53u: goto L_0881F3F0;
    case 54u: goto L_0881F3F8;
    case 55u: goto L_0881F400;
    case 56u: goto L_0881F40C;
    case 57u: goto L_0881F414;
    case 58u: goto L_0881F41C;
    case 59u: goto L_0881F424;
    case 60u: goto L_0881F42C;
    case 61u: goto L_0881F434;
    case 62u: goto L_0881F444;
    case 63u: goto L_0881F460;
    case 64u: goto L_0881F478;
    case 65u: goto L_0881F484;
    case 66u: goto L_0881F48C;
    case 67u: goto L_0881F4B4;
    case 68u: goto L_0881F4C4;
    case 69u: goto L_0881F4D4;
    case 70u: goto L_0881F4E0;
    case 71u: goto L_0881F4F0;
    case 72u: goto L_0881F4FC;
    case 73u: goto L_0881F554;
    case 74u: goto L_0881F560;
    case 75u: goto L_0881F584;
    case 76u: goto L_0881F5A8;
    case 77u: goto L_0881F5CC;
    case 78u: goto L_0881F5E8;
    case 79u: goto L_0881F5F4;
    case 80u: goto L_0881F6D8;
    case 81u: goto L_0881F6E0;
    case 82u: goto L_0881F6F0;
    case 83u: goto L_0881F700;
    case 84u: goto L_0881F720;
    case 85u: goto L_0881F728;
    case 86u: goto L_0881F73C;
    case 87u: goto L_0881F744;
    case 88u: goto L_0881F758;
    case 89u: goto L_0881F770;
    case 90u: goto L_0881F7EC;
    case 91u: goto L_0881F7F4;
    case 92u: goto L_0881F810;
    case 93u: goto L_0881F828;
    case 94u: goto L_0881F834;
    case 95u: goto L_0881F844;
    case 96u: goto L_0881F850;
    case 97u: goto L_0881F864;
    case 98u: goto L_0881F870;
    case 99u: goto L_0881F888;
    case 100u: goto L_0881F8A8;
    case 101u: goto L_0881F8B8;
    case 102u: goto L_0881F8DC;
    case 103u: goto L_0881F8EC;
    case 104u: goto L_0881F8F4;
    case 105u: goto L_0881F900;
    case 106u: goto L_0881F918;
    case 107u: goto L_0881F938;
    case 108u: goto L_0881F948;
    case 109u: goto L_0881F96C;
    case 110u: goto L_0881F97C;
    case 111u: goto L_0881F984;
    case 112u: goto L_0881F9A0;
    case 113u: goto L_0881F9B0;
    case 114u: goto L_0881F9BC;
    case 115u: goto L_0881F9D4;
    case 116u: goto L_0881FA54;
    case 117u: goto L_0881FA5C;
    case 118u: goto L_0881FA6C;
    case 119u: goto L_0881FA70;
    case 120u: goto L_0881FA78;
    case 121u: goto L_0881FA84;
    case 122u: goto L_0881FA8C;
    case 123u: goto L_0881FA98;
    case 124u: goto L_0881FA9C;
    case 125u: goto L_0881FAD0;
    case 126u: goto L_0881FAE8;
    case 127u: goto L_0881FAF4;
    case 128u: goto L_0881FB14;
    case 129u: goto L_0881FB34;
    case 130u: goto L_0881FB3C;
    case 131u: goto L_0881FB60;
    case 132u: goto L_0881FB64;
    case 133u: goto L_0881FB88;
    case 134u: goto L_0881FB90;
    case 135u: goto L_0881FBA0;
    case 136u: goto L_0881FBA8;
    case 137u: goto L_0881FBB4;
    case 138u: goto L_0881FBB8;
    case 139u: goto L_0881FBC4;
    case 140u: goto L_0881FBDC;
    case 141u: goto L_0881FBE8;
    case 142u: goto L_0881FBF4;
    case 143u: goto L_0881FC04;
    case 144u: goto L_0881FC1C;
    case 145u: goto L_0881FC28;
    case 146u: goto L_0881FC48;
    case 147u: goto L_0881FC68;
    case 148u: goto L_0881FC70;
    case 149u: goto L_0881FC94;
    case 150u: goto L_0881FC98;
    case 151u: goto L_0881FCB8;
    case 152u: goto L_0881FCC0;
    case 153u: goto L_0881FCD4;
    case 154u: goto L_0881FCDC;
    case 155u: goto L_0881FCE8;
    case 156u: goto L_0881FCF8;
    case 157u: goto L_0881FD10;
    case 158u: goto L_0881FD1C;
    case 159u: goto L_0881FD28;
    case 160u: goto L_0881FD30;
    case 161u: goto L_0881FD70;
    case 162u: goto L_0881FD7C;
    case 163u: goto L_0881FD90;
    case 164u: goto L_0881FD94;
    case 165u: goto L_0881FDA4;
    case 166u: goto L_0881FDC0;
    case 167u: goto L_0881FDC8;
    case 168u: goto L_0881FDE8;
    case 169u: goto L_0881FDEC;
    case 170u: goto L_0881FDF8;
    case 171u: goto L_0881FE14;
    case 172u: goto L_0881FE1C;
    case 173u: goto L_0881FE24;
    case 174u: goto L_0881FE2C;
    case 175u: goto L_0881FE38;
    case 176u: goto L_0881FE54;
    case 177u: goto L_0881FE60;
    case 178u: goto L_0881FE80;
    case 179u: goto L_0881FE8C;
    case 180u: goto L_0881FEB0;
    case 181u: goto L_0881FED0;
    case 182u: goto L_0881FEDC;
    case 183u: goto L_0881FEFC;
    case 184u: goto L_0881FF08;
    case 185u: goto L_0881FF2C;
    case 186u: goto L_0881FF44;
    case 187u: goto L_0881FF50;
    case 188u: goto L_0881FF70;
    case 189u: goto L_0881FF7C;
    case 190u: goto L_0881FFA0;
    case 191u: goto L_0881FFA4;
    case 192u: goto L_0881FFDC;
    case 193u: goto L_0881FFE4;
    case 194u: goto L_0881FFF4;
    case 195u: goto L_0881FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0881F000:
    aot_fpr[5] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1144), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_0881F008;
L_0881F008:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1136), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    ctx.set_fpu_condition((aot_fpr[5] < aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1132), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1124), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
      if (branch_taken) {
          goto L_0881F0A8;
      }
      goto L_0881F01C;
    }
L_0881F01C:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881F0A0;
      }
      goto L_0881F028;
    }
L_0881F028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(728)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0881F040u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881F040u) goto L_0881F040;
    return;
L_0881F040:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u | 45u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (0u | 11u);
        goto L_0881F060;
    }
    goto L_0881F060;
L_0881F060:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0881F070u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881F070u) goto L_0881F070;
    return;
L_0881F070:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 4u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881F094u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881F094u) goto L_0881F094;
    return;
L_0881F094:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1120), aot_gpr[4]);
    aot_fpr[5] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1128)));
    goto L_0881F0A0;
L_0881F0A0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(620), __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
      if (branch_taken) {
          goto L_0881F134;
      }
      goto L_0881F0A8;
    }
L_0881F0A8:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881F12C;
      }
      goto L_0881F0B4;
    }
L_0881F0B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(728)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0881F0CCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881F0CCu) goto L_0881F0CC;
    return;
L_0881F0CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u | 45u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (0u | 10u);
        goto L_0881F0EC;
    }
    goto L_0881F0EC;
L_0881F0EC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0881F0FCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881F0FCu) goto L_0881F0FC;
    return;
L_0881F0FC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 4u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881F120u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881F120u) goto L_0881F120;
    return;
L_0881F120:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1120), aot_gpr[4]);
    aot_fpr[5] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1128)));
    goto L_0881F12C;
L_0881F12C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[5]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(620), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0881F134;
L_0881F134:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F14C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1948)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1932)));
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[8] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[8]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(632)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1156)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_0881F1B0;
      }
      goto L_0881F1A8;
    }
L_0881F1A8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0881F1C4;
      }
      goto L_0881F1B0;
    }
L_0881F1B0:
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F1C4;
      }
      goto L_0881F1C0;
    }
L_0881F1C0:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_0881F1C4;
L_0881F1C4:
    if (aot_gpr[5] == 0u) {
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
        goto L_0881F1D8;
    }
    goto L_0881F1CC;
L_0881F1CC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0881F1D8;
      }
      goto L_0881F1D8;
    }
L_0881F1D8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1020), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0881F1EC;
      }
      goto L_0881F1E0;
    }
L_0881F1E0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0881F1F0;
      }
      goto L_0881F1EC;
    }
L_0881F1EC:
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_0881F1F0;
L_0881F1F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1036), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_0881F298;
      }
      goto L_0881F248;
    }
L_0881F248:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_0881F29C;
      }
      goto L_0881F258;
    }
L_0881F258:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_0881F29C;
      }
      goto L_0881F268;
    }
L_0881F268:
    aot_gpr[4] = (15752u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 34953u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1156), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0881F28C;
      }
      goto L_0881F288;
    }
L_0881F288:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0881F28C;
L_0881F28C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1160), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0881F2C0;
      }
      goto L_0881F298;
    }
L_0881F298:
    aot_gpr[4] = (15820u << 16u);
    goto L_0881F29C;
L_0881F29C:
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0881F2C0;
      }
      goto L_0881F2B8;
    }
L_0881F2B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1156), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1160), static_cast<std::uint8_t>(0u));
    goto L_0881F2C0;
L_0881F2C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1160)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F384;
      }
      goto L_0881F2CC;
    }
L_0881F2CC:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881F2E4u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0881F2E4u) goto L_0881F2E4;
    return;
L_0881F2E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881F35C;
      }
      goto L_0881F2F0;
    }
L_0881F2F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x0881F310u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881F310u) goto L_0881F310;
    return;
L_0881F310:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u | 13u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 9u);
        goto L_0881F330;
    }
    goto L_0881F330;
L_0881F330:
    aot_gpr[31] = (0x0881F338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881F338u) goto L_0881F338;
    return;
L_0881F338:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 5u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881F35Cu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881F35Cu) goto L_0881F35C;
    return;
L_0881F35C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(656)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1156)));
      if (branch_taken) {
          goto L_0881F374;
      }
      goto L_0881F368;
    }
L_0881F368:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0881F378;
      }
      goto L_0881F374;
    }
L_0881F374:
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_0881F378;
L_0881F378:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1040), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(644), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0881F3B4;
      }
      goto L_0881F384;
    }
L_0881F384:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881F39Cu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0881F39Cu) goto L_0881F39C;
    return;
L_0881F39C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F3B4;
      }
      goto L_0881F3A8;
    }
L_0881F3A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0881F3B4u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x0881F3B4u) goto L_0881F3B4;
    return;
L_0881F3B4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F3CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_0881F3F8;
    }
    goto L_0881F3E8;
L_0881F3E8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0881F41C;
      }
      goto L_0881F3F0;
    }
L_0881F3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F434;
      }
      goto L_0881F3F8;
    }
L_0881F3F8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F41C;
      }
      goto L_0881F400;
    }
L_0881F400:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F414;
      }
      goto L_0881F40C;
    }
L_0881F40C:
    aot_gpr[31] = (0x0881F414u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 134u, 0x0881EAA8u>(ctx, &aot_mem) && ctx.pc == 0x0881F414u) goto L_0881F414;
    return;
L_0881F414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F434;
      }
      goto L_0881F41C;
    }
L_0881F41C:
    aot_gpr[31] = (0x0881F424u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 173u, 0x0881EDACu>(ctx, &aot_mem) && ctx.pc == 0x0881F424u) goto L_0881F424;
    return;
L_0881F424:
    aot_gpr[31] = (0x0881F42Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0881F14C;
L_0881F42C:
    aot_gpr[31] = (0x0881F434u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 149u, 0x0881EBD8u>(ctx, &aot_mem) && ctx.pc == 0x0881F434u) goto L_0881F434;
    return;
L_0881F434:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F444:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0881F460u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 162u, 0x0881EC98u>(ctx, &aot_mem) && ctx.pc == 0x0881F460u) goto L_0881F460;
    return;
L_0881F460:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(728)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0881F478u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881F478u) goto L_0881F478;
    return;
L_0881F478:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F4B4;
      }
      goto L_0881F484;
    }
L_0881F484:
    aot_gpr[31] = (0x0881F48Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881F48Cu) goto L_0881F48C;
    return;
L_0881F48C:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[9] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881F4B4u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881F4B4u) goto L_0881F4B4;
    return;
L_0881F4B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F4C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0881F4D4u);
    // nop
    goto L_0881F444;
L_0881F4D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F4E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0881F4F0u);
    // nop
    goto L_0881F444;
L_0881F4F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F4FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0881F554u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881F554u) goto L_0881F554;
    return;
L_0881F554:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0881F560u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881F560u) goto L_0881F560;
    return;
L_0881F560:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881F584u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881F584u) goto L_0881F584;
    return;
L_0881F584:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F5A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1364)));
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (0u | 41u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 23u);
        goto L_0881F5CC;
    }
    goto L_0881F5CC;
L_0881F5CC:
    aot_gpr[7] = (15923u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 13107u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x0881F5E8u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0881F4FC;
L_0881F5E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F5F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1136)));
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1132)));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[13] = aot_fpr[18] - aot_fpr[13];
    aot_fpr[12] = aot_fpr[17] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1380), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16076u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1124)));
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[1] = aot_fpr[1] / aot_fpr[13];
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (49024u << 16u);
    aot_fpr[3] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (15820u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16128u << 16u);
    aot_fpr[2] = aot_fpr[19] - aot_fpr[2];
    aot_fpr[5] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1128)));
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.set_fpu_condition((aot_fpr[1] <= aot_fpr[20]));
    aot_fpr[6] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1120)));
      if (branch_taken) {
          goto L_0881F6E0;
      }
      goto L_0881F6D8;
    }
L_0881F6D8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[1] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_0881F6F0;
      }
      goto L_0881F6E0;
    }
L_0881F6E0:
    ctx.set_fpu_condition((aot_fpr[1] < aot_fpr[3]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[1] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[3]));
        goto L_0881F6F0;
    }
    goto L_0881F6F0;
L_0881F6F0:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16799u << 16u);
      if (branch_taken) {
          goto L_0881F744;
      }
      goto L_0881F700;
    }
L_0881F700:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0881F728;
      }
      goto L_0881F720;
    }
L_0881F720:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[4] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_0881F73C;
      }
      goto L_0881F728;
    }
L_0881F728:
    aot_fpr[4] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[4] < aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[4] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
        goto L_0881F73C;
    }
    goto L_0881F73C;
L_0881F73C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1140), __builtin_bit_cast(std::uint32_t, aot_fpr[4]));
      if (branch_taken) {
          goto L_0881F758;
      }
      goto L_0881F744;
    }
L_0881F744:
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1140)));
    aot_gpr[4] = (16192u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1140), __builtin_bit_cast(std::uint32_t, aot_fpr[4]));
    goto L_0881F758;
L_0881F758:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
    aot_gpr[31] = (0x0881F770u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 55u, 0x0881D364u>(ctx, &aot_mem) && ctx.pc == 0x0881F770u) goto L_0881F770;
    return;
L_0881F770:
    aot_gpr[4] = (16025u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1380)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (15948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_gpr[7] = (16204u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 52429u);
    aot_gpr[8] = (17096u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1144)));
    aot_gpr[9] = (16230u << 16u);
    aot_gpr[9] = (aot_gpr[9] | 26214u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[2] / aot_fpr[13];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = aot_fpr[1] + aot_fpr[13];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[4];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[16];
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[2] <= aot_fpr[6]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1144), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
      if (branch_taken) {
          goto L_0881F7F4;
      }
      goto L_0881F7EC;
    }
L_0881F7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F810;
      }
      goto L_0881F7F4;
    }
L_0881F7F4:
    aot_gpr[4] = (48896u << 16u);
    aot_fpr[6] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[6] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[6] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0881F810;
    }
    goto L_0881F810;
L_0881F810:
    aot_fpr[5] = aot_fpr[5] + aot_fpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1144), __builtin_bit_cast(std::uint32_t, aot_fpr[6]));
    ctx.set_fpu_condition((aot_fpr[5] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1128), __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
      if (branch_taken) {
          goto L_0881F834;
      }
      goto L_0881F828;
    }
L_0881F828:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1128), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[5] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1144), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_0881F834;
L_0881F834:
    ctx.set_fpu_condition((aot_fpr[5] < aot_fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F850;
      }
      goto L_0881F844;
    }
L_0881F844:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1128), __builtin_bit_cast(std::uint32_t, aot_fpr[3]));
    aot_fpr[5] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1144), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_0881F850;
L_0881F850:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1136), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    ctx.set_fpu_condition((aot_fpr[5] < aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1132), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1124), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
      if (branch_taken) {
          goto L_0881F8F4;
      }
      goto L_0881F864;
    }
L_0881F864:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881F8EC;
      }
      goto L_0881F870;
    }
L_0881F870:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(728)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0881F888u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881F888u) goto L_0881F888;
    return;
L_0881F888:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u | 9u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (0u | 23u);
        goto L_0881F8A8;
    }
    goto L_0881F8A8;
L_0881F8A8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0881F8B8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881F8B8u) goto L_0881F8B8;
    return;
L_0881F8B8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 4u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881F8DCu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881F8DCu) goto L_0881F8DC;
    return;
L_0881F8DC:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1120), aot_gpr[4]);
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1140)));
    aot_fpr[5] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1128)));
    goto L_0881F8EC;
L_0881F8EC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(620), __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
      if (branch_taken) {
          goto L_0881F984;
      }
      goto L_0881F8F4;
    }
L_0881F8F4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881F97C;
      }
      goto L_0881F900;
    }
L_0881F900:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(728)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0881F918u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881F918u) goto L_0881F918;
    return;
L_0881F918:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u | 10u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (0u | 23u);
        goto L_0881F938;
    }
    goto L_0881F938;
L_0881F938:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0881F948u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881F948u) goto L_0881F948;
    return;
L_0881F948:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 4u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881F96Cu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881F96Cu) goto L_0881F96C;
    return;
L_0881F96C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1120), aot_gpr[4]);
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1140)));
    aot_fpr[5] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1128)));
    goto L_0881F97C;
L_0881F97C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[5]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(620), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0881F984;
L_0881F984:
    aot_gpr[4] = (15395u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[4] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F9BC;
      }
      goto L_0881F9A0;
    }
L_0881F9A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(924)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881F9BC;
      }
      goto L_0881F9B0;
    }
L_0881F9B0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0881F9BCu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[4]));
    goto L_0881F5A8;
L_0881F9BC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F9D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1948)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1932)));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[6] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (16128u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[26] = aot_fpr[12] + aot_fpr[24];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[7]);
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[8] = (16800u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(632)));
    ctx.set_fpu_condition((aot_fpr[26] <= aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[8]);
      if (branch_taken) {
          goto L_0881FA5C;
      }
      goto L_0881FA54;
    }
L_0881FA54:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0881FA70;
      }
      goto L_0881FA5C;
    }
L_0881FA5C:
    ctx.set_fpu_condition((aot_fpr[26] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FA70;
      }
      goto L_0881FA6C;
    }
L_0881FA6C:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_0881FA70;
L_0881FA70:
    if (aot_gpr[4] == 0u) {
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
        goto L_0881FA84;
    }
    goto L_0881FA78;
L_0881FA78:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0881FA84;
      }
      goto L_0881FA84;
    }
L_0881FA84:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1020), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0881FA98;
      }
      goto L_0881FA8C;
    }
L_0881FA8C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0881FA9C;
      }
      goto L_0881FA98;
    }
L_0881FA98:
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_0881FA9C;
L_0881FA9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1036), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16752u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_0881FBC4;
      }
      goto L_0881FAD0;
    }
L_0881FAD0:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881FAE8u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0881FAE8u) goto L_0881FAE8;
    return;
L_0881FAE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_0881FB64;
      }
      goto L_0881FAF4;
    }
L_0881FAF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x0881FB14u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881FB14u) goto L_0881FB14;
    return;
L_0881FB14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u | 15u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 23u);
        goto L_0881FB34;
    }
    goto L_0881FB34;
L_0881FB34:
    aot_gpr[31] = (0x0881FB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881FB3Cu) goto L_0881FB3C;
    return;
L_0881FB3C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 1u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881FB60u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881FB60u) goto L_0881FB60;
    return;
L_0881FB60:
    aot_gpr[4] = (16544u << 16u);
    goto L_0881FB64;
L_0881FB64:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(560)));
      if (branch_taken) {
          goto L_0881FB90;
      }
      goto L_0881FB88;
    }
L_0881FB88:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0881FBA0;
      }
      goto L_0881FB90;
    }
L_0881FB90:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
        goto L_0881FBA0;
    }
    goto L_0881FBA0;
L_0881FBA0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = aot_fpr[24] - aot_fpr[12];
      if (branch_taken) {
          goto L_0881FBB4;
      }
      goto L_0881FBA8;
    }
L_0881FBA8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0881FBB8;
      }
      goto L_0881FBB4;
    }
L_0881FBB4:
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_0881FBB8;
L_0881FBB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1024), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(548), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0881FBF4;
      }
      goto L_0881FBC4;
    }
L_0881FBC4:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881FBDCu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0881FBDCu) goto L_0881FBDC;
    return;
L_0881FBDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FBF4;
      }
      goto L_0881FBE8;
    }
L_0881FBE8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0881FBF4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x0881FBF4u) goto L_0881FBF4;
    return;
L_0881FBF4:
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FCF8;
      }
      goto L_0881FC04;
    }
L_0881FC04:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881FC1Cu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0881FC1Cu) goto L_0881FC1C;
    return;
L_0881FC1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_0881FC98;
      }
      goto L_0881FC28;
    }
L_0881FC28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x0881FC48u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881FC48u) goto L_0881FC48;
    return;
L_0881FC48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u | 14u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 23u);
        goto L_0881FC68;
    }
    goto L_0881FC68;
L_0881FC68:
    aot_gpr[31] = (0x0881FC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881FC70u) goto L_0881FC70;
    return;
L_0881FC70:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 2u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881FC94u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881FC94u) goto L_0881FC94;
    return;
L_0881FC94:
    aot_gpr[4] = (16672u << 16u);
    goto L_0881FC98;
L_0881FC98:
    aot_fpr[20] = aot_fpr[20] - aot_fpr[28];
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[20] = aot_fpr[20] / aot_fpr[12];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(584)));
      if (branch_taken) {
          goto L_0881FCC0;
      }
      goto L_0881FCB8;
    }
L_0881FCB8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0881FCD4;
      }
      goto L_0881FCC0;
    }
L_0881FCC0:
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    ctx.set_fpu_condition((aot_fpr[28] < aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
        goto L_0881FCD4;
    }
    goto L_0881FCD4;
L_0881FCD4:
    if (aot_gpr[5] == 0u) {
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
        goto L_0881FCE8;
    }
    goto L_0881FCDC;
L_0881FCDC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0881FCE8;
      }
      goto L_0881FCE8;
    }
L_0881FCE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1028), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(572), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0881FD30;
      }
      goto L_0881FCF8;
    }
L_0881FCF8:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(19));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881FD10u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0881FD10u) goto L_0881FD10;
    return;
L_0881FD10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD28;
      }
      goto L_0881FD1C;
    }
L_0881FD1C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0881FD28u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 148u, 0x0881EBA8u>(ctx, &aot_mem) && ctx.pc == 0x0881FD28u) goto L_0881FD28;
    return;
L_0881FD28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_0881FD30;
L_0881FD30:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_gpr[19] = (0u | 1u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(380)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x0881FD70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 144u, 0x088FCB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0881FD70u) goto L_0881FD70;
    return;
L_0881FD70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1156)));
      if (branch_taken) {
          goto L_0881FD94;
      }
      goto L_0881FD7C;
    }
L_0881FD7C:
    aot_gpr[19] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[19] = (0u | 1u);
        goto L_0881FD90;
    }
    goto L_0881FD90;
L_0881FD90:
    aot_gpr[19] = (aot_gpr[19] & 255u);
    goto L_0881FD94;
L_0881FD94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(380)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (15820u << 16u);
      if (branch_taken) {
          goto L_0881FDF8;
      }
      goto L_0881FDA4;
    }
L_0881FDA4:
    aot_gpr[5] = (48588u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[28] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (15820u << 16u);
      if (branch_taken) {
          goto L_0881FDF8;
      }
      goto L_0881FDC0;
    }
L_0881FDC0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[5] = (15820u << 16u);
      if (branch_taken) {
          goto L_0881FDF8;
      }
      goto L_0881FDC8;
    }
L_0881FDC8:
    aot_gpr[5] = (15752u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 34953u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0881FDEC;
      }
      goto L_0881FDE8;
    }
L_0881FDE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1156), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    goto L_0881FDEC;
L_0881FDEC:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1160), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_0881FE1C;
      }
      goto L_0881FDF8;
    }
L_0881FDF8:
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0881FE1C;
      }
      goto L_0881FE14;
    }
L_0881FE14:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1156), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1160), static_cast<std::uint8_t>(0u));
    goto L_0881FE1C;
L_0881FE1C:
    aot_gpr[31] = (0x0881FE24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 144u, 0x088FCB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0881FE24u) goto L_0881FE24;
    return;
L_0881FE24:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1160)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 47u, 0x0882031Cu>(ctx, &aot_mem); return;
      }
      goto L_0881FE2C;
    }
L_0881FE2C:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (2218u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 5u, 0x08820040u>(ctx, &aot_mem); return;
      }
      goto L_0881FE38;
    }
L_0881FE38:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(21));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881FE54u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0881FE54u) goto L_0881FE54;
    return;
L_0881FE54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881FEB0;
      }
      goto L_0881FE60;
    }
L_0881FE60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x0881FE80u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881FE80u) goto L_0881FE80;
    return;
L_0881FE80:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0881FE8Cu);
    aot_gpr[5] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881FE8Cu) goto L_0881FE8C;
    return;
L_0881FE8C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 6u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0881FEB0u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881FEB0u) goto L_0881FEB0;
    return;
L_0881FEB0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1156)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(668), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u | 7u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881FED0u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0881FED0u) goto L_0881FED0;
    return;
L_0881FED0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881FF2C;
      }
      goto L_0881FEDC;
    }
L_0881FEDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x0881FEFCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881FEFCu) goto L_0881FEFC;
    return;
L_0881FEFC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0881FF08u);
    aot_gpr[5] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881FF08u) goto L_0881FF08;
    return;
L_0881FF08:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 7u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0881FF2Cu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881FF2Cu) goto L_0881FF2C;
    return;
L_0881FF2C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881FF44u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x0881FF44u) goto L_0881FF44;
    return;
L_0881FF44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(21)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
        goto L_0881FFA4;
    }
    goto L_0881FF50;
L_0881FF50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x0881FF70u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881FF70u) goto L_0881FF70;
    return;
L_0881FF70:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0881FF7Cu);
    aot_gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881FF7Cu) goto L_0881FF7C;
    return;
L_0881FF7C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (0u | 8u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0881FFA0u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x0881FFA0u) goto L_0881FFA0;
    return;
L_0881FFA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_0881FFA4;
L_0881FFA4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6932)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1948)));
    aot_gpr[4] = (16880u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1156)));
      if (branch_taken) {
          goto L_0881FFE4;
      }
      goto L_0881FFDC;
    }
L_0881FFDC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0881FFF8;
      }
      goto L_0881FFE4;
    }
L_0881FFE4:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FFF8;
      }
      goto L_0881FFF4;
    }
L_0881FFF4:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_0881FFF8;
L_0881FFF8:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16384u << 16u);
    ctx.pc = 0x08820000u; return;
}

void recomp_unit_0027(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0027_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_27(Runtime &runtime) {
    runtime.register_generated_unit(27u, 0x0881F000u, 4096u, &recomp_unit_0027, &recomp_unit_0027_entry);
    runtime.register_function(0x0881F000u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F008u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F01Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F028u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F040u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F060u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F070u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F094u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F0A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F0A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F0B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F0CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F0ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F0FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F120u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F12Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F134u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F14Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F1A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F1B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F1C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F1C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F1CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F1D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F1E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F1ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F1F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F248u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F258u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F268u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F288u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F28Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F298u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F29Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F2B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F2C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F2CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F2E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F2F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F310u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F330u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F338u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F35Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F368u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F374u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F378u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F384u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F39Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F3A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F3B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F3CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F3E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F3F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F3F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F400u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F40Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F414u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F41Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F424u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F42Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F434u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F444u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F460u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F478u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F484u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F48Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F4B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F4C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F4D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F4E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F4F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F4FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F554u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F560u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F584u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F5A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F5CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F5E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F5F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F6D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F6E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F6F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F700u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F720u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F728u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F73Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F744u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F758u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F770u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F7ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F7F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F810u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F828u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F834u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F844u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F850u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F864u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F870u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F888u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F8A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F8B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F8DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F8ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F8F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F900u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F918u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F938u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F948u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F96Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F97Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F984u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F9A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F9B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F9BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881F9D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FA54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FA5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FA6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FA70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FA78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FA84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FA8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FA98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FA9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FAD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FAE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FAF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FB14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FB34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FB3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FB60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FB64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FB88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FB90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FBA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FBA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FBB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FBB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FBC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FBDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FBE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FBF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FC04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FC1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FC28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FC48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FC68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FC70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FC94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FC98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FCB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FCC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FCD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FCDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FCE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FCF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FD10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FD1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FD28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FD30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FD70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FD7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FD90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FD94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FDA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FDC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FDC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FDE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FDECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FDF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FE14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FE1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FE24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FE2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FE38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FE54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FE60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FE80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FE8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FEB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FED0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FEDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FEFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FF08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FF2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FF44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FF50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FF70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FF7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FFA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FFA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FFDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FFE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FFF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0881FFF8u, &recomp_unit_0027, "recomp_unit_0027");
}
} // namespace psprecomp
