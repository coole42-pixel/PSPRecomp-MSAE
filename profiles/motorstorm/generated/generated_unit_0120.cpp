#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0120[1018] = {
    1, 0, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0,
    0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 26, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 54, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76,
    0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82,
    0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 94, 0, 95, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 101, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 158, 0, 159,
    0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 0, 165, 166, 0, 0, 0, 167, 0, 0, 168,
};
void recomp_unit_0120_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0887C004u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0120[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0887C004;
    case 2u: goto L_0887C014;
    case 3u: goto L_0887C01C;
    case 4u: goto L_0887C024;
    case 5u: goto L_0887C02C;
    case 6u: goto L_0887C054;
    case 7u: goto L_0887C06C;
    case 8u: goto L_0887C088;
    case 9u: goto L_0887C090;
    case 10u: goto L_0887C0B0;
    case 11u: goto L_0887C0B8;
    case 12u: goto L_0887C0C0;
    case 13u: goto L_0887C0D0;
    case 14u: goto L_0887C0D8;
    case 15u: goto L_0887C0E8;
    case 16u: goto L_0887C0F0;
    case 17u: goto L_0887C0F8;
    case 18u: goto L_0887C108;
    case 19u: goto L_0887C110;
    case 20u: goto L_0887C118;
    case 21u: goto L_0887C120;
    case 22u: goto L_0887C13C;
    case 23u: goto L_0887C164;
    case 24u: goto L_0887C16C;
    case 25u: goto L_0887C18C;
    case 26u: goto L_0887C1A0;
    case 27u: goto L_0887C1A4;
    case 28u: goto L_0887C1B4;
    case 29u: goto L_0887C1C4;
    case 30u: goto L_0887C1D0;
    case 31u: goto L_0887C1FC;
    case 32u: goto L_0887C20C;
    case 33u: goto L_0887C218;
    case 34u: goto L_0887C22C;
    case 35u: goto L_0887C234;
    case 36u: goto L_0887C24C;
    case 37u: goto L_0887C264;
    case 38u: goto L_0887C290;
    case 39u: goto L_0887C298;
    case 40u: goto L_0887C2B0;
    case 41u: goto L_0887C304;
    case 42u: goto L_0887C398;
    case 43u: goto L_0887C3D4;
    case 44u: goto L_0887C3DC;
    case 45u: goto L_0887C408;
    case 46u: goto L_0887C410;
    case 47u: goto L_0887C41C;
    case 48u: goto L_0887C424;
    case 49u: goto L_0887C42C;
    case 50u: goto L_0887C43C;
    case 51u: goto L_0887C448;
    case 52u: goto L_0887C458;
    case 53u: goto L_0887C464;
    case 54u: goto L_0887C468;
    case 55u: goto L_0887C488;
    case 56u: goto L_0887C498;
    case 57u: goto L_0887C4A4;
    case 58u: goto L_0887C4B4;
    case 59u: goto L_0887C4C4;
    case 60u: goto L_0887C4C8;
    case 61u: goto L_0887C4E4;
    case 62u: goto L_0887C4EC;
    case 63u: goto L_0887C4FC;
    case 64u: goto L_0887C508;
    case 65u: goto L_0887C53C;
    case 66u: goto L_0887C548;
    case 67u: goto L_0887C558;
    case 68u: goto L_0887C568;
    case 69u: goto L_0887C56C;
    case 70u: goto L_0887C594;
    case 71u: goto L_0887C59C;
    case 72u: goto L_0887C5A8;
    case 73u: goto L_0887C5B0;
    case 74u: goto L_0887C5E4;
    case 75u: goto L_0887C5F0;
    case 76u: goto L_0887C600;
    case 77u: goto L_0887C60C;
    case 78u: goto L_0887C610;
    case 79u: goto L_0887C634;
    case 80u: goto L_0887C648;
    case 81u: goto L_0887C66C;
    case 82u: goto L_0887C680;
    case 83u: goto L_0887C68C;
    case 84u: goto L_0887C69C;
    case 85u: goto L_0887C6D0;
    case 86u: goto L_0887C6E0;
    case 87u: goto L_0887C6F8;
    case 88u: goto L_0887C72C;
    case 89u: goto L_0887C740;
    case 90u: goto L_0887C750;
    case 91u: goto L_0887C758;
    case 92u: goto L_0887C768;
    case 93u: goto L_0887C788;
    case 94u: goto L_0887C798;
    case 95u: goto L_0887C7A0;
    case 96u: goto L_0887C7A4;
    case 97u: goto L_0887C7AC;
    case 98u: goto L_0887C7B8;
    case 99u: goto L_0887C7D8;
    case 100u: goto L_0887C7E0;
    case 101u: goto L_0887C7E4;
    case 102u: goto L_0887C7EC;
    case 103u: goto L_0887C8A0;
    case 104u: goto L_0887C8BC;
    case 105u: goto L_0887C8D4;
    case 106u: goto L_0887C8DC;
    case 107u: goto L_0887C91C;
    case 108u: goto L_0887C924;
    case 109u: goto L_0887C934;
    case 110u: goto L_0887C940;
    case 111u: goto L_0887C978;
    case 112u: goto L_0887C994;
    case 113u: goto L_0887C9D8;
    case 114u: goto L_0887CAA8;
    case 115u: goto L_0887CAC0;
    case 116u: goto L_0887CAD4;
    case 117u: goto L_0887CADC;
    case 118u: goto L_0887CB1C;
    case 119u: goto L_0887CB24;
    case 120u: goto L_0887CB30;
    case 121u: goto L_0887CB50;
    case 122u: goto L_0887CB74;
    case 123u: goto L_0887CB88;
    case 124u: goto L_0887CBD4;
    case 125u: goto L_0887CC94;
    case 126u: goto L_0887CCB0;
    case 127u: goto L_0887CCC8;
    case 128u: goto L_0887CCD0;
    case 129u: goto L_0887CD0C;
    case 130u: goto L_0887CD10;
    case 131u: goto L_0887CD20;
    case 132u: goto L_0887CD38;
    case 133u: goto L_0887CD40;
    case 134u: goto L_0887CD50;
    case 135u: goto L_0887CD58;
    case 136u: goto L_0887CDA0;
    case 137u: goto L_0887CDC0;
    case 138u: goto L_0887CE3C;
    case 139u: goto L_0887CE48;
    case 140u: goto L_0887CE54;
    case 141u: goto L_0887CE68;
    case 142u: goto L_0887CE74;
    case 143u: goto L_0887CE7C;
    case 144u: goto L_0887CEA0;
    case 145u: goto L_0887CEA8;
    case 146u: goto L_0887CEBC;
    case 147u: goto L_0887CEC4;
    case 148u: goto L_0887CED4;
    case 149u: goto L_0887CEDC;
    case 150u: goto L_0887CF04;
    case 151u: goto L_0887CF0C;
    case 152u: goto L_0887CF20;
    case 153u: goto L_0887CF30;
    case 154u: goto L_0887CF3C;
    case 155u: goto L_0887CF44;
    case 156u: goto L_0887CF60;
    case 157u: goto L_0887CF74;
    case 158u: goto L_0887CF78;
    case 159u: goto L_0887CF80;
    case 160u: goto L_0887CF98;
    case 161u: goto L_0887CFA0;
    case 162u: goto L_0887CFAC;
    case 163u: goto L_0887CFB4;
    case 164u: goto L_0887CFBC;
    case 165u: goto L_0887CFC8;
    case 166u: goto L_0887CFCC;
    case 167u: goto L_0887CFDC;
    case 168u: goto L_0887CFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0887C004:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7340)));
    aot_gpr[31] = (0x0887C014u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0266_entry, 266u, 53u, 0x0890E890u>(ctx, &aot_mem) && ctx.pc == 0x0887C014u) goto L_0887C014;
    return;
