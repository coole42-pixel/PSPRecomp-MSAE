#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0558[1023] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18,
    0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0,
    0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0,
    0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 84, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    88, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95,
    0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 102, 0, 103, 0, 104, 0, 0, 105, 106, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0,
    122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0,
    131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 136, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 150, 0, 0, 0, 0, 151, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0,
    161, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 175, 176, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 190, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195,
};
void recomp_unit_0558_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A32000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0558[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A32000;
    case 2u: goto L_08A32008;
    case 3u: goto L_08A32010;
    case 4u: goto L_08A32024;
    case 5u: goto L_08A3202C;
    case 6u: goto L_08A32038;
    case 7u: goto L_08A32040;
    case 8u: goto L_08A32054;
    case 9u: goto L_08A32084;
    case 10u: goto L_08A32090;
    case 11u: goto L_08A320B0;
    case 12u: goto L_08A320DC;
    case 13u: goto L_08A320E8;
    case 14u: goto L_08A320FC;
    case 15u: goto L_08A32104;
    case 16u: goto L_08A3212C;
    case 17u: goto L_08A32170;
    case 18u: goto L_08A3217C;
    case 19u: goto L_08A32184;
    case 20u: goto L_08A3218C;
    case 21u: goto L_08A321A0;
    case 22u: goto L_08A321B4;
    case 23u: goto L_08A321BC;
    case 24u: goto L_08A321C8;
    case 25u: goto L_08A321E0;
    case 26u: goto L_08A321FC;
    case 27u: goto L_08A3220C;
    case 28u: goto L_08A32210;
    case 29u: goto L_08A32260;
    case 30u: goto L_08A32290;
    case 31u: goto L_08A32298;
    case 32u: goto L_08A322B8;
    case 33u: goto L_08A322E0;
    case 34u: goto L_08A322F0;
    case 35u: goto L_08A322F4;
    case 36u: goto L_08A323E8;
    case 37u: goto L_08A323F4;
    case 38u: goto L_08A3243C;
    case 39u: goto L_08A3244C;
    case 40u: goto L_08A32460;
    case 41u: goto L_08A32468;
    case 42u: goto L_08A3248C;
    case 43u: goto L_08A324E4;
    case 44u: goto L_08A324F0;
    case 45u: goto L_08A324F8;
    case 46u: goto L_08A32510;
    case 47u: goto L_08A32518;
    case 48u: goto L_08A32534;
    case 49u: goto L_08A3253C;
    case 50u: goto L_08A32550;
    case 51u: goto L_08A32558;
    case 52u: goto L_08A32590;
    case 53u: goto L_08A32598;
    case 54u: goto L_08A325B0;
    case 55u: goto L_08A325C4;
    case 56u: goto L_08A325D0;
    case 57u: goto L_08A325E0;
    case 58u: goto L_08A325E4;
    case 59u: goto L_08A3260C;
    case 60u: goto L_08A3262C;
    case 61u: goto L_08A32634;
    case 62u: goto L_08A32638;
    case 63u: goto L_08A32654;
    case 64u: goto L_08A32660;
    case 65u: goto L_08A32678;
    case 66u: goto L_08A32684;
    case 67u: goto L_08A3269C;
    case 68u: goto L_08A326A4;
    case 69u: goto L_08A326AC;
    case 70u: goto L_08A326D4;
    case 71u: goto L_08A326E8;
    case 72u: goto L_08A32734;
    case 73u: goto L_08A32754;
    case 74u: goto L_08A32770;
    case 75u: goto L_08A32778;
    case 76u: goto L_08A32794;
    case 77u: goto L_08A327B4;
    case 78u: goto L_08A327C8;
    case 79u: goto L_08A327DC;
    case 80u: goto L_08A32804;
    case 81u: goto L_08A32810;
    case 82u: goto L_08A32824;
    case 83u: goto L_08A32838;
    case 84u: goto L_08A3283C;
    case 85u: goto L_08A32848;
    case 86u: goto L_08A32850;
    case 87u: goto L_08A32870;
    case 88u: goto L_08A32880;
    case 89u: goto L_08A32888;
    case 90u: goto L_08A32894;
    case 91u: goto L_08A328A4;
    case 92u: goto L_08A328B8;
    case 93u: goto L_08A328C0;
    case 94u: goto L_08A328E0;
    case 95u: goto L_08A328FC;
    case 96u: goto L_08A32904;
    case 97u: goto L_08A32918;
    case 98u: goto L_08A32924;
    case 99u: goto L_08A3293C;
    case 100u: goto L_08A32944;
    case 101u: goto L_08A3294C;
    case 102u: goto L_08A32950;
    case 103u: goto L_08A32958;
    case 104u: goto L_08A32960;
    case 105u: goto L_08A3296C;
    case 106u: goto L_08A32970;
    case 107u: goto L_08A32980;
    case 108u: goto L_08A32998;
    case 109u: goto L_08A329C4;
    case 110u: goto L_08A329CC;
    case 111u: goto L_08A329E0;
    case 112u: goto L_08A329EC;
    case 113u: goto L_08A329F4;
    case 114u: goto L_08A32A00;
    case 115u: goto L_08A32A34;
    case 116u: goto L_08A32A3C;
    case 117u: goto L_08A32A50;
    case 118u: goto L_08A32A5C;
    case 119u: goto L_08A32A68;
    case 120u: goto L_08A32AEC;
    case 121u: goto L_08A32AF8;
    case 122u: goto L_08A32B00;
    case 123u: goto L_08A32B14;
    case 124u: goto L_08A32B1C;
    case 125u: goto L_08A32B2C;
    case 126u: goto L_08A32B34;
    case 127u: goto L_08A32B44;
    case 128u: goto L_08A32B4C;
    case 129u: goto L_08A32B70;
    case 130u: goto L_08A32B78;
    case 131u: goto L_08A32B80;
    case 132u: goto L_08A32B8C;
    case 133u: goto L_08A32B98;
    case 134u: goto L_08A32BA8;
    case 135u: goto L_08A32BB4;
    case 136u: goto L_08A32BB8;
    case 137u: goto L_08A32BD0;
    case 138u: goto L_08A32BD8;
    case 139u: goto L_08A32BE4;
    case 140u: goto L_08A32C00;
    case 141u: goto L_08A32C0C;
    case 142u: goto L_08A32C18;
    case 143u: goto L_08A32C40;
    case 144u: goto L_08A32C4C;
    case 145u: goto L_08A32C64;
    case 146u: goto L_08A32C78;
    case 147u: goto L_08A32C8C;
    case 148u: goto L_08A32CAC;
    case 149u: goto L_08A32CB8;
    case 150u: goto L_08A32CBC;
    case 151u: goto L_08A32CD0;
    case 152u: goto L_08A32CD4;
    case 153u: goto L_08A32D04;
    case 154u: goto L_08A32D0C;
    case 155u: goto L_08A32D18;
    case 156u: goto L_08A32D2C;
    case 157u: goto L_08A32D34;
    case 158u: goto L_08A32D54;
    case 159u: goto L_08A32D60;
    case 160u: goto L_08A32D78;
    case 161u: goto L_08A32D80;
    case 162u: goto L_08A32D8C;
    case 163u: goto L_08A32DA4;
    case 164u: goto L_08A32DB0;
    case 165u: goto L_08A32DB8;
    case 166u: goto L_08A32DCC;
    case 167u: goto L_08A32DD4;
    case 168u: goto L_08A32DEC;
    case 169u: goto L_08A32DF8;
    case 170u: goto L_08A32E0C;
    case 171u: goto L_08A32E2C;
    case 172u: goto L_08A32E3C;
    case 173u: goto L_08A32E48;
    case 174u: goto L_08A32E54;
    case 175u: goto L_08A32E5C;
    case 176u: goto L_08A32E60;
    case 177u: goto L_08A32E80;
    case 178u: goto L_08A32E94;
    case 179u: goto L_08A32EB0;
    case 180u: goto L_08A32EBC;
    case 181u: goto L_08A32ED0;
    case 182u: goto L_08A32EEC;
    case 183u: goto L_08A32F00;
    case 184u: goto L_08A32F08;
    case 185u: goto L_08A32F20;
    case 186u: goto L_08A32F34;
    case 187u: goto L_08A32F3C;
    case 188u: goto L_08A32F70;
    case 189u: goto L_08A32F8C;
    case 190u: goto L_08A32F9C;
    case 191u: goto L_08A32FA0;
    case 192u: goto L_08A32FB4;
    case 193u: goto L_08A32FCC;
    case 194u: goto L_08A32FF0;
    case 195u: goto L_08A32FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A32000:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 141u, 0x08A31DD8u>(ctx, &aot_mem); return;
      }
      goto L_08A32008;
    }
