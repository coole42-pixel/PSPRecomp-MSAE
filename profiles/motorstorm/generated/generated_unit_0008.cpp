#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0008[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0,
    13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0,
    24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 30, 0, 0, 31, 0, 32, 0,
    0, 0, 33, 0, 0, 34, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0,
    0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0, 76, 0, 0, 0, 0, 77, 78, 79, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0,
    0, 86, 87, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0,
    0, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0,
    0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0,
    0, 122, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151,
    0, 152, 0, 153, 0, 154, 0, 0, 155, 156, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 160,
    0, 0, 161, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 170,
    0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176,
};
void recomp_unit_0008_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0880C000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0008[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0880C000;
    case 2u: goto L_0880C028;
    case 3u: goto L_0880C02C;
    case 4u: goto L_0880C06C;
    case 5u: goto L_0880C074;
    case 6u: goto L_0880C07C;
    case 7u: goto L_0880C094;
    case 8u: goto L_0880C0A4;
    case 9u: goto L_0880C0B4;
    case 10u: goto L_0880C0B8;
    case 11u: goto L_0880C0E4;
    case 12u: goto L_0880C0EC;
    case 13u: goto L_0880C100;
    case 14u: goto L_0880C110;
    case 15u: goto L_0880C118;
    case 16u: goto L_0880C120;
    case 17u: goto L_0880C128;
    case 18u: goto L_0880C130;
    case 19u: goto L_0880C13C;
    case 20u: goto L_0880C144;
    case 21u: goto L_0880C150;
    case 22u: goto L_0880C16C;
    case 23u: goto L_0880C178;
    case 24u: goto L_0880C180;
    case 25u: goto L_0880C190;
    case 26u: goto L_0880C1AC;
    case 27u: goto L_0880C1C4;
    case 28u: goto L_0880C1D0;
    case 29u: goto L_0880C1E0;
    case 30u: goto L_0880C1E4;
    case 31u: goto L_0880C1F0;
    case 32u: goto L_0880C1F8;
    case 33u: goto L_0880C208;
    case 34u: goto L_0880C214;
    case 35u: goto L_0880C218;
    case 36u: goto L_0880C220;
    case 37u: goto L_0880C228;
    case 38u: goto L_0880C234;
    case 39u: goto L_0880C240;
    case 40u: goto L_0880C25C;
    case 41u: goto L_0880C264;
    case 42u: goto L_0880C298;
    case 43u: goto L_0880C2AC;
    case 44u: goto L_0880C2C4;
    case 45u: goto L_0880C2D8;
    case 46u: goto L_0880C2EC;
    case 47u: goto L_0880C2F4;
    case 48u: goto L_0880C304;
    case 49u: goto L_0880C314;
    case 50u: goto L_0880C31C;
    case 51u: goto L_0880C32C;
    case 52u: goto L_0880C334;
    case 53u: goto L_0880C358;
    case 54u: goto L_0880C360;
    case 55u: goto L_0880C394;
    case 56u: goto L_0880C3A8;
    case 57u: goto L_0880C3B0;
    case 58u: goto L_0880C3C4;
    case 59u: goto L_0880C3D8;
    case 60u: goto L_0880C3DC;
    case 61u: goto L_0880C424;
    case 62u: goto L_0880C44C;
    case 63u: goto L_0880C480;
    case 64u: goto L_0880C498;
    case 65u: goto L_0880C4B4;
    case 66u: goto L_0880C4CC;
    case 67u: goto L_0880C4D8;
    case 68u: goto L_0880C500;
    case 69u: goto L_0880C52C;
    case 70u: goto L_0880C548;
    case 71u: goto L_0880C554;
    case 72u: goto L_0880C580;
    case 73u: goto L_0880C594;
    case 74u: goto L_0880C5B0;
    case 75u: goto L_0880C5B4;
    case 76u: goto L_0880C5C0;
    case 77u: goto L_0880C5D4;
    case 78u: goto L_0880C5D8;
    case 79u: goto L_0880C5DC;
    case 80u: goto L_0880C5E4;
    case 81u: goto L_0880C624;
    case 82u: goto L_0880C630;
    case 83u: goto L_0880C664;
    case 84u: goto L_0880C66C;
    case 85u: goto L_0880C678;
    case 86u: goto L_0880C684;
    case 87u: goto L_0880C688;
    case 88u: goto L_0880C68C;
    case 89u: goto L_0880C694;
    case 90u: goto L_0880C6D4;
    case 91u: goto L_0880C6E0;
    case 92u: goto L_0880C714;
    case 93u: goto L_0880C718;
    case 94u: goto L_0880C72C;
    case 95u: goto L_0880C7A4;
    case 96u: goto L_0880C7C8;
    case 97u: goto L_0880C7D4;
    case 98u: goto L_0880C7E4;
    case 99u: goto L_0880C7F8;
    case 100u: goto L_0880C808;
    case 101u: goto L_0880C81C;
    case 102u: goto L_0880C824;
    case 103u: goto L_0880C83C;
    case 104u: goto L_0880C844;
    case 105u: goto L_0880C854;
    case 106u: goto L_0880C87C;
    case 107u: goto L_0880C888;
    case 108u: goto L_0880C898;
    case 109u: goto L_0880C8AC;
    case 110u: goto L_0880C8BC;
    case 111u: goto L_0880C8D0;
    case 112u: goto L_0880C8D8;
    case 113u: goto L_0880C8F0;
    case 114u: goto L_0880C8F8;
    case 115u: goto L_0880C910;
    case 116u: goto L_0880C91C;
    case 117u: goto L_0880C92C;
    case 118u: goto L_0880C940;
    case 119u: goto L_0880C950;
    case 120u: goto L_0880C964;
    case 121u: goto L_0880C96C;
    case 122u: goto L_0880C984;
    case 123u: goto L_0880C98C;
    case 124u: goto L_0880C994;
    case 125u: goto L_0880C9A4;
    case 126u: goto L_0880C9F4;
    case 127u: goto L_0880CA1C;
    case 128u: goto L_0880CA3C;
    case 129u: goto L_0880CA60;
    case 130u: goto L_0880CA70;
    case 131u: goto L_0880CA78;
    case 132u: goto L_0880CA8C;
    case 133u: goto L_0880CAA4;
    case 134u: goto L_0880CAAC;
    case 135u: goto L_0880CAB4;
    case 136u: goto L_0880CAC0;
    case 137u: goto L_0880CAF4;
    case 138u: goto L_0880CB28;
    case 139u: goto L_0880CB5C;
    case 140u: goto L_0880CB90;
    case 141u: goto L_0880CBD4;
    case 142u: goto L_0880CBE4;
    case 143u: goto L_0880CC04;
    case 144u: goto L_0880CC24;
    case 145u: goto L_0880CC58;
    case 146u: goto L_0880CCBC;
    case 147u: goto L_0880CD0C;
    case 148u: goto L_0880CD2C;
    case 149u: goto L_0880CDA4;
    case 150u: goto L_0880CDF0;
    case 151u: goto L_0880CDFC;
    case 152u: goto L_0880CE04;
    case 153u: goto L_0880CE0C;
    case 154u: goto L_0880CE14;
    case 155u: goto L_0880CE20;
    case 156u: goto L_0880CE24;
    case 157u: goto L_0880CE28;
    case 158u: goto L_0880CE68;
    case 159u: goto L_0880CE74;
    case 160u: goto L_0880CE7C;
    case 161u: goto L_0880CE88;
    case 162u: goto L_0880CE8C;
    case 163u: goto L_0880CED0;
    case 164u: goto L_0880CEF4;
    case 165u: goto L_0880CF08;
    case 166u: goto L_0880CF34;
    case 167u: goto L_0880CF4C;
    case 168u: goto L_0880CF60;
    case 169u: goto L_0880CF74;
    case 170u: goto L_0880CF7C;
    case 171u: goto L_0880CF84;
    case 172u: goto L_0880CF8C;
    case 173u: goto L_0880CFA4;
    case 174u: goto L_0880CFD4;
    case 175u: goto L_0880CFF0;
    case 176u: goto L_0880CFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0880C000:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(152)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880C3DC;
      }
      goto L_0880C028;
    }