L_0887C014:
    aot_gpr[31] = (0x0887C01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 87u, 0x0882BD04u>(ctx, &aot_mem) && ctx.pc == 0x0887C01Cu) goto L_0887C01C;
    return;
L_0887C01C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C120;
      }
      goto L_0887C024;
    }
L_0887C024:
    aot_gpr[31] = (0x0887C02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 116u, 0x0882BF64u>(ctx, &aot_mem) && ctx.pc == 0x0887C02Cu) goto L_0887C02C;
    return;
L_0887C02C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2860)));
    aot_gpr[5] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C088;
      }
      goto L_0887C054;
    }
L_0887C054:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8824));
    aot_gpr[31] = (0x0887C06Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9864));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C06Cu) goto L_0887C06C;
    return;
L_0887C06C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_0887C088;
L_0887C088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C120;
      }
      goto L_0887C090;
    }
L_0887C090:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(128));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0887C0B0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887C0B0u) goto L_0887C0B0;
    return;
L_0887C0B0:
    aot_gpr[31] = (0x0887C0B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5272)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 174u, 0x088B5F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C0B8u) goto L_0887C0B8;
    return;
L_0887C0B8:
    aot_gpr[31] = (0x0887C0C0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 86u, 0x0882E5C4u>(ctx, &aot_mem) && ctx.pc == 0x0887C0C0u) goto L_0887C0C0;
    return;
