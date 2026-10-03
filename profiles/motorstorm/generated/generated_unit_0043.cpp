#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0043[1018] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 6, 0, 0, 0, 7,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0,
    22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0,
    64, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0,
    0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 77, 0, 78, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 97,
    0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 105, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 129,
    0, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 0,
    0, 0, 152, 0, 153, 0, 154, 0, 0, 155, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0,
    164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
};
void recomp_unit_0043_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0882F000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0043[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0882F000;
    case 2u: goto L_0882F018;
    case 3u: goto L_0882F020;
    case 4u: goto L_0882F058;
    case 5u: goto L_0882F05C;
    case 6u: goto L_0882F06C;
    case 7u: goto L_0882F07C;
    case 8u: goto L_0882F088;
    case 9u: goto L_0882F0B8;
    case 10u: goto L_0882F0C8;
    case 11u: goto L_0882F0D8;
    case 12u: goto L_0882F100;
    case 13u: goto L_0882F118;
    case 14u: goto L_0882F124;
    case 15u: goto L_0882F12C;
    case 16u: goto L_0882F140;
    case 17u: goto L_0882F148;
    case 18u: goto L_0882F154;
    case 19u: goto L_0882F15C;
    case 20u: goto L_0882F168;
    case 21u: goto L_0882F174;
    case 22u: goto L_0882F180;
    case 23u: goto L_0882F190;
    case 24u: goto L_0882F19C;
    case 25u: goto L_0882F1B0;
    case 26u: goto L_0882F1BC;
    case 27u: goto L_0882F1C8;
    case 28u: goto L_0882F1D4;
    case 29u: goto L_0882F1E0;
    case 30u: goto L_0882F1EC;
    case 31u: goto L_0882F21C;
    case 32u: goto L_0882F274;
    case 33u: goto L_0882F28C;
    case 34u: goto L_0882F2C0;
    case 35u: goto L_0882F2DC;
    case 36u: goto L_0882F2F0;
    case 37u: goto L_0882F2FC;
    case 38u: goto L_0882F32C;
    case 39u: goto L_0882F338;
    case 40u: goto L_0882F344;
    case 41u: goto L_0882F350;
    case 42u: goto L_0882F358;
    case 43u: goto L_0882F360;
    case 44u: goto L_0882F380;
    case 45u: goto L_0882F3A8;
    case 46u: goto L_0882F3B4;
    case 47u: goto L_0882F3C4;
    case 48u: goto L_0882F3D4;
    case 49u: goto L_0882F3E0;
    case 50u: goto L_0882F3E8;
    case 51u: goto L_0882F404;
    case 52u: goto L_0882F414;
    case 53u: goto L_0882F42C;
    case 54u: goto L_0882F440;
    case 55u: goto L_0882F458;
    case 56u: goto L_0882F464;
    case 57u: goto L_0882F47C;
    case 58u: goto L_0882F498;
    case 59u: goto L_0882F4B4;
    case 60u: goto L_0882F4BC;
    case 61u: goto L_0882F4C8;
    case 62u: goto L_0882F4DC;
    case 63u: goto L_0882F4F8;
    case 64u: goto L_0882F500;
    case 65u: goto L_0882F508;
    case 66u: goto L_0882F51C;
    case 67u: goto L_0882F528;
    case 68u: goto L_0882F548;
    case 69u: goto L_0882F558;
    case 70u: goto L_0882F5C4;
    case 71u: goto L_0882F5D0;
    case 72u: goto L_0882F5E8;
    case 73u: goto L_0882F5F0;
    case 74u: goto L_0882F604;
    case 75u: goto L_0882F60C;
    case 76u: goto L_0882F660;
    case 77u: goto L_0882F664;
    case 78u: goto L_0882F66C;
    case 79u: goto L_0882F674;
    case 80u: goto L_0882F734;
    case 81u: goto L_0882F748;
    case 82u: goto L_0882F75C;
    case 83u: goto L_0882F76C;
    case 84u: goto L_0882F778;
    case 85u: goto L_0882F798;
    case 86u: goto L_0882F7A0;
    case 87u: goto L_0882F7B8;
    case 88u: goto L_0882F7C0;
    case 89u: goto L_0882F7D0;
    case 90u: goto L_0882F7E4;
    case 91u: goto L_0882F814;
    case 92u: goto L_0882F828;
    case 93u: goto L_0882F83C;
    case 94u: goto L_0882F848;
    case 95u: goto L_0882F858;
    case 96u: goto L_0882F874;
    case 97u: goto L_0882F87C;
    case 98u: goto L_0882F884;
    case 99u: goto L_0882F898;
    case 100u: goto L_0882F8A4;
    case 101u: goto L_0882F8B8;
    case 102u: goto L_0882F8C0;
    case 103u: goto L_0882F8DC;
    case 104u: goto L_0882F8EC;
    case 105u: goto L_0882F8F4;
    case 106u: goto L_0882F904;
    case 107u: goto L_0882F91C;
    case 108u: goto L_0882F924;
    case 109u: goto L_0882F930;
    case 110u: goto L_0882F950;
    case 111u: goto L_0882F9F8;
    case 112u: goto L_0882FA0C;
    case 113u: goto L_0882FA30;
    case 114u: goto L_0882FA4C;
    case 115u: goto L_0882FA64;
    case 116u: goto L_0882FA84;
    case 117u: goto L_0882FA90;
    case 118u: goto L_0882FAA4;
    case 119u: goto L_0882FAAC;
    case 120u: goto L_0882FAF8;
    case 121u: goto L_0882FB04;
    case 122u: goto L_0882FB0C;
    case 123u: goto L_0882FB30;
    case 124u: goto L_0882FB4C;
    case 125u: goto L_0882FB58;
    case 126u: goto L_0882FB60;
    case 127u: goto L_0882FB68;
    case 128u: goto L_0882FB74;
    case 129u: goto L_0882FB7C;
    case 130u: goto L_0882FB88;
    case 131u: goto L_0882FB90;
    case 132u: goto L_0882FB9C;
    case 133u: goto L_0882FBA4;
    case 134u: goto L_0882FBE0;
    case 135u: goto L_0882FC40;
    case 136u: goto L_0882FC98;
    case 137u: goto L_0882FCA4;
    case 138u: goto L_0882FCF4;
    case 139u: goto L_0882FD5C;
    case 140u: goto L_0882FDBC;
    case 141u: goto L_0882FDC8;
    case 142u: goto L_0882FDD4;
    case 143u: goto L_0882FE80;
    case 144u: goto L_0882FE88;
    case 145u: goto L_0882FEA8;
    case 146u: goto L_0882FEB0;
    case 147u: goto L_0882FEC4;
    case 148u: goto L_0882FECC;
    case 149u: goto L_0882FED8;
    case 150u: goto L_0882FEEC;
    case 151u: goto L_0882FEF4;
    case 152u: goto L_0882FF08;
    case 153u: goto L_0882FF10;
    case 154u: goto L_0882FF18;
    case 155u: goto L_0882FF24;
    case 156u: goto L_0882FF28;
    case 157u: goto L_0882FF30;
    case 158u: goto L_0882FF38;
    case 159u: goto L_0882FF40;
    case 160u: goto L_0882FF48;
    case 161u: goto L_0882FF5C;
    case 162u: goto L_0882FF64;
    case 163u: goto L_0882FF78;
    case 164u: goto L_0882FF80;
    case 165u: goto L_0882FF8C;
    case 166u: goto L_0882FFA0;
    case 167u: goto L_0882FFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0882F000:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[19] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0882F018u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882F018u) goto L_0882F018;
    return;
