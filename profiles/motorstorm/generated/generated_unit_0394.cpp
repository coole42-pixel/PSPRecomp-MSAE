#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0394[1021] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16,
    0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 23, 24, 0, 0, 25, 0, 0,
    0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 44,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 49, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 56,
    0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0,
    66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 72, 0, 0, 0, 0, 0, 73, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87,
    0, 0, 88, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 0, 106, 0,
    107, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 147, 0, 148, 149, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0,
    0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 159,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0,
    0, 0, 176, 0, 177, 0, 0, 0, 178, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 208,
    0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 214, 0, 215,
};
void recomp_unit_0394_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0898E004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0394[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0898E004;
    case 2u: goto L_0898E010;
    case 3u: goto L_0898E01C;
    case 4u: goto L_0898E028;
    case 5u: goto L_0898E03C;
    case 6u: goto L_0898E048;
    case 7u: goto L_0898E05C;
    case 8u: goto L_0898E064;
    case 9u: goto L_0898E070;
    case 10u: goto L_0898E084;
    case 11u: goto L_0898E0A0;
    case 12u: goto L_0898E0C0;
    case 13u: goto L_0898E0C8;
    case 14u: goto L_0898E0D0;
    case 15u: goto L_0898E0E4;
    case 16u: goto L_0898E100;
    case 17u: goto L_0898E108;
    case 18u: goto L_0898E118;
    case 19u: goto L_0898E12C;
    case 20u: goto L_0898E148;
    case 21u: goto L_0898E150;
    case 22u: goto L_0898E158;
    case 23u: goto L_0898E168;
    case 24u: goto L_0898E16C;
    case 25u: goto L_0898E178;
    case 26u: goto L_0898E18C;
    case 27u: goto L_0898E194;
    case 28u: goto L_0898E1A8;
    case 29u: goto L_0898E1CC;
    case 30u: goto L_0898E210;
    case 31u: goto L_0898E218;
    case 32u: goto L_0898E224;
    case 33u: goto L_0898E248;
    case 34u: goto L_0898E26C;
    case 35u: goto L_0898E278;
    case 36u: goto L_0898E284;
    case 37u: goto L_0898E2A8;
    case 38u: goto L_0898E2B0;
    case 39u: goto L_0898E2D4;
    case 40u: goto L_0898E2DC;
    case 41u: goto L_0898E2E4;
    case 42u: goto L_0898E2EC;
    case 43u: goto L_0898E2F8;
    case 44u: goto L_0898E300;
    case 45u: goto L_0898E31C;
    case 46u: goto L_0898E334;
    case 47u: goto L_0898E33C;
    case 48u: goto L_0898E354;
    case 49u: goto L_0898E358;
    case 50u: goto L_0898E360;
    case 51u: goto L_0898E37C;
    case 52u: goto L_0898E3AC;
    case 53u: goto L_0898E3D0;
    case 54u: goto L_0898E3E0;
    case 55u: goto L_0898E3E8;
    case 56u: goto L_0898E400;
    case 57u: goto L_0898E408;
    case 58u: goto L_0898E418;
    case 59u: goto L_0898E428;
    case 60u: goto L_0898E438;
    case 61u: goto L_0898E440;
    case 62u: goto L_0898E450;
    case 63u: goto L_0898E460;
    case 64u: goto L_0898E474;
    case 65u: goto L_0898E47C;
    case 66u: goto L_0898E484;
    case 67u: goto L_0898E49C;
    case 68u: goto L_0898E4B8;
    case 69u: goto L_0898E4C0;
    case 70u: goto L_0898E4C8;
    case 71u: goto L_0898E500;
    case 72u: goto L_0898E508;
    case 73u: goto L_0898E520;
    case 74u: goto L_0898E524;
    case 75u: goto L_0898E544;
    case 76u: goto L_0898E558;
    case 77u: goto L_0898E560;
    case 78u: goto L_0898E574;
    case 79u: goto L_0898E57C;
    case 80u: goto L_0898E584;
    case 81u: goto L_0898E5B4;
    case 82u: goto L_0898E5C4;
    case 83u: goto L_0898E5D4;
    case 84u: goto L_0898E5E0;
    case 85u: goto L_0898E5EC;
    case 86u: goto L_0898E5F8;
    case 87u: goto L_0898E600;
    case 88u: goto L_0898E60C;
    case 89u: goto L_0898E610;
    case 90u: goto L_0898E62C;
    case 91u: goto L_0898E668;
    case 92u: goto L_0898E670;
    case 93u: goto L_0898E678;
    case 94u: goto L_0898E680;
    case 95u: goto L_0898E6A0;
    case 96u: goto L_0898E6C8;
    case 97u: goto L_0898E6DC;
    case 98u: goto L_0898E6EC;
    case 99u: goto L_0898E6F4;
    case 100u: goto L_0898E71C;
    case 101u: goto L_0898E724;
    case 102u: goto L_0898E754;
    case 103u: goto L_0898E75C;
    case 104u: goto L_0898E764;
    case 105u: goto L_0898E770;
    case 106u: goto L_0898E77C;
    case 107u: goto L_0898E784;
    case 108u: goto L_0898E788;
    case 109u: goto L_0898E7A4;
    case 110u: goto L_0898E7AC;
    case 111u: goto L_0898E7CC;
    case 112u: goto L_0898E7D4;
    case 113u: goto L_0898E7F4;
    case 114u: goto L_0898E804;
    case 115u: goto L_0898E828;
    case 116u: goto L_0898E834;
    case 117u: goto L_0898E83C;
    case 118u: goto L_0898E848;
    case 119u: goto L_0898E854;
    case 120u: goto L_0898E85C;
    case 121u: goto L_0898E89C;
    case 122u: goto L_0898E8B0;
    case 123u: goto L_0898E8B8;
    case 124u: goto L_0898E8C0;
    case 125u: goto L_0898E8C8;
    case 126u: goto L_0898E8E0;
    case 127u: goto L_0898E900;
    case 128u: goto L_0898E910;
    case 129u: goto L_0898E924;
    case 130u: goto L_0898E92C;
    case 131u: goto L_0898E94C;
    case 132u: goto L_0898E970;
    case 133u: goto L_0898E9C8;
    case 134u: goto L_0898E9D0;
    case 135u: goto L_0898E9D8;
    case 136u: goto L_0898E9E0;
    case 137u: goto L_0898E9E8;
    case 138u: goto L_0898EA04;
    case 139u: goto L_0898EA2C;
    case 140u: goto L_0898EA3C;
    case 141u: goto L_0898EA4C;
    case 142u: goto L_0898EA54;
    case 143u: goto L_0898EA7C;
    case 144u: goto L_0898EAA4;
    case 145u: goto L_0898EAAC;
    case 146u: goto L_0898EAB8;
    case 147u: goto L_0898EAC4;
    case 148u: goto L_0898EACC;
    case 149u: goto L_0898EAD0;
    case 150u: goto L_0898EAE8;
    case 151u: goto L_0898EAF0;
    case 152u: goto L_0898EB0C;
    case 153u: goto L_0898EB14;
    case 154u: goto L_0898EB30;
    case 155u: goto L_0898EB40;
    case 156u: goto L_0898EB60;
    case 157u: goto L_0898EB6C;
    case 158u: goto L_0898EB74;
    case 159u: goto L_0898EB80;
    case 160u: goto L_0898EB8C;
    case 161u: goto L_0898EBE4;
    case 162u: goto L_0898EBEC;
    case 163u: goto L_0898EBF4;
    case 164u: goto L_0898EBFC;
    case 165u: goto L_0898EC04;
    case 166u: goto L_0898EC24;
    case 167u: goto L_0898EC4C;
    case 168u: goto L_0898EC5C;
    case 169u: goto L_0898EC6C;
    case 170u: goto L_0898EC74;
    case 171u: goto L_0898EC9C;
    case 172u: goto L_0898ECA4;
    case 173u: goto L_0898ECDC;
    case 174u: goto L_0898ECE8;
    case 175u: goto L_0898ECF4;
    case 176u: goto L_0898ED0C;
    case 177u: goto L_0898ED14;
    case 178u: goto L_0898ED24;
    case 179u: goto L_0898ED28;
    case 180u: goto L_0898ED58;
    case 181u: goto L_0898ED78;
    case 182u: goto L_0898ED88;
    case 183u: goto L_0898ED90;
    case 184u: goto L_0898EDA0;
    case 185u: goto L_0898EDD4;
    case 186u: goto L_0898EDD8;
    case 187u: goto L_0898EE0C;
    case 188u: goto L_0898EE4C;
    case 189u: goto L_0898EE60;
    case 190u: goto L_0898EE68;
    case 191u: goto L_0898EE78;
    case 192u: goto L_0898EE80;
    case 193u: goto L_0898EEAC;
    case 194u: goto L_0898EEBC;
    case 195u: goto L_0898EECC;
    case 196u: goto L_0898EEDC;
    case 197u: goto L_0898EEEC;
    case 198u: goto L_0898EF00;
    case 199u: goto L_0898EF14;
    case 200u: goto L_0898EF20;
    case 201u: goto L_0898EF2C;
    case 202u: goto L_0898EF3C;
    case 203u: goto L_0898EF4C;
    case 204u: goto L_0898EF54;
    case 205u: goto L_0898EF60;
    case 206u: goto L_0898EF70;
    case 207u: goto L_0898EF7C;
    case 208u: goto L_0898EF80;
    case 209u: goto L_0898EF90;
    case 210u: goto L_0898EFA0;
    case 211u: goto L_0898EFCC;
    case 212u: goto L_0898EFD4;
    case 213u: goto L_0898EFDC;
    case 214u: goto L_0898EFEC;
    case 215u: goto L_0898EFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0898E004:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_0898E01C;
      }
      goto L_0898E010;
    }