L_08A32008:
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(-4));
    aot_gpr[3] = (aot_gpr[29] + aot_gpr[2]);
    goto L_08A32010;
L_08A32010:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A32010;
      }
      goto L_08A32024;
    }
L_08A32024:
    aot_gpr[3] = (2215u << 16u);
    (void)rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 142u, 0x08A31DDCu>(ctx, &aot_mem); return;
L_08A3202C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (aot_gpr[21] & 7u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 168u, 0x08A31F58u>(ctx, &aot_mem); return;
      }
      goto L_08A32038;
    }
L_08A32038:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A32084;
      }
      goto L_08A32040;
    }
L_08A32040:
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[20] = (aot_gpr[16] << 2u);
    goto L_08A32054;
L_08A32054:
    aot_gpr[2] = (aot_gpr[20] - aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_fpr[2] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    aot_fpr[1] = aot_fpr[1] + aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A32054;
      }
      goto L_08A32084;
    }
L_08A32084:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[2] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A320FC;
      }
      goto L_08A32090;
    }
L_08A32090:
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[20] = (aot_gpr[16] << 2u);
    aot_gpr[2] = (aot_gpr[7] << 2u);
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[3] - aot_gpr[5]);
    aot_gpr[6] = (0u + 0u);
    goto L_08A320B0;
