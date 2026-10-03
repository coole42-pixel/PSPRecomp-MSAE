#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0457[1011] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 22, 23, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 26, 27, 0, 0, 0, 28, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 54, 0, 0, 0, 55, 0, 56, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 78, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 87, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94,
    0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0,
    99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0,
    132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0,
    149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0, 157, 0,
    0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164,
    0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0, 170,
};
void recomp_unit_0457_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089CD000u;
        entry_id = (entry_delta < 4044u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0457[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089CD000;
    case 2u: goto L_089CD00C;
    case 3u: goto L_089CD020;
    case 4u: goto L_089CD024;
    case 5u: goto L_089CD030;
    case 6u: goto L_089CD044;
    case 7u: goto L_089CD050;
    case 8u: goto L_089CD084;
    case 9u: goto L_089CD0B4;
    case 10u: goto L_089CD0BC;
    case 11u: goto L_089CD0CC;
    case 12u: goto L_089CD0F0;
    case 13u: goto L_089CD0F8;
    case 14u: goto L_089CD0FC;
    case 15u: goto L_089CD134;
    case 16u: goto L_089CD14C;
    case 17u: goto L_089CD15C;
    case 18u: goto L_089CD164;
    case 19u: goto L_089CD19C;
    case 20u: goto L_089CD1C8;
    case 21u: goto L_089CD1D4;
    case 22u: goto L_089CD1D8;
    case 23u: goto L_089CD1DC;
    case 24u: goto L_089CD1EC;
    case 25u: goto L_089CD20C;
    case 26u: goto L_089CD21C;
    case 27u: goto L_089CD220;
    case 28u: goto L_089CD230;
    case 29u: goto L_089CD234;
    case 30u: goto L_089CD244;
    case 31u: goto L_089CD25C;
    case 32u: goto L_089CD27C;
    case 33u: goto L_089CD29C;
    case 34u: goto L_089CD2A4;
    case 35u: goto L_089CD2BC;
    case 36u: goto L_089CD2C4;
    case 37u: goto L_089CD2CC;
    case 38u: goto L_089CD314;
    case 39u: goto L_089CD340;
    case 40u: goto L_089CD348;
    case 41u: goto L_089CD364;
    case 42u: goto L_089CD398;
    case 43u: goto L_089CD3A4;
    case 44u: goto L_089CD3D8;
    case 45u: goto L_089CD3DC;
    case 46u: goto L_089CD414;
    case 47u: goto L_089CD41C;
    case 48u: goto L_089CD488;
    case 49u: goto L_089CD4A0;
    case 50u: goto L_089CD4B0;
    case 51u: goto L_089CD4B8;
    case 52u: goto L_089CD4D0;
    case 53u: goto L_089CD4DC;
    case 54u: goto L_089CD4E0;
    case 55u: goto L_089CD4F0;
    case 56u: goto L_089CD4F8;
    case 57u: goto L_089CD504;
    case 58u: goto L_089CD52C;
    case 59u: goto L_089CD544;
    case 60u: goto L_089CD57C;
    case 61u: goto L_089CD5A0;
    case 62u: goto L_089CD5AC;
    case 63u: goto L_089CD5B4;
    case 64u: goto L_089CD5D4;
    case 65u: goto L_089CD5DC;
    case 66u: goto L_089CD5F8;
    case 67u: goto L_089CD604;
    case 68u: goto L_089CD654;
    case 69u: goto L_089CD660;
    case 70u: goto L_089CD678;
    case 71u: goto L_089CD6A0;
    case 72u: goto L_089CD6A8;
    case 73u: goto L_089CD6B8;
    case 74u: goto L_089CD6C0;
    case 75u: goto L_089CD6D8;
    case 76u: goto L_089CD6E0;
    case 77u: goto L_089CD6E4;
    case 78u: goto L_089CD708;
    case 79u: goto L_089CD70C;
    case 80u: goto L_089CD73C;
    case 81u: goto L_089CD774;
    case 82u: goto L_089CD784;
    case 83u: goto L_089CD798;
    case 84u: goto L_089CD7D4;
    case 85u: goto L_089CD7E0;
    case 86u: goto L_089CD808;
    case 87u: goto L_089CD81C;
    case 88u: goto L_089CD820;
    case 89u: goto L_089CD830;
    case 90u: goto L_089CD83C;
    case 91u: goto L_089CD848;
    case 92u: goto L_089CD85C;
    case 93u: goto L_089CD864;
    case 94u: goto L_089CD87C;
    case 95u: goto L_089CD884;
    case 96u: goto L_089CD88C;
    case 97u: goto L_089CD8E4;
    case 98u: goto L_089CD8F4;
    case 99u: goto L_089CD900;
    case 100u: goto L_089CD90C;
    case 101u: goto L_089CD918;
    case 102u: goto L_089CD928;
    case 103u: goto L_089CD95C;
    case 104u: goto L_089CD968;
    case 105u: goto L_089CD978;
    case 106u: goto L_089CD9A8;
    case 107u: goto L_089CD9B0;
    case 108u: goto L_089CD9C0;
    case 109u: goto L_089CD9E0;
    case 110u: goto L_089CD9E8;
    case 111u: goto L_089CDA48;
    case 112u: goto L_089CDA80;
    case 113u: goto L_089CDABC;
    case 114u: goto L_089CDAF4;
    case 115u: goto L_089CDB10;
    case 116u: goto L_089CDB1C;
    case 117u: goto L_089CDB2C;
    case 118u: goto L_089CDB88;
    case 119u: goto L_089CDB94;
    case 120u: goto L_089CDB9C;
    case 121u: goto L_089CDBAC;
    case 122u: goto L_089CDBE8;
    case 123u: goto L_089CDC20;
    case 124u: goto L_089CDC34;
    case 125u: goto L_089CDC48;
    case 126u: goto L_089CDC70;
    case 127u: goto L_089CDC84;
    case 128u: goto L_089CDCBC;
    case 129u: goto L_089CDCDC;
    case 130u: goto L_089CDCF0;
    case 131u: goto L_089CDCF8;
    case 132u: goto L_089CDD00;
    case 133u: goto L_089CDD1C;
    case 134u: goto L_089CDD24;
    case 135u: goto L_089CDD28;
    case 136u: goto L_089CDD50;
    case 137u: goto L_089CDD8C;
    case 138u: goto L_089CDD98;
    case 139u: goto L_089CDDD0;
    case 140u: goto L_089CDDE0;
    case 141u: goto L_089CDDE8;
    case 142u: goto L_089CDDF0;
    case 143u: goto L_089CDE08;
    case 144u: goto L_089CDE20;
    case 145u: goto L_089CDE4C;
    case 146u: goto L_089CDE54;
    case 147u: goto L_089CDE5C;
    case 148u: goto L_089CDE78;
    case 149u: goto L_089CDE80;
    case 150u: goto L_089CDE98;
    case 151u: goto L_089CDEB4;
    case 152u: goto L_089CDEC4;
    case 153u: goto L_089CDED0;
    case 154u: goto L_089CDED8;
    case 155u: goto L_089CDEE8;
    case 156u: goto L_089CDEF0;
    case 157u: goto L_089CDEF8;
    case 158u: goto L_089CDF0C;
    case 159u: goto L_089CDF14;
    case 160u: goto L_089CDF44;
    case 161u: goto L_089CDF54;
    case 162u: goto L_089CDF64;
    case 163u: goto L_089CDF6C;
    case 164u: goto L_089CDF7C;
    case 165u: goto L_089CDF8C;
    case 166u: goto L_089CDFA0;
    case 167u: goto L_089CDFA8;
    case 168u: goto L_089CDFB0;
    case 169u: goto L_089CDFC0;
    case 170u: goto L_089CDFC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089CD000:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089CD134;
      }
      goto L_089CD00C;
    }