L_0898E010:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0898E01C;
L_0898E01C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E028:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0898E03Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x0898E03Cu) goto L_0898E03C;
    return;
L_0898E03C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E048:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0898E05Cu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 186u, 0x0898DD48u>(ctx, &aot_mem) && ctx.pc == 0x0898E05Cu) goto L_0898E05C;
    return;
L_0898E05C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0898E070;
      }
      goto L_0898E064;
    }
L_0898E064:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E070:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898E084u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898E084u) goto L_0898E084;
    return;
L_0898E084:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0898E028;
L_0898E0A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(13852));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(13852)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0898E0D0;
      }
      goto L_0898E0C0;
    }
L_0898E0C0:
    aot_gpr[31] = (0x0898E0C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0898E048;
L_0898E0C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(13852), 0u);
    aot_gpr[3] = (0u + 0u);
    goto L_0898E0D0;
L_0898E0D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E0E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[3] + static_cast<std::uint32_t>(13864));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_0898E118;
      }
      goto L_0898E100;
    }
L_0898E100:
    aot_gpr[31] = (0x0898E108u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(13864)));
    goto L_0898E048;
L_0898E108:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898E118u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(548));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E118u) goto L_0898E118;
    return;
L_0898E118:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E12C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(13064)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0898E16C;
      }
      goto L_0898E148;
    }