L_0887C0C0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7340)));
    aot_gpr[31] = (0x0887C0D0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0266_entry, 266u, 53u, 0x0890E890u>(ctx, &aot_mem) && ctx.pc == 0x0887C0D0u) goto L_0887C0D0;
    return;
L_0887C0D0:
    aot_gpr[31] = (0x0887C0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 87u, 0x0882BD04u>(ctx, &aot_mem) && ctx.pc == 0x0887C0D8u) goto L_0887C0D8;
    return;
L_0887C0D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887C0F0;
      }
      goto L_0887C0E8;
    }
L_0887C0E8:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_0887C0F0;
L_0887C0F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C120;
      }
      goto L_0887C0F8;
    }
L_0887C0F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (0u | 2u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 6u);
        goto L_0887C108;
    }
    goto L_0887C108;
L_0887C108:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887C120;
      }
      goto L_0887C110;
    }
L_0887C110:
    aot_gpr[31] = (0x0887C118u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 123u, 0x0887BC04u>(ctx, &aot_mem) && ctx.pc == 0x0887C118u) goto L_0887C118;
    return;
L_0887C118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C120;
      }
      goto L_0887C120;
    }
L_0887C120:
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
L_0887C13C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28040)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0887C164;
    }
    goto L_0887C164;
L_0887C164:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C1A4;
      }
      goto L_0887C16C;
    }
L_0887C16C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(48))))));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887C18Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9872));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0887C18Cu) goto L_0887C18C;
    return;
L_0887C18C:
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0887C1A0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x0887C1A0u) goto L_0887C1A0;
    return;
L_0887C1A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_0887C1A4;
L_0887C1A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C1B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0887C1C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0887C1C4u) goto L_0887C1C4;
    return;
L_0887C1C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C1D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3952), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0887C1FCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 102u, 0x088DC798u>(ctx, &aot_mem) && ctx.pc == 0x0887C1FCu) goto L_0887C1FC;
    return;
L_0887C1FC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[31] = (0x0887C20Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 11u, 0x088240E0u>(ctx, &aot_mem) && ctx.pc == 0x0887C20Cu) goto L_0887C20C;
    return;
L_0887C20C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C218:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0887C22Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 65u, 0x0887B838u>(ctx, &aot_mem) && ctx.pc == 0x0887C22Cu) goto L_0887C22C;
    return;
L_0887C22C:
    aot_gpr[31] = (0x0887C234u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 162u, 0x0887BE3Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C234u) goto L_0887C234;
    return;
L_0887C234:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(27496), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C24C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0887C264u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x0887C264u) goto L_0887C264;
    return;
L_0887C264:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(42)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(43)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(27496), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5272)));
    aot_gpr[31] = (0x0887C290u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 76u, 0x088176CCu>(ctx, &aot_mem) && ctx.pc == 0x0887C290u) goto L_0887C290;
    return;
L_0887C290:
    aot_gpr[31] = (0x0887C298u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 86u, 0x0882E5C4u>(ctx, &aot_mem) && ctx.pc == 0x0887C298u) goto L_0887C298;
    return;
L_0887C298:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3952), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C2B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[18] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887CD58;
      }
      goto L_0887C304;
    }
L_0887C304:
    aot_gpr[4] = (17264u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[4] = (17096u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28792)));
    aot_fpr[17] = __builtin_bit_cast(float, 0u);
    aot_gpr[9] = (16672u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[9] = (129u << 16u);
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[28] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[28])));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (64u << 16u);
    aot_gpr[4] = (256u << 16u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-32640));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16448));
    if (static_cast<std::int32_t>(aot_gpr[8]) < 0) {
    aot_fpr[28] = aot_fpr[28] + aot_fpr[24];
        goto L_0887C398;
    }
    goto L_0887C398;