L_0882F018:
    aot_gpr[31] = (0x0882F020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 107u, 0x08829C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F020u) goto L_0882F020;
    return;
L_0882F020:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (aot_gpr[19] & 65535u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0882F058u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882F058u) goto L_0882F058;
    return;
L_0882F058:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0882F05C;
L_0882F05C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23228)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F07C;
      }
      goto L_0882F06C;
    }
L_0882F06C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0882F07Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0882F07Cu) goto L_0882F07C;
    return;
L_0882F07C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0882F088u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7340)));
    if (rt.invoke_chained_direct<&recomp_unit_0266_entry, 266u, 87u, 0x0890EAE0u>(ctx, &aot_mem) && ctx.pc == 0x0882F088u) goto L_0882F088;
    return;
L_0882F088:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0882F0B8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882F0B8u) goto L_0882F0B8;
    return;
L_0882F0B8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23232)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_0882F12C;
      }
      goto L_0882F0C8;
    }
L_0882F0C8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(23248)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F12C;
      }
      goto L_0882F0D8;
    }
L_0882F0D8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23252)));
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29276), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2120)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (0u | 8192u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0882F100u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2122)));
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 130u, 0x08931BE8u>(ctx, &aot_mem) && ctx.pc == 0x0882F100u) goto L_0882F100;
    return;