L_0880C028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0880C02C;
L_0880C02C:
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28040)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880C06Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 25u, 0x088BE0E4u>(ctx, &aot_mem) && ctx.pc == 0x0880C06Cu) goto L_0880C06C;
    return;
L_0880C06C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C0A4;
      }
      goto L_0880C074;
    }
L_0880C074:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C094;
      }
      goto L_0880C07C;
    }
L_0880C07C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(184)));
    aot_gpr[4] = (aot_gpr[4] & 32768u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C0A4;
      }
      goto L_0880C094;
    }
L_0880C094:
    aot_gpr[4] = (aot_gpr[30] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    goto L_0880C0A4;
L_0880C0A4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_0880C02C;
    }
    goto L_0880C0B4;
L_0880C0B4:
    aot_gpr[4] = (15624u << 16u);
    goto L_0880C0B8;
L_0880C0B8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(372)));
    aot_gpr[4] = (aot_gpr[4] | 34953u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[22] = aot_fpr[14] - aot_fpr[22];
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0880C0EC;
      }
      goto L_0880C0E4;
    }
L_0880C0E4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0880C100;
      }
      goto L_0880C0EC;
    }
L_0880C0EC:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
        goto L_0880C100;
    }
    goto L_0880C100;
L_0880C100:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(485)));
    { const bool branch_taken = aot_gpr[22] != aot_gpr[21];
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0880C118;
      }
      goto L_0880C110;
    }