L_08A320B0:
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[5]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_fpr[2] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    aot_fpr[1] = aot_fpr[1] + aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A320B0;
      }
      goto L_08A320DC;
    }
L_08A320DC:
    aot_fpr[2] = __builtin_bit_cast(float, 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[3] = (0u + 0u);
    goto L_08A320E8;
L_08A320E8:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[3];
    aot_fpr[2] = aot_fpr[2] + aot_fpr[0];
      if (branch_taken) {
          goto L_08A320E8;
      }
      goto L_08A320FC;
    }
L_08A320FC:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_08A321C8;
      }
      goto L_08A32104;
    }
L_08A32104:
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_fpr[2] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]) ^ 0x80000000u);
    aot_fpr[1] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]) ^ 0x80000000u);
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    (void)rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 167u, 0x08A31F54u>(ctx, &aot_mem); return;
L_08A3212C:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20900)));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[29]);
    aot_gpr[20] = (aot_gpr[16] << 2u);
    aot_gpr[3] = (aot_gpr[20] + aot_gpr[29]);
    aot_fpr[1] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20904)));
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[1])));
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[3] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[2]));
    aot_fpr[0] = aot_fpr[4] + aot_fpr[0];
    aot_fpr[1] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[3]));
    (void)rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 141u, 0x08A31DD8u>(ctx, &aot_mem); return;
L_08A32170:
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 87u, 0x08A31A24u>(ctx, &aot_mem); return;
L_08A3217C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (aot_gpr[21] & 7u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 168u, 0x08A31F58u>(ctx, &aot_mem); return;
      }
      goto L_08A32184;
    }
L_08A32184:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    aot_fpr[1] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A321B4;
      }
      goto L_08A3218C;
    }
L_08A3218C:
    aot_gpr[3] = (aot_gpr[16] << 2u);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + 0u);
    goto L_08A321A0;
L_08A321A0:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[3];
    aot_fpr[1] = aot_fpr[1] + aot_fpr[0];
      if (branch_taken) {
          goto L_08A321A0;
      }
      goto L_08A321B4;
    }
L_08A321B4:
    if (aot_gpr[22] != 0u) {
    aot_fpr[1] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]) ^ 0x80000000u);
        goto L_08A321BC;
    }
    goto L_08A321BC;
L_08A321BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    (void)rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 167u, 0x08A31F54u>(ctx, &aot_mem); return;
L_08A321C8:
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    (void)rt.invoke_chained_direct<&recomp_unit_0557_entry, 557u, 167u, 0x08A31F54u>(ctx, &aot_mem); return;
L_08A321E0:
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (12799u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
        goto L_08A32210;
    }
    goto L_08A321FC;
L_08A321FC:
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32290;
      }
      goto L_08A3220C;
    }
L_08A3220C:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    goto L_08A32210;
L_08A32210:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20928)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20932)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20936)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20940)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20944)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
      if (branch_taken) {
          goto L_08A32298;
      }
      goto L_08A32260;
    }
L_08A32260:
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20952)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20948)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[13];
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[12] = aot_fpr[12] - aot_fpr[0];
    goto L_08A32290;
L_08A32290:
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32298:
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20948)));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A322B8:
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (12671u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_fpr[6] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A3244C;
      }
      goto L_08A322E0;
    }
L_08A322E0:
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A324E4;
      }
      goto L_08A322F0;
    }
L_08A322F0:
    { const float fs = aot_fpr[6]; const float ft = aot_fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    goto L_08A322F4;
L_08A322F4:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20996)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20972)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21000)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20976)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21004)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20980)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21008)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20984)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21012)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20988)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const float fs = aot_fpr[6]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21016)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = aot_fpr[1] + aot_fpr[0];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20992)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[3] = aot_fpr[3] + aot_fpr[0];
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21020)));
    aot_gpr[2] = (16172u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 41279u);
    aot_fpr[3] = aot_fpr[3] + aot_fpr[1];
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[2] = aot_fpr[13] + aot_fpr[2];
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_fpr[4] = aot_fpr[13] + aot_fpr[4];
    aot_fpr[4] = aot_fpr[4] + aot_fpr[0];
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[5] = aot_fpr[6] + aot_fpr[4];
      if (branch_taken) {
          goto L_08A3248C;
      }
      goto L_08A323E8;
    }
