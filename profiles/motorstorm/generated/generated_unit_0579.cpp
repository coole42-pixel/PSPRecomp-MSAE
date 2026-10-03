#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0579[1014] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0,
    0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 19, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0,
    32, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 38, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0,
    60, 0, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96,
    0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    0, 106, 0, 107, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 122, 0, 0, 0, 0, 0, 0, 0, 123, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 127,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 136, 0, 137, 138, 0, 139, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 147,
    0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 157, 0, 158,
    0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0,
    0, 178, 0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 185, 186, 0, 187, 0, 188, 0,
    189, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
};
void recomp_unit_0579_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A47000u;
        entry_id = (entry_delta < 4056u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0579[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A47000;
    case 2u: goto L_08A47008;
    case 3u: goto L_08A47018;
    case 4u: goto L_08A4702C;
    case 5u: goto L_08A47038;
    case 6u: goto L_08A47040;
    case 7u: goto L_08A47044;
    case 8u: goto L_08A47054;
    case 9u: goto L_08A4706C;
    case 10u: goto L_08A47070;
    case 11u: goto L_08A47084;
    case 12u: goto L_08A4708C;
    case 13u: goto L_08A47094;
    case 14u: goto L_08A470A8;
    case 15u: goto L_08A470B0;
    case 16u: goto L_08A470BC;
    case 17u: goto L_08A470C8;
    case 18u: goto L_08A470D0;
    case 19u: goto L_08A470D4;
    case 20u: goto L_08A470D8;
    case 21u: goto L_08A470F8;
    case 22u: goto L_08A47104;
    case 23u: goto L_08A47110;
    case 24u: goto L_08A4711C;
    case 25u: goto L_08A47130;
    case 26u: goto L_08A47138;
    case 27u: goto L_08A4713C;
    case 28u: goto L_08A47148;
    case 29u: goto L_08A47158;
    case 30u: goto L_08A4716C;
    case 31u: goto L_08A47178;
    case 32u: goto L_08A47180;
    case 33u: goto L_08A47184;
    case 34u: goto L_08A47194;
    case 35u: goto L_08A471B0;
    case 36u: goto L_08A471B8;
    case 37u: goto L_08A471C0;
    case 38u: goto L_08A471C8;
    case 39u: goto L_08A471CC;
    case 40u: goto L_08A471E0;
    case 41u: goto L_08A47210;
    case 42u: goto L_08A47218;
    case 43u: goto L_08A47248;
    case 44u: goto L_08A47254;
    case 45u: goto L_08A4726C;
    case 46u: goto L_08A4729C;
    case 47u: goto L_08A472A4;
    case 48u: goto L_08A472AC;
    case 49u: goto L_08A472C4;
    case 50u: goto L_08A472D8;
    case 51u: goto L_08A47300;
    case 52u: goto L_08A4731C;
    case 53u: goto L_08A47324;
    case 54u: goto L_08A47334;
    case 55u: goto L_08A4733C;
    case 56u: goto L_08A47344;
    case 57u: goto L_08A47350;
    case 58u: goto L_08A47370;
    case 59u: goto L_08A47378;
    case 60u: goto L_08A47380;
    case 61u: goto L_08A4738C;
    case 62u: goto L_08A47394;
    case 63u: goto L_08A4739C;
    case 64u: goto L_08A473A8;
    case 65u: goto L_08A473E4;
    case 66u: goto L_08A473EC;
    case 67u: goto L_08A47408;
    case 68u: goto L_08A47424;
    case 69u: goto L_08A47434;
    case 70u: goto L_08A47448;
    case 71u: goto L_08A47450;
    case 72u: goto L_08A47458;
    case 73u: goto L_08A47468;
    case 74u: goto L_08A47474;
    case 75u: goto L_08A47480;
    case 76u: goto L_08A474F0;
    case 77u: goto L_08A474F4;
    case 78u: goto L_08A47518;
    case 79u: goto L_08A47520;
    case 80u: goto L_08A4752C;
    case 81u: goto L_08A47534;
    case 82u: goto L_08A47544;
    case 83u: goto L_08A47550;
    case 84u: goto L_08A4755C;
    case 85u: goto L_08A4757C;
    case 86u: goto L_08A47584;
    case 87u: goto L_08A4758C;
    case 88u: goto L_08A475AC;
    case 89u: goto L_08A475B4;
    case 90u: goto L_08A475C0;
    case 91u: goto L_08A475D0;
    case 92u: goto L_08A475DC;
    case 93u: goto L_08A475E4;
    case 94u: goto L_08A475EC;
    case 95u: goto L_08A475F4;
    case 96u: goto L_08A475FC;
    case 97u: goto L_08A47604;
    case 98u: goto L_08A47610;
    case 99u: goto L_08A47640;
    case 100u: goto L_08A47654;
    case 101u: goto L_08A47670;
    case 102u: goto L_08A476A0;
    case 103u: goto L_08A476A8;
    case 104u: goto L_08A476C0;
    case 105u: goto L_08A476EC;
    case 106u: goto L_08A47704;
    case 107u: goto L_08A4770C;
    case 108u: goto L_08A47710;
    case 109u: goto L_08A47728;
    case 110u: goto L_08A47730;
    case 111u: goto L_08A47744;
    case 112u: goto L_08A4775C;
    case 113u: goto L_08A47784;
    case 114u: goto L_08A477B4;
    case 115u: goto L_08A47804;
    case 116u: goto L_08A4781C;
    case 117u: goto L_08A4782C;
    case 118u: goto L_08A47834;
    case 119u: goto L_08A47848;
    case 120u: goto L_08A47868;
    case 121u: goto L_08A478A8;
    case 122u: goto L_08A478AC;
    case 123u: goto L_08A478CC;
    case 124u: goto L_08A478D0;
    case 125u: goto L_08A478E0;
    case 126u: goto L_08A478F8;
    case 127u: goto L_08A478FC;
    case 128u: goto L_08A4791C;
    case 129u: goto L_08A4792C;
    case 130u: goto L_08A47934;
    case 131u: goto L_08A4793C;
    case 132u: goto L_08A47944;
    case 133u: goto L_08A47964;
    case 134u: goto L_08A47968;
    case 135u: goto L_08A4798C;
    case 136u: goto L_08A47990;
    case 137u: goto L_08A47998;
    case 138u: goto L_08A4799C;
    case 139u: goto L_08A479A4;
    case 140u: goto L_08A479A8;
    case 141u: goto L_08A479BC;
    case 142u: goto L_08A479C8;
    case 143u: goto L_08A479D0;
    case 144u: goto L_08A479D8;
    case 145u: goto L_08A479E0;
    case 146u: goto L_08A479F4;
    case 147u: goto L_08A479FC;
    case 148u: goto L_08A47A04;
    case 149u: goto L_08A47A0C;
    case 150u: goto L_08A47A38;
    case 151u: goto L_08A47A3C;
    case 152u: goto L_08A47A94;
    case 153u: goto L_08A47AB4;
    case 154u: goto L_08A47ACC;
    case 155u: goto L_08A47AD8;
    case 156u: goto L_08A47AF0;
    case 157u: goto L_08A47AF4;
    case 158u: goto L_08A47AFC;
    case 159u: goto L_08A47B14;
    case 160u: goto L_08A47B1C;
    case 161u: goto L_08A47B24;
    case 162u: goto L_08A47C50;
    case 163u: goto L_08A47C7C;
    case 164u: goto L_08A47CA4;
    case 165u: goto L_08A47CD0;
    case 166u: goto L_08A47D14;
    case 167u: goto L_08A47D48;
    case 168u: goto L_08A47D50;
    case 169u: goto L_08A47D58;
    case 170u: goto L_08A47D70;
    case 171u: goto L_08A47D8C;
    case 172u: goto L_08A47D9C;
    case 173u: goto L_08A47DA8;
    case 174u: goto L_08A47DB4;
    case 175u: goto L_08A47DD4;
    case 176u: goto L_08A47DE4;
    case 177u: goto L_08A47DF4;
    case 178u: goto L_08A47E04;
    case 179u: goto L_08A47E10;
    case 180u: goto L_08A47E18;
    case 181u: goto L_08A47E24;
    case 182u: goto L_08A47E30;
    case 183u: goto L_08A47E40;
    case 184u: goto L_08A47E5C;
    case 185u: goto L_08A47E64;
    case 186u: goto L_08A47E68;
    case 187u: goto L_08A47E70;
    case 188u: goto L_08A47E78;
    case 189u: goto L_08A47E80;
    case 190u: goto L_08A47E88;
    case 191u: goto L_08A47E90;
    case 192u: goto L_08A47E9C;
    case 193u: goto L_08A47EC4;
    case 194u: goto L_08A47EC8;
    case 195u: goto L_08A47ED0;
    case 196u: goto L_08A47EF0;
    case 197u: goto L_08A47F0C;
    case 198u: goto L_08A47F44;
    case 199u: goto L_08A47F4C;
    case 200u: goto L_08A47F70;
    case 201u: goto L_08A47F80;
    case 202u: goto L_08A47FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A47000:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 64u);
      if (branch_taken) {
          goto L_08A47218;
      }
      goto L_08A47008;
    }