L_0880C110:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880C144;
      }
      goto L_0880C118;
    }
L_0880C118:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C144;
      }
      goto L_0880C120;
    }
L_0880C120:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C130;
      }
      goto L_0880C128;
    }
L_0880C128:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0880C144;
      }
      goto L_0880C130;
    }
L_0880C130:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880C144;
      }
      goto L_0880C13C;
    }
L_0880C13C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(432)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0880C144;
L_0880C144:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(196)));
    aot_gpr[31] = (0x0880C150u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 71u, 0x088EB668u>(ctx, &aot_mem) && ctx.pc == 0x0880C150u) goto L_0880C150;
    return;
L_0880C150:
    aot_gpr[4] = (16076u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0880C178;
      }
      goto L_0880C16C;
    }
L_0880C16C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0880C180;
      }
      goto L_0880C178;
    }
L_0880C178:
    aot_fpr[26] = __builtin_bit_cast(float, 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0880C180;
L_0880C180:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0880C190u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 117u, 0x0880B92Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C190u) goto L_0880C190;
    return;
L_0880C190:
    aot_gpr[4] = (51572u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 9200u);
    aot_gpr[17] = (0u | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_0880C32C;
      }
      goto L_0880C1AC;
    }
L_0880C1AC:
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0880C1E0;
      }
      goto L_0880C1C4;
    }
L_0880C1C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[31] = (0x0880C1D0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C1D0u) goto L_0880C1D0;
    return;
L_0880C1D0:
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[30] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[30] = fs * ft; }
      if (branch_taken) {
          goto L_0880C1E4;
      }
      goto L_0880C1E0;
    }
L_0880C1E0:
    aot_fpr[30] = __builtin_bit_cast(float, 0u);
    goto L_0880C1E4;
L_0880C1E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880C1F0u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 132u, 0x088BDBE8u>(ctx, &aot_mem) && ctx.pc == 0x0880C1F0u) goto L_0880C1F0;
    return;
L_0880C1F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C234;
      }
      goto L_0880C1F8;
    }
L_0880C1F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(7000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(16000) ? 1u : 0u);
      if (branch_taken) {
          goto L_0880C218;
      }
      goto L_0880C208;
    }
L_0880C208:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(9001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C228;
      }
      goto L_0880C214;
    }
L_0880C214:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(16000) ? 1u : 0u);
    goto L_0880C218;
L_0880C218:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(18001) ? 1u : 0u);
      if (branch_taken) {
          goto L_0880C234;
      }
      goto L_0880C220;
    }
L_0880C220:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C234;
      }
      goto L_0880C228;
    }
L_0880C228:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[30] = aot_fpr[30] + aot_fpr[12];
    goto L_0880C234;
L_0880C234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    aot_gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_0880C25C;
      }
      goto L_0880C240;
    }
L_0880C240:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[28]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (16040u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[30] = aot_fpr[12] + aot_fpr[30];
    goto L_0880C25C;
L_0880C25C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_0880C298;
      }
      goto L_0880C264;
    }