L_08A323E8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3253C;
      }
      goto L_08A323F4;
    }
L_08A323F4:
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20960)));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[5]));
    aot_fpr[3] = aot_fpr[3] / aot_fpr[5];
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[2] = aot_fpr[0] - aot_fpr[6];
    aot_fpr[2] = aot_fpr[4] - aot_fpr[2];
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[3]));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    aot_fpr[4] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20956)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[6] = aot_fpr[4] + aot_fpr[3];
    goto L_08A3243C;
L_08A3243C:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[6]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3244C:
    aot_gpr[2] = (16172u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 41279u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    { const float fs = aot_fpr[6]; const float ft = aot_fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
        goto L_08A322F4;
    }
    goto L_08A32460;
L_08A32460:
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_fpr[6] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
        goto L_08A32534;
    }
    goto L_08A32468;
L_08A32468:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20964)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20968)));
    aot_fpr[1] = aot_fpr[1] - aot_fpr[6];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[13];
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[6] = aot_fpr[1] + aot_fpr[0];
    goto L_08A322F0;
L_08A3248C:
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 30u));
    aot_gpr[2] = (aot_gpr[2] & 2u);
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_fpr[1] = aot_fpr[5] + aot_fpr[2];
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[0] = aot_fpr[0] / aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[3]);
    aot_fpr[3] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[1])));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21024)));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[4];
    aot_fpr[0] = aot_fpr[6] - aot_fpr[0];
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[2] = aot_fpr[2] + aot_fpr[0];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[6] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[6] = fs * ft; }
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A324E4:
    aot_gpr[2] = (aot_gpr[3] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A32510;
      }
      goto L_08A324F0;
    }
L_08A324F0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3243C;
      }
      goto L_08A324F8;
    }
L_08A324F8:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20960)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[6] = aot_fpr[0] / aot_fpr[12];
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32510:
    aot_gpr[31] = (0x08A32518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 43u, 0x08A2F3C4u>(ctx, &aot_mem) && ctx.pc == 0x08A32518u) goto L_08A32518;
    return;
L_08A32518:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20956)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[6] = aot_fpr[1] / aot_fpr[0];
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32534:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    goto L_08A32468;
L_08A3253C:
    aot_fpr[6] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[5]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32550:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32558:
    aot_gpr[3] = ((aot_gpr[5] >> 20u) & 0x000007FFu);
    aot_gpr[10] = (aot_gpr[3] + static_cast<std::uint32_t>(-1023));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[10]) < 20 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[11] = (aot_gpr[5] + 0u);
    aot_gpr[12] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[5] >> 31u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A32654;
      }
      goto L_08A32590;
    }
L_08A32590:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) < 0;
    aot_gpr[2] = (15u << 16u);
      if (branch_taken) {
          goto L_08A326D4;
      }
      goto L_08A32598;
    }
L_08A32598:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> (aot_gpr[10] & 31u)));
    aot_gpr[2] = (aot_gpr[3] & aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A32634;
      }
      goto L_08A325B0;
    }
L_08A325B0:
    aot_gpr[3] = (aot_gpr[3] >> 1u);
    aot_gpr[2] = (aot_gpr[5] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A325E4;
      }
      goto L_08A325C4;
    }
L_08A325C4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(19));
    { const bool branch_taken = aot_gpr[10] == aot_gpr[2];
    aot_gpr[3] = (~(0u | aot_gpr[3]));
      if (branch_taken) {
          goto L_08A32770;
      }
      goto L_08A325D0;
    }
L_08A325D0:
    aot_gpr[2] = (2u << 16u);
    aot_gpr[3] = (aot_gpr[5] & aot_gpr[3]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> (aot_gpr[10] & 31u)));
    aot_gpr[4] = (aot_gpr[3] | aot_gpr[2]);
    goto L_08A325E0;
L_08A325E0:
    aot_gpr[2] = (2215u << 16u);
    goto L_08A325E4;
L_08A325E4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6904));
    aot_gpr[3] = (aot_gpr[18] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[12] + 0u);
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A3260Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3260Cu) goto L_08A3260C;
    return;
L_08A3260C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A3262Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3262Cu) goto L_08A3262C;
    return;
L_08A3262C:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    goto L_08A32634;
L_08A32634:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A32638;
L_08A32638:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[3] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32654:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[10]) < 52 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1024));
      if (branch_taken) {
          goto L_08A3269C;
      }
      goto L_08A32660;
    }
