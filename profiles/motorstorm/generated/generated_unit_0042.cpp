#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0042[1016] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 12, 0, 0,
    13, 0, 14, 15, 0, 0, 16, 0, 17, 18, 0, 0, 19, 0, 20, 21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26,
    0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0,
    38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 65,
    0, 66, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0,
    80, 0, 81, 0, 82, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0,
    103, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0,
    109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0,
    0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 133, 0, 0, 0, 134, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 173, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 184,
};
void recomp_unit_0042_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0882E004u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0042[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0882E004;
    case 2u: goto L_0882E010;
    case 3u: goto L_0882E040;
    case 4u: goto L_0882E060;
    case 5u: goto L_0882E06C;
    case 6u: goto L_0882E08C;
    case 7u: goto L_0882E094;
    case 8u: goto L_0882E0D4;
    case 9u: goto L_0882E0DC;
    case 10u: goto L_0882E0EC;
    case 11u: goto L_0882E0F4;
    case 12u: goto L_0882E0F8;
    case 13u: goto L_0882E104;
    case 14u: goto L_0882E10C;
    case 15u: goto L_0882E110;
    case 16u: goto L_0882E11C;
    case 17u: goto L_0882E124;
    case 18u: goto L_0882E128;
    case 19u: goto L_0882E134;
    case 20u: goto L_0882E13C;
    case 21u: goto L_0882E140;
    case 22u: goto L_0882E14C;
    case 23u: goto L_0882E154;
    case 24u: goto L_0882E15C;
    case 25u: goto L_0882E16C;
    case 26u: goto L_0882E180;
    case 27u: goto L_0882E190;
    case 28u: goto L_0882E198;
    case 29u: goto L_0882E1A0;
    case 30u: goto L_0882E1B0;
    case 31u: goto L_0882E1C8;
    case 32u: goto L_0882E1D0;
    case 33u: goto L_0882E210;
    case 34u: goto L_0882E218;
    case 35u: goto L_0882E224;
    case 36u: goto L_0882E264;
    case 37u: goto L_0882E270;
    case 38u: goto L_0882E284;
    case 39u: goto L_0882E28C;
    case 40u: goto L_0882E2B8;
    case 41u: goto L_0882E2C4;
    case 42u: goto L_0882E2D8;
    case 43u: goto L_0882E2E0;
    case 44u: goto L_0882E30C;
    case 45u: goto L_0882E318;
    case 46u: goto L_0882E32C;
    case 47u: goto L_0882E334;
    case 48u: goto L_0882E360;
    case 49u: goto L_0882E36C;
    case 50u: goto L_0882E380;
    case 51u: goto L_0882E388;
    case 52u: goto L_0882E3B4;
    case 53u: goto L_0882E3C0;
    case 54u: goto L_0882E3D4;
    case 55u: goto L_0882E3DC;
    case 56u: goto L_0882E3F8;
    case 57u: goto L_0882E420;
    case 58u: goto L_0882E440;
    case 59u: goto L_0882E448;
    case 60u: goto L_0882E454;
    case 61u: goto L_0882E45C;
    case 62u: goto L_0882E464;
    case 63u: goto L_0882E46C;
    case 64u: goto L_0882E474;
    case 65u: goto L_0882E480;
    case 66u: goto L_0882E488;
    case 67u: goto L_0882E48C;
    case 68u: goto L_0882E4AC;
    case 69u: goto L_0882E4BC;
    case 70u: goto L_0882E4CC;
    case 71u: goto L_0882E4DC;
    case 72u: goto L_0882E4EC;
    case 73u: goto L_0882E4FC;
    case 74u: goto L_0882E520;
    case 75u: goto L_0882E53C;
    case 76u: goto L_0882E560;
    case 77u: goto L_0882E56C;
    case 78u: goto L_0882E574;
    case 79u: goto L_0882E57C;
    case 80u: goto L_0882E584;
    case 81u: goto L_0882E58C;
    case 82u: goto L_0882E594;
    case 83u: goto L_0882E5A4;
    case 84u: goto L_0882E5AC;
    case 85u: goto L_0882E5B4;
    case 86u: goto L_0882E5C4;
    case 87u: goto L_0882E5E4;
    case 88u: goto L_0882E610;
    case 89u: goto L_0882E620;
    case 90u: goto L_0882E628;
    case 91u: goto L_0882E638;
    case 92u: goto L_0882E640;
    case 93u: goto L_0882E650;
    case 94u: goto L_0882E658;
    case 95u: goto L_0882E668;
    case 96u: goto L_0882E670;
    case 97u: goto L_0882E678;
    case 98u: goto L_0882E688;
    case 99u: goto L_0882E6CC;
    case 100u: goto L_0882E75C;
    case 101u: goto L_0882E76C;
    case 102u: goto L_0882E77C;
    case 103u: goto L_0882E784;
    case 104u: goto L_0882E798;
    case 105u: goto L_0882E7A0;
    case 106u: goto L_0882E7D8;
    case 107u: goto L_0882E7E8;
    case 108u: goto L_0882E7F0;
    case 109u: goto L_0882E804;
    case 110u: goto L_0882E80C;
    case 111u: goto L_0882E840;
    case 112u: goto L_0882E848;
    case 113u: goto L_0882E858;
    case 114u: goto L_0882E868;
    case 115u: goto L_0882E870;
    case 116u: goto L_0882E888;
    case 117u: goto L_0882E890;
    case 118u: goto L_0882E8C8;
    case 119u: goto L_0882E8D8;
    case 120u: goto L_0882E8E0;
    case 121u: goto L_0882E8F4;
    case 122u: goto L_0882E8FC;
    case 123u: goto L_0882E93C;
    case 124u: goto L_0882E944;
    case 125u: goto L_0882E94C;
    case 126u: goto L_0882E954;
    case 127u: goto L_0882E95C;
    case 128u: goto L_0882E9A8;
    case 129u: goto L_0882E9B0;
    case 130u: goto L_0882E9C0;
    case 131u: goto L_0882E9D0;
    case 132u: goto L_0882E9D8;
    case 133u: goto L_0882E9DC;
    case 134u: goto L_0882E9EC;
    case 135u: goto L_0882E9F0;
    case 136u: goto L_0882EA38;
    case 137u: goto L_0882EA50;
    case 138u: goto L_0882EA74;
    case 139u: goto L_0882EB00;
    case 140u: goto L_0882EB4C;
    case 141u: goto L_0882EB5C;
    case 142u: goto L_0882EB64;
    case 143u: goto L_0882EBB0;
    case 144u: goto L_0882EBC0;
    case 145u: goto L_0882EBC8;
    case 146u: goto L_0882EC14;
    case 147u: goto L_0882EC24;
    case 148u: goto L_0882EC2C;
    case 149u: goto L_0882EC74;
    case 150u: goto L_0882EC80;
    case 151u: goto L_0882ECA0;
    case 152u: goto L_0882ECB0;
    case 153u: goto L_0882ECB8;
    case 154u: goto L_0882ECC8;
    case 155u: goto L_0882ED00;
    case 156u: goto L_0882ED4C;
    case 157u: goto L_0882ED5C;
    case 158u: goto L_0882ED6C;
    case 159u: goto L_0882ED7C;
    case 160u: goto L_0882ED8C;
    case 161u: goto L_0882EDC4;
    case 162u: goto L_0882EDCC;
    case 163u: goto L_0882EDD4;
    case 164u: goto L_0882EDDC;
    case 165u: goto L_0882EDE4;
    case 166u: goto L_0882EE34;
    case 167u: goto L_0882EE3C;
    case 168u: goto L_0882EE4C;
    case 169u: goto L_0882EE5C;
    case 170u: goto L_0882EE60;
    case 171u: goto L_0882EEDC;
    case 172u: goto L_0882EEE4;
    case 173u: goto L_0882EEE8;
    case 174u: goto L_0882EF10;
    case 175u: goto L_0882EF20;
    case 176u: goto L_0882EF58;
    case 177u: goto L_0882EF6C;
    case 178u: goto L_0882EF74;
    case 179u: goto L_0882EF80;
    case 180u: goto L_0882EFB4;
    case 181u: goto L_0882EFBC;
    case 182u: goto L_0882EFC4;
    case 183u: goto L_0882EFCC;
    case 184u: goto L_0882EFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0882E004:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0882E010u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x0882E010u) goto L_0882E010;
    return;