L_0880C264:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (15232u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 32897u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (18371u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 20480u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[30] = aot_fpr[12] + aot_fpr[30];
    goto L_0880C298;
L_0880C298:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880C2D8;
      }
      goto L_0880C2AC;
    }
L_0880C2AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880C2C4u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 187u, 0x0880BD30u>(ctx, &aot_mem) && ctx.pc == 0x0880C2C4u) goto L_0880C2C4;
    return;
L_0880C2C4:
    aot_gpr[4] = (15897u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[30] = aot_fpr[12] + aot_fpr[30];
    goto L_0880C2D8;
L_0880C2D8:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[26] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880C304;
      }
      goto L_0880C2EC;
    }
L_0880C2EC:
    aot_gpr[31] = (0x0880C2F4u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 128u, 0x088BDBA0u>(ctx, &aot_mem) && ctx.pc == 0x0880C2F4u) goto L_0880C2F4;
    return;
L_0880C2F4:
    aot_gpr[4] = (16640u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[30] = aot_fpr[30] + aot_fpr[12];
    goto L_0880C304;
L_0880C304:
    ctx.set_fpu_condition((aot_fpr[24] < aot_fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880C31C;
      }
      goto L_0880C314;
    }
L_0880C314:
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[19] = (aot_gpr[16] | 0u);
    goto L_0880C31C;
L_0880C31C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C1AC;
      }
      goto L_0880C32C;
    }
L_0880C32C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C358;
      }
      goto L_0880C334;
    }
L_0880C334:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(152)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0880C358;
L_0880C358:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C3D8;
      }
      goto L_0880C360;
    }
L_0880C360:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(432)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(452)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C3D8;
      }
      goto L_0880C394;
    }
L_0880C394:
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C3C4;
      }
      goto L_0880C3A8;
    }
L_0880C3A8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0880C3C4;
      }
      goto L_0880C3B0;
    }
L_0880C3B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0x0880C3C4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 194u, 0x0880BE50u>(ctx, &aot_mem) && ctx.pc == 0x0880C3C4u) goto L_0880C3C4;
    return;
L_0880C3C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C394;
      }
      goto L_0880C3D8;
    }
L_0880C3D8:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    goto L_0880C3DC;
L_0880C3DC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C424:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C44C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[7] & 255u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0880C480u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 206u, 0x0880BF18u>(ctx, &aot_mem) && ctx.pc == 0x0880C480u) goto L_0880C480;
    return;
L_0880C480:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880C498u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_0880C424;
L_0880C498:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
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
L_0880C4B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(348)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0880C4CCu);
    aot_gpr[7] = (0u | 0u);
    goto L_0880C44C;
L_0880C4CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C4D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (16880u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(372)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0880C548;
      }
      goto L_0880C500;
    }
L_0880C500:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(160));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[6] = (15820u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880C548;
      }
      goto L_0880C52C;
    }
L_0880C52C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (17096u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[31] = (0x0880C548u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 206u, 0x0880BF18u>(ctx, &aot_mem) && ctx.pc == 0x0880C548u) goto L_0880C548;
    return;
L_0880C548:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C554:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(372)));
    aot_gpr[6] = (16880u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0880C5B4;
      }
      goto L_0880C580;
    }
L_0880C580:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880C5B4;
      }
      goto L_0880C594;
    }
L_0880C594:
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880C5B0u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 206u, 0x0880BF18u>(ctx, &aot_mem) && ctx.pc == 0x0880C5B0u) goto L_0880C5B0;
    return;
L_0880C5B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_0880C5B4;
L_0880C5B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0880C5D8;
      }
      goto L_0880C5C0;
    }
L_0880C5C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_0880C5DC;
      }
      goto L_0880C5D4;
    }
L_0880C5D4:
    aot_gpr[5] = (0u | 1u);
    goto L_0880C5D8;
L_0880C5D8:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    goto L_0880C5DC;
L_0880C5DC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C66C;
      }
      goto L_0880C5E4;
    }
L_0880C5E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(96)));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(100)));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_0880C624;
    }
    goto L_0880C624;
L_0880C624:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C718;
      }
      goto L_0880C630;
    }
L_0880C630:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), aot_gpr[4]);
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880C664u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 206u, 0x0880BF18u>(ctx, &aot_mem) && ctx.pc == 0x0880C664u) goto L_0880C664;
    return;