L_089CD00C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[11] + aot_gpr[22]);
    aot_gpr[6] = (aot_gpr[3] - aot_gpr[22]);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089CD14C;
      }
      goto L_089CD020;
    }
L_089CD020:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089CD024;
L_089CD024:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[21];
    aot_gpr[16] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 181u, 0x089CCFA8u>(ctx, &aot_mem); return;
      }
      goto L_089CD030;
    }
L_089CD030:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(100)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 180u, 0x089CCF8Cu>(ctx, &aot_mem); return;
      }
      goto L_089CD044;
    }
L_089CD044:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089CD0F8;
      }
      goto L_089CD050;
    }
L_089CD050:
    aot_gpr[2] = (aot_gpr[11] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[4] - aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(6));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(11));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(10));
    aot_gpr[17] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    aot_gpr[31] = (0x089CD084u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089CD084u) goto L_089CD084;
    return;
L_089CD084:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[30] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[31] = (0x089CD0B4u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 212u, 0x089CBFE8u>(ctx, &aot_mem) && ctx.pc == 0x089CD0B4u) goto L_089CD0B4;
    return;
L_089CD0B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 174u, 0x089CCEE8u>(ctx, &aot_mem); return;
      }
      goto L_089CD0BC;
    }
L_089CD0BC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089CD164;
      }
      goto L_089CD0CC;
    }