L_0882E010:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E040:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2092)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882E060u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 40u, 0x08812380u>(ctx, &aot_mem) && ctx.pc == 0x0882E060u) goto L_0882E060;
    return;
L_0882E060:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E06C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25352)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_0882E094;
      }
      goto L_0882E08C;
    }
L_0882E08C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7408));
    goto L_0882E094;
L_0882E094:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (28787u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28767));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (24946u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21596));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (23667u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(27491));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0882E0D4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882E0D4u) goto L_0882E0D4;
    return;
L_0882E0D4:
    aot_gpr[31] = (0x0882E0DCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 117u, 0x0882D8A8u>(ctx, &aot_mem) && ctx.pc == 0x0882E0DCu) goto L_0882E0DC;
    return;
L_0882E0DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E0F8;
      }
      goto L_0882E0EC;
    }
L_0882E0EC:
    aot_gpr[31] = (0x0882E0F4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 129u, 0x0882D974u>(ctx, &aot_mem) && ctx.pc == 0x0882E0F4u) goto L_0882E0F4;
    return;
L_0882E0F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    goto L_0882E0F8;
L_0882E0F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E110;
      }
      goto L_0882E104;
    }
L_0882E104:
    aot_gpr[31] = (0x0882E10Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x0882D9D0u>(ctx, &aot_mem) && ctx.pc == 0x0882E10Cu) goto L_0882E10C;
    return;