L_0887C398:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr[28]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[28] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[28] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[6] = (16544u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16928u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[8] = (0u | 1u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_fpr[28] = aot_fpr[28] - aot_fpr[12];
      if (branch_taken) {
          goto L_0887C410;
      }
      goto L_0887C3D4;
    }
L_0887C3D4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
      if (branch_taken) {
          goto L_0887C634;
      }
      goto L_0887C3DC;
    }
L_0887C3DC:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (16384u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[6] = (17279u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (20224u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0887C42C;
      }
      goto L_0887C408;
    }
L_0887C408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C488;
      }
      goto L_0887C410;
    }
L_0887C410:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887C508;
      }
      goto L_0887C41C;
    }
L_0887C41C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
      if (branch_taken) {
          goto L_0887C5B0;
      }
      goto L_0887C424;
    }
L_0887C424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C634;
      }
      goto L_0887C42C;
    }
L_0887C42C:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
        goto L_0887C448;
    }
    goto L_0887C43C;
L_0887C43C:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0887C458;
      }
      goto L_0887C448;
    }
L_0887C448:
    aot_gpr[16] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[16]);
    goto L_0887C458;
L_0887C458:
    aot_gpr[5] = (aot_gpr[16] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C468;
      }
      goto L_0887C464;
    }
L_0887C464:
    aot_gpr[16] = (0u | 255u);
    goto L_0887C468;
L_0887C468:
    aot_gpr[5] = (aot_gpr[16] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[8] = (0u | 5u);
    aot_gpr[16] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[5] | aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[5] | aot_gpr[19]);
      if (branch_taken) {
          goto L_0887C648;
      }
      goto L_0887C488;
    }
L_0887C488:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
        goto L_0887C4A4;
    }
    goto L_0887C498;
L_0887C498:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0887C4B4;
      }
      goto L_0887C4A4;
    }
L_0887C4A4:
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_0887C4B4;
L_0887C4B4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C4C8;
      }
      goto L_0887C4C4;
    }
L_0887C4C4:
    aot_gpr[7] = (0u | 255u);
    goto L_0887C4C8;
L_0887C4C8:
    aot_gpr[20] = (65409u << 16u);
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[22]));
    aot_gpr[19] = (65344u << 16u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-32640));
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16448));
      if (branch_taken) {
          goto L_0887C4EC;
      }
      goto L_0887C4E4;
    }
L_0887C4E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C4FC;
      }
      goto L_0887C4EC;
    }
L_0887C4EC:
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[26] = aot_fpr[12] + aot_fpr[26];
    goto L_0887C4FC;
L_0887C4FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 6u);
      if (branch_taken) {
          goto L_0887C648;
      }
      goto L_0887C508;
    }
L_0887C508:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (20224u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (17279u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[15] = aot_fpr[16] - aot_fpr[15];
        goto L_0887C548;
    }
    goto L_0887C53C;
L_0887C53C:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_0887C558;
      }
      goto L_0887C548;
    }
L_0887C548:
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_0887C558;
L_0887C558:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C56C;
      }
      goto L_0887C568;
    }
L_0887C568:
    aot_gpr[7] = (0u | 255u);
    goto L_0887C56C;
L_0887C56C:
    aot_gpr[4] = (0u | 255u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[7]);
    aot_gpr[20] = (65409u << 16u);
    aot_gpr[19] = (65344u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-32640));
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16448));
      if (branch_taken) {
          goto L_0887C59C;
      }
      goto L_0887C594;
    }
L_0887C594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C5A8;
      }
      goto L_0887C59C;
    }
L_0887C59C:
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[26] = aot_fpr[12] + aot_fpr[26];
    goto L_0887C5A8;
L_0887C5A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 10u);
      if (branch_taken) {
          goto L_0887C648;
      }
      goto L_0887C5B0;
    }
L_0887C5B0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (20224u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (17279u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
        goto L_0887C5F0;
    }
    goto L_0887C5E4;
L_0887C5E4:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0887C600;
      }
      goto L_0887C5F0;
    }
L_0887C5F0:
    aot_gpr[16] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[16]);
    goto L_0887C600;
L_0887C600:
    aot_gpr[5] = (aot_gpr[16] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C610;
      }
      goto L_0887C60C;
    }
L_0887C60C:
    aot_gpr[16] = (0u | 255u);
    goto L_0887C610;
L_0887C610:
    aot_gpr[5] = (0u | 255u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[8] = (0u | 5u);
    aot_gpr[16] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[5] | aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[5] | aot_gpr[19]);
      if (branch_taken) {
          goto L_0887C648;
      }
      goto L_0887C634;
    }