L_089CD0CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(120)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[10] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089CD0F0u);
    aot_gpr[11] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089CD0F0u) goto L_089CD0F0;
    return;
L_089CD0F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 174u, 0x089CCEE8u>(ctx, &aot_mem); return;
      }
      goto L_089CD0F8;
    }
L_089CD0F8:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089CD0FC;
L_089CD0FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CD134:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[16]));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(96)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(96), aot_gpr[3]);
    goto L_089CD020;
L_089CD14C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(156)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(188)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CD15Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(128), aot_gpr[11]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CD15Cu) goto L_089CD15C;
    return;
L_089CD15C:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(128)));
    goto L_089CD020;
L_089CD164:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    goto L_089CD0CC;
L_089CD19C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[30]);
    aot_gpr[8] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    aot_gpr[10] = (aot_gpr[6] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (aot_gpr[4] & 65535u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_089CD1D4;
      }
      goto L_089CD1C8;
    }
L_089CD1C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(22)));
    if (aot_gpr[2] == aot_gpr[3]) {
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(16)));
        goto L_089CD1EC;
    }
    goto L_089CD1D4;
L_089CD1D4:
    aot_gpr[2] = (0u + 0u);
    goto L_089CD1D8;
L_089CD1D8:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089CD1DC;
L_089CD1DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CD1EC:
    aot_gpr[3] = (aot_gpr[14] & 65535u);
    aot_gpr[2] = (aot_gpr[3] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[15] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089CD1D4;
      }
      goto L_089CD20C;
    }
L_089CD20C:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[12] = (0u + 0u);
    goto L_089CD234;
L_089CD21C:
    aot_gpr[7] = (aot_gpr[13] & 65535u);
    goto L_089CD220;
L_089CD220:
    aot_gpr[2] = (aot_gpr[14] & 65535u);
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CD29C;
      }
      goto L_089CD230;
    }
L_089CD230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    goto L_089CD234;
L_089CD234:
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    aot_gpr[13] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[7];
    aot_gpr[4] = (aot_gpr[12] & 65535u);
      if (branch_taken) {
          goto L_089CD21C;
      }
      goto L_089CD244;
    }
L_089CD244:
    aot_gpr[2] = (aot_gpr[7] << 3u);
    aot_gpr[3] = (aot_gpr[7] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[9] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089CD21C;
      }
      goto L_089CD25C;
    }
L_089CD25C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[6] << 1u);
    aot_gpr[11] = (aot_gpr[2] + aot_gpr[15]);
    aot_gpr[3] = (aot_gpr[9] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    if (aot_gpr[4] != aot_gpr[2]) {
    aot_gpr[7] = (aot_gpr[13] & 65535u);
        goto L_089CD220;
    }
    goto L_089CD27C;
L_089CD27C:
    PSPRECOMP_AOT_STORE16(aot_gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[7] = (aot_gpr[13] & 65535u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[14] & 65535u);
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CD230;
      }
      goto L_089CD29C;
    }