L_0880C664:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_0880C718;
      }
      goto L_0880C66C;
    }
L_0880C66C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0880C688;
      }
      goto L_0880C678;
    }
L_0880C678:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0880C68C;
      }
      goto L_0880C684;
    }
L_0880C684:
    aot_gpr[4] = (0u | 1u);
    goto L_0880C688;
L_0880C688:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0880C68C;
L_0880C68C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C718;
      }
      goto L_0880C694;
    }
L_0880C694:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(96)));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(100)));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_0880C6D4;
    }
    goto L_0880C6D4;
L_0880C6D4:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C718;
      }
      goto L_0880C6E0;
    }
L_0880C6E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0880C714u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0880C424;
L_0880C714:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0880C718;
L_0880C718:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C72C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[17]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (16544u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_fpr[12] = aot_fpr[15] + aot_fpr[12];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(212)));
    aot_gpr[7] = (15948u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    aot_gpr[7] = (aot_gpr[7] | 52429u);
    aot_gpr[4] = (aot_gpr[8] & 255u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_0880C844;
      }
      goto L_0880C7A4;
    }
L_0880C7A4:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(212)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(108)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[19] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[19]);
        goto L_0880C7D4;
    }
    goto L_0880C7C8;
L_0880C7C8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(108)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[19]);
    goto L_0880C7D4;
L_0880C7D4:
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[22] = aot_fpr[12] - aot_fpr[22];
      if (branch_taken) {
          goto L_0880C824;
      }
      goto L_0880C7E4;
    }
L_0880C7E4:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0880C7F8u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 144u, 0x088BDC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C7F8u) goto L_0880C7F8;
    return;
L_0880C7F8:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[24])) && aot_fpr[20] == aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880C83C;
      }
      goto L_0880C808;
    }
L_0880C808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0880C81Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 154u, 0x088BDD94u>(ctx, &aot_mem) && ctx.pc == 0x0880C81Cu) goto L_0880C81C;
    return;
L_0880C81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C83C;
      }
      goto L_0880C824;
    }
L_0880C824:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880C83Cu);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 165u, 0x088BDED8u>(ctx, &aot_mem) && ctx.pc == 0x0880C83Cu) goto L_0880C83C;
    return;
L_0880C83C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C984;
      }
      goto L_0880C844;
    }
L_0880C844:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
        goto L_0880C8F8;
    }
    goto L_0880C854;
L_0880C854:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(212)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(108)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[19] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[19]);
        goto L_0880C888;
    }
    goto L_0880C87C;
L_0880C87C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(108)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[19]);
    goto L_0880C888;
L_0880C888:
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[22] = aot_fpr[12] - aot_fpr[22];
      if (branch_taken) {
          goto L_0880C8D8;
      }
      goto L_0880C898;
    }
L_0880C898:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0880C8ACu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 144u, 0x088BDC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C8ACu) goto L_0880C8AC;
    return;
L_0880C8AC:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[24])) && aot_fpr[20] == aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880C8F0;
      }
      goto L_0880C8BC;
    }
L_0880C8BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0880C8D0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 154u, 0x088BDD94u>(ctx, &aot_mem) && ctx.pc == 0x0880C8D0u) goto L_0880C8D0;
    return;
L_0880C8D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C8F0;
      }
      goto L_0880C8D8;
    }
L_0880C8D8:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880C8F0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 165u, 0x088BDED8u>(ctx, &aot_mem) && ctx.pc == 0x0880C8F0u) goto L_0880C8F0;
    return;
L_0880C8F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C984;
      }
      goto L_0880C8F8;
    }
L_0880C8F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(108)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[19] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[19]);
        goto L_0880C91C;
    }
    goto L_0880C910;
L_0880C910:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(108)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[19]);
    goto L_0880C91C;
L_0880C91C:
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[22] = aot_fpr[12] - aot_fpr[22];
      if (branch_taken) {
          goto L_0880C96C;
      }
      goto L_0880C92C;
    }
L_0880C92C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0880C940u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 144u, 0x088BDC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C940u) goto L_0880C940;
    return;
L_0880C940:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[24])) && aot_fpr[20] == aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880C984;
      }
      goto L_0880C950;
    }
L_0880C950:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0880C964u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 154u, 0x088BDD94u>(ctx, &aot_mem) && ctx.pc == 0x0880C964u) goto L_0880C964;
    return;