L_08A47008:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[20] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[20] = (aot_gpr[18] | 0u);
        goto L_08A47044;
    }
    goto L_08A47018;
L_08A47018:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4702Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4702Cu) goto L_08A4702C;
    return;
L_08A4702C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[20]) <= 0) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 256u, 0x08A46FFCu>(ctx, &aot_mem); return;
    }
    goto L_08A47038;
L_08A47038:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A47070;
      }
      goto L_08A47040;
    }
L_08A47040:
    aot_gpr[20] = (aot_gpr[18] | 0u);
    goto L_08A47044;
L_08A47044:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A47054u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A47054u) goto L_08A47054;
    return;
L_08A47054:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A4706C;
L_08A4706C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08A47070;
L_08A47070:
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 244u, 0x08A46F50u>(ctx, &aot_mem); return;
      }
      goto L_08A47084;
    }
L_08A47084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A471E0;
      }
      goto L_08A4708C;
    }
L_08A4708C:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A470A8;
      }
      goto L_08A47094;
    }
L_08A47094:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (0u | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A47094;
      }
      goto L_08A470A8;
    }
L_08A470A8:
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A470D8;
      }
      goto L_08A470B0;
    }
L_08A470B0:
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x08A470BCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 153u, 0x08A3A7A8u>(ctx, &aot_mem) && ctx.pc == 0x08A470BCu) goto L_08A470BC;
    return;