L_0882F100:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23232)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0882F118u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0882F118u) goto L_0882F118;
    return;
L_0882F118:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882F124u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 130u, 0x08931BE8u>(ctx, &aot_mem) && ctx.pc == 0x0882F124u) goto L_0882F124;
    return;
L_0882F124:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1916)));
      if (branch_taken) {
          goto L_0882F140;
      }
      goto L_0882F12C;
    }
L_0882F12C:
    aot_gpr[4] = (17948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 16384u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1916)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29276), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0882F140;
L_0882F140:
    aot_gpr[31] = (0x0882F148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0882F148u) goto L_0882F148;
    return;
L_0882F148:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0882F154u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 55u, 0x088C954Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F154u) goto L_0882F154;
    return;
L_0882F154:
    aot_gpr[31] = (0x0882F15Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1912)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 183u, 0x0882DD44u>(ctx, &aot_mem) && ctx.pc == 0x0882F15Cu) goto L_0882F15C;
    return;
L_0882F15C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1908)));
    aot_gpr[31] = (0x0882F168u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 28u, 0x08A4A1D0u>(ctx, &aot_mem) && ctx.pc == 0x0882F168u) goto L_0882F168;
    return;
L_0882F168:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1912)));
    aot_gpr[31] = (0x0882F174u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 28u, 0x08A4A1D0u>(ctx, &aot_mem) && ctx.pc == 0x0882F174u) goto L_0882F174;
    return;
L_0882F174:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1916)));
    aot_gpr[31] = (0x0882F180u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 28u, 0x08A4A1D0u>(ctx, &aot_mem) && ctx.pc == 0x0882F180u) goto L_0882F180;
    return;
L_0882F180:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1920)));
    aot_gpr[31] = (0x0882F190u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 28u, 0x08A4A1D0u>(ctx, &aot_mem) && ctx.pc == 0x0882F190u) goto L_0882F190;
    return;
L_0882F190:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(1924)));
    aot_gpr[31] = (0x0882F19Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 28u, 0x08A4A1D0u>(ctx, &aot_mem) && ctx.pc == 0x0882F19Cu) goto L_0882F19C;
    return;
L_0882F19C:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28752), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1BC;
      }
      goto L_0882F1B0;
    }
L_0882F1B0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28756)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_0882F1BC;
L_0882F1BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1D4;
      }
      goto L_0882F1C8;
    }
L_0882F1C8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28764)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_0882F1D4;
L_0882F1D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1EC;
      }
      goto L_0882F1E0;
    }
L_0882F1E0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28760)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_0882F1EC;
L_0882F1EC:
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
L_0882F21C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28814)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28816)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0882F274u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882F274u) goto L_0882F274;
    return;
L_0882F274:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(-28886), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0882F28Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1920)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0882F28Cu) goto L_0882F28C;
    return;
L_0882F28C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28814)));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(-28886), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0882F2C0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882F2C0u) goto L_0882F2C0;
    return;
L_0882F2C0:
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
L_0882F2DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882F2F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1924)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0882F2F0u) goto L_0882F2F0;
    return;
L_0882F2F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F2FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2000));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882F32Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(23216), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x0882F32Cu) goto L_0882F32C;
    return;
L_0882F32C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0882F338u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23264));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F338u) goto L_0882F338;
    return;
L_0882F338:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F344:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F358;
      }
      goto L_0882F350;
    }
L_0882F350:
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    goto L_0882F358;
L_0882F358:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F360:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23280), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F380:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[16]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882F47C;
      }
      goto L_0882F3A8;
    }
L_0882F3A8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0882F3B4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0882F3B4u) goto L_0882F3B4;
    return;
L_0882F3B4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882F3C4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12584));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882F3C4u) goto L_0882F3C4;
    return;
L_0882F3C4:
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882F3D4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 113u, 0x08877760u>(ctx, &aot_mem) && ctx.pc == 0x0882F3D4u) goto L_0882F3D4;
    return;
L_0882F3D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_0882F47C;
      }
      goto L_0882F3E0;
    }