L_0882E10C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    goto L_0882E110;
L_0882E110:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E128;
      }
      goto L_0882E11C;
    }
L_0882E11C:
    aot_gpr[31] = (0x0882E124u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x0882DA3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E124u) goto L_0882E124;
    return;
L_0882E124:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    goto L_0882E128;
L_0882E128:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E140;
      }
      goto L_0882E134;
    }
L_0882E134:
    aot_gpr[31] = (0x0882E13Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 156u, 0x0882DB2Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E13Cu) goto L_0882E13C;
    return;
L_0882E13C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    goto L_0882E140;
L_0882E140:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E154;
      }
      goto L_0882E14C;
    }
L_0882E14C:
    aot_gpr[31] = (0x0882E154u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 147u, 0x0882DA98u>(ctx, &aot_mem) && ctx.pc == 0x0882E154u) goto L_0882E154;
    return;
L_0882E154:
    aot_gpr[31] = (0x0882E15Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 169u, 0x0882DC7Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E15Cu) goto L_0882E15C;
    return;
L_0882E15C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0882E16Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2096)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 89u, 0x0880F9DCu>(ctx, &aot_mem) && ctx.pc == 0x0882E16Cu) goto L_0882E16C;
    return;
L_0882E16C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2092)));
    aot_gpr[31] = (0x0882E180u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 205u, 0x08811F44u>(ctx, &aot_mem) && ctx.pc == 0x0882E180u) goto L_0882E180;
    return;
L_0882E180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E198;
      }
      goto L_0882E190;
    }
L_0882E190:
    aot_gpr[31] = (0x0882E198u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 173u, 0x0882DCB8u>(ctx, &aot_mem) && ctx.pc == 0x0882E198u) goto L_0882E198;
    return;
L_0882E198:
    aot_gpr[31] = (0x0882E1A0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 177u, 0x0882DCF0u>(ctx, &aot_mem) && ctx.pc == 0x0882E1A0u) goto L_0882E1A0;
    return;
L_0882E1A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E1B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882E1D0;
      }
      goto L_0882E1C8;
    }
L_0882E1C8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7408));
    goto L_0882E1D0;
L_0882E1D0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (28787u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28767));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (24946u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21596));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (23667u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(27491));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0882E210u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882E210u) goto L_0882E210;
    return;
L_0882E210:
    aot_gpr[31] = (0x0882E218u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 108u, 0x0882D830u>(ctx, &aot_mem) && ctx.pc == 0x0882E218u) goto L_0882E218;
    return;
L_0882E218:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E224:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0882E264u);
    aot_gpr[6] = (0u | 68u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882E264u) goto L_0882E264;
    return;
L_0882E264:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0882E28C;
      }
      goto L_0882E270;
    }
L_0882E270:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 64u);
    aot_gpr[31] = (0x0882E284u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-12660));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 155u, 0x08927C74u>(ctx, &aot_mem) && ctx.pc == 0x0882E284u) goto L_0882E284;
    return;
L_0882E284:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0882E28C;
L_0882E28C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1908), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0882E2B8u);
    aot_gpr[6] = (0u | 68u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882E2B8u) goto L_0882E2B8;
    return;
L_0882E2B8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0882E2E0;
      }
      goto L_0882E2C4;
    }
L_0882E2C4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 128u);
    aot_gpr[31] = (0x0882E2D8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-12648));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 155u, 0x08927C74u>(ctx, &aot_mem) && ctx.pc == 0x0882E2D8u) goto L_0882E2D8;
    return;
L_0882E2D8:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0882E2E0;
L_0882E2E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1912), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0882E30Cu);
    aot_gpr[6] = (0u | 68u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882E30Cu) goto L_0882E30C;
    return;
L_0882E30C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0882E334;
      }
      goto L_0882E318;
    }