L_0898E148:
    aot_gpr[31] = (0x0898E150u);
    // nop
    goto L_0898E0A0;
L_0898E150:
    aot_gpr[31] = (0x0898E158u);
    // nop
    goto L_0898E0E4;
L_0898E158:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(13064)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(13064), aot_gpr[3]);
      if (branch_taken) {
          goto L_0898E178;
      }
      goto L_0898E168;
    }
L_0898E168:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0898E16C;
L_0898E16C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E178:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x0898E18Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898E18Cu) goto L_0898E18C;
    return;
L_0898E18C:
    aot_gpr[31] = (0x0898E194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 212u, 0x0898DED4u>(ctx, &aot_mem) && ctx.pc == 0x0898E194u) goto L_0898E194;
    return;
L_0898E194:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13864));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898E1A8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(548));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E1A8u) goto L_0898E1A8;
    return;
L_0898E1A8:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(13852));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(13852), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E1CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x0898E210u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 224u, 0x0898DFECu>(ctx, &aot_mem) && ctx.pc == 0x0898E210u) goto L_0898E210;
    return;
L_0898E210:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898E284;
      }
      goto L_0898E218;
    }
L_0898E218:
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_0898E2D4;
      }
      goto L_0898E224;
    }
L_0898E224:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    goto L_0898E248;
L_0898E248:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898E26Cu);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898E26Cu) goto L_0898E26C;
    return;
L_0898E26C:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898E2A8;
      }
      goto L_0898E278;
    }