L_0880C964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C984;
      }
      goto L_0880C96C;
    }
L_0880C96C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880C984u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 165u, 0x088BDED8u>(ctx, &aot_mem) && ctx.pc == 0x0880C984u) goto L_0880C984;
    return;
L_0880C984:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C994;
      }
      goto L_0880C98C;
    }
L_0880C98C:
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0880C994;
L_0880C994:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[24])) && aot_fpr[20] == aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880C9F4;
      }
      goto L_0880C9A4;
    }
L_0880C9A4:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0880C9F4;
L_0880C9F4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CA1C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CA3C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CA60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0880CAB4;
      }
      goto L_0880CA70;
    }
L_0880CA70:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CAB4;
      }
      goto L_0880CA78;
    }
L_0880CA78:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CAAC;
      }
      goto L_0880CA8C;
    }
L_0880CA8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0880CAA4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880CAA4u) goto L_0880CAA4;
    return;
L_0880CAA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CAB4;
      }
      goto L_0880CAAC;
    }
L_0880CAAC:
    aot_gpr[31] = (0x0880CAB4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0880CAB4u) goto L_0880CAB4;
    return;
L_0880CAB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CAC0:
    aot_gpr[5] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16153u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CAF4:
    aot_gpr[5] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16544u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CB28:
    aot_gpr[5] = (16544u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16153u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CB5C:
    aot_gpr[5] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16153u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CB90:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[17] = aot_fpr[12] - aot_fpr[17];
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = aot_fpr[17] - aot_fpr[18];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] + aot_fpr[14];
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[12] + aot_fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CBD4:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CBE4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CC04:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CC24:
    aot_gpr[5] = (32639u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 65535u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2064), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (65407u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2068), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2072), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2080), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2084), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2088), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CC58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(2100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2096)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2096), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[30] = (0u | 2u);
    aot_gpr[23] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    goto L_0880CCBC;
L_0880CCBC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[20] = (aot_gpr[20] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[20] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2032)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (aot_gpr[4] << 5u);
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[18] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2032), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CF08;
      }
      goto L_0880CD0C;
    }
L_0880CD0C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[22] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0880CF08;
      }
      goto L_0880CD2C;
    }
L_0880CD2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[4] << 7u);
    aot_gpr[6] = (aot_gpr[18] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(400)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[20] & 255u);
    aot_gpr[5] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (aot_gpr[8] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[17] = (aot_gpr[19] & 255u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[6] = (aot_gpr[17] & 255u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1520)));
    aot_gpr[6] = (aot_gpr[30] << (aot_gpr[6] & 31u));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0880CE24;
      }
      goto L_0880CDA4;
    }
L_0880CDA4:
    aot_gpr[6] = (aot_gpr[20] & 255u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2096)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[7] = (aot_gpr[7] | 8u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[8] = (aot_gpr[17] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2096), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[8] << 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1904)));
    aot_gpr[7] = (aot_gpr[23] << (aot_gpr[8] & 31u));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[7]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0880CE28;
      }
      goto L_0880CDF0;
    }
L_0880CDF0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1072)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CE20;
      }
      goto L_0880CDFC;
    }
L_0880CDFC:
    aot_gpr[31] = (0x0880CE04u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x0880CE04u) goto L_0880CE04;
    return;
L_0880CE04:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880CE20;
      }
      goto L_0880CE0C;
    }
L_0880CE0C:
    aot_gpr[31] = (0x0880CE14u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 46u, 0x0894B330u>(ctx, &aot_mem) && ctx.pc == 0x0880CE14u) goto L_0880CE14;
    return;
L_0880CE14:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880CE20u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 178u, 0x0894BDB4u>(ctx, &aot_mem) && ctx.pc == 0x0880CE20u) goto L_0880CE20;
    return;
L_0880CE20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(2100)));
    goto L_0880CE24;
L_0880CE24:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0880CE28;
L_0880CE28:
    aot_gpr[5] = (aot_gpr[20] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[17] & 255u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] << 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1776)));
    aot_gpr[6] = (aot_gpr[30] << (aot_gpr[6] & 31u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CE7C;
      }
      goto L_0880CE68;
    }
L_0880CE68:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0880CE74u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0880CE74u) goto L_0880CE74;
    return;