L_0882E318:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 128u);
    aot_gpr[31] = (0x0882E32Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-12640));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 155u, 0x08927C74u>(ctx, &aot_mem) && ctx.pc == 0x0882E32Cu) goto L_0882E32C;
    return;
L_0882E32C:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0882E334;
L_0882E334:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1916), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0882E360u);
    aot_gpr[6] = (0u | 68u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882E360u) goto L_0882E360;
    return;
L_0882E360:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0882E388;
      }
      goto L_0882E36C;
    }
L_0882E36C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 72u);
    aot_gpr[31] = (0x0882E380u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-12628));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 155u, 0x08927C74u>(ctx, &aot_mem) && ctx.pc == 0x0882E380u) goto L_0882E380;
    return;
L_0882E380:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0882E388;
L_0882E388:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1920), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0882E3B4u);
    aot_gpr[6] = (0u | 68u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882E3B4u) goto L_0882E3B4;
    return;
L_0882E3B4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0882E3DC;
      }
      goto L_0882E3C0;
    }
L_0882E3C0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 64u);
    aot_gpr[31] = (0x0882E3D4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-12612));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 155u, 0x08927C74u>(ctx, &aot_mem) && ctx.pc == 0x0882E3D4u) goto L_0882E3D4;
    return;
L_0882E3D4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0882E3DC;
L_0882E3DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1924), aot_gpr[17]);
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
L_0882E3F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0882E420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 181u, 0x0882DD28u>(ctx, &aot_mem) && ctx.pc == 0x0882E420u) goto L_0882E420;
    return;
L_0882E420:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(23220)));
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[17] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_0882E454;
      }
      goto L_0882E440;
    }
L_0882E440:
    aot_gpr[31] = (0x0882E448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 38u, 0x0895E32Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E448u) goto L_0882E448;
    return;
L_0882E448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(23220)));
    aot_gpr[31] = (0x0882E454u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0345_entry, 345u, 159u, 0x0895DE88u>(ctx, &aot_mem) && ctx.pc == 0x0882E454u) goto L_0882E454;
    return;
L_0882E454:
    aot_gpr[31] = (0x0882E45Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(23228)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0882E45Cu) goto L_0882E45C;
    return;
L_0882E45C:
    aot_gpr[31] = (0x0882E464u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(23232)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0882E464u) goto L_0882E464;
    return;
L_0882E464:
    aot_gpr[31] = (0x0882E46Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(23236)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0882E46Cu) goto L_0882E46C;
    return;
L_0882E46C:
    aot_gpr[31] = (0x0882E474u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(23244)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0882E474u) goto L_0882E474;
    return;
L_0882E474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23240)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2215u << 16u);
        goto L_0882E48C;
    }
    goto L_0882E480;
L_0882E480:
    aot_gpr[31] = (0x0882E488u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 58u, 0x0882F498u>(ctx, &aot_mem) && ctx.pc == 0x0882E488u) goto L_0882E488;
    return;
L_0882E488:
    aot_gpr[4] = (2215u << 16u);
    goto L_0882E48C;
L_0882E48C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23224), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(23228), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(23232), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(23236), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(23240), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(23244), 0u);
    aot_gpr[31] = (0x0882E4ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(23220), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 82u, 0x08935848u>(ctx, &aot_mem) && ctx.pc == 0x0882E4ACu) goto L_0882E4AC;
    return;
L_0882E4AC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1908)));
    aot_gpr[31] = (0x0882E4BCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 163u, 0x08927D28u>(ctx, &aot_mem) && ctx.pc == 0x0882E4BCu) goto L_0882E4BC;
    return;
L_0882E4BC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1912)));
    aot_gpr[31] = (0x0882E4CCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 163u, 0x08927D28u>(ctx, &aot_mem) && ctx.pc == 0x0882E4CCu) goto L_0882E4CC;
    return;
L_0882E4CC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1916)));
    aot_gpr[31] = (0x0882E4DCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 163u, 0x08927D28u>(ctx, &aot_mem) && ctx.pc == 0x0882E4DCu) goto L_0882E4DC;
    return;
L_0882E4DC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1920)));
    aot_gpr[31] = (0x0882E4ECu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 163u, 0x08927D28u>(ctx, &aot_mem) && ctx.pc == 0x0882E4ECu) goto L_0882E4EC;
    return;
L_0882E4EC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1924)));
    aot_gpr[31] = (0x0882E4FCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 163u, 0x08927D28u>(ctx, &aot_mem) && ctx.pc == 0x0882E4FCu) goto L_0882E4FC;
    return;