L_0898E278:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_0898E284;
L_0898E284:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
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
L_0898E2A8:
    aot_gpr[31] = (0x0898E2B0u);
    // nop
    goto L_0898E028;
L_0898E2B0:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
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
L_0898E2D4:
    aot_gpr[31] = (0x0898E2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 185u, 0x0898DD34u>(ctx, &aot_mem) && ctx.pc == 0x0898E2DCu) goto L_0898E2DC;
    return;
L_0898E2DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    goto L_0898E248;
L_0898E2E4:
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
        goto L_0898E33C;
    }
    goto L_0898E2EC;
L_0898E2EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
      if (branch_taken) {
          goto L_0898E360;
      }
      goto L_0898E2F8;
    }
L_0898E2F8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
      if (branch_taken) {
          goto L_0898E37C;
      }
      goto L_0898E300;
    }
L_0898E300:
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12516)));
    aot_fpr[0] = aot_fpr[1] / aot_fpr[0];
    aot_fpr[0] = aot_fpr[2] / aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_0898E31C;
L_0898E31C:
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
        goto L_0898E358;
    }
    goto L_0898E334;
L_0898E334:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E33C:
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898E334;
      }
      goto L_0898E354;
    }
L_0898E354:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    goto L_0898E358;
L_0898E358:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E360:
    aot_gpr[3] = (aot_gpr[2] >> 1u);
    aot_gpr[2] = (aot_gpr[2] & 1u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[2] = aot_fpr[2] + aot_fpr[2];
      if (branch_taken) {
          goto L_0898E300;
      }
      goto L_0898E37C;
    }
L_0898E37C:
    aot_gpr[3] = (aot_gpr[5] >> 1u);
    aot_gpr[2] = (aot_gpr[5] & 1u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12516)));
    aot_fpr[1] = aot_fpr[1] + aot_fpr[1];
    aot_fpr[0] = aot_fpr[1] / aot_fpr[0];
    aot_fpr[0] = aot_fpr[2] / aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_0898E31C;
L_0898E3AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(14420));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(13056)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_0898E3E0;
      }
      goto L_0898E3D0;
    }
L_0898E3D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E3E0:
    aot_gpr[31] = (0x0898E3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 163u, 0x08992A88u>(ctx, &aot_mem) && ctx.pc == 0x0898E3E8u) goto L_0898E3E8;
    return;
L_0898E3E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14428));
      if (branch_taken) {
          goto L_0898E3D0;
      }
      goto L_0898E400;
    }
L_0898E400:
    aot_gpr[31] = (0x0898E408u);
    // nop
    goto L_0898E2E4;
L_0898E408:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (0x0898E418u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14440));
    goto L_0898E2E4;
L_0898E418:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (0x0898E428u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14452));
    goto L_0898E2E4;
L_0898E428:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (0x0898E438u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14464));
    goto L_0898E2E4;
L_0898E438:
    aot_gpr[31] = (0x0898E440u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(14420));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x0898E440u) goto L_0898E440;
    return;
L_0898E440:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E450:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(13056)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898E4C0;
      }
      goto L_0898E460;
    }
L_0898E460:
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(14420));
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[7] + 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
      if (branch_taken) {
          goto L_0898E49C;
      }
      goto L_0898E474;
    }
L_0898E474:
    if (aot_gpr[5] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(32)));
        goto L_0898E484;
    }
    goto L_0898E47C;
L_0898E47C:
    // nop
    goto L_0898E3AC;
L_0898E484:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    goto L_0898E3AC;
L_0898E49C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[3]);
      if (branch_taken) {
          goto L_0898E47C;
      }
      goto L_0898E4B8;
    }
L_0898E4B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(32)));
    goto L_0898E484;
L_0898E4C0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E4C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0898E500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 186u, 0x0898DD48u>(ctx, &aot_mem) && ctx.pc == 0x0898E500u) goto L_0898E500;
    return;
L_0898E500:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898E520;
      }
      goto L_0898E508;
    }
L_0898E508:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[17] = (0u | 50005u);
      if (branch_taken) {
          goto L_0898E544;
      }
      goto L_0898E520;
    }
L_0898E520:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_0898E524;
L_0898E524:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_0898E544:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898E558u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898E558u) goto L_0898E558;
    return;