L_08A32660:
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(-1043));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] >> (aot_gpr[5] & 31u));
    aot_gpr[3] = (aot_gpr[4] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (aot_gpr[2] >> 1u);
      if (branch_taken) {
          goto L_08A32634;
      }
      goto L_08A32678;
    }
L_08A32678:
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_08A325E0;
      }
      goto L_08A32684;
    }
L_08A32684:
    aot_gpr[3] = (~(0u | aot_gpr[3]));
    aot_gpr[2] = (16384u << 16u);
    aot_gpr[3] = (aot_gpr[6] & aot_gpr[3]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> (aot_gpr[5] & 31u)));
    aot_gpr[12] = (aot_gpr[3] | aot_gpr[2]);
    goto L_08A325E0;
L_08A3269C:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A32638;
      }
      goto L_08A326A4;
    }
L_08A326A4:
    aot_gpr[31] = (0x08A326ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A326ACu) goto L_08A326AC;
    return;
L_08A326AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[3] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A326D4:
    aot_gpr[2] = (aot_gpr[5] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (aot_gpr[4] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A32634;
      }
      goto L_08A326E8;
    }
L_08A326E8:
    aot_gpr[4] = ((aot_gpr[4] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[5] = (0u - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6904));
    aot_gpr[3] = (aot_gpr[18] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (8u << 16u);
    aot_gpr[4] = (aot_gpr[4] >> 12u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[11] = ((aot_gpr[11] & ~0x0001FFFFu) | ((0u & 0x0001FFFFu) << 0u));
    aot_gpr[3] = (aot_gpr[4] | aot_gpr[11]);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A32734u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A32734u) goto L_08A32734;
    return;
L_08A32734:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A32754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32754u) goto L_08A32754;
    return;
L_08A32754:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (aot_gpr[18] << 31u);
    aot_gpr[5] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    goto L_08A32634;
L_08A32770:
    aot_gpr[12] = (16384u << 16u);
    goto L_08A325E0;
L_08A32778:
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[3] = (32639u << 16u);
    aot_gpr[3] = (aot_gpr[3] | 65535u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32794:
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = ((aot_gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (aot_gpr[3] >> 23u);
      if (branch_taken) {
          goto L_08A32810;
      }
      goto L_08A327B4;
    }
L_08A327B4:
    aot_gpr[2] = (32639u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[12];
        goto L_08A32824;
    }
    goto L_08A327C8;
L_08A327C8:
    aot_gpr[2] = (127u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3283C;
      }
      goto L_08A327DC;
    }
L_08A327DC:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21028)));
    aot_gpr[3] = (65535u << 16u);
    aot_gpr[3] = (aot_gpr[3] | 15536u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = ((aot_gpr[5] >> 23u) & 0x000000FFu);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(-25));
      if (branch_taken) {
          goto L_08A32838;
      }
      goto L_08A32804;
    }
L_08A32804:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21032)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_08A32810;
L_08A32810:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32824:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32838:
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[4]);
    goto L_08A3283C;
L_08A3283C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 255 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A32870;
      }
      goto L_08A32848;
    }
L_08A32848:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) <= 0;
    aot_gpr[2] = (aot_gpr[3] << 23u);
      if (branch_taken) {
          goto L_08A32888;
      }
      goto L_08A32850;
    }
L_08A32850:
    aot_gpr[5] = ((aot_gpr[5] & ~0x7F800000u) | ((0u & 0x000000FFu) << 23u));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[2]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32870:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21036)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x08A32880u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A328E0;
L_08A32880:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_08A32810;
L_08A32888:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < -22 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08A328C0;
      }
      goto L_08A32894;
    }
L_08A32894:
    aot_gpr[2] = (0u | 50000u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A32870;
      }
      goto L_08A328A4;
    }
L_08A328A4:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21032)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x08A328B8u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A328E0;
L_08A328B8:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_08A32810;
L_08A328C0:
    aot_gpr[5] = ((aot_gpr[5] & ~0x7F800000u) | ((0u & 0x000000FFu) << 23u));
    aot_gpr[2] = (aot_gpr[2] << 23u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[2]);
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(21040)));
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_08A32810;
L_08A328E0:
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[2] = ((aot_gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[3] = ((aot_gpr[3] & ~0x7FFFFFFFu) | ((0u & 0x7FFFFFFFu) << 0u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A328FC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[10] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A32950;
      }
      goto L_08A32904;
    }
L_08A32904:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 53 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A32950;
      }
      goto L_08A32918;
    }