L_0880CE74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(2100)));
      if (branch_taken) {
          goto L_0880CE8C;
      }
      goto L_0880CE7C;
    }
L_0880CE7C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0880CE88u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0880CE88u) goto L_0880CE88;
    return;
L_0880CE88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(2100)));
    goto L_0880CE8C;
L_0880CE8C:
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (aot_gpr[20] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[17] & 255u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] << 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1776)));
    aot_gpr[7] = (aot_gpr[23] << (aot_gpr[7] & 31u));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[7]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0880CEF4;
      }
      goto L_0880CED0;
    }
L_0880CED0:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[20] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2032)));
    aot_gpr[6] = (aot_gpr[6] | 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2032), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0880CEF4;
L_0880CEF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880CD2C;
      }
      goto L_0880CF08;
    }
L_0880CF08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
      if (branch_taken) {
          goto L_0880CCBC;
      }
      goto L_0880CF34;
    }
L_0880CF34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2096)));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880CFA4;
      }
      goto L_0880CF4C;
    }
L_0880CF4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(2102)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CFA4;
      }
      goto L_0880CF60;
    }
L_0880CF60:
    aot_gpr[4] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1072)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CF8C;
      }
      goto L_0880CF74;
    }
L_0880CF74:
    aot_gpr[31] = (0x0880CF7Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x0880CF7Cu) goto L_0880CF7C;
    return;
L_0880CF7C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CF8C;
      }
      goto L_0880CF84;
    }
L_0880CF84:
    aot_gpr[31] = (0x0880CF8Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 49u, 0x0894B364u>(ctx, &aot_mem) && ctx.pc == 0x0880CF8Cu) goto L_0880CF8C;
    return;
L_0880CF8C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(2102)));
    aot_gpr[16] = (aot_gpr[16] & 255u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880CF60;
      }
      goto L_0880CFA4;
    }
L_0880CFA4:
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
L_0880CFD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2100), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0880CFF0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2101), static_cast<std::uint8_t>(0u));
    goto L_0880CC24;
L_0880CFF0:
    aot_gpr[31] = (0x0880CFF8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880CC58;
L_0880CFF8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2103))))));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x0880D000u; return;
}

void recomp_unit_0008(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0008_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_8(Runtime &runtime) {
    runtime.register_generated_unit(8u, 0x0880C000u, 4096u, &recomp_unit_0008, &recomp_unit_0008_entry);
    runtime.register_function(0x0880C000u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C028u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C02Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C06Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C074u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C07Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C094u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C0A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C0B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C0B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C0E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C0ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C100u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C110u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C118u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C120u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C128u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C130u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C13Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C144u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C150u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C16Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C178u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C180u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C190u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C1ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C1C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C1D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C1E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C1E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C1F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C1F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C208u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C214u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C218u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C220u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C228u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C234u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C240u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C25Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C264u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C298u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C2ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C2C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C2D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C2ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C2F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C304u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C314u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C31Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C32Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C334u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C358u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C360u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C394u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C3A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C3B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C3C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C3D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C3DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C424u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C44Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C480u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C498u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C4B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C4CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C4D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C500u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C52Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C548u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C554u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C580u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C594u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C5B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C5B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C5C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C5D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C5D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C5DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C5E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C624u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C630u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C664u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C66Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C678u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C684u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C688u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C68Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C694u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C6D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C6E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C714u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C718u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C72Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C7A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C7C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C7D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C7E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C7F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C808u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C81Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C824u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C83Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C844u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C854u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C87Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C888u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C898u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C8ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C8BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C8D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C8D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C8F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C8F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C910u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C91Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C92Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C940u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C950u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C964u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C96Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C984u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C98Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C994u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C9A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880C9F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CA1Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CA3Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CA60u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CA70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CA78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CA8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CAA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CAACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CAB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CAC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CAF4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CB28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CB5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CB90u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CBD4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CBE4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CC04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CC24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CC58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CCBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CD0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CD2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CDA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CDF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CDFCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CE04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CE0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CE14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CE20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CE24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CE28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CE68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CE74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CE7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CE88u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CE8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CED0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CEF4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CF08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CF34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CF4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CF60u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CF74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CF7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CF84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CF8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CFA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CFD4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CFF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0880CFF8u, &recomp_unit_0008, "recomp_unit_0008");
}
} // namespace psprecomp