L_0898E558:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898E520;
      }
      goto L_0898E560;
    }
L_0898E560:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(28));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_0898E520;
      }
      goto L_0898E574;
    }
L_0898E574:
    aot_gpr[31] = (0x0898E57Cu);
    // nop
    goto L_0898E450;
L_0898E57C:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_0898E524;
L_0898E584:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(13852)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_0898E60C;
      }
      goto L_0898E5B4;
    }
L_0898E5B4:
    aot_gpr[18] = (aot_gpr[3] + static_cast<std::uint32_t>(13852));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_0898E5C4;
L_0898E5C4:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0898E5D4u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    goto L_0898E4C8;
L_0898E5D4:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0898E60C;
      }
      goto L_0898E5E0;
    }
L_0898E5E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898E610;
      }
      goto L_0898E5EC;
    }
L_0898E5EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_0898E5C4;
    }
    goto L_0898E5F8;
L_0898E5F8:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898E600u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898E600u) goto L_0898E600;
    return;
L_0898E600:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_0898E5C4;
    }
    goto L_0898E60C;
L_0898E60C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_0898E610;
L_0898E610:
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
L_0898E62C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[9] + 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
      if (branch_taken) {
          goto L_0898E71C;
      }
      goto L_0898E668;
    }
L_0898E668:
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0898E71C;
      }
      goto L_0898E670;
    }
L_0898E670:
    aot_gpr[31] = (0x0898E678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 186u, 0x0898DD48u>(ctx, &aot_mem) && ctx.pc == 0x0898E678u) goto L_0898E678;
    return;
L_0898E678:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898E71C;
      }
      goto L_0898E680;
    }
L_0898E680:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[17] = (0u | 50005u);
      if (branch_taken) {
          goto L_0898E6C8;
      }
      goto L_0898E6A0;
    }
L_0898E6A0:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
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
L_0898E6C8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898E6DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898E6DCu) goto L_0898E6DC;
    return;
L_0898E6DC:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0898E6A0;
      }
      goto L_0898E6EC;
    }
L_0898E6EC:
    aot_gpr[31] = (0x0898E6F4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0898E450;
L_0898E6F4:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
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
L_0898E71C:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    goto L_0898E6A0;
L_0898E724:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0898E854;
      }
      goto L_0898E754;
    }
L_0898E754:
    aot_gpr[31] = (0x0898E75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 186u, 0x0898DD48u>(ctx, &aot_mem) && ctx.pc == 0x0898E75Cu) goto L_0898E75C;
    return;
L_0898E75C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898E7AC;
      }
      goto L_0898E764;
    }
L_0898E764:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898E7CC;
      }
      goto L_0898E770;
    }
L_0898E770:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898E788;
      }
      goto L_0898E77C;
    }
L_0898E77C:
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (aot_gpr[16] + 0u);
        goto L_0898E828;
    }
    goto L_0898E784;
L_0898E784:
    aot_gpr[2] = (2217u << 16u);
    goto L_0898E788;
L_0898E788:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898E7A4u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898E7A4u) goto L_0898E7A4;
    return;
L_0898E7A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898E7F4;
      }
      goto L_0898E7AC;
    }
L_0898E7AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E7CC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 50005u);
      if (branch_taken) {
          goto L_0898E770;
      }
      goto L_0898E7D4;
    }
L_0898E7D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E7F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[31] = (0x0898E804u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(40));
    goto L_0898E450;
L_0898E804:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E828:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0898E834u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 193u, 0x0898DD8Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E834u) goto L_0898E834;
    return;
L_0898E834:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898E7AC;
      }
      goto L_0898E83C;
    }
L_0898E83C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_0898E7AC;
    }
    goto L_0898E848;
L_0898E848:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_0898E784;
L_0898E854:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    goto L_0898E7AC;
L_0898E85C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_0898E94C;
      }
      goto L_0898E89C;
    }
L_0898E89C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898E8B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898E8B0u) goto L_0898E8B0;
    return;
L_0898E8B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0898E94C;
      }
      goto L_0898E8B8;
    }
L_0898E8B8:
    aot_gpr[31] = (0x0898E8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 186u, 0x0898DD48u>(ctx, &aot_mem) && ctx.pc == 0x0898E8C0u) goto L_0898E8C0;
    return;