L_089CD29C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u | 61440u);
      if (branch_taken) {
          goto L_089CD1D4;
      }
      goto L_089CD2A4;
    }
L_089CD2A4:
    aot_gpr[4] = (aot_gpr[8] + 0u);
    aot_gpr[5] = (aot_gpr[15] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089CD2BCu);
    aot_gpr[11] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089CD2BCu) goto L_089CD2BC;
    return;
L_089CD2BC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089CD1DC;
    }
    goto L_089CD2C4;
L_089CD2C4:
    aot_gpr[2] = (0u + 0u);
    goto L_089CD1D8;
L_089CD2CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089CD3D8;
      }
      goto L_089CD314;
    }
L_089CD314:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[8] = (aot_gpr[30] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[31] = (0x089CD340u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 192u, 0x089CBDF0u>(ctx, &aot_mem) && ctx.pc == 0x089CD340u) goto L_089CD340;
    return;
L_089CD340:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CD3DC;
      }
      goto L_089CD348;
    }
L_089CD348:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (aot_gpr[12] & 65535u);
    aot_gpr[8] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 54508u);
      if (branch_taken) {
          goto L_089CD3DC;
      }
      goto L_089CD364;
    }
L_089CD364:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(10)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[13] << 4u);
    aot_gpr[3] = (aot_gpr[13] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[11] & 65535u);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[21] = (aot_gpr[16] - aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[17] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089CD3A4;
      }
      goto L_089CD398;
    }
L_089CD398:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[7];
    aot_gpr[2] = (aot_gpr[8] << 1u);
      if (branch_taken) {
          goto L_089CD488;
      }
      goto L_089CD3A4;
    }
L_089CD3A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[10] << 2u);
    aot_gpr[2] = (aot_gpr[10] << 3u);
    aot_gpr[4] = (aot_gpr[10] << 6u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[10]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(488)));
        goto L_089CD414;
    }
    goto L_089CD3D8;
L_089CD3D8:
    aot_gpr[3] = (0u + 0u);
    goto L_089CD3DC;
L_089CD3DC:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CD414:
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(15)));
        goto L_089CD57C;
    }
    goto L_089CD41C;
L_089CD41C:
    aot_gpr[4] = (aot_gpr[12] & 65535u);
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(15)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 1u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(6)));
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CD488:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[23] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089CD3D8;
      }
      goto L_089CD4A0;
    }
L_089CD4A0:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[22] = (0u + 0u);
    aot_gpr[19] = (0u + 0u);
    goto L_089CD4F8;
L_089CD4B0:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[7];
    aot_gpr[3] = (aot_gpr[22] << 1u);
      if (branch_taken) {
          goto L_089CD4DC;
      }
      goto L_089CD4B8;
    }
L_089CD4B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[23]);
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089CD4E0;
    }
    goto L_089CD4D0;
L_089CD4D0:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089CD4DC;
L_089CD4DC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089CD4E0;
L_089CD4E0:
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CD5AC;
      }
      goto L_089CD4F0;
    }
L_089CD4F0:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_089CD4F8;
L_089CD4F8:
    aot_gpr[2] = (aot_gpr[11] & 65535u);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    aot_gpr[7] = (aot_gpr[12] & 65535u);
      if (branch_taken) {
          goto L_089CD4B0;
      }
      goto L_089CD504;
    }
L_089CD504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[7] << 6u);
    aot_gpr[2] = (aot_gpr[7] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[3] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_089CD4B0;
      }
      goto L_089CD52C;
    }
L_089CD52C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[20] + 0u);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[10] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089CD5DC;
      }
      goto L_089CD544;
    }
L_089CD544:
    aot_gpr[5] = (aot_gpr[12] & 65535u);
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(15)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(6)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 1u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089CD4DC;
L_089CD57C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(136)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(14)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(6)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[4] = (aot_gpr[10] + 0u);
    aot_gpr[5] = (aot_gpr[13] + 0u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CD5A0u);
    aot_gpr[10] = (aot_gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CD5A0u) goto L_089CD5A0;
    return;