L_08A32918:
    aot_gpr[9] = (0u | 48u);
    aot_gpr[6] = (0u | 57u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[10]);
    goto L_08A32924;
L_08A32924:
    aot_gpr[10] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) <= 0;
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A32944;
      }
      goto L_08A3293C;
    }
L_08A3293C:
    if (aot_gpr[7] == aot_gpr[6]) {
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[10]);
        goto L_08A32924;
    }
    goto L_08A32944;
L_08A32944:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[6];
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A32958;
      }
      goto L_08A3294C;
    }
L_08A3294C:
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08A32950;
L_08A32950:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32958:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32960:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A32980;
      }
      goto L_08A3296C;
    }
L_08A3296C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A32970;
L_08A32970:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[5] != 0u) {
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
        goto L_08A32970;
    }
    goto L_08A32980;
L_08A32980:
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A329C4;
      }
      goto L_08A32998;
    }
L_08A32998:
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[11]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[10]));
      if (branch_taken) {
          goto L_08A32998;
      }
      goto L_08A329C4;
    }
L_08A329C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A329CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 0 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[9] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A329F4;
      }
      goto L_08A329E0;
    }
L_08A329E0:
    aot_gpr[8] = (0u | 10u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[9] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A329F4;
      }
      goto L_08A329EC;
    }
L_08A329EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (0u - aot_gpr[4]);
      if (branch_taken) {
          goto L_08A329F4;
      }
      goto L_08A329F4;
    }
L_08A329F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17536));
    goto L_08A32A00;
L_08A32A00:
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[11] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[9] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (ctx.lo);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A32A00;
      }
      goto L_08A32A34;
    }
L_08A32A34:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A32A50;
      }
      goto L_08A32A3C;
    }
L_08A32A3C:
    aot_gpr[4] = (0u | 45u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[5]);
    goto L_08A32A50;
L_08A32A50:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A32A5Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A32960;
L_08A32A5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32A68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[7] << 24u);
    aot_gpr[10] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (16u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[11] = (aot_gpr[7] >> 20u);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[12] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (aot_gpr[11] & 2048u);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[22]) >> 24u));
    aot_gpr[11] = (aot_gpr[11] & 2047u);
    aot_gpr[2] = (0u | 2047u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[9] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(-26920));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[11] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[10]);
      if (branch_taken) {
          goto L_08A32B4C;
      }
      goto L_08A32AEC;
    }
L_08A32AEC:
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A32B34;
      }
      goto L_08A32AF8;
    }
L_08A32AF8:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A32B1C;
      }
      goto L_08A32B00;
    }
L_08A32B00:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A32B14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6920));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A32B14u) goto L_08A32B14;
    return;
L_08A32B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 31u, 0x08A33194u>(ctx, &aot_mem); return;
      }
      goto L_08A32B1C;
    }
L_08A32B1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A32B2Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6928));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A32B2Cu) goto L_08A32B2C;
    return;
L_08A32B2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 31u, 0x08A33194u>(ctx, &aot_mem); return;
      }
      goto L_08A32B34;
    }
L_08A32B34:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A32B44u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6932));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A32B44u) goto L_08A32B44;
    return;
L_08A32B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 31u, 0x08A33194u>(ctx, &aot_mem); return;
      }
      goto L_08A32B4C;
    }
L_08A32B4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[12]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6948)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6944)));
    aot_gpr[20] = (aot_gpr[12] | 0u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A32B70u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A32B70u) goto L_08A32B70;
    return;
L_08A32B70:
    if (static_cast<std::int32_t>(aot_gpr[2]) >= 0) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
        goto L_08A32BB4;
    }
    goto L_08A32B78;
L_08A32B78:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 45u);
      if (branch_taken) {
          goto L_08A32B8C;
      }
      goto L_08A32B80;
    }
L_08A32B80:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
      if (branch_taken) {
          goto L_08A32B98;
      }
      goto L_08A32B8C;
    }
L_08A32B8C:
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-26920), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_08A32B98;
L_08A32B98:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A32BA8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 220u, 0x08A3FFD8u>(ctx, &aot_mem) && ctx.pc == 0x08A32BA8u) goto L_08A32BA8;
    return;
L_08A32BA8:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A32BB8;
      }
      goto L_08A32BB4;
    }
L_08A32BB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    goto L_08A32BB8;
L_08A32BB8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6956)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6952)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A32BD0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A32BD0u) goto L_08A32BD0;
    return;
L_08A32BD0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A32D04;
      }
      goto L_08A32BD8;
    }
L_08A32BD8:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A32BE4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 98u, 0x08A365C8u>(ctx, &aot_mem) && ctx.pc == 0x08A32BE4u) goto L_08A32BE4;
    return;