L_0887C634:
    aot_gpr[16] = (256u << 16u);
    aot_gpr[19] = (64u << 16u);
    aot_gpr[20] = (aot_gpr[9] | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16448));
    goto L_0887C648;
L_0887C648:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    aot_gpr[17] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[22] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0887C66Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C66Cu) goto L_0887C66C;
    return;
L_0887C66C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    aot_gpr[31] = (0x0887C680u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0887C680u) goto L_0887C680;
    return;
L_0887C680:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887C68Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0887C68Cu) goto L_0887C68C;
    return;
L_0887C68C:
    aot_fpr[30] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (0u | 52u);
    aot_gpr[31] = (0x0887C69Cu);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887C69Cu) goto L_0887C69C;
    return;
L_0887C69C:
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (0u | 2u);
    aot_gpr[10] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887C6D0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0887C6D0u) goto L_0887C6D0;
    return;
L_0887C6D0:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887C6E0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x0887C6E0u) goto L_0887C6E0;
    return;
L_0887C6E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[22] = (0u | 1u);
    aot_gpr[16] = (0u | 0u);
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0887C6F8;
L_0887C6F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(152)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
    aot_gpr[8] = (ctx.lo);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[20] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[20])));
    if (static_cast<std::int32_t>(aot_gpr[8]) < 0) {
    aot_fpr[20] = aot_fpr[20] + aot_fpr[24];
        goto L_0887C72C;
    }
    goto L_0887C72C;
L_0887C72C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[20] = aot_fpr[28] + aot_fpr[20];
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
        goto L_0887C740;
    }
    goto L_0887C740;
L_0887C740:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_fpr[20] = aot_fpr[20] + aot_fpr[12];
      if (branch_taken) {
          goto L_0887C758;
      }
      goto L_0887C750;
    }
L_0887C750:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887C7AC;
      }
      goto L_0887C758;
    }
L_0887C758:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(48))))));
    aot_gpr[31] = (0x0887C768u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 254u, 0x08874DECu>(ctx, &aot_mem) && ctx.pc == 0x0887C768u) goto L_0887C768;
    return;
L_0887C768:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0887C7A0;
      }
      goto L_0887C788;
    }
L_0887C788:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(152)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[17];
    aot_gpr[7] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887C7A4;
      }
      goto L_0887C798;
    }
L_0887C798:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_0887C7A4;
      }
      goto L_0887C7A0;
    }
L_0887C7A0:
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_0887C7A4;
L_0887C7A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C7E4;
      }
      goto L_0887C7AC;
    }
L_0887C7AC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(48))))));
    aot_gpr[31] = (0x0887C7B8u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 254u, 0x08874DECu>(ctx, &aot_mem) && ctx.pc == 0x0887C7B8u) goto L_0887C7B8;
    return;
L_0887C7B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0887C7E0;
      }
      goto L_0887C7D8;
    }
L_0887C7D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_0887C7E4;
      }
      goto L_0887C7E0;
    }
L_0887C7E0:
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_0887C7E4;
L_0887C7E4:
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
        goto L_0887C7EC;
    }
    goto L_0887C7EC;
L_0887C7EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(10)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[16];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[16]);
      if (branch_taken) {
          goto L_0887C8BC;
      }
      goto L_0887C8A0;
    }
L_0887C8A0:
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0887C8D4;
      }
      goto L_0887C8BC;
    }
L_0887C8BC:
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    goto L_0887C8D4;
L_0887C8D4:
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[21]));
        goto L_0887C91C;
    }
    goto L_0887C8DC;
L_0887C8DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[22];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887C924;
      }
      goto L_0887C91C;
    }
L_0887C91C:
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_0887C924;
L_0887C924:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0887C6F8;
      }
      goto L_0887C934;
    }
L_0887C934:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CB24;
      }
      goto L_0887C940;
    }
L_0887C940:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(152)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (ctx.lo);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[7]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
        goto L_0887C978;
    }
    goto L_0887C978;
L_0887C978:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(52)));
    aot_fpr[12] = aot_fpr[28] + aot_fpr[12];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    if (static_cast<std::int32_t>(aot_gpr[7]) < 0) {
    aot_fpr[13] = aot_fpr[13] + aot_fpr[24];
        goto L_0887C994;
    }
    goto L_0887C994;