L_0898E8C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898E94C;
      }
      goto L_0898E8C8;
    }
L_0898E8C8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (0u | 50005u);
      if (branch_taken) {
          goto L_0898E900;
      }
      goto L_0898E8E0;
    }
L_0898E8E0:
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
L_0898E900:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898E910u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898E910u) goto L_0898E910;
    return;
L_0898E910:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(28));
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_0898E8E0;
      }
      goto L_0898E924;
    }
L_0898E924:
    aot_gpr[31] = (0x0898E92Cu);
    // nop
    goto L_0898E450;
L_0898E92C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
L_0898E94C:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
L_0898E970:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2804)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898E9C8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898E9C8u) goto L_0898E9C8;
    return;
L_0898E9C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898EA04;
      }
      goto L_0898E9D0;
    }
L_0898E9D0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0898EA04;
      }
      goto L_0898E9D8;
    }
L_0898E9D8:
    aot_gpr[31] = (0x0898E9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 186u, 0x0898DD48u>(ctx, &aot_mem) && ctx.pc == 0x0898E9E0u) goto L_0898E9E0;
    return;
L_0898E9E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898EA04;
      }
      goto L_0898E9E8;
    }
L_0898E9E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[19] = (0u | 50005u);
      if (branch_taken) {
          goto L_0898EA2C;
      }
      goto L_0898EA04;
    }
L_0898EA04:
    aot_gpr[2] = (aot_gpr[19] + 0u);
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
L_0898EA2C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898EA3Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898EA3Cu) goto L_0898EA3C;
    return;
L_0898EA3C:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0898EA04;
      }
      goto L_0898EA4C;
    }
L_0898EA4C:
    aot_gpr[31] = (0x0898EA54u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0898E450;
L_0898EA54:
    aot_gpr[2] = (aot_gpr[19] + 0u);
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
L_0898EA7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x0898EAA4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 186u, 0x0898DD48u>(ctx, &aot_mem) && ctx.pc == 0x0898EAA4u) goto L_0898EAA4;
    return;
L_0898EAA4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898EAF0;
      }
      goto L_0898EAAC;
    }
L_0898EAAC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898EB0C;
      }
      goto L_0898EAB8;
    }
L_0898EAB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898EAD0;
      }
      goto L_0898EAC4;
    }
L_0898EAC4:
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (aot_gpr[16] + 0u);
        goto L_0898EB60;
    }
    goto L_0898EACC;
L_0898EACC:
    aot_gpr[2] = (2217u << 16u);
    goto L_0898EAD0;
L_0898EAD0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898EAE8u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898EAE8u) goto L_0898EAE8;
    return;
L_0898EAE8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898EB30;
      }
      goto L_0898EAF0;
    }
L_0898EAF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EB0C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 50005u);
      if (branch_taken) {
          goto L_0898EAB8;
      }
      goto L_0898EB14;
    }
L_0898EB14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EB30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898EB40u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(40));
    goto L_0898E450;
L_0898EB40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EB60:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0898EB6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 193u, 0x0898DD8Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EB6Cu) goto L_0898EB6C;
    return;
L_0898EB6C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898EAF0;
      }
      goto L_0898EB74;
    }
L_0898EB74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_0898EAF0;
    }
    goto L_0898EB80;
L_0898EB80:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_0898EACC;
L_0898EB8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2804)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898EBE4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898EBE4u) goto L_0898EBE4;
    return;
L_0898EBE4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898EC9C;
      }
      goto L_0898EBEC;
    }
L_0898EBEC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0898EC9C;
      }
      goto L_0898EBF4;
    }
L_0898EBF4:
    aot_gpr[31] = (0x0898EBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 186u, 0x0898DD48u>(ctx, &aot_mem) && ctx.pc == 0x0898EBFCu) goto L_0898EBFC;
    return;
L_0898EBFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898EC9C;
      }
      goto L_0898EC04;
    }
L_0898EC04:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[9] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[17] = (0u | 50005u);
      if (branch_taken) {
          goto L_0898EC4C;
      }
      goto L_0898EC24;
    }
L_0898EC24:
    aot_gpr[2] = (aot_gpr[17] + 0u);
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
L_0898EC4C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898EC5Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898EC5Cu) goto L_0898EC5C;
    return;