L_0882F3E0:
    aot_gpr[31] = (0x0882F3E8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 124u, 0x0891F8E8u>(ctx, &aot_mem) && ctx.pc == 0x0882F3E8u) goto L_0882F3E8;
    return;
L_0882F3E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F47C;
      }
      goto L_0882F404;
    }
L_0882F404:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[8] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F464;
      }
      goto L_0882F414;
    }
L_0882F414:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F464;
      }
      goto L_0882F42C;
    }
L_0882F42C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882F458;
      }
      goto L_0882F440;
    }
L_0882F440:
    aot_gpr[4] = (aot_gpr[8] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_0882F458;
L_0882F458:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0882F464;
L_0882F464:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882F404;
      }
      goto L_0882F47C;
    }
L_0882F47C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F498:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882F508;
      }
      goto L_0882F4B4;
    }
L_0882F4B4:
    aot_gpr[31] = (0x0882F4BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0882F4BCu) goto L_0882F4BC;
    return;
L_0882F4BC:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F508;
      }
      goto L_0882F4C8;
    }
L_0882F4C8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F500;
      }
      goto L_0882F4DC;
    }
L_0882F4DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0882F4F8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882F4F8u) goto L_0882F4F8;
    return;
L_0882F4F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F508;
      }
      goto L_0882F500;
    }
L_0882F500:
    aot_gpr[31] = (0x0882F508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0882F508u) goto L_0882F508;
    return;
L_0882F508:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F51C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F528:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_0882F734;
      }
      goto L_0882F548;
    }
L_0882F548:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
      if (branch_taken) {
          goto L_0882F674;
      }
      goto L_0882F558;
    }
L_0882F558:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(2128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (15107u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 4719u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (16512u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = aot_fpr[14] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0882F5D0;
      }
      goto L_0882F5C4;
    }
L_0882F5C4:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0882F5F0;
      }
      goto L_0882F5D0;
    }
L_0882F5D0:
    aot_gpr[5] = (49280u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882F5F0;
      }
      goto L_0882F5E8;
    }
L_0882F5E8:
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0882F5F0;
L_0882F5F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (16000u << 16u);
      if (branch_taken) {
          goto L_0882F664;
      }
      goto L_0882F604;
    }
L_0882F604:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    goto L_0882F60C;
L_0882F60C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[14]));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(88)));
    aot_gpr[7] = (aot_gpr[7] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(88), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882F60C;
      }
      goto L_0882F660;
    }
L_0882F660:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0882F664;
L_0882F664:
    aot_gpr[31] = (0x0882F66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 135u, 0x0891F9A8u>(ctx, &aot_mem) && ctx.pc == 0x0882F66Cu) goto L_0882F66C;
    return;
L_0882F66C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    goto L_0882F674;
L_0882F674:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (16256u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[5]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x0882F734u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F734u) goto L_0882F734;
    return;
L_0882F734:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F748:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F76C;
      }
      goto L_0882F75C;
    }
L_0882F75C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0882F76Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0882F76Cu) goto L_0882F76C;
    return;
L_0882F76C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F778:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23288), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F798:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F7A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0882F7B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23300)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 56u, 0x0894B400u>(ctx, &aot_mem) && ctx.pc == 0x0882F7B8u) goto L_0882F7B8;
    return;
L_0882F7B8:
    aot_gpr[31] = (0x0882F7C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23300)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 37u, 0x0894B254u>(ctx, &aot_mem) && ctx.pc == 0x0882F7C0u) goto L_0882F7C0;
    return;
L_0882F7C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23300)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0882F7D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23304)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F7D0u) goto L_0882F7D0;
    return;
L_0882F7D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(23300), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F7E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[31] = (0x0882F814u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23304));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x0882F814u) goto L_0882F814;
    return;
L_0882F814:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0882F828u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 29u, 0x0894B1B8u>(ctx, &aot_mem) && ctx.pc == 0x0882F828u) goto L_0882F828;
    return;
L_0882F828:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7344)));
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[31] = (0x0882F83Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(23300), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 43u, 0x0894B2F0u>(ctx, &aot_mem) && ctx.pc == 0x0882F83Cu) goto L_0882F83C;
    return;
L_0882F83C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23300)));
    aot_gpr[31] = (0x0882F848u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 45u, 0x0894B31Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F848u) goto L_0882F848;
    return;
L_0882F848:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0882F858u);
    aot_gpr[5] = (3u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 78u, 0x0894B594u>(ctx, &aot_mem) && ctx.pc == 0x0882F858u) goto L_0882F858;
    return;