L_0882E4FC:
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
L_0882E520:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23220)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0882E594;
      }
      goto L_0882E53C;
    }
L_0882E53C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0882E560;
L_0882E560:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23220)));
    aot_gpr[31] = (0x0882E56Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 54u, 0x0895E42Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E56Cu) goto L_0882E56C;
    return;
L_0882E56C:
    aot_gpr[31] = (0x0882E574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 33u, 0x08933178u>(ctx, &aot_mem) && ctx.pc == 0x0882E574u) goto L_0882E574;
    return;
L_0882E574:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E584;
      }
      goto L_0882E57C;
    }
L_0882E57C:
    aot_gpr[31] = (0x0882E584u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x0882E584u) goto L_0882E584;
    return;
L_0882E584:
    aot_gpr[31] = (0x0882E58Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23220)));
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 127u, 0x0895E8C4u>(ctx, &aot_mem) && ctx.pc == 0x0882E58Cu) goto L_0882E58C;
    return;
L_0882E58C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E560;
      }
      goto L_0882E594;
    }
L_0882E594:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23240)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E5AC;
      }
      goto L_0882E5A4;
    }
L_0882E5A4:
    aot_gpr[31] = (0x0882E5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 66u, 0x0882F51Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E5ACu) goto L_0882E5AC;
    return;
L_0882E5AC:
    aot_gpr[31] = (0x0882E5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 85u, 0x0882F798u>(ctx, &aot_mem) && ctx.pc == 0x0882E5B4u) goto L_0882E5B4;
    return;
L_0882E5B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E5C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23220)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_0882E610;
      }
      goto L_0882E5E4;
    }
L_0882E5E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882E610u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 54u, 0x0895E42Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E610u) goto L_0882E610;
    return;
L_0882E610:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23240)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E628;
      }
      goto L_0882E620;
    }
L_0882E620:
    aot_gpr[31] = (0x0882E628u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 67u, 0x0882F528u>(ctx, &aot_mem) && ctx.pc == 0x0882E628u) goto L_0882E628;
    return;
L_0882E628:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23228)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E640;
      }
      goto L_0882E638;
    }
L_0882E638:
    aot_gpr[31] = (0x0882E640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E640u) goto L_0882E640;
    return;
L_0882E640:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23232)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E658;
      }
      goto L_0882E650;
    }
L_0882E650:
    aot_gpr[31] = (0x0882E658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E658u) goto L_0882E658;
    return;
L_0882E658:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23236)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E670;
      }
      goto L_0882E668;
    }
L_0882E668:
    aot_gpr[31] = (0x0882E670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E670u) goto L_0882E670;
    return;
L_0882E670:
    aot_gpr[31] = (0x0882E678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 101u, 0x0882F8B8u>(ctx, &aot_mem) && ctx.pc == 0x0882E678u) goto L_0882E678;
    return;
L_0882E678:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E688:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_0882ECC8;
      }
      goto L_0882E6CC;
    }
L_0882E6CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    aot_gpr[4] = (16256u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (16128u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (16896u << 16u);
    aot_gpr[19] = (2216u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[20] = (2216u << 16u);
      if (branch_taken) {
          goto L_0882E848;
      }
      goto L_0882E75C;
    }
L_0882E75C:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
        goto L_0882E7D8;
    }
    goto L_0882E76C;
L_0882E76C:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_0882E784;
      }
      goto L_0882E77C;
    }
L_0882E77C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0882E798;
      }
      goto L_0882E784;
    }
L_0882E784:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0882E798;
    }
    goto L_0882E798;
L_0882E798:
    aot_gpr[31] = (0x0882E7A0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 85u, 0x08A2F634u>(ctx, &aot_mem) && ctx.pc == 0x0882E7A0u) goto L_0882E7A0;
    return;
L_0882E7A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(128)));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29132)));
      if (branch_taken) {
          goto L_0882E840;
      }
      goto L_0882E7D8;
    }
L_0882E7D8:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_0882E7F0;
      }
      goto L_0882E7E8;
    }
L_0882E7E8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0882E804;
      }
      goto L_0882E7F0;
    }
L_0882E7F0:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0882E804;
    }
    goto L_0882E804;
L_0882E804:
    aot_gpr[31] = (0x0882E80Cu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 85u, 0x08A2F634u>(ctx, &aot_mem) && ctx.pc == 0x0882E80Cu) goto L_0882E80C;
    return;
L_0882E80C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28792)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_fpr[13] = aot_fpr[12] - aot_fpr[0];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(128)));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29132)));
    goto L_0882E840;