L_089CD5A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    goto L_089CD41C;
L_089CD5AC:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089CD3D8;
      }
      goto L_089CD5B4;
    }
L_089CD5B4:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089CD5D4u);
    aot_gpr[11] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089CD5D4u) goto L_089CD5D4;
    return;
L_089CD5D4:
    aot_gpr[3] = (0u + 0u);
    goto L_089CD3DC;
L_089CD5DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(15)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(136)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(10)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(14)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(6)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CD5F8u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CD5F8u) goto L_089CD5F8;
    return;
L_089CD5F8:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089CD544;
L_089CD604:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[30]);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[9] + 0u);
      if (branch_taken) {
          goto L_089CD660;
      }
      goto L_089CD654;
    }
L_089CD654:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    if (aot_gpr[2] == aot_gpr[3]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(64)));
        goto L_089CD774;
    }
    goto L_089CD660;
L_089CD660:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[19] = (aot_gpr[30] + static_cast<std::uint32_t>(14));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x089CD678u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089CD678u) goto L_089CD678;
    return;
L_089CD678:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[31] = (0x089CD6A0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 212u, 0x089CBFE8u>(ctx, &aot_mem) && ctx.pc == 0x089CD6A0u) goto L_089CD6A0;
    return;
L_089CD6A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CD708;
      }
      goto L_089CD6A8;
    }
L_089CD6A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089CD73C;
      }
      goto L_089CD6B8;
    }
L_089CD6B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(22)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089CD6C0;
L_089CD6C0:
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[21] + 0u);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CD6D8u);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD6D8u) goto L_089CD6D8;
    return;
L_089CD6D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CD708;
      }
      goto L_089CD6E0;
    }
L_089CD6E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_089CD6E4;
L_089CD6E4:
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[2] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    goto L_089CD708;
L_089CD708:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089CD70C;
L_089CD70C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CD73C:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[6]);
    goto L_089CD6B8;
L_089CD774:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089CD784u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089CD784u) goto L_089CD784;
    return;
L_089CD784:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65534u);
      if (branch_taken) {
          goto L_089CD7D4;
      }
      goto L_089CD798;
    }
L_089CD798:
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[6]);
    aot_gpr[2] = (0u | 65534u);
    goto L_089CD7D4;
L_089CD7D4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089CD6C0;
      }
      goto L_089CD7E0;
    }
L_089CD7E0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[8] & 65535u);
    aot_gpr[2] = (aot_gpr[3] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089CD6E4;
      }
      goto L_089CD808;
    }
L_089CD808:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[9] = (aot_gpr[29] + 0u);
    goto L_089CD830;
L_089CD81C:
    aot_gpr[3] = (aot_gpr[7] & 65535u);
    goto L_089CD820;
L_089CD820:
    aot_gpr[2] = (aot_gpr[8] & 65535u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CD85C;
      }
      goto L_089CD830;
    }
L_089CD830:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CD81C;
      }
      goto L_089CD83C;
    }
L_089CD83C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != aot_gpr[10]) {
    aot_gpr[3] = (aot_gpr[7] & 65535u);
        goto L_089CD820;
    }
    goto L_089CD848;
L_089CD848:
    PSPRECOMP_AOT_STORE16(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(2));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089CD81C;
L_089CD85C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089CD6E0;
      }
      goto L_089CD864;
    }
L_089CD864:
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    aot_gpr[9] = (aot_gpr[22] + 0u);
    aot_gpr[10] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CD87Cu);
    aot_gpr[11] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089CD87Cu) goto L_089CD87C;
    return;
L_089CD87C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CD6E0;
      }
      goto L_089CD884;
    }
L_089CD884:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089CD70C;
L_089CD88C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[8] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089CDA80;
      }
      goto L_089CD8E4;
    }
L_089CD8E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089CDA80;
      }
      goto L_089CD8F4;
    }
L_089CD8F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089CD90C;
      }
      goto L_089CD900;
    }