L_08A470BC:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A470D0;
      }
      goto L_08A470C8;
    }
L_08A470C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[23] - aot_gpr[20]);
      if (branch_taken) {
          goto L_08A470D4;
      }
      goto L_08A470D0;
    }
L_08A470D0:
    aot_gpr[23] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A470D4;
L_08A470D4:
    aot_gpr[22] = (0u | 1u);
    goto L_08A470D8;
L_08A470D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[23] ? 1u : 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[8] == 0u) {
    aot_gpr[7] = (aot_gpr[23] | 0u);
        goto L_08A470F8;
    }
    goto L_08A470F8;
L_08A470F8:
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[6]);
      if (branch_taken) {
          goto L_08A47148;
      }
      goto L_08A47104;
    }
L_08A47104:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A47148;
      }
      goto L_08A47110;
    }
L_08A47110:
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4711Cu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A4711Cu) goto L_08A4711C;
    return;
L_08A4711C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[21]);
    aot_gpr[31] = (0x08A47130u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 103u, 0x08A37910u>(ctx, &aot_mem) && ctx.pc == 0x08A47130u) goto L_08A47130;
    return;
L_08A47130:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[23] = (aot_gpr[23] - aot_gpr[21]);
      if (branch_taken) {
          goto L_08A471B0;
      }
      goto L_08A47138;
    }
L_08A47138:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08A4713C;
L_08A4713C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 64u);
      if (branch_taken) {
          goto L_08A47218;
      }
      goto L_08A47148;
    }
L_08A47148:
    aot_gpr[21] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[21] = (aot_gpr[7] | 0u);
        goto L_08A47184;
    }
    goto L_08A47158;
L_08A47158:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4716Cu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4716Cu) goto L_08A4716C;
    return;
L_08A4716C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[21]) <= 0) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08A4713C;
    }
    goto L_08A47178;
L_08A47178:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[23] - aot_gpr[21]);
      if (branch_taken) {
          goto L_08A471B0;
      }
      goto L_08A47180;
    }
L_08A47180:
    aot_gpr[21] = (aot_gpr[7] | 0u);
    goto L_08A47184;
L_08A47184:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A47194u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A47194u) goto L_08A47194;
    return;
L_08A47194:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[23] - aot_gpr[21]);
    goto L_08A471B0;
L_08A471B0:
    if (aot_gpr[23] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A471CC;
    }
    goto L_08A471B8;
L_08A471B8:
    aot_gpr[31] = (0x08A471C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 103u, 0x08A37910u>(ctx, &aot_mem) && ctx.pc == 0x08A471C0u) goto L_08A471C0;
    return;
L_08A471C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A47138;
      }
      goto L_08A471C8;
    }
L_08A471C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08A471CC;
L_08A471CC:
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[21]);
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[21]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A4708C;
      }
      goto L_08A471E0;
    }
L_08A471E0:
    aot_gpr[2] = (0u | 0u);
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
L_08A47210:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] | 64u);
    goto L_08A47218;
L_08A47218:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
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
L_08A47248:
    aot_gpr[2] = (ctx.fcr31);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47254:
    aot_gpr[2] = (ctx.fcr31);
    ctx.fcr31 = 0u & 0x0181FFFFu;
    // nop
    ctx.fcr31 = aot_gpr[4] & 0x0181FFFFu;
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4726C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[2] = (32768u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18496)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[3] = (aot_gpr[2] | 32u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-18496));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A47350;
      }
      goto L_08A4729C;
    }
L_08A4729C:
    aot_gpr[31] = (0x08A472A4u);
    // nop
    ctx.pc = 0x08A5AF1Cu;
    return;
L_08A472A4:
    aot_gpr[31] = (0x08A472ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 103u, 0x08A48B58u>(ctx, &aot_mem) && ctx.pc == 0x08A472ACu) goto L_08A472AC;
    return;
L_08A472AC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-19040));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[31] = (0x08A472C4u);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = 0x08A5B074u;
    return;
L_08A472C4:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[3] + static_cast<std::uint32_t>(-18544));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A47350;
      }
      goto L_08A472D8;
    }
L_08A472D8:
    aot_gpr[10] = (2213u << 16u);
    aot_gpr[8] = (2213u << 16u);
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(-29916));
    aot_gpr[9] = (aot_gpr[10] + static_cast<std::uint32_t>(-30044));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[31] = (0x08A47300u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    ctx.pc = 0x08A5AEF4u;
    return;
L_08A47300:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(11320));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_08A47394;
      }
      goto L_08A4731C;
    }