L_0882E840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E93C;
      }
      goto L_0882E848;
    }
L_0882E848:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
        goto L_0882E8C8;
    }
    goto L_0882E858;
L_0882E858:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0882E870;
    }
    goto L_0882E868;
L_0882E868:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0882E888;
      }
      goto L_0882E870;
    }
L_0882E870:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0882E888;
    }
    goto L_0882E888;
L_0882E888:
    aot_gpr[31] = (0x0882E890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 85u, 0x08A2F634u>(ctx, &aot_mem) && ctx.pc == 0x0882E890u) goto L_0882E890;
    return;
L_0882E890:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28792)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(128)));
    aot_fpr[13] = aot_fpr[26] - aot_fpr[0];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29132)));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
      if (branch_taken) {
          goto L_0882E93C;
      }
      goto L_0882E8C8;
    }
L_0882E8C8:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_0882E8E0;
      }
      goto L_0882E8D8;
    }
L_0882E8D8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0882E8F4;
      }
      goto L_0882E8E0;
    }
L_0882E8E0:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0882E8F4;
    }
    goto L_0882E8F4;
L_0882E8F4:
    aot_gpr[31] = (0x0882E8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 85u, 0x08A2F634u>(ctx, &aot_mem) && ctx.pc == 0x0882E8FCu) goto L_0882E8FC;
    return;
L_0882E8FC:
    aot_gpr[4] = (16320u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28792)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(128)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[0];
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29132)));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    goto L_0882E93C;
L_0882E93C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_0882E94C;
      }
      goto L_0882E944;
    }
L_0882E944:
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[16];
    goto L_0882E94C;
L_0882E94C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_0882E95C;
      }
      goto L_0882E954;
    }
L_0882E954:
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    goto L_0882E95C;
L_0882E95C:
    aot_fpr[16] = aot_fpr[15] / aot_fpr[14];
    aot_gpr[4] = (48998u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 26214u);
    aot_fpr[17] = aot_fpr[24] / aot_fpr[26];
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[19] = aot_fpr[19] + aot_fpr[28];
    aot_fpr[0] = aot_fpr[13] + aot_fpr[28];
    aot_fpr[16] = aot_fpr[19] - aot_fpr[20];
    aot_fpr[13] = aot_fpr[0] - aot_fpr[12];
    aot_fpr[20] = aot_fpr[19] + aot_fpr[20];
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = aot_fpr[0] + aot_fpr[12];
      if (branch_taken) {
          goto L_0882E9B0;
      }
      goto L_0882E9A8;
    }
L_0882E9A8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0882E9C0;
      }
      goto L_0882E9B0;
    }
L_0882E9B0:
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
        goto L_0882E9C0;
    }
    goto L_0882E9C0;
L_0882E9C0:
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_0882E9DC;
    }
    goto L_0882E9D0;
L_0882E9D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (16888u << 16u);
      if (branch_taken) {
          goto L_0882E9F0;
      }
      goto L_0882E9D8;
    }
L_0882E9D8:
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_0882E9DC;
L_0882E9DC:
    ctx.set_fpu_condition((aot_fpr[24] < aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
        goto L_0882E9EC;
    }
    goto L_0882E9EC;
L_0882E9EC:
    aot_gpr[4] = (16888u << 16u);
    goto L_0882E9F0;
L_0882E9F0:
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = aot_fpr[14] + aot_fpr[17];
    aot_gpr[4] = (15616u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_gpr[18] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[18]);
    aot_fpr[19] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] / aot_fpr[0];
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] / aot_fpr[19];
    aot_gpr[31] = (0x0882EA38u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 19u, 0x08A4C160u>(ctx, &aot_mem) && ctx.pc == 0x0882EA38u) goto L_0882EA38;
    return;
L_0882EA38:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[17] = aot_fpr[13] + aot_fpr[14];
      if (branch_taken) {
          goto L_0882ECA0;
      }
      goto L_0882EA50;
    }
L_0882EA50:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[8] = (65376u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(24672));
    aot_fpr[19] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[24]));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    goto L_0882EA74;
L_0882EA74:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[22]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25404)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_fpr[19] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[19]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(0u));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25404)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25404)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[8]);
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25404)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[8]);
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
    if (aot_gpr[4] == 0u) {
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
        goto L_0882EB4C;
    }
    goto L_0882EB00;
L_0882EB00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[28];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[18] = aot_fpr[18] + aot_fpr[28];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
      if (branch_taken) {
          goto L_0882EB5C;
      }
      goto L_0882EB4C;
    }