L_089CD900:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089CDC20;
      }
      goto L_089CD90C;
    }
L_089CD90C:
    aot_gpr[3] = ((aot_gpr[2] >> 3u) & 0x000000FFu);
    { const bool branch_taken = aot_gpr[18] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089CDAF4;
      }
      goto L_089CD918;
    }
L_089CD918:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
        goto L_089CD968;
    }
    goto L_089CD928;
L_089CD928:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    goto L_089CD95C;
L_089CD95C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[7] << 3u);
      if (branch_taken) {
          goto L_089CDBE8;
      }
      goto L_089CD968;
    }
L_089CD968:
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(6));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[31] = (0x089CD978u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089CD978u) goto L_089CD978;
    return;
L_089CD978:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (aot_gpr[30] + static_cast<std::uint32_t>(14));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[8] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[31] = (0x089CD9A8u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 212u, 0x089CBFE8u>(ctx, &aot_mem) && ctx.pc == 0x089CD9A8u) goto L_089CD9A8;
    return;
L_089CD9A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CDA48;
      }
      goto L_089CD9B0;
    }
L_089CD9B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089CDABC;
      }
      goto L_089CD9C0;
    }
L_089CD9C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(22)));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CD9E0u);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD9E0u) goto L_089CD9E0;
    return;
L_089CD9E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CDA48;
      }
      goto L_089CD9E8;
    }
L_089CD9E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[7] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[7] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3));
    aot_gpr[3] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[6] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    goto L_089CDA48;
L_089CDA48:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDA80:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDABC:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    goto L_089CD9C0;
L_089CDAF4:
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] & 496u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[3] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CDB10u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089CDB10u) goto L_089CDB10;
    return;
L_089CDB10:
    aot_gpr[10] = (aot_gpr[17] - aot_gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) <= 0;
    aot_gpr[20] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089CDB9C;
      }
      goto L_089CDB1C;
    }
L_089CDB1C:
    aot_gpr[8] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[8] >> 3u);
    goto L_089CDB2C;
L_089CDB2C:
    aot_gpr[6] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 0 ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(7));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 31u));
    if (aot_gpr[2] == 0u) aot_gpr[4] = (aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] >> 29u);
    aot_gpr[2] = (aot_gpr[8] & 7u);
    aot_gpr[4] = ((aot_gpr[4] >> 3u) & 0x0000FFFFu);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[7]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> (aot_gpr[2] & 31u)));
    aot_gpr[9] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] & 7u);
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] & 1u);
    aot_gpr[3] = (aot_gpr[11] << (aot_gpr[3] & 31u));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[8] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089CDB94;
      }
      goto L_089CDB88;
    }
L_089CDB88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089CDB94;
L_089CDB94:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[8] >> 3u);
      if (branch_taken) {
          goto L_089CDB2C;
      }
      goto L_089CDB9C;
    }
L_089CDB9C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
        goto L_089CD968;
    }
    goto L_089CDBAC;
L_089CDBAC:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    goto L_089CD95C;
L_089CDBE8:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    goto L_089CD968;
L_089CDC20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089CDC34u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089CDC34u) goto L_089CDC34;
    return;
L_089CDC34:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[7] << 3u);
      if (branch_taken) {
          goto L_089CDD50;
      }
      goto L_089CDC48;
    }
L_089CDC48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[12] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089CDD28;
      }
      goto L_089CDC70;
    }
L_089CDC70:
    aot_gpr[8] = (0u + 0u);
    aot_gpr[14] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[15] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[13] = (aot_gpr[29] + 0u);
    goto L_089CDC84;
L_089CDC84:
    aot_gpr[2] = (aot_gpr[8] >> 3u);
    aot_gpr[2] = (aot_gpr[21] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[8] & 7u);
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> (aot_gpr[2] & 31u)));
    aot_gpr[3] = (aot_gpr[3] ^ 1u);
    aot_gpr[7] = (aot_gpr[9] + aot_gpr[12]);
    aot_gpr[3] = (aot_gpr[3] & 1u);
    aot_gpr[9] = (aot_gpr[4] & 65535u);
    aot_gpr[11] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[8] = (aot_gpr[9] + 0u);
      if (branch_taken) {
          goto L_089CDCF0;
      }
      goto L_089CDCBC;
    }