L_08A4731C:
    aot_gpr[31] = (0x08A47324u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    ctx.pc = 0x08A5AEFCu;
    return;
L_08A47324:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_08A47370;
      }
      goto L_08A47334;
    }
L_08A47334:
    aot_gpr[31] = (0x08A4733Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    ctx.pc = 0x08A5AED4u;
    return;
L_08A4733C:
    aot_gpr[31] = (0x08A47344u);
    aot_gpr[4] = (0u + 0u);
    ctx.pc = 0x08A5AF04u;
    return;
L_08A47344:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18496), aot_gpr[4]);
    aot_gpr[3] = (0u + 0u);
    goto L_08A47350;
L_08A47350:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08A47370:
    aot_gpr[31] = (0x08A47378u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08A5AFF4u;
    return;
L_08A47378:
    aot_gpr[31] = (0x08A47380u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.pc = 0x08A5AEDCu;
    return;
L_08A47380:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[16] + 0u);
    goto L_08A4738C;
L_08A4738C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    goto L_08A47350;
L_08A47394:
    aot_gpr[31] = (0x08A4739Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08A5AFF4u;
    return;
L_08A4739C:
    aot_gpr[3] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A4738C;
L_08A473A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(-18496));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-18496)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A47604;
      }
      goto L_08A473E4;
    }
L_08A473E4:
    aot_gpr[31] = (0x08A473ECu);
    // nop
    ctx.pc = 0x08A5B214u;
    return;
L_08A473EC:
    aot_gpr[5] = (aot_gpr[16] << 6u);
    aot_gpr[6] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) >= 0;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A475EC;
      }
      goto L_08A47408;
    }
L_08A47408:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[11] = (aot_gpr[17] + static_cast<std::uint32_t>(76));
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(324), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), aot_gpr[9]);
    aot_gpr[31] = (0x08A47424u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    ctx.pc = 0x08A5B21Cu;
    return;
L_08A47424:
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-3));
    aot_gpr[7] = (aot_gpr[8] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(72)));
        goto L_08A4758C;
    }
    goto L_08A47434;
L_08A47434:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr[13] = ((aot_gpr[18] >> 0u) & 0x1FFFFFFFu);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(4), aot_gpr[13]);
    goto L_08A47448;
L_08A47448:
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(-18496));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A47450;
L_08A47450:
    if (aot_gpr[18] == 0u) {
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_08A4755C;
    }
    goto L_08A47458;
L_08A47458:
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(-18496));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A47518;
      }
      goto L_08A47468;
    }
L_08A47468:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08A474F0;
      }
      goto L_08A47474;
    }
L_08A47474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A474F4;
      }
      goto L_08A47480;
    }
L_08A47480:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[18] = (40192u << 16u);
    aot_gpr[19] = (53760u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(156), aot_gpr[3]);
    aot_gpr[13] = (39936u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(160), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(164), aot_gpr[6]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[24] = ((aot_gpr[12] >> 24u) & 0x0000000Fu);
    aot_gpr[16] = (aot_gpr[24] << 16u);
    aot_gpr[9] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[14] = (aot_gpr[16] | aot_gpr[18]);
    aot_gpr[12] = ((aot_gpr[12] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[20] = (aot_gpr[25] | aot_gpr[19]);
    aot_gpr[10] = (aot_gpr[14] | aot_gpr[15]);
    aot_gpr[8] = (aot_gpr[12] | aot_gpr[13]);
    aot_gpr[7] = (aot_gpr[9] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[3] = (0u + 0u);
    goto L_08A474F0;
L_08A474F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A474F4;
L_08A474F4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47518:
    aot_gpr[31] = (0x08A47520u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(12192));
    goto L_08A47B24;
L_08A47520:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08A4752Cu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(16));
    goto L_08A47C50;
L_08A4752C:
    aot_gpr[31] = (0x08A47534u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(7));
    goto L_08A47C7C;
L_08A47534:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12256)));
    aot_gpr[31] = (0x08A47544u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A47CA4;
L_08A47544:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08A47550u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A47CD0;
L_08A47550:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_08A47468;
L_08A4755C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[24] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[25] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[25] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[24] + static_cast<std::uint32_t>(12168));
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[31] = (0x08A4757Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-18504), 0u);
    ctx.pc = 0x08A5AEFCu;
    return;
L_08A4757C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A474F0;
      }
      goto L_08A47584;
    }
L_08A47584:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08A47458;
L_08A4758C:
    aot_gpr[16] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[4] = ((aot_gpr[4] & ~0x1FFFFFFFu) | ((aot_gpr[18] & 0x1FFFFFFFu) << 0u));
    aot_gpr[14] = ((aot_gpr[18] >> 30u) & 0x00000001u);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[14] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A47448;
      }
      goto L_08A475AC;
    }
L_08A475AC:
    aot_gpr[31] = (0x08A475B4u);
    // nop
    ctx.pc = 0x08A5B214u;
    return;
L_08A475B4:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    // PSP CACHE is a no-op in coherent host memory.
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(72)));
    goto L_08A475C0;
L_08A475C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[3] & 63u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A475DC;
      }
      goto L_08A475D0;
    }