L_08A32BE4:
    aot_gpr[17] = (aot_gpr[3] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A32C00u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32C00u) goto L_08A32C00;
    return;
L_08A32C00:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A32C0C;
L_08A32C0C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[23]) < 163 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A32CBC;
      }
      goto L_08A32C18;
    }
L_08A32C18:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6964)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6960)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A32C40u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 132u, 0x08A36820u>(ctx, &aot_mem) && ctx.pc == 0x08A32C40u) goto L_08A32C40;
    return;
L_08A32C40:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A32C4Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 206u, 0x08A3FF04u>(ctx, &aot_mem) && ctx.pc == 0x08A32C4Cu) goto L_08A32C4C;
    return;
L_08A32C4C:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08A32C64u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 192u, 0x08A3FE28u>(ctx, &aot_mem) && ctx.pc == 0x08A32C64u) goto L_08A32C64;
    return;
L_08A32C64:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A32C78u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32C78u) goto L_08A32C78;
    return;
L_08A32C78:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A32C8Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A32C8Cu) goto L_08A32C8C;
    return;
L_08A32C8C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6956)));
    aot_gpr[17] = (aot_gpr[3] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6952)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A32CACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A32CACu) goto L_08A32CAC;
    return;
L_08A32CAC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A32C0C;
      }
      goto L_08A32CB8;
    }
L_08A32CB8:
    aot_gpr[5] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    goto L_08A32CBC;
L_08A32CBC:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32D04;
      }
      goto L_08A32CD0;
    }
L_08A32CD0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A32CD4;
L_08A32CD4:
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[10]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08A32CD4;
    }
    goto L_08A32D04;
L_08A32D04:
    { const bool branch_taken = aot_gpr[23] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[23]);
      if (branch_taken) {
          goto L_08A32E0C;
      }
      goto L_08A32D0C;
    }
L_08A32D0C:
    aot_gpr[4] = (0u | 102u);
    { const bool branch_taken = aot_gpr[22] == aot_gpr[4];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A32DF8;
      }
      goto L_08A32D18;
    }
L_08A32D18:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6948)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6944)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A32D2Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A32D2Cu) goto L_08A32D2C;
    return;
L_08A32D2C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A32DB8;
      }
      goto L_08A32D34;
    }
L_08A32D34:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6964)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6960)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A32D54u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A32D54u) goto L_08A32D54;
    return;
L_08A32D54:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A32D60;
L_08A32D60:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(6956)));
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A32D78u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(6952)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A32D78u) goto L_08A32D78;
    return;
L_08A32D78:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A32DB0;
      }
      goto L_08A32D80;
    }
L_08A32D80:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < -1020 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A32DB0;
      }
      goto L_08A32D8C;
    }
L_08A32D8C:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A32DA4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A32DA4u) goto L_08A32DA4;
    return;
L_08A32DA4:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A32D60;
      }
      goto L_08A32DB0;
    }
L_08A32DB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    goto L_08A32DB8;
L_08A32DB8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6956)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6952)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A32DCCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A32DCCu) goto L_08A32DCC;
    return;
L_08A32DCC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A32E0C;
      }
      goto L_08A32DD4;
    }
L_08A32DD4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6964)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6960)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A32DECu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A32DECu) goto L_08A32DEC;
    return;
L_08A32DEC:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A32E0C;
      }
      goto L_08A32DF8;
    }
L_08A32DF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 48u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08A32E0C;
L_08A32E0C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6964)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6960)));
    aot_gpr[30] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A32E2Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A32E2Cu) goto L_08A32E2C;
    return;
L_08A32E2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A32E60;
      }
      goto L_08A32E3C;
    }
L_08A32E3C:
    aot_gpr[5] = (0u | 102u);
    { const bool branch_taken = aot_gpr[22] != aot_gpr[5];
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr[22]));
      if (branch_taken) {
          goto L_08A32E5C;
      }
      goto L_08A32E48;
    }
L_08A32E48:
    aot_gpr[30] = (0u | 1u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[30] = (aot_gpr[4] | 0u);
        goto L_08A32E54;
    }
    goto L_08A32E54;
L_08A32E54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (aot_gpr[20] + aot_gpr[30]);
      if (branch_taken) {
          goto L_08A32E60;
      }
      goto L_08A32E5C;
    }
L_08A32E5C:
    aot_gpr[30] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A32E60;
L_08A32E60:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6972)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6968)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[30]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(6964)));
    aot_gpr[31] = (0x08A32E80u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(6960)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A32E80u) goto L_08A32E80;
    return;
L_08A32E80:
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[30]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_08A32E94;
L_08A32E94:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A32EB0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 206u, 0x08A3FF04u>(ctx, &aot_mem) && ctx.pc == 0x08A32EB0u) goto L_08A32EB0;
    return;