L_0898EC5C:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0898EC24;
      }
      goto L_0898EC6C;
    }
L_0898EC6C:
    aot_gpr[31] = (0x0898EC74u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_0898E450;
L_0898EC74:
    aot_gpr[2] = (aot_gpr[17] + 0u);
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
L_0898EC9C:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    goto L_0898EC24;
L_0898ECA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0898EDD4;
      }
      goto L_0898ECDC;
    }
L_0898ECDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(264)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
        goto L_0898EDD8;
    }
    goto L_0898ECE8;
L_0898ECE8:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898EDD4;
      }
      goto L_0898ECF4;
    }
L_0898ECF4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2804)));
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898ED0Cu);
    aot_gpr[21] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898ED0Cu) goto L_0898ED0C;
    return;
L_0898ED0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898EDD4;
      }
      goto L_0898ED14;
    }
L_0898ED14:
    aot_gpr[18] = (aot_gpr[22] + static_cast<std::uint32_t>(13864));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (0u | 50007u);
      if (branch_taken) {
          goto L_0898ED58;
      }
      goto L_0898ED24;
    }
L_0898ED24:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    goto L_0898ED28;
L_0898ED28:
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
L_0898ED58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(544), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-48));
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_0898ED90;
      }
      goto L_0898ED78;
    }
L_0898ED78:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898ED88u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898ED88u) goto L_0898ED88;
    return;
L_0898ED88:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_0898EE0C;
      }
      goto L_0898ED90;
    }
L_0898ED90:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898EDA0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(548));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EDA0u) goto L_0898EDA0;
    return;
L_0898EDA0:
    aot_gpr[2] = (aot_gpr[19] + 0u);
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
L_0898EDD4:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
    goto L_0898EDD8;
L_0898EDD8:
    aot_gpr[2] = (aot_gpr[19] + 0u);
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
L_0898EE0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(256)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(260)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2804)));
    aot_gpr[20] = (aot_gpr[22] + static_cast<std::uint32_t>(13864));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(512));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898EE4Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898EE4Cu) goto L_0898EE4C;
    return;
L_0898EE4C:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x0898EE60u);
    aot_gpr[6] = (0u + 0u);
    goto L_0898E1CC;
L_0898EE60:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898EE80;
      }
      goto L_0898EE68;
    }
L_0898EE68:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898EE78u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(548));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EE78u) goto L_0898EE78;
    return;
L_0898EE78:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    goto L_0898ED28;
L_0898EE80:
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(13060)));
    aot_gpr[30] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(13884));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(536), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[18] = (aot_gpr[17] + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x0898EEACu);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(13060), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EEACu) goto L_0898EEAC;
    return;
L_0898EEAC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13886));
    aot_gpr[31] = (0x0898EEBCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EEBCu) goto L_0898EEBC;
    return;
L_0898EEBC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13888));
    aot_gpr[31] = (0x0898EECCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EECCu) goto L_0898EECC;
    return;
L_0898EECC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13890));
    aot_gpr[31] = (0x0898EEDCu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EEDCu) goto L_0898EEDC;
    return;
L_0898EEDC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13892));
    aot_gpr[31] = (0x0898EEECu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EEECu) goto L_0898EEEC;
    return;
L_0898EEEC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13894));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898EF00u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EF00u) goto L_0898EF00;
    return;
L_0898EF00:
    aot_gpr[19] = (0u + 0u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(255));
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(46));
    aot_gpr[21] = (aot_gpr[30] + static_cast<std::uint32_t>(13884));
    goto L_0898EF3C;
L_0898EF14:
    aot_gpr[5] = (aot_gpr[2] & 255u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[21]);
      if (branch_taken) {
          goto L_0898EF60;
      }
      goto L_0898EF20;
    }
L_0898EF20:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0898EF2Cu);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x0898EF2Cu) goto L_0898EF2C;
    return;
L_0898EF2C:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898EF80;
      }
      goto L_0898EF3C;
    }
L_0898EF3C:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[21]);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[23];
    aot_gpr[5] = (aot_gpr[19] & 255u);
      if (branch_taken) {
          goto L_0898EF14;
      }
      goto L_0898EF4C;
    }
L_0898EF4C:
    aot_gpr[31] = (0x0898EF54u);
    aot_gpr[20] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x0898EF54u) goto L_0898EF54;
    return;