L_08A475D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A475C0;
L_08A475DC:
    aot_gpr[31] = (0x08A475E4u);
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(-18496));
    ctx.pc = 0x08A5B21Cu;
    return;
L_08A475E4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A47450;
L_08A475EC:
    aot_gpr[31] = (0x08A475F4u);
    // nop
    ctx.pc = 0x08A5B21Cu;
    return;
L_08A475F4:
    aot_gpr[4] = (32768u << 16u);
    aot_gpr[3] = (aot_gpr[4] | 33u);
    goto L_08A475FC;
L_08A475FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), 0u);
    goto L_08A474F0;
L_08A47604:
    aot_gpr[2] = (32768u << 16u);
    aot_gpr[3] = (aot_gpr[2] | 1u);
    goto L_08A475FC;
L_08A47610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(-18496));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[3] = (32768u << 16u);
    aot_gpr[7] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(72)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[3] | 33u);
      if (branch_taken) {
          goto L_08A47710;
      }
      goto L_08A47640;
    }
L_08A47640:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[3] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[2] | 263u);
      if (branch_taken) {
          goto L_08A47710;
      }
      goto L_08A47654;
    }
L_08A47654:
    aot_gpr[11] = (2215u << 16u);
    aot_gpr[9] = (aot_gpr[3] << 2u);
    aot_gpr[10] = (aot_gpr[11] + static_cast<std::uint32_t>(12268));
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[6];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47670:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(-18496));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
    aot_gpr[25] = (3840u << 16u);
    aot_gpr[24] = (aot_gpr[7] | aot_gpr[25]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (3072u << 16u);
    aot_gpr[12] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(8), aot_gpr[15]);
    aot_gpr[31] = (0x08A476A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 106u, 0x08A48C64u>(ctx, &aot_mem) && ctx.pc == 0x08A476A0u) goto L_08A476A0;
    return;
L_08A476A0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A47710;
      }
      goto L_08A476A8;
    }
L_08A476A8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-18496));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A476C0u);
    aot_gpr[17] = (aot_gpr[4] - aot_gpr[13]);
    ctx.pc = 0x08A5B214u;
    return;
L_08A476C0:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[7] = (aot_gpr[12] << 6u);
    aot_gpr[11] = (aot_gpr[7] - aot_gpr[12]);
    aot_gpr[3] = (aot_gpr[11] << 2u);
    aot_gpr[9] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(324), aot_gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A47728;
      }
      goto L_08A476EC;
    }
L_08A476EC:
    aot_gpr[8] = (aot_gpr[5] << 6u);
    aot_gpr[6] = (aot_gpr[8] - aot_gpr[5]);
    aot_gpr[24] = (aot_gpr[6] << 2u);
    aot_gpr[25] = (aot_gpr[16] + static_cast<std::uint32_t>(76));
    aot_gpr[15] = (aot_gpr[24] + aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[15]);
    goto L_08A47704;
L_08A47704:
    aot_gpr[31] = (0x08A4770Cu);
    // nop
    ctx.pc = 0x08A5B21Cu;
    return;
L_08A4770C:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_08A47710;
L_08A47710:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47728:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), 0u);
    goto L_08A47704;
L_08A47730:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-18496));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[12] == aot_gpr[7];
    aot_gpr[8] = (2816u << 16u);
      if (branch_taken) {
          goto L_08A4775C;
      }
      goto L_08A47744;
    }
L_08A47744:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_08A476A8;
L_08A4775C:
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[25] = (3602u << 16u);
    aot_gpr[14] = (3072u << 16u);
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (aot_gpr[24] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    goto L_08A476A8;
L_08A47784:
    aot_gpr[11] = (aot_gpr[16] + static_cast<std::uint32_t>(-18496));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(72)));
    aot_gpr[10] = (3840u << 16u);
    aot_gpr[3] = (aot_gpr[7] | aot_gpr[10]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (3072u << 16u);
    aot_gpr[6] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A476A8;
L_08A477B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(-18496));
    aot_gpr[10] = ((aot_gpr[4] >> 24u) & 0x0000000Fu);
    aot_gpr[13] = ((aot_gpr[4] >> 16u) & 0x00000FFFu);
    aot_gpr[5] = (17u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(16)));
    aot_gpr[12] = (aot_gpr[13] | aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[10] << 16u);
    aot_gpr[8] = (3584u << 16u);
    aot_gpr[3] = (4096u << 16u);
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[10] = (aot_gpr[12] | aot_gpr[8]);
    aot_gpr[4] = (3072u << 16u);
    aot_gpr[8] = (aot_gpr[6] | aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[11] == aot_gpr[3];
    aot_gpr[5] = (aot_gpr[2] | aot_gpr[4]);
      if (branch_taken) {
          goto L_08A47848;
      }
      goto L_08A47804;
    }