L_08A32EB0:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A32EBCu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 192u, 0x08A3FE28u>(ctx, &aot_mem) && ctx.pc == 0x08A32EBCu) goto L_08A32EBC;
    return;
L_08A32EBC:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A32ED0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32ED0u) goto L_08A32ED0;
    return;
L_08A32ED0:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[17] = (aot_gpr[3] | 0u);
    aot_gpr[21] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A32F9C;
      }
      goto L_08A32EEC;
    }
L_08A32EEC:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A32F00u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A32F00u) goto L_08A32F00;
    return;
L_08A32F00:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A32FA0;
      }
      goto L_08A32F08;
    }
L_08A32F08:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6956)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6952)));
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A32F20u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32F20u) goto L_08A32F20;
    return;
L_08A32F20:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A32F34u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A32F34u) goto L_08A32F34;
    return;
L_08A32F34:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A32FA0;
      }
      goto L_08A32F3C;
    }
L_08A32F3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6964)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6960)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A32F70u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A32F70u) goto L_08A32F70;
    return;
L_08A32F70:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A32F8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A32F8Cu) goto L_08A32F8C;
    return;
L_08A32F8C:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[30]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A32E94;
      }
      goto L_08A32F9C;
    }
L_08A32F9C:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A32FA0;
L_08A32FA0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6980)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6976)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A32FB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A32FB4u) goto L_08A32FB4;
    return;
L_08A32FB4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_gpr[21] = (0u | 102u);
    if (static_cast<std::int32_t>(aot_gpr[2]) >= 0) {
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08A32FCC;
    }
    goto L_08A32FCC;
L_08A32FCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[22] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (aot_gpr[22] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[30]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 48u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 2u, 0x08A33010u>(ctx, &aot_mem); return;
      }
      goto L_08A32FF0;
    }
L_08A32FF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[22]);
    goto L_08A32FF8;
L_08A32FF8:
    aot_gpr[22] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (aot_gpr[22] | 0u);
    ctx.pc = 0x08A33000u; return;
}

void recomp_unit_0558(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0558_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_558(Runtime &runtime) {
    runtime.register_generated_unit(558u, 0x08A32000u, 4096u, &recomp_unit_0558, &recomp_unit_0558_entry);
    runtime.register_function(0x08A32000u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32008u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32010u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32024u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3202Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32038u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32040u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32054u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32084u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32090u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A320B0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A320DCu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A320E8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A320FCu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32104u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3212Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32170u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3217Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32184u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3218Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A321A0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A321B4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A321BCu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A321C8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A321E0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A321FCu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3220Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32210u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32260u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32290u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32298u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A322B8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A322E0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A322F0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A322F4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A323E8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A323F4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3243Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3244Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32460u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32468u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3248Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A324E4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A324F0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A324F8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32510u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32518u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32534u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3253Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32550u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32558u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32590u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32598u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A325B0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A325C4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A325D0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A325E0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A325E4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3260Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3262Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32634u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32638u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32654u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32660u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32678u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32684u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3269Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A326A4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A326ACu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A326D4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A326E8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32734u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32754u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32770u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32778u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32794u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A327B4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A327C8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A327DCu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32804u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32810u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32824u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32838u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3283Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32848u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32850u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32870u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32880u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32888u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32894u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A328A4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A328B8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A328C0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A328E0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A328FCu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32904u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32918u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32924u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3293Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32944u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3294Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32950u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32958u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32960u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A3296Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32970u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32980u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32998u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A329C4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A329CCu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A329E0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A329ECu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A329F4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32A00u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32A34u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32A3Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32A50u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32A5Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32A68u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32AECu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32AF8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B00u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B14u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B1Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B2Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B34u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B44u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B4Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B70u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B78u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B80u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B8Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32B98u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32BA8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32BB4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32BB8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32BD0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32BD8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32BE4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32C00u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32C0Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32C18u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32C40u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32C4Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32C64u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32C78u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32C8Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32CACu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32CB8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32CBCu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32CD0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32CD4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32D04u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32D0Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32D18u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32D2Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32D34u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32D54u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32D60u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32D78u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32D80u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32D8Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32DA4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32DB0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32DB8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32DCCu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32DD4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32DECu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32DF8u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32E0Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32E2Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32E3Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32E48u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32E54u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32E5Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32E60u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32E80u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32E94u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32EB0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32EBCu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32ED0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32EECu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32F00u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32F08u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32F20u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32F34u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32F3Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32F70u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32F8Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32F9Cu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32FA0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32FB4u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32FCCu, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32FF0u, &recomp_unit_0558, "recomp_unit_0558");
    runtime.register_function(0x08A32FF8u, &recomp_unit_0558, "recomp_unit_0558");
}
} // namespace psprecomp