L_0882EB4C:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
    goto L_0882EB5C;
L_0882EB5C:
    if (aot_gpr[4] == 0u) {
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
        goto L_0882EBB0;
    }
    goto L_0882EB64;
L_0882EB64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[28];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[18] = aot_fpr[18] + aot_fpr[28];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
      if (branch_taken) {
          goto L_0882EBC0;
      }
      goto L_0882EBB0;
    }
L_0882EBB0:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
    goto L_0882EBC0;
L_0882EBC0:
    if (aot_gpr[4] == 0u) {
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
        goto L_0882EC14;
    }
    goto L_0882EBC8;
L_0882EBC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[28];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[18] = aot_fpr[18] + aot_fpr[28];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
      if (branch_taken) {
          goto L_0882EC24;
      }
      goto L_0882EC14;
    }
L_0882EC14:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
    goto L_0882EC24;
L_0882EC24:
    if (aot_gpr[4] == 0u) {
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
        goto L_0882EC74;
    }
    goto L_0882EC2C;
L_0882EC2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[28];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[18] = aot_fpr[18] + aot_fpr[28];
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0882EC80;
      }
      goto L_0882EC74;
    }
L_0882EC74:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_0882EC80;
L_0882EC80:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_fpr[22] = aot_fpr[22] + aot_fpr[30];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[30];
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_fpr[17] = aot_fpr[17] + aot_fpr[14];
      if (branch_taken) {
          goto L_0882EA74;
      }
      goto L_0882ECA0;
    }
L_0882ECA0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0882ECB0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2000));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x0882ECB0u) goto L_0882ECB0;
    return;
L_0882ECB0:
    aot_gpr[31] = (0x0882ECB8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882ECB8u) goto L_0882ECB8;
    return;
L_0882ECB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0882ECC8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 67u, 0x0892F6E8u>(ctx, &aot_mem) && ctx.pc == 0x0882ECC8u) goto L_0882ECC8;
    return;
L_0882ECC8:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882ED00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2104));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1908)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x0882ED4Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 24u, 0x08A4A184u>(ctx, &aot_mem) && ctx.pc == 0x0882ED4Cu) goto L_0882ED4C;
    return;
L_0882ED4C:
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1912)));
    aot_gpr[31] = (0x0882ED5Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 24u, 0x08A4A184u>(ctx, &aot_mem) && ctx.pc == 0x0882ED5Cu) goto L_0882ED5C;
    return;
L_0882ED5C:
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1916)));
    aot_gpr[31] = (0x0882ED6Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 24u, 0x08A4A184u>(ctx, &aot_mem) && ctx.pc == 0x0882ED6Cu) goto L_0882ED6C;
    return;
L_0882ED6C:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1920)));
    aot_gpr[31] = (0x0882ED7Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 24u, 0x08A4A184u>(ctx, &aot_mem) && ctx.pc == 0x0882ED7Cu) goto L_0882ED7C;
    return;
L_0882ED7C:
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1924)));
    aot_gpr[31] = (0x0882ED8Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 24u, 0x08A4A184u>(ctx, &aot_mem) && ctx.pc == 0x0882ED8Cu) goto L_0882ED8C;
    return;
L_0882ED8C:
    aot_gpr[19] = (0u | 1u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28752), static_cast<std::uint8_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1912)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1916)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1920)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1924)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[31] = (0x0882EDC4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1908)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0882EDC4u) goto L_0882EDC4;
    return;
L_0882EDC4:
    aot_gpr[31] = (0x0882EDCCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1912)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0882EDCCu) goto L_0882EDCC;
    return;
L_0882EDCC:
    aot_gpr[31] = (0x0882EDD4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1916)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0882EDD4u) goto L_0882EDD4;
    return;
L_0882EDD4:
    aot_gpr[31] = (0x0882EDDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1920)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0882EDDCu) goto L_0882EDDC;
    return;
L_0882EDDC:
    aot_gpr[31] = (0x0882EDE4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1924)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0882EDE4u) goto L_0882EDE4;
    return;
L_0882EDE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1908)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1916)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1912)));
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1920)));
    aot_gpr[5] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1924)));
    aot_gpr[6] = (0u | 16u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(23220)));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[23] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_0882EE3C;
      }
      goto L_0882EE34;
    }
L_0882EE34:
    aot_gpr[31] = (0x0882EE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 108u, 0x0895E760u>(ctx, &aot_mem) && ctx.pc == 0x0882EE3Cu) goto L_0882EE3C;
    return;