L_08A47804:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(72)));
    aot_gpr[7] = ((aot_gpr[7] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[2] = (2560u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (aot_gpr[7] | aot_gpr[2]);
    aot_gpr[25] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    goto L_08A4781C;
L_08A4781C:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[25] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    goto L_08A4782C;
L_08A4782C:
    aot_gpr[31] = (0x08A47834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 106u, 0x08A48C64u>(ctx, &aot_mem) && ctx.pc == 0x08A47834u) goto L_08A47834;
    return;
L_08A47834:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[4]) ? aot_gpr[2] : aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47848:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(72)));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[24] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(8), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A4782C;
L_08A47868:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-17152)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A47934;
      }
      goto L_08A478A8;
    }
L_08A478A8:
    aot_gpr[4] = (2218u << 16u);
    goto L_08A478AC;
L_08A478AC:
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-18496));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[21]);
      if (branch_taken) {
          goto L_08A478D0;
      }
      goto L_08A478CC;
    }
L_08A478CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    goto L_08A478D0;
L_08A478D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x08A478E0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    ctx.pc = 0x08A5AF24u;
    return;
L_08A478E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[8];
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4791C;
      }
      goto L_08A478F8;
    }
L_08A478F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A478FC;
L_08A478FC:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08A4791C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08A4792Cu);
    aot_gpr[4] = (aot_gpr[9] + aot_gpr[10]);
    ctx.pc = 0x08A5AF2Cu;
    return;
L_08A4792C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A478FC;
L_08A47934:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A4793Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4793Cu) goto L_08A4793C;
    return;
L_08A4793C:
    aot_gpr[4] = (2218u << 16u);
    goto L_08A478AC;
L_08A47944:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17160)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-17160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A479FC;
      }
      goto L_08A47964;
    }
L_08A47964:
    aot_gpr[5] = (2218u << 16u);
    goto L_08A47968;
L_08A47968:
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-18496));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A479E0;
      }
      goto L_08A4798C;
    }
L_08A4798C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08A47990;
L_08A47990:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A479D0;
      }
      goto L_08A47998;
    }
L_08A47998:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08A4799C;
L_08A4799C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_08A479BC;
    }
    goto L_08A479A4;
L_08A479A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08A479A8;
L_08A479A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A479BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A479C8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A479C8u) goto L_08A479C8;
    return;
L_08A479C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08A479A8;
L_08A479D0:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A479D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A479D8u) goto L_08A479D8;
    return;
L_08A479D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08A4799C;
L_08A479E0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x08A479F4u);
    aot_gpr[4] = (aot_gpr[9] + aot_gpr[8]);
    ctx.pc = 0x08A5AF2Cu;
    return;
L_08A479F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08A47990;
L_08A479FC:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x08A47A04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A47A04u) goto L_08A47A04;
    return;
L_08A47A04:
    aot_gpr[5] = (2218u << 16u);
    goto L_08A47968;
L_08A47A0C:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-17148)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A47B14;
      }
      goto L_08A47A38;
    }
L_08A47A38:
    aot_gpr[8] = (2218u << 16u);
    goto L_08A47A3C;
L_08A47A3C:
    aot_gpr[6] = (aot_gpr[8] + static_cast<std::uint32_t>(-18496));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(72)));
    aot_gpr[25] = ((aot_gpr[17] >> 24u) & 0x0000000Fu);
    aot_gpr[5] = (aot_gpr[25] << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (40192u << 16u);
    aot_gpr[14] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (53760u << 16u);
    aot_gpr[13] = (aot_gpr[5] | aot_gpr[2]);
    aot_gpr[14] = ((aot_gpr[14] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[3] = (39936u << 16u);
    aot_gpr[9] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    aot_gpr[24] = (aot_gpr[16] | aot_gpr[4]);
    aot_gpr[10] = (aot_gpr[14] | aot_gpr[3]);
    aot_gpr[11] = (aot_gpr[13] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    aot_gpr[7] = (aot_gpr[9] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(76));
    goto L_08A47A94;
L_08A47A94:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(60)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(160), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(164), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(156), aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_08A47A94;
      }
      goto L_08A47AB4;
    }
L_08A47AB4:
    aot_gpr[6] = (aot_gpr[8] + static_cast<std::uint32_t>(-18496));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[11] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(40), aot_gpr[18]);
      if (branch_taken) {
          goto L_08A47AF0;
      }
      goto L_08A47ACC;
    }
L_08A47ACC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(64)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(56)));
        goto L_08A47AF4;
    }
    goto L_08A47AD8;
L_08A47AD8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (ctx.lo);
    aot_gpr[12] = (aot_gpr[7] << 2u);
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[8] + static_cast<std::uint32_t>(-18496));
    goto L_08A47AF0;
L_08A47AF0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(56)));
    goto L_08A47AF4;
L_08A47AF4:
    if (aot_gpr[8] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(56), aot_gpr[18]);
        goto L_08A47AFC;
    }
    goto L_08A47AFC;
L_08A47AFC:
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
L_08A47B14:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A47B1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A47B1Cu) goto L_08A47B1C;
    return;
L_08A47B1C:
    aot_gpr[8] = (2218u << 16u);
    goto L_08A47A3C;