L_0882F858:
    aot_gpr[4] = (15948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0882F874u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 156u, 0x0894BB58u>(ctx, &aot_mem) && ctx.pc == 0x0882F874u) goto L_0882F874;
    return;
L_0882F874:
    aot_gpr[31] = (0x0882F87Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23300)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 52u, 0x0894B398u>(ctx, &aot_mem) && ctx.pc == 0x0882F87Cu) goto L_0882F87C;
    return;
L_0882F87C:
    aot_gpr[31] = (0x0882F884u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 44u, 0x0894B300u>(ctx, &aot_mem) && ctx.pc == 0x0882F884u) goto L_0882F884;
    return;
L_0882F884:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882F898u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 80u, 0x0894B5A4u>(ctx, &aot_mem) && ctx.pc == 0x0882F898u) goto L_0882F898;
    return;
L_0882F898:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882F8A4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 196u, 0x0894BEBCu>(ctx, &aot_mem) && ctx.pc == 0x0882F8A4u) goto L_0882F8A4;
    return;
L_0882F8A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F8B8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F8C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0882F8DCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 45u, 0x0894B31Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F8DCu) goto L_0882F8DC;
    return;
L_0882F8DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23300)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F8F4;
      }
      goto L_0882F8EC;
    }
L_0882F8EC:
    aot_gpr[31] = (0x0882F8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 90u, 0x0894B644u>(ctx, &aot_mem) && ctx.pc == 0x0882F8F4u) goto L_0882F8F4;
    return;
L_0882F8F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F904:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F924;
      }
      goto L_0882F91C;
    }
L_0882F91C:
    aot_gpr[31] = (0x0882F924u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 45u, 0x0894B31Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F924u) goto L_0882F924;
    return;
L_0882F924:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F930:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F950:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (28787u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28767));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (29301u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21340));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (25955u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24934));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (25968u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31060));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (21328u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11891));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (21843u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24400));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (17217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18002));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (21569u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17477));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (16717u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24385));
    aot_gpr[5] = (0u | 20041u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    aot_gpr[31] = (0x0882F9F8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23384));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x0882F9F8u) goto L_0882F9F8;
    return;
L_0882F9F8:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23380), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882FA0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23384)));
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0882FA30u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(23380)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x0882FA30u) goto L_0882FA30;
    return;
L_0882FA30:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(23380), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(23384), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882FA4C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(23316));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882FA64:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23312), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882FA84:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23428));
    aot_gpr[5] = (0u | 0u);
    goto L_0882FA90;
L_0882FA90:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882FA90;
      }
      goto L_0882FAA4;
    }
L_0882FAA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882FAAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[9] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[18]);
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_gpr[18] = (2215u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 15u);
    aot_gpr[17] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == aot_gpr[7];
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(23428));
      if (branch_taken) {
          goto L_0882FB04;
      }
      goto L_0882FAF8;
    }
L_0882FAF8:
    aot_gpr[9] = (0u | 14u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_0882FE80;
      }
      goto L_0882FB04;
    }
L_0882FB04:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    aot_gpr[9] = (2214u << 16u);
      if (branch_taken) {
          goto L_0882FB30;
      }
      goto L_0882FB0C;
    }
L_0882FB0C:
    aot_gpr[9] = (2214u << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-12040));
    aot_gpr[9] = (aot_gpr[17] + aot_gpr[9]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (2214u << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-12008));
    aot_gpr[9] = (aot_gpr[17] + aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0882FB4C;
      }
      goto L_0882FB30;
    }
L_0882FB30:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-11976));
    aot_gpr[9] = (aot_gpr[17] + aot_gpr[9]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (2214u << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-11944));
    aot_gpr[9] = (aot_gpr[17] + aot_gpr[9]);
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_0882FB4C;
L_0882FB4C:
    aot_gpr[9] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[9];
    aot_gpr[9] = (0u | 5u);
      if (branch_taken) {
          goto L_0882FB68;
      }
      goto L_0882FB58;
    }
L_0882FB58:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[9];
    aot_gpr[9] = (0u | 6u);
      if (branch_taken) {
          goto L_0882FB68;
      }
      goto L_0882FB60;
    }
L_0882FB60:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_0882FC98;
      }
      goto L_0882FB68;
    }