L_0887C994:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(160));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[13] = aot_fpr[13] + aot_fpr[24];
        goto L_0887C9D8;
    }
    goto L_0887C9D8;
L_0887C9D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(26)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (129u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-32640));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(168)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(170)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(176));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_fpr[14] = aot_fpr[15] + aot_fpr[14];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_0887CAC0;
      }
      goto L_0887CAA8;
    }
L_0887CAA8:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0887CAD4;
      }
      goto L_0887CAC0;
    }
L_0887CAC0:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(176));
    goto L_0887CAD4;
L_0887CAD4:
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[21]));
        goto L_0887CB1C;
    }
    goto L_0887CADC;
L_0887CADC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[22];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887CB24;
      }
      goto L_0887CB1C;
    }
L_0887CB1C:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_0887CB24;
L_0887CB24:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CD20;
      }
      goto L_0887CB30;
    }
L_0887CB30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (129u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32640));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 160u);
    goto L_0887CB50;
L_0887CB50:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (ctx.lo);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[9]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
        goto L_0887CB74;
    }
    goto L_0887CB74;
L_0887CB74:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[28] + aot_fpr[12];
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_fpr[13] = aot_fpr[13] + aot_fpr[24];
        goto L_0887CB88;
    }
    goto L_0887CB88;
L_0887CB88:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28792)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    if (static_cast<std::int32_t>(aot_gpr[9]) < 0) {
    aot_fpr[13] = aot_fpr[13] + aot_fpr[24];
        goto L_0887CBD4;
    }
    goto L_0887CBD4;
L_0887CBD4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(26)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[8]));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(26)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(10)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_fpr[14] = aot_fpr[15] + aot_fpr[14];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
      if (branch_taken) {
          goto L_0887CCB0;
      }
      goto L_0887CC94;
    }
L_0887CC94:
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0887CCC8;
      }
      goto L_0887CCB0;
    }
L_0887CCB0:
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    goto L_0887CCC8;
L_0887CCC8:
    if (aot_gpr[7] == 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[21]));
        goto L_0887CD0C;
    }
    goto L_0887CCD0;
L_0887CCD0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(26)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[22];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_0887CD10;
      }
      goto L_0887CD0C;
    }
L_0887CD0C:
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[21]));
    goto L_0887CD10;
L_0887CD10:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0887CB50;
      }
      goto L_0887CD20;
    }
L_0887CD20:
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0887CD38u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x0887CD38u) goto L_0887CD38;
    return;
L_0887CD38:
    aot_gpr[31] = (0x0887CD40u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 166u, 0x08943B80u>(ctx, &aot_mem) && ctx.pc == 0x0887CD40u) goto L_0887CD40;
    return;
L_0887CD40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0887CD50u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x0887CD50u) goto L_0887CD50;
    return;
L_0887CD50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CD58;
      }
      goto L_0887CD58;
    }
L_0887CD58:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CDA0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25616), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CDC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9928));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9964));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[30] = (2214u << 16u);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[21] = (57344u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(9912));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(10004));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(10020));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[22] = (8192u << 16u);
      if (branch_taken) {
          goto L_0887CE68;
      }
      goto L_0887CE3C;
    }
L_0887CE3C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CE68;
      }
      goto L_0887CE48;
    }
L_0887CE48:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0887CE54u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 43u, 0x088BC2B4u>(ctx, &aot_mem) && ctx.pc == 0x0887CE54u) goto L_0887CE54;
    return;
L_0887CE54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0887CE74;
      }
      goto L_0887CE68;
    }
L_0887CE68:
    aot_gpr[4] = (aot_gpr[4] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0887CE74;
L_0887CE74:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CED4;
      }
      goto L_0887CE7C;
    }
L_0887CE7C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0887CEBC;
      }
      goto L_0887CEA0;
    }
L_0887CEA0:
    aot_gpr[31] = (0x0887CEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 114u, 0x08874614u>(ctx, &aot_mem) && ctx.pc == 0x0887CEA8u) goto L_0887CEA8;
    return;
L_0887CEA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0887CED4;
      }
      goto L_0887CEBC;
    }
L_0887CEBC:
    aot_gpr[31] = (0x0887CEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 22u, 0x08874128u>(ctx, &aot_mem) && ctx.pc == 0x0887CEC4u) goto L_0887CEC4;
    return;
L_0887CEC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0887CED4;
L_0887CED4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0887CFDC;
      }
      goto L_0887CEDC;
    }