L_08A47B24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[10] = (aot_gpr[5] & 15u);
    aot_gpr[8] = (aot_gpr[6] & 15u);
    aot_gpr[7] = (aot_gpr[10] << 12u);
    aot_gpr[3] = (aot_gpr[8] << 8u);
    aot_gpr[25] = (aot_gpr[9] & 15u);
    aot_gpr[15] = (aot_gpr[7] | aot_gpr[3]);
    aot_gpr[24] = (aot_gpr[25] << 4u);
    aot_gpr[12] = (aot_gpr[15] | aot_gpr[24]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (aot_gpr[14] & 15u);
    aot_gpr[10] = (aot_gpr[12] | aot_gpr[13]);
    aot_gpr[6] = (57856u << 16u);
    aot_gpr[8] = (aot_gpr[10] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[25] = (aot_gpr[3] & 15u);
    aot_gpr[5] = (aot_gpr[7] & 15u);
    aot_gpr[14] = (aot_gpr[25] << 12u);
    aot_gpr[15] = (aot_gpr[5] << 8u);
    aot_gpr[13] = (aot_gpr[24] & 15u);
    aot_gpr[6] = (aot_gpr[14] | aot_gpr[15]);
    aot_gpr[12] = (aot_gpr[13] << 4u);
    aot_gpr[3] = (aot_gpr[6] | aot_gpr[12]);
    aot_gpr[7] = (aot_gpr[9] & 15u);
    aot_gpr[24] = (aot_gpr[3] | aot_gpr[7]);
    aot_gpr[25] = (58112u << 16u);
    aot_gpr[15] = (aot_gpr[24] | aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[13] = (aot_gpr[2] & 15u);
    aot_gpr[5] = (aot_gpr[14] & 15u);
    aot_gpr[7] = (aot_gpr[13] << 12u);
    aot_gpr[9] = (aot_gpr[5] << 8u);
    aot_gpr[6] = (aot_gpr[12] & 15u);
    aot_gpr[24] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[25] = (aot_gpr[6] << 4u);
    aot_gpr[2] = (aot_gpr[24] | aot_gpr[25]);
    aot_gpr[14] = (aot_gpr[15] & 15u);
    aot_gpr[12] = (aot_gpr[2] | aot_gpr[14]);
    aot_gpr[13] = (58368u << 16u);
    aot_gpr[9] = (aot_gpr[12] | aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[10] + static_cast<std::uint32_t>(12));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[3] & 15u);
    aot_gpr[4] = (aot_gpr[7] & 15u);
    aot_gpr[24] = (aot_gpr[5] << 12u);
    aot_gpr[25] = (aot_gpr[4] << 8u);
    aot_gpr[15] = (aot_gpr[6] & 15u);
    aot_gpr[13] = (aot_gpr[24] | aot_gpr[25]);
    aot_gpr[14] = (aot_gpr[15] << 4u);
    aot_gpr[3] = (aot_gpr[13] | aot_gpr[14]);
    aot_gpr[7] = (aot_gpr[12] & 15u);
    aot_gpr[5] = (aot_gpr[3] | aot_gpr[7]);
    aot_gpr[6] = (58624u << 16u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47C50:
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[9] = (aot_gpr[5] << 8u);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (13824u << 16u);
    aot_gpr[3] = (aot_gpr[8] | aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47C7C:
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[7] = (aot_gpr[4] & 7u);
    aot_gpr[8] = (21248u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47CA4:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (23296u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[9] >> 8u);
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47CD0:
    aot_gpr[13] = (2218u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[12] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (aot_gpr[12] >> 8u);
    aot_gpr[11] = (18432u << 16u);
    aot_gpr[7] = (aot_gpr[10] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[5] >> 8u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (18688u << 16u);
    aot_gpr[8] = (aot_gpr[3] | aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47D14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[2] = (32768u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[3] + static_cast<std::uint32_t>(-18544));
    aot_gpr[4] = (aot_gpr[2] | 1u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18496)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(-18496));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A47D70;
      }
      goto L_08A47D48;
    }
L_08A47D48:
    aot_gpr[31] = (0x08A47D50u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08A5AFF4u;
    return;
L_08A47D50:
    aot_gpr[31] = (0x08A47D58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.pc = 0x08A5AEDCu;
    return;
L_08A47D58:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-18496), 0u);
    goto L_08A47D70;
L_08A47D70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47D8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A47D9Cu);
    aot_gpr[4] = (0u + 0u);
    goto L_08A47610;
L_08A47D9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47DA8:
    aot_gpr[6] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (2218u << 16u);
      if (branch_taken) {
          goto L_08A47DD4;
      }
      goto L_08A47DB4;
    }
L_08A47DB4:
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(-18496));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[9] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[8] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A47DD4;
L_08A47DD4:
    aot_gpr[10] = (aot_gpr[7] + static_cast<std::uint32_t>(-18496));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47DE4:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-18424)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47DF4:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08A47E24;
      }
      goto L_08A47E04;
    }
L_08A47E04:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-18544));
      if (branch_taken) {
          goto L_08A47E18;
      }
      goto L_08A47E10;
    }
L_08A47E10:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47E18:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_08A47E10;
L_08A47E24:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-18544)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-18544), aot_gpr[5]);
    goto L_08A47E10;