L_0882FB68:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0882FB7C;
      }
      goto L_0882FB74;
    }
L_0882FB74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_0882FE80;
      }
      goto L_0882FB7C;
    }
L_0882FB7C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FB90;
      }
      goto L_0882FB88;
    }
L_0882FB88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_0882FE80;
      }
      goto L_0882FB90;
    }
L_0882FB90:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FBA4;
      }
      goto L_0882FB9C;
    }
L_0882FB9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_0882FE80;
      }
      goto L_0882FBA4;
    }
L_0882FBA4:
    aot_gpr[3] = (aot_gpr[8] | 0u);
    aot_gpr[12] = (aot_gpr[7] | 0u);
    aot_gpr[2] = (24948u << 16u);
    aot_gpr[11] = (28787u << 16u);
    aot_gpr[10] = (28271u << 16u);
    aot_gpr[9] = (19804u << 16u);
    aot_gpr[8] = (20563u << 16u);
    aot_gpr[7] = (24389u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(24932));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(28767));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(26204));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(29556));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(20563));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[12];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(18015));
      if (branch_taken) {
          goto L_0882FC40;
      }
      goto L_0882FBE0;
    }
L_0882FBE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[7] = (24944u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24906));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    aot_gpr[7] = (25971u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(25966));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[7] = (20563u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(20526));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    aot_gpr[7] = (21582u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(18015));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    aot_gpr[7] = (18753u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(19807));
    aot_gpr[8] = (0u | 78u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr[8]));
      if (branch_taken) {
          goto L_0882FE80;
      }
      goto L_0882FC40;
    }
L_0882FC40:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[7] = (25970u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28491));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    aot_gpr[7] = (20526u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28257));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[7] = (18015u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(20563));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    aot_gpr[7] = (19807u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(21582));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    aot_gpr[7] = (78u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(18753));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[7]);
      if (branch_taken) {
          goto L_0882FE80;
      }
      goto L_0882FC98;
    }
L_0882FC98:
    aot_gpr[9] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_0882FDBC;
      }
      goto L_0882FCA4;
    }
L_0882FCA4:
    aot_gpr[13] = (aot_gpr[8] | 0u);
    aot_gpr[14] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (24948u << 16u);
    aot_gpr[8] = (28787u << 16u);
    aot_gpr[9] = (28271u << 16u);
    aot_gpr[10] = (19804u << 16u);
    aot_gpr[11] = (20563u << 16u);
    aot_gpr[2] = (17491u << 16u);
    aot_gpr[3] = (25185u << 16u);
    aot_gpr[12] = (24435u << 16u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24932));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28767));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(26204));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(29556));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(20563));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20319));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(19551));
    { const bool branch_taken = aot_gpr[13] != aot_gpr[14];
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(27749));
      if (branch_taken) {
          goto L_0882FD5C;
      }
      goto L_0882FCF4;
    }
L_0882FCF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[7] = (24944u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[12]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24906));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    aot_gpr[7] = (25971u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(25966));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    aot_gpr[7] = (20563u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(20526));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    aot_gpr[7] = (21582u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(18015));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    aot_gpr[7] = (18753u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(19807));
    aot_gpr[8] = (0u | 78u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(aot_gpr[8]));
      if (branch_taken) {
          goto L_0882FE80;
      }
      goto L_0882FD5C;
    }
L_0882FD5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[7] = (25970u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[12]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28491));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    aot_gpr[7] = (20526u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28257));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    aot_gpr[7] = (18015u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(20563));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    aot_gpr[7] = (19807u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(21582));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    aot_gpr[7] = (78u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(18753));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[7]);
      if (branch_taken) {
          goto L_0882FE80;
      }
      goto L_0882FDBC;
    }
L_0882FDBC:
    aot_gpr[7] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882FE80;
      }
      goto L_0882FDC8;
    }
L_0882FDC8:
    aot_gpr[7] = (0u | 14u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882FE80;
      }
      goto L_0882FDD4;
    }
L_0882FDD4:
    aot_gpr[5] = (24948u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (28787u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28767));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (28271u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(26204));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (19804u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29556));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (20563u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20563));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (17491u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20319));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (25705u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(19807));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (25197u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30030));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (24435u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29285));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[5] = (25970u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28491));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[5] = (20526u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28257));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[5] = (18015u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20563));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[5] = (19807u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21582));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[5] = (78u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(18753));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[5] = (0u | 1u);
    goto L_0882FE80;