L_0887CEDC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CF44;
      }
      goto L_0887CF04;
    }
L_0887CF04:
    aot_gpr[31] = (0x0887CF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0887CF0Cu) goto L_0887CF0C;
    return;
L_0887CF0C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2696)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CFCC;
      }
      goto L_0887CF20;
    }
L_0887CF20:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x0887CF30u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 83u, 0x088BC5F8u>(ctx, &aot_mem) && ctx.pc == 0x0887CF30u) goto L_0887CF30;
    return;
L_0887CF30:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CFCC;
      }
      goto L_0887CF3C;
    }
L_0887CF3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0887CFCC;
      }
      goto L_0887CF44;
    }
L_0887CF44:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[5] = (aot_gpr[4] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CF80;
      }
      goto L_0887CF60;
    }
L_0887CF60:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(124)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CF78;
      }
      goto L_0887CF74;
    }
L_0887CF74:
    aot_gpr[19] = (0u | 1u);
    goto L_0887CF78;
L_0887CF78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CFCC;
      }
      goto L_0887CF80;
    }
L_0887CF80:
    aot_gpr[4] = (aot_gpr[4] ^ 3u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
      if (branch_taken) {
          goto L_0887CFB4;
      }
      goto L_0887CF98;
    }
L_0887CF98:
    aot_gpr[31] = (0x0887CFA0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 90u, 0x088BC654u>(ctx, &aot_mem) && ctx.pc == 0x0887CFA0u) goto L_0887CFA0;
    return;
L_0887CFA0:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CFCC;
      }
      goto L_0887CFAC;
    }
L_0887CFAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0887CFCC;
      }
      goto L_0887CFB4;
    }
L_0887CFB4:
    aot_gpr[31] = (0x0887CFBCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 71u, 0x088BC4F4u>(ctx, &aot_mem) && ctx.pc == 0x0887CFBCu) goto L_0887CFBC;
    return;
L_0887CFBC:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CFCC;
      }
      goto L_0887CFC8;
    }
L_0887CFC8:
    aot_gpr[19] = (0u | 1u);
    goto L_0887CFCC;
L_0887CFCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0887CFDC;
L_0887CFDC:
    aot_gpr[16] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 4u, 0x0887D018u>(ctx, &aot_mem); return;
      }
      goto L_0887CFE8;
    }
L_0887CFE8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 4u, 0x0887D018u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 1u, 0x0887D004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0120(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0120_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_120(Runtime &runtime) {
    runtime.register_generated_unit(120u, 0x0887C000u, 4096u, &recomp_unit_0120, &recomp_unit_0120_entry);
    runtime.register_function(0x0887C004u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C014u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C01Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C024u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C02Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C054u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C06Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C088u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C090u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C0B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C0B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C0C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C0D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C0D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C0E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C0F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C0F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C108u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C110u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C118u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C120u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C13Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C164u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C16Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C18Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C1A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C1A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C1B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C1C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C1D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C1FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C20Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C22Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C234u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C24Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C264u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C290u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C298u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C2B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C304u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C398u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C3D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C3DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C408u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C410u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C41Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C424u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C42Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C43Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C448u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C458u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C464u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C468u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C488u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C498u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C4A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C4B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C4C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C4C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C4E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C4ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C4FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C508u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C53Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C548u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C558u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C568u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C56Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C594u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C59Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C5A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C5B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C5E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C5F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C600u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C60Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C610u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C634u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C648u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C66Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C680u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C68Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C69Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C6D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C6E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C6F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C72Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C740u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C750u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C758u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C768u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C788u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C798u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C7A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C7A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C7ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C7B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C7D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C7E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C7E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C7ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C8A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C8BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C8D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C8DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C91Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C924u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C934u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C940u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C978u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C994u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887C9D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CAA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CAC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CAD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CADCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CB1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CB24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CB30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CB50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CB74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CB88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CBD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CC94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CCB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CCC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CCD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CD0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CD10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CD20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CD38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CD40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CD50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CD58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CDA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CDC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CE3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CE48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CE54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CE68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CE74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CE7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CEA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CEA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CEBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CEC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CED4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CEDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CF04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CF0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CF20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CF30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CF3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CF44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CF60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CF74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CF78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CF80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CF98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CFA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CFACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CFB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CFBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CFC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CFCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CFDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x0887CFE8u, &recomp_unit_0120, "recomp_unit_0120");
}
} // namespace psprecomp