L_089CDCBC:
    aot_gpr[3] = (aot_gpr[7] << 6u);
    aot_gpr[2] = (aot_gpr[7] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089CDCF0;
      }
      goto L_089CDCDC;
    }
L_089CDCDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == aot_gpr[15]) {
    PSPRECOMP_AOT_STORE16(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[18]));
        goto L_089CDD8C;
    }
    goto L_089CDCF0;
L_089CDCF0:
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[18] = (aot_gpr[11] & 65535u);
      if (branch_taken) {
          goto L_089CDC84;
      }
      goto L_089CDCF8;
    }
L_089CDCF8:
    { const bool branch_taken = aot_gpr[14] == 0u;
    aot_gpr[4] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089CDD24;
      }
      goto L_089CDD00;
    }
L_089CDD00:
    aot_gpr[8] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[14] + 0u);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    aot_gpr[9] = (aot_gpr[22] + 0u);
    aot_gpr[10] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CDD1Cu);
    aot_gpr[11] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089CDD1Cu) goto L_089CDD1C;
    return;
L_089CDD1C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CDA48;
      }
      goto L_089CDD24;
    }
L_089CDD24:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_089CDD28;
L_089CDD28:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[7] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (aot_gpr[3] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    goto L_089CDA48;
L_089CDD50:
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    goto L_089CDC48;
L_089CDD8C:
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(1));
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(2));
    goto L_089CDCF0;
L_089CDD98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[6] = (0u | 61440u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[11] == aot_gpr[2];
    aot_gpr[9] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089CDE78;
      }
      goto L_089CDDD0;
    }
L_089CDDD0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[11];
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CDE08;
      }
      goto L_089CDDE0;
    }
L_089CDDE0:
    aot_gpr[31] = (0x089CDDE8u);
    aot_gpr[5] = (aot_gpr[3] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CDDE8u) goto L_089CDDE8;
    return;
L_089CDDE8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CDE5C;
      }
      goto L_089CDDF0;
    }
L_089CDDF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDE08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[31] = (0x089CDE20u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-8)));
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 130u, 0x089C29A0u>(ctx, &aot_mem) && ctx.pc == 0x089CDE20u) goto L_089CDE20;
    return;
L_089CDE20:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[10] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u | 61440u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[11] = (0u + 0u);
      if (branch_taken) {
          goto L_089CDE5C;
      }
      goto L_089CDE4C;
    }
L_089CDE4C:
    aot_gpr[31] = (0x089CDE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089CDE54u) goto L_089CDE54;
    return;
L_089CDE54:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CDDF0;
      }
      goto L_089CDE5C;
    }
L_089CDE5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDE78:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    goto L_089CDDE0;
L_089CDE80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[11] == aot_gpr[5];
    aot_gpr[12] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089CDEF8;
      }
      goto L_089CDE98;
    }
L_089CDE98:
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[9] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[6] = (0u | 61440u);
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = aot_gpr[11] == aot_gpr[2];
    aot_gpr[10] = (0u + 0u);
      if (branch_taken) {
          goto L_089CDF0C;
      }
      goto L_089CDEB4;
    }
L_089CDEB4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_089CDEE8;
      }
      goto L_089CDEC4;
    }
L_089CDEC4:
    aot_gpr[5] = (aot_gpr[3] & 65535u);
    aot_gpr[31] = (0x089CDED0u);
    aot_gpr[4] = (aot_gpr[12] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CDED0u) goto L_089CDED0;
    return;
L_089CDED0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CDEF8;
      }
      goto L_089CDED8;
    }
L_089CDED8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDEE8:
    aot_gpr[31] = (0x089CDEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CDEF0u) goto L_089CDEF0;
    return;
L_089CDEF0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CDED8;
      }
      goto L_089CDEF8;
    }