L_0882FE80:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FF78;
      }
      goto L_0882FE88;
    }
L_0882FE88:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(23396));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[7] = (aot_gpr[17] + aot_gpr[7]);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[5] = (0u | 9u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[8];
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0882FF10;
      }
      goto L_0882FEA8;
    }
L_0882FEA8:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882FECC;
      }
      goto L_0882FEB0;
    }
L_0882FEB0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0882FEC4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11632));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0882FEC4u) goto L_0882FEC4;
    return;
L_0882FEC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FF78;
      }
      goto L_0882FECC;
    }
L_0882FECC:
    aot_gpr[4] = (0u | 13u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882FEF4;
      }
      goto L_0882FED8;
    }
L_0882FED8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0882FEECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11612));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0882FEECu) goto L_0882FEEC;
    return;
L_0882FEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FF78;
      }
      goto L_0882FEF4;
    }
L_0882FEF4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0882FF08u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11592));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0882FF08u) goto L_0882FF08;
    return;
L_0882FF08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FF78;
      }
      goto L_0882FF10;
    }
L_0882FF10:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0882FF28;
      }
      goto L_0882FF18;
    }
L_0882FF18:
    aot_gpr[5] = (0u | 13u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882FF64;
      }
      goto L_0882FF24;
    }
L_0882FF24:
    aot_gpr[5] = (0u | 1u);
    goto L_0882FF28;
L_0882FF28:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0882FF48;
      }
      goto L_0882FF30;
    }
L_0882FF30:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0882FF48;
      }
      goto L_0882FF38;
    }
L_0882FF38:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_0882FF48;
      }
      goto L_0882FF40;
    }
L_0882FF40:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882FF64;
      }
      goto L_0882FF48;
    }
L_0882FF48:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0882FF5Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11576));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0882FF5Cu) goto L_0882FF5C;
    return;
L_0882FF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FF78;
      }
      goto L_0882FF64;
    }
L_0882FF64:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0882FF78u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11592));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0882FF78u) goto L_0882FF78;
    return;
L_0882FF78:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
      if (branch_taken) {
          goto L_0882FFA0;
      }
      goto L_0882FF80;
    }
L_0882FF80:
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[31] = (0x0882FF8Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 154u, 0x08877AB8u>(ctx, &aot_mem) && ctx.pc == 0x0882FF8Cu) goto L_0882FF8C;
    return;
L_0882FF8C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
    goto L_0882FFA0;
L_0882FFA0:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(23460));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(23492));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882FFE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[16] << 2u);
    ctx.pc = 0x08830000u; return;
}

void recomp_unit_0043(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0043_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_43(Runtime &runtime) {
    runtime.register_generated_unit(43u, 0x0882F000u, 4096u, &recomp_unit_0043, &recomp_unit_0043_entry);
    runtime.register_function(0x0882F000u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F018u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F020u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F058u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F05Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F06Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F07Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F088u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F0B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F0C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F0D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F100u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F118u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F124u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F12Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F140u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F148u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F154u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F15Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F168u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F174u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F180u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F190u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F19Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F1B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F1BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F1C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F1D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F1E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F1ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F21Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F274u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F28Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F2C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F2DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F2F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F2FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F32Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F338u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F344u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F350u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F358u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F360u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F380u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F3A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F3B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F3C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F3D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F3E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F3E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F404u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F414u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F42Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F440u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F458u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F464u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F47Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F498u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F4B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F4BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F4C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F4DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F4F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F500u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F508u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F51Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F528u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F548u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F558u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F5C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F5D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F5E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F5F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F604u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F60Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F660u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F664u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F66Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F674u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F734u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F748u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F75Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F76Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F778u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F798u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F7A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F7B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F7C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F7D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F7E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F814u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F828u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F83Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F848u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F858u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F874u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F87Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F884u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F898u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F8A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F8B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F8C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F8DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F8ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F8F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F904u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F91Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F924u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F930u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F950u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882F9F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FA0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FA30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FA4Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FA64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FA84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FA90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FAA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FAACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FAF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB04u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB4Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FB9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FBA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FBE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FC40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FC98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FCA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FCF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FD5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FDBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FDC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FDD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FE80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FE88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FEA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FEB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FEC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FECCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FED8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FEECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FEF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF24u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FF8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FFA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x0882FFE4u, &recomp_unit_0043, "recomp_unit_0043");
}
} // namespace psprecomp