L_08A47E30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A47E70;
      }
      goto L_08A47E40;
    }
L_08A47E40:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(12288));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47E5C:
    aot_gpr[31] = (0x08A47E64u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    ctx.pc = 0x08A5AF04u;
    return;
L_08A47E64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A47E68;
L_08A47E68:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47E70:
    aot_gpr[2] = (0u + 0u);
    goto L_08A47E64;
L_08A47E78:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-18472)));
    goto L_08A47E80;
L_08A47E80:
    aot_gpr[31] = (0x08A47E88u);
    // nop
    ctx.pc = 0x08A5AED4u;
    return;
L_08A47E88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A47E68;
L_08A47E90:
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-18468)));
    goto L_08A47E80;
L_08A47E9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(-18496));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A47EF0;
      }
      goto L_08A47EC4;
    }
L_08A47EC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    goto L_08A47EC8;
L_08A47EC8:
    aot_gpr[31] = (0x08A47ED0u);
    // nop
    ctx.pc = 0x08A5AF2Cu;
    return;
L_08A47ED0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(-18496));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47EF0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    goto L_08A47EC8;
L_08A47F0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] + static_cast<std::uint32_t>(-18496));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[10] = (aot_gpr[6] + 0u);
    aot_gpr[8] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A47F44u);
    aot_gpr[7] = (aot_gpr[10] + 0u);
    goto L_08A47868;
L_08A47F44:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(76));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    goto L_08A47F4C;
L_08A47F4C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(156), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(164), aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_08A47F4C;
      }
      goto L_08A47F70;
    }
L_08A47F70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47F80:
    aot_gpr[11] = (2218u << 16u);
    aot_gpr[10] = (aot_gpr[11] + static_cast<std::uint32_t>(-18496));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(72)));
    aot_gpr[25] = ((aot_gpr[4] >> 24u) & 0x0000000Fu);
    aot_gpr[15] = (aot_gpr[25] << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(8)));
    aot_gpr[24] = (40704u << 16u);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    aot_gpr[11] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[14] = (aot_gpr[15] | aot_gpr[24]);
    aot_gpr[3] = ((aot_gpr[3] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[6] = (40448u << 16u);
    aot_gpr[7] = (aot_gpr[14] | aot_gpr[5]);
    aot_gpr[12] = (aot_gpr[3] | aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47FD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(-18496));
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A48004u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    (void)rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 21u, 0x08A48330u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0579(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0579_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_579(Runtime &runtime) {
    runtime.register_generated_unit(579u, 0x08A47000u, 4096u, &recomp_unit_0579, &recomp_unit_0579_entry);
    runtime.register_function(0x08A47000u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47008u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47018u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4702Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47038u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47040u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47044u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47054u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4706Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47070u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47084u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4708Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47094u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A470A8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A470B0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A470BCu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A470C8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A470D0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A470D4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A470D8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A470F8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47104u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47110u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4711Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47130u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47138u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4713Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47148u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47158u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4716Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47178u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47180u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47184u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47194u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A471B0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A471B8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A471C0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A471C8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A471CCu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A471E0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47210u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47218u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47248u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47254u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4726Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4729Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A472A4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A472ACu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A472C4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A472D8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47300u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4731Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47324u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47334u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4733Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47344u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47350u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47370u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47378u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47380u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4738Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47394u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4739Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A473A8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A473E4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A473ECu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47408u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47424u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47434u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47448u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47450u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47458u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47468u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47474u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47480u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A474F0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A474F4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47518u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47520u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4752Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47534u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47544u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47550u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4755Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4757Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47584u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4758Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A475ACu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A475B4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A475C0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A475D0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A475DCu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A475E4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A475ECu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A475F4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A475FCu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47604u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47610u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47640u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47654u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47670u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A476A0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A476A8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A476C0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A476ECu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47704u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4770Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47710u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47728u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47730u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47744u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4775Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47784u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A477B4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47804u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4781Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4782Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47834u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47848u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47868u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A478A8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A478ACu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A478CCu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A478D0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A478E0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A478F8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A478FCu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4791Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4792Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47934u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4793Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47944u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47964u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47968u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4798Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47990u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47998u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A4799Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A479A4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A479A8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A479BCu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A479C8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A479D0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A479D8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A479E0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A479F4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A479FCu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47A04u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47A0Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47A38u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47A3Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47A94u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47AB4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47ACCu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47AD8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47AF0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47AF4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47AFCu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47B14u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47B1Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47B24u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47C50u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47C7Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47CA4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47CD0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47D14u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47D48u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47D50u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47D58u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47D70u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47D8Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47D9Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47DA8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47DB4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47DD4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47DE4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47DF4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E04u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E10u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E18u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E24u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E30u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E40u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E5Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E64u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E68u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E70u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E78u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E80u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E88u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E90u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47E9Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47EC4u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47EC8u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47ED0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47EF0u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47F0Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47F44u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47F4Cu, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47F70u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47F80u, &recomp_unit_0579, "recomp_unit_0579");
    runtime.register_function(0x08A47FD4u, &recomp_unit_0579, "recomp_unit_0579");
}
} // namespace psprecomp