L_089CDEF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDF0C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    goto L_089CDEC4;
L_089CDF14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[13] = (aot_gpr[8] + 0u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[14] = (aot_gpr[7] & 65535u);
    aot_gpr[11] = (aot_gpr[4] + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = aot_gpr[12] == aot_gpr[2];
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089CDFC0;
      }
      goto L_089CDF44;
    }
L_089CDF44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    if (aot_gpr[2] == aot_gpr[12]) {
    aot_gpr[7] = (aot_gpr[14] + 0u);
        goto L_089CDF7C;
    }
    goto L_089CDF54;
L_089CDF54:
    aot_gpr[5] = (aot_gpr[3] & 65535u);
    aot_gpr[4] = (aot_gpr[11] + 0u);
    aot_gpr[31] = (0x089CDF64u);
    aot_gpr[6] = (aot_gpr[14] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CDF64u) goto L_089CDF64;
    return;
L_089CDF64:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CDF8C;
      }
      goto L_089CDF6C;
    }
L_089CDF6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDF7C:
    aot_gpr[10] = (aot_gpr[13] + 0u);
    aot_gpr[9] = (0u + 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[11] = (0u + 0u);
      if (branch_taken) {
          goto L_089CDFA0;
      }
      goto L_089CDF8C;
    }
L_089CDF8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDFA0:
    aot_gpr[31] = (0x089CDFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089CDFA8u) goto L_089CDFA8;
    return;
L_089CDFA8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CDF8C;
      }
      goto L_089CDFB0;
    }
L_089CDFB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDFC0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    goto L_089CDF54;
L_089CDFC8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(22) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[10] = (aot_gpr[5] & 65535u);
    aot_gpr[18] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] & 65535u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    ctx.pc = 0x089CE000u; return;
}

void recomp_unit_0457(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0457_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_457(Runtime &runtime) {
    runtime.register_generated_unit(457u, 0x089CD000u, 4096u, &recomp_unit_0457, &recomp_unit_0457_entry);
    runtime.register_function(0x089CD000u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD00Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD020u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD024u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD030u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD044u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD050u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD084u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD0B4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD0BCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD0CCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD0F0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD0F8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD0FCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD134u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD14Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD15Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD164u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD19Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD1C8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD1D4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD1D8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD1DCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD1ECu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD20Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD21Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD220u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD230u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD234u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD244u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD25Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD27Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD29Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD2A4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD2BCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD2C4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD2CCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD314u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD340u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD348u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD364u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD398u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD3A4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD3D8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD3DCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD414u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD41Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD488u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD4A0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD4B0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD4B8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD4D0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD4DCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD4E0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD4F0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD4F8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD504u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD52Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD544u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD57Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD5A0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD5ACu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD5B4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD5D4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD5DCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD5F8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD604u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD654u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD660u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD678u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD6A0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD6A8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD6B8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD6C0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD6D8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD6E0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD6E4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD708u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD70Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD73Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD774u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD784u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD798u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD7D4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD7E0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD808u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD81Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD820u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD830u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD83Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD848u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD85Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD864u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD87Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD884u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD88Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD8E4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD8F4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD900u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD90Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD918u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD928u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD95Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD968u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD978u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD9A8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD9B0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD9C0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD9E0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CD9E8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDA48u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDA80u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDABCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDAF4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDB10u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDB1Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDB2Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDB88u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDB94u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDB9Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDBACu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDBE8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDC20u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDC34u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDC48u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDC70u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDC84u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDCBCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDCDCu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDCF0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDCF8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDD00u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDD1Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDD24u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDD28u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDD50u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDD8Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDD98u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDDD0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDDE0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDDE8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDDF0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDE08u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDE20u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDE4Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDE54u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDE5Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDE78u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDE80u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDE98u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDEB4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDEC4u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDED0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDED8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDEE8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDEF0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDEF8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDF0Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDF14u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDF44u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDF54u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDF64u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDF6Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDF7Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDF8Cu, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDFA0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDFA8u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDFB0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDFC0u, &recomp_unit_0457, "recomp_unit_0457");
    runtime.register_function(0x089CDFC8u, &recomp_unit_0457, "recomp_unit_0457");
}
} // namespace psprecomp