L_0898EF54:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (0u + 0u);
    goto L_0898EF2C;
L_0898EF60:
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(13884));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[16]);
    aot_gpr[31] = (0x0898EF70u);
    aot_gpr[5] = (aot_gpr[19] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x0898EF70u) goto L_0898EF70;
    return;
L_0898EF70:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[31] = (0x0898EF7Cu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x0898EF7Cu) goto L_0898EF7C;
    return;
L_0898EF7C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0898EF80;
L_0898EF80:
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(13884));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[31] = (0x0898EF90u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EF90u) goto L_0898EF90;
    return;
L_0898EF90:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[31] = (0x0898EFA0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EFA0u) goto L_0898EFA0;
    return;
L_0898EFA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(13864)));
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[16] = (aot_gpr[22] + static_cast<std::uint32_t>(13864));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(13876));
    aot_gpr[8] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(53));
    aot_gpr[9] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0898EFCCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(532), aot_gpr[2]);
    goto L_0898EB8C;
L_0898EFCC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898EFF4;
      }
      goto L_0898EFD4;
    }
L_0898EFD4:
    aot_gpr[31] = (0x0898EFDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(13864)));
    goto L_0898E048;
L_0898EFDC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898EFECu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(548));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EFECu) goto L_0898EFEC;
    return;
L_0898EFEC:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    goto L_0898ED28;
L_0898EFF4:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (0x0898F000u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13868));
    (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0394(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0394_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_394(Runtime &runtime) {
    runtime.register_generated_unit(394u, 0x0898E000u, 4096u, &recomp_unit_0394, &recomp_unit_0394_entry);
    runtime.register_function(0x0898E004u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E010u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E01Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E028u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E03Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E048u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E05Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E064u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E070u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E084u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E0A0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E0C0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E0C8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E0D0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E0E4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E100u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E108u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E118u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E12Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E148u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E150u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E158u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E168u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E16Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E178u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E18Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E194u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E1A8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E1CCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E210u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E218u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E224u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E248u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E26Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E278u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E284u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E2A8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E2B0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E2D4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E2DCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E2E4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E2ECu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E2F8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E300u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E31Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E334u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E33Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E354u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E358u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E360u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E37Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E3ACu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E3D0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E3E0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E3E8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E400u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E408u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E418u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E428u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E438u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E440u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E450u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E460u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E474u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E47Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E484u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E49Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E4B8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E4C0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E4C8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E500u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E508u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E520u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E524u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E544u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E558u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E560u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E574u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E57Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E584u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E5B4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E5C4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E5D4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E5E0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E5ECu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E5F8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E600u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E60Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E610u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E62Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E668u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E670u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E678u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E680u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E6A0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E6C8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E6DCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E6ECu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E6F4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E71Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E724u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E754u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E75Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E764u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E770u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E77Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E784u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E788u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E7A4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E7ACu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E7CCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E7D4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E7F4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E804u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E828u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E834u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E83Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E848u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E854u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E85Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E89Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E8B0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E8B8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E8C0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E8C8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E8E0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E900u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E910u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E924u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E92Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E94Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E970u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E9C8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E9D0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E9D8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E9E0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898E9E8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EA04u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EA2Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EA3Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EA4Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EA54u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EA7Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EAA4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EAACu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EAB8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EAC4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EACCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EAD0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EAE8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EAF0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EB0Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EB14u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EB30u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EB40u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EB60u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EB6Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EB74u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EB80u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EB8Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EBE4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EBECu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EBF4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EBFCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EC04u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EC24u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EC4Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EC5Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EC6Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EC74u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EC9Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ECA4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ECDCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ECE8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ECF4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ED0Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ED14u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ED24u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ED28u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ED58u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ED78u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ED88u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898ED90u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EDA0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EDD4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EDD8u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EE0Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EE4Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EE60u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EE68u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EE78u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EE80u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EEACu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EEBCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EECCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EEDCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EEECu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF00u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF14u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF20u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF2Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF3Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF4Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF54u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF60u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF70u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF7Cu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF80u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EF90u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EFA0u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EFCCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EFD4u, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EFDCu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EFECu, &recomp_unit_0394, "recomp_unit_0394");
    runtime.register_function(0x0898EFF4u, &recomp_unit_0394, "recomp_unit_0394");
}
} // namespace psprecomp