L_0882EE3C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23236)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2216u << 16u);
        goto L_0882EE60;
    }
    goto L_0882EE4C;
L_0882EE4C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0882EE5Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0882EE5Cu) goto L_0882EE5C;
    return;
L_0882EE5C:
    aot_gpr[4] = (2216u << 16u);
    goto L_0882EE60;
L_0882EE60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28756)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28764)));
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(64)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-28760)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28764)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-28760)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1908)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1912)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1916)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1920)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1924)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1908)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[30]);
        goto L_0882EEE8;
    }
    goto L_0882EEDC;
L_0882EEDC:
    aot_gpr[31] = (0x0882EEE4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0882E688;
L_0882EEE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[30]);
    goto L_0882EEE8;
L_0882EEE8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[19]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x0882EF10u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882EF10u) goto L_0882EF10;
    return;
L_0882EF10:
    aot_gpr[30] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1908)));
    aot_gpr[31] = (0x0882EF20u);
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(-28886), static_cast<std::uint8_t>(aot_gpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0882EF20u) goto L_0882EF20;
    return;
L_0882EF20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(-28814)));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(-28886), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0882EF58u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882EF58u) goto L_0882EF58;
    return;
L_0882EF58:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7340)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(11055)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0882EF80;
      }
      goto L_0882EF6C;
    }
L_0882EF6C:
    aot_gpr[31] = (0x0882EF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0266_entry, 266u, 89u, 0x0890EAFCu>(ctx, &aot_mem) && ctx.pc == 0x0882EF74u) goto L_0882EF74;
    return;
L_0882EF74:
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23240)));
      if (branch_taken) {
          goto L_0882EFBC;
      }
      goto L_0882EF80;
    }
L_0882EF80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 4u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0882EFB4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882EFB4u) goto L_0882EFB4;
    return;
L_0882EFB4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23240)));
    goto L_0882EFBC;
L_0882EFBC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EFCC;
      }
      goto L_0882EFC4;
    }
L_0882EFC4:
    aot_gpr[31] = (0x0882EFCCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 81u, 0x0882F748u>(ctx, &aot_mem) && ctx.pc == 0x0882EFCCu) goto L_0882EFCC;
    return;
L_0882EFCC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23120)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(257)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 5u, 0x0882F05Cu>(ctx, &aot_mem); return;
      }
      goto L_0882EFE0;
    }
L_0882EFE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 4u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    ctx.pc = 0x0882F000u; return;
}

void recomp_unit_0042(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0042_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_42(Runtime &runtime) {
    runtime.register_generated_unit(42u, 0x0882E000u, 4096u, &recomp_unit_0042, &recomp_unit_0042_entry);
    runtime.register_function(0x0882E004u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E010u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E040u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E060u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E06Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E08Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E094u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E0D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E0DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E0ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E0F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E0F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E104u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E10Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E110u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E11Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E124u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E128u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E134u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E13Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E140u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E14Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E154u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E15Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E16Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E180u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E190u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E198u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E1A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E1B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E1C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E1D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E210u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E218u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E224u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E264u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E270u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E284u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E28Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E2B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E2C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E2D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E2E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E30Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E318u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E32Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E334u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E360u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E36Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E380u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E388u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E3B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E3C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E3D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E3DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E3F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E420u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E440u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E448u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E454u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E45Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E464u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E46Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E474u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E480u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E488u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E48Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E4ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E4BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E4CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E4DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E4ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E4FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E520u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E53Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E560u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E56Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E574u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E57Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E584u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E58Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E594u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E5A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E5ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E5B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E5C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E5E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E610u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E620u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E628u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E638u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E640u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E650u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E658u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E668u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E670u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E678u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E688u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E6CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E75Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E76Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E77Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E784u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E798u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E7A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E7D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E7E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E7F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E804u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E80Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E840u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E848u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E858u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E868u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E870u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E888u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E890u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E8C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E8D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E8E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E8F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E8FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E93Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E944u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E94Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E954u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E95Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E9A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E9B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E9C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E9D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E9D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E9DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E9ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882E9F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EA38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EA50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EA74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EB00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EB4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EB5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EB64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EBB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EBC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EBC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EC14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EC24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EC2Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EC74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EC80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882ECA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882ECB0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882ECB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882ECC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882ED00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882ED4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882ED5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882ED6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882ED7Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882ED8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EDC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EDCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EDD4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EDDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EDE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EE34u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EE3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EE4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EE5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EE60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EEDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EEE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EEE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EF10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EF20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EF58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EF6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EF74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EF80u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EFB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EFBCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EFC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EFCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x0882EFE0u, &recomp_unit_0042, "recomp_unit_0042");
}
} // namespace psprecomp
