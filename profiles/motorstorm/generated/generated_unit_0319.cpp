#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0319[1016] = {
    1, 2, 0, 0, 3, 0, 4, 0, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 19, 0, 0, 20, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0,
    28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0,
    0, 42, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0,
    0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66,
    0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81,
    0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0,
    0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0,
    0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0,
    0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0,
    0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0,
    0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0,
    135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 160, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 174, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 208, 0, 0, 0, 209, 0, 210,
};
void recomp_unit_0319_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08943000u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0319[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08943000;
    case 2u: goto L_08943004;
    case 3u: goto L_08943010;
    case 4u: goto L_08943018;
    case 5u: goto L_08943024;
    case 6u: goto L_0894302C;
    case 7u: goto L_08943038;
    case 8u: goto L_08943040;
    case 9u: goto L_08943048;
    case 10u: goto L_0894305C;
    case 11u: goto L_08943068;
    case 12u: goto L_08943070;
    case 13u: goto L_08943078;
    case 14u: goto L_08943080;
    case 15u: goto L_089430A8;
    case 16u: goto L_089430D8;
    case 17u: goto L_089430E0;
    case 18u: goto L_089430E8;
    case 19u: goto L_089430EC;
    case 20u: goto L_089430F8;
    case 21u: goto L_08943110;
    case 22u: goto L_08943120;
    case 23u: goto L_08943130;
    case 24u: goto L_0894313C;
    case 25u: goto L_0894314C;
    case 26u: goto L_08943158;
    case 27u: goto L_0894316C;
    case 28u: goto L_08943180;
    case 29u: goto L_08943188;
    case 30u: goto L_08943198;
    case 31u: goto L_089431A0;
    case 32u: goto L_089431B4;
    case 33u: goto L_089431CC;
    case 34u: goto L_089431D4;
    case 35u: goto L_089431E4;
    case 36u: goto L_08943244;
    case 37u: goto L_08943250;
    case 38u: goto L_0894325C;
    case 39u: goto L_08943264;
    case 40u: goto L_0894326C;
    case 41u: goto L_08943274;
    case 42u: goto L_08943284;
    case 43u: goto L_08943288;
    case 44u: goto L_089432A8;
    case 45u: goto L_089432D0;
    case 46u: goto L_089432F0;
    case 47u: goto L_08943310;
    case 48u: goto L_08943330;
    case 49u: goto L_08943340;
    case 50u: goto L_0894334C;
    case 51u: goto L_08943354;
    case 52u: goto L_08943380;
    case 53u: goto L_089433C8;
    case 54u: goto L_089433D8;
    case 55u: goto L_089433EC;
    case 56u: goto L_08943408;
    case 57u: goto L_0894340C;
    case 58u: goto L_08943464;
    case 59u: goto L_08943478;
    case 60u: goto L_08943484;
    case 61u: goto L_0894348C;
    case 62u: goto L_08943494;
    case 63u: goto L_089434A4;
    case 64u: goto L_089434B0;
    case 65u: goto L_089434E0;
    case 66u: goto L_089434FC;
    case 67u: goto L_08943504;
    case 68u: goto L_08943510;
    case 69u: goto L_08943540;
    case 70u: goto L_0894354C;
    case 71u: goto L_08943554;
    case 72u: goto L_0894355C;
    case 73u: goto L_08943570;
    case 74u: goto L_0894357C;
    case 75u: goto L_08943584;
    case 76u: goto L_089435A4;
    case 77u: goto L_089435AC;
    case 78u: goto L_089435BC;
    case 79u: goto L_089435D8;
    case 80u: goto L_089435E8;
    case 81u: goto L_089435FC;
    case 82u: goto L_0894360C;
    case 83u: goto L_08943620;
    case 84u: goto L_08943634;
    case 85u: goto L_0894363C;
    case 86u: goto L_0894364C;
    case 87u: goto L_08943664;
    case 88u: goto L_0894366C;
    case 89u: goto L_08943678;
    case 90u: goto L_08943688;
    case 91u: goto L_08943698;
    case 92u: goto L_089436A8;
    case 93u: goto L_089436B8;
    case 94u: goto L_089436C8;
    case 95u: goto L_089436D8;
    case 96u: goto L_089436E8;
    case 97u: goto L_089436F8;
    case 98u: goto L_08943708;
    case 99u: goto L_08943718;
    case 100u: goto L_08943728;
    case 101u: goto L_08943730;
    case 102u: goto L_0894373C;
    case 103u: goto L_08943750;
    case 104u: goto L_08943768;
    case 105u: goto L_08943778;
    case 106u: goto L_08943788;
    case 107u: goto L_08943798;
    case 108u: goto L_089437A8;
    case 109u: goto L_089437B8;
    case 110u: goto L_089437C4;
    case 111u: goto L_089437D4;
    case 112u: goto L_089437E4;
    case 113u: goto L_089437F4;
    case 114u: goto L_08943804;
    case 115u: goto L_08943814;
    case 116u: goto L_08943824;
    case 117u: goto L_08943830;
    case 118u: goto L_08943838;
    case 119u: goto L_08943840;
    case 120u: goto L_08943848;
    case 121u: goto L_08943864;
    case 122u: goto L_0894386C;
    case 123u: goto L_08943878;
    case 124u: goto L_08943884;
    case 125u: goto L_0894389C;
    case 126u: goto L_089438DC;
    case 127u: goto L_089438EC;
    case 128u: goto L_089438FC;
    case 129u: goto L_08943908;
    case 130u: goto L_08943948;
    case 131u: goto L_08943950;
    case 132u: goto L_08943958;
    case 133u: goto L_08943960;
    case 134u: goto L_08943974;
    case 135u: goto L_08943980;
    case 136u: goto L_08943990;
    case 137u: goto L_0894399C;
    case 138u: goto L_089439B8;
    case 139u: goto L_089439C0;
    case 140u: goto L_089439D0;
    case 141u: goto L_089439D8;
    case 142u: goto L_089439E4;
    case 143u: goto L_089439EC;
    case 144u: goto L_089439FC;
    case 145u: goto L_08943A2C;
    case 146u: goto L_08943A4C;
    case 147u: goto L_08943A50;
    case 148u: goto L_08943A70;
    case 149u: goto L_08943A90;
    case 150u: goto L_08943AA4;
    case 151u: goto L_08943AB0;
    case 152u: goto L_08943AC0;
    case 153u: goto L_08943ACC;
    case 154u: goto L_08943AE8;
    case 155u: goto L_08943B00;
    case 156u: goto L_08943B08;
    case 157u: goto L_08943B10;
    case 158u: goto L_08943B20;
    case 159u: goto L_08943B2C;
    case 160u: goto L_08943B34;
    case 161u: goto L_08943B38;
    case 162u: goto L_08943B48;
    case 163u: goto L_08943B58;
    case 164u: goto L_08943B64;
    case 165u: goto L_08943B74;
    case 166u: goto L_08943B80;
    case 167u: goto L_08943BA4;
    case 168u: goto L_08943BAC;
    case 169u: goto L_08943BB4;
    case 170u: goto L_08943BBC;
    case 171u: goto L_08943BD0;
    case 172u: goto L_08943BE8;
    case 173u: goto L_08943BF0;
    case 174u: goto L_08943BF4;
    case 175u: goto L_08943C0C;
    case 176u: goto L_08943C60;
    case 177u: goto L_08943C6C;
    case 178u: goto L_08943CA8;
    case 179u: goto L_08943CB4;
    case 180u: goto L_08943CBC;
    case 181u: goto L_08943CC0;
    case 182u: goto L_08943CDC;
    case 183u: goto L_08943D04;
    case 184u: goto L_08943D58;
    case 185u: goto L_08943D64;
    case 186u: goto L_08943DA0;
    case 187u: goto L_08943DAC;
    case 188u: goto L_08943DB4;
    case 189u: goto L_08943DB8;
    case 190u: goto L_08943DD8;
    case 191u: goto L_08943E00;
    case 192u: goto L_08943E64;
    case 193u: goto L_08943E70;
    case 194u: goto L_08943E80;
    case 195u: goto L_08943EB8;
    case 196u: goto L_08943EC4;
    case 197u: goto L_08943ECC;
    case 198u: goto L_08943ED0;
    case 199u: goto L_08943EF4;
    case 200u: goto L_08943F24;
    case 201u: goto L_08943F34;
    case 202u: goto L_08943F40;
    case 203u: goto L_08943F50;
    case 204u: goto L_08943F80;
    case 205u: goto L_08943F9C;
    case 206u: goto L_08943FAC;
    case 207u: goto L_08943FC0;
    case 208u: goto L_08943FC4;
    case 209u: goto L_08943FD4;
    case 210u: goto L_08943FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08943000:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(24913), static_cast<std::uint8_t>(0u));
    goto L_08943004;
L_08943004:
    aot_gpr[4] = (aot_gpr[21] & 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943018;
      }
      goto L_08943010;
    }
L_08943010:
    aot_gpr[21] = (aot_gpr[21] ^ 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(24913), static_cast<std::uint8_t>(aot_gpr[18]));
    goto L_08943018;
L_08943018:
    aot_gpr[4] = (aot_gpr[21] & 4u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894302C;
      }
      goto L_08943024;
    }
L_08943024:
    aot_gpr[21] = (aot_gpr[21] ^ 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(24914), static_cast<std::uint8_t>(aot_gpr[18]));
    goto L_0894302C;
L_0894302C:
    aot_gpr[4] = (aot_gpr[21] & 32u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943040;
      }
      goto L_08943038;
    }
L_08943038:
    aot_gpr[21] = (aot_gpr[21] ^ 32u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(24913), static_cast<std::uint8_t>(aot_gpr[18]));
    goto L_08943040;
L_08943040:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 213u, 0x08942FB0u>(ctx, &aot_mem); return;
      }
      goto L_08943048;
    }
L_08943048:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16156)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(24912)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_08943078;
      }
      goto L_0894305C;
    }
L_0894305C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(24913)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943078;
      }
      goto L_08943068;
    }
L_08943068:
    aot_gpr[31] = (0x08943070u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5AFD4u;
    return;
L_08943070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943080;
      }
      goto L_08943078;
    }
L_08943078:
    aot_gpr[31] = (0x08943080u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B0ACu;
    return;
L_08943080:
    aot_gpr[2] = (0u | 0u);
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
L_089430A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[29]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24040));
    aot_gpr[5] = (578u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22552));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (0u | 4u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x089430D8u);
    aot_gpr[9] = (0u | 0u);
    ctx.pc = 0x08A5B234u;
    return;
L_089430D8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089430E8;
      }
      goto L_089430E0;
    }
L_089430E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089430EC;
      }
      goto L_089430E8;
    }
L_089430E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089430EC;
L_089430EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089430F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[16] = (0u | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08943130;
      }
      goto L_08943110;
    }
L_08943110:
    aot_gpr[4] = (32769u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08943188;
      }
      goto L_08943120;
    }
L_08943120:
    aot_gpr[16] = (0u | 1u);
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(9152), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08943188;
      }
      goto L_08943130;
    }
L_08943130:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894314C;
      }
      goto L_0894313C;
    }
L_0894313C:
    aot_gpr[16] = (0u | 1u);
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(9152), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08943188;
      }
      goto L_0894314C;
    }
L_0894314C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08943188;
      }
      goto L_08943158;
    }
L_08943158:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(9152), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0894316Cu);
    // nop
    goto L_089430A8;
L_0894316C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24904)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08943188;
      }
      goto L_08943180;
    }
L_08943180:
    aot_gpr[16] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24904), aot_gpr[5]);
    goto L_08943188;
L_08943188:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9148)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089431A0;
      }
      goto L_08943198;
    }
L_08943198:
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089431A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089431A0u) goto L_089431A0;
    return;
L_089431A0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089431B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089431CCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 114u, 0x08A48CBCu>(ctx, &aot_mem) && ctx.pc == 0x089431CCu) goto L_089431CC;
    return;
L_089431CC:
    aot_gpr[31] = (0x089431D4u);
    // nop
    ctx.pc = 0x08A5B204u;
    return;
L_089431D4:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089431E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[19] = (2219u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(23864));
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x08943244u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23608));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08943244u) goto L_08943244;
    return;
L_08943244:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08943250u);
    aot_gpr[5] = (0u | 16384u);
    ctx.pc = 0x08A5AFE4u;
    return;
L_08943250:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0894325Cu);
    aot_gpr[5] = (0u | 64u);
    ctx.pc = 0x08A5B0A4u;
    return;
L_0894325C:
    aot_gpr[31] = (0x08943264u);
    aot_gpr[4] = (0u | 1u);
    ctx.pc = 0x08A5AF5Cu;
    return;
L_08943264:
    aot_gpr[31] = (0x0894326Cu);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF6Cu;
    return;
L_0894326C:
    aot_gpr[31] = (0x08943274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 43u, 0x08A47248u>(ctx, &aot_mem) && ctx.pc == 0x08943274u) goto L_08943274;
    return;
L_08943274:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-3969));
    aot_gpr[4] = (aot_gpr[2] & aot_gpr[4]);
    aot_gpr[31] = (0x08943284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 44u, 0x08A47254u>(ctx, &aot_mem) && ctx.pc == 0x08943284u) goto L_08943284;
    return;
L_08943284:
    aot_gpr[4] = (0u | 0u);
    goto L_08943288;
L_08943288:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08943288;
      }
      goto L_089432A8;
    }
L_089432A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[23]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24904), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24032));
    aot_gpr[5] = (2196u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12724));
    aot_gpr[31] = (0x089432D0u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5AFDCu;
    return;
L_089432D0:
    aot_gpr[19] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24900), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24024));
    aot_gpr[5] = (2196u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11868));
    aot_gpr[31] = (0x089432F0u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5AFDCu;
    return;
L_089432F0:
    aot_gpr[30] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24888), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24008));
    aot_gpr[5] = (2196u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12140));
    aot_gpr[31] = (0x08943310u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5AFDCu;
    return;
L_08943310:
    aot_gpr[23] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(24892), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23996));
    aot_gpr[5] = (2196u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12536));
    aot_gpr[31] = (0x08943330u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5AFDCu;
    return;
L_08943330:
    aot_gpr[22] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(24896), aot_gpr[2]);
    aot_gpr[31] = (0x08943340u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24900)));
    ctx.pc = 0x08A5B20Cu;
    return;
L_08943340:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(24888)));
    aot_gpr[31] = (0x0894334Cu);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5A9DCu;
    return;
L_0894334C:
    aot_gpr[31] = (0x08943354u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(24892)));
    ctx.pc = 0x08A5B2E4u;
    return;
L_08943354:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(24896)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24048));
    aot_gpr[5] = (577u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22561));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (0u | 4u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08943380u);
    aot_gpr[9] = (0u | 0u);
    ctx.pc = 0x08A5B234u;
    return;
L_08943380:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24916), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24912), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24913), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24914), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(9152), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28695), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23984));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089433C8u);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = 0x08A5B074u;
    return;
L_089433C8:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16156), aot_gpr[2]);
    aot_gpr[31] = (0x089433D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 180u, 0x08942D80u>(ctx, &aot_mem) && ctx.pc == 0x089433D8u) goto L_089433D8;
    return;
L_089433D8:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28696), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 9u);
    aot_gpr[31] = (0x089433ECu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AC2Cu;
    return;
L_089433EC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-28694), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0894340C;
      }
      goto L_08943408;
    }
L_08943408:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-28694), static_cast<std::uint8_t>(0u));
    goto L_0894340C;
L_0894340C:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24908), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9148), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(10108), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(10112), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-28684), 0u);
    aot_gpr[6] = (aot_gpr[16] - aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28672), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28668), aot_gpr[6]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28664), aot_gpr[17]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28676), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23972));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08943464u);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = 0x08A5B174u;
    return;
L_08943464:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28692), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08943494;
      }
      goto L_08943478;
    }
L_08943478:
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(-28684));
    aot_gpr[31] = (0x08943484u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5B1A4u;
    return;
L_08943484:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089434A4;
      }
      goto L_0894348C;
    }
L_0894348C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089434B0;
      }
      goto L_08943494;
    }
L_08943494:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28672), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28668), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089434B0;
      }
      goto L_089434A4;
    }
L_089434A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28672), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28668), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-28684), 0u);
    goto L_089434B0;
L_089434B0:
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
L_089434E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x089434FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16156)));
    ctx.pc = 0x08A5AFF4u;
    return;
L_089434FC:
    aot_gpr[31] = (0x08943504u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5A9ECu;
    return;
L_08943504:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x08943510u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24888)));
    ctx.pc = 0x08A5AFECu;
    return;
L_08943510:
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24896)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24048));
    aot_gpr[5] = (577u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22562));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 4u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08943540u);
    aot_gpr[9] = (0u | 0u);
    ctx.pc = 0x08A5B234u;
    return;
L_08943540:
    aot_gpr[17] = (2219u << 16u);
    aot_gpr[31] = (0x0894354Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24892)));
    ctx.pc = 0x08A5B2ECu;
    return;
L_0894354C:
    aot_gpr[31] = (0x08943554u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24896)));
    ctx.pc = 0x08A5AFECu;
    return;
L_08943554:
    aot_gpr[31] = (0x0894355Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24892)));
    ctx.pc = 0x08A5AFECu;
    return;
L_0894355C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943570:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28684)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894357C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943584:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[17] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          goto L_089435BC;
      }
      goto L_089435A4;
    }
L_089435A4:
    aot_gpr[31] = (0x089435ACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28688)));
    ctx.pc = 0x08A5B184u;
    return;
L_089435AC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28688), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28680), 0u);
      if (branch_taken) {
          goto L_089435E8;
      }
      goto L_089435BC;
    }
L_089435BC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23972));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28676)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089435D8u);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = 0x08A5B174u;
    return;
L_089435D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28688), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(-28680));
    aot_gpr[31] = (0x089435E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5B1A4u;
    return;
L_089435E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089435FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0894360Cu);
    // nop
    goto L_089430A8;
L_0894360C:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24904), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943620:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (0u | 8u);
    aot_gpr[31] = (0x08943634u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AC2Cu;
    return;
L_08943634:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943664;
      }
      goto L_0894363C;
    }
L_0894363C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943728;
      }
      goto L_0894364C;
    }
L_0894364C:
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[2]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-23960)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943664:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_0894366C;
    }
L_0894366C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_08943678;
    }
L_08943678:
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_08943688;
    }
L_08943688:
    aot_gpr[2] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_08943698;
    }
L_08943698:
    aot_gpr[2] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_089436A8;
    }
L_089436A8:
    aot_gpr[2] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_089436B8;
    }
L_089436B8:
    aot_gpr[2] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_089436C8;
    }
L_089436C8:
    aot_gpr[2] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_089436D8;
    }
L_089436D8:
    aot_gpr[2] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_089436E8;
    }
L_089436E8:
    aot_gpr[2] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_089436F8;
    }
L_089436F8:
    aot_gpr[2] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_08943708;
    }
L_08943708:
    aot_gpr[2] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_08943718;
    }
L_08943718:
    aot_gpr[2] = (0u | 11u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943730;
      }
      goto L_08943728;
    }
L_08943728:
    aot_gpr[2] = (0u | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08943730;
L_08943730:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894373C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943824;
      }
      goto L_08943750;
    }
L_08943750:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-23912)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943768:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_08943778;
    }
L_08943778:
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_08943788;
    }
L_08943788:
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_08943798;
    }
L_08943798:
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_089437A8;
    }
L_089437A8:
    aot_gpr[5] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_089437B8;
    }
L_089437B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_089437C4;
    }
L_089437C4:
    aot_gpr[5] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_089437D4;
    }
L_089437D4:
    aot_gpr[5] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_089437E4;
    }
L_089437E4:
    aot_gpr[5] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_089437F4;
    }
L_089437F4:
    aot_gpr[5] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_08943804;
    }
L_08943804:
    aot_gpr[5] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_08943814;
    }
L_08943814:
    aot_gpr[5] = (0u | 11u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943848;
      }
      goto L_08943824;
    }
L_08943824:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[31] = (0x08943830u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AC2Cu;
    return;
L_08943830:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943840;
      }
      goto L_08943838;
    }
L_08943838:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08943840;
L_08943840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943878;
      }
      goto L_08943848;
    }
L_08943848:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28660), aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-28694)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0894386C;
      }
      goto L_08943864;
    }
L_08943864:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_0894386C;
L_0894386C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08943878u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = 0x08A5A9D4u;
    return;
L_08943878:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0894389Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B304u;
    return;
L_0894389C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(6)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089438DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089438ECu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B304u;
    return;
L_089438EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089438FC:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28694)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943908:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(63));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-64));
    aot_gpr[16] = (aot_gpr[4] & aot_gpr[7]);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28708)));
    aot_gpr[20] = (2219u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(23864));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    goto L_08943948;
L_08943948:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943960;
      }
      goto L_08943950;
    }
L_08943950:
    aot_gpr[31] = (0x08943958u);
    aot_gpr[4] = (0u | 16000u);
    ctx.pc = 0x08A5B094u;
    return;
L_08943958:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28708)));
      if (branch_taken) {
          goto L_08943948;
      }
      goto L_08943960;
    }
L_08943960:
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[9] = (64u << 16u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    goto L_08943974;
L_08943974:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089439D8;
      }
      goto L_08943980;
    }
L_08943980:
    aot_gpr[10] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[10] = (aot_gpr[10] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894399C;
      }
      goto L_08943990;
    }
L_08943990:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089439E4;
      }
      goto L_0894399C;
    }
L_0894399C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089439C0;
      }
      goto L_089439B8;
    }
L_089439B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08943A50;
      }
      goto L_089439C0;
    }
L_089439C0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08943974;
      }
      goto L_089439D0;
    }
L_089439D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089439E4;
      }
      goto L_089439D8;
    }
L_089439D8:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089439E4;
      }
      goto L_089439E4;
    }
L_089439E4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08943A4C;
      }
      goto L_089439EC;
    }
L_089439EC:
    aot_gpr[4] = (0u | 63u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 63 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[20] + static_cast<std::uint32_t>(1008));
      if (branch_taken) {
          goto L_08943A2C;
      }
      goto L_089439FC;
    }
L_089439FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_089439FC;
      }
      goto L_08943A2C;
    }
L_08943A2C:
    aot_gpr[4] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943A50;
      }
      goto L_08943A4C;
    }
L_08943A4C:
    aot_gpr[2] = (0u | 0u);
    goto L_08943A50;
L_08943A50:
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
L_08943A70:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24912)));
    aot_gpr[2] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24913)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943A90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08943AA4u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    ctx.pc = 0x08A5A9F4u;
    return;
L_08943AA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943AB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08943AC0u);
    // nop
    ctx.pc = 0x08A5B034u;
    return;
L_08943AC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943ACC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-28655)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943B08;
      }
      goto L_08943AE8;
    }
L_08943AE8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-28655), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24916)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943B10;
      }
      goto L_08943B00;
    }
L_08943B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943B34;
      }
      goto L_08943B08;
    }
L_08943B08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943B38;
      }
      goto L_08943B10;
    }
L_08943B10:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24912)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08943B2C;
      }
      goto L_08943B20;
    }
L_08943B20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24913)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943B34;
      }
      goto L_08943B2C;
    }
L_08943B2C:
    aot_gpr[31] = (0x08943B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 148u, 0x08942BB0u>(ctx, &aot_mem) && ctx.pc == 0x08943B34u) goto L_08943B34;
    return;
L_08943B34:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-28655), static_cast<std::uint8_t>(0u));
    goto L_08943B38;
L_08943B38:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943B48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08943B58u);
    // nop
    ctx.pc = 0x08A5AFBCu;
    return;
L_08943B58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943B64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08943B74u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF74u;
    return;
L_08943B74:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943B80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08943BAC;
      }
      goto L_08943BA4;
    }
L_08943BA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08943BBC;
      }
      goto L_08943BAC;
    }
L_08943BAC:
    aot_gpr[31] = (0x08943BB4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08943BB4u) goto L_08943BB4;
    return;
L_08943BB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[17] = (0u | 1u);
    goto L_08943BBC;
L_08943BBC:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08943BD0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 61u, 0x0894477Cu>(ctx, &aot_mem) && ctx.pc == 0x08943BD0u) goto L_08943BD0;
    return;
L_08943BD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
      if (branch_taken) {
          goto L_08943BF4;
      }
      goto L_08943BE8;
    }
L_08943BE8:
    aot_gpr[31] = (0x08943BF0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08943BF0u) goto L_08943BF0;
    return;
L_08943BF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08943BF4;
L_08943BF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943C0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08943C60u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 13u, 0x089441A8u>(ctx, &aot_mem) && ctx.pc == 0x08943C60u) goto L_08943C60;
    return;
L_08943C60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(26)));
    aot_gpr[31] = (0x08943C6Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 13u, 0x089441A8u>(ctx, &aot_mem) && ctx.pc == 0x08943C6Cu) goto L_08943C6C;
    return;
L_08943C6C:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[4] = (0u | 146u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08943CA8u);
    aot_gpr[6] = (0u | 48u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943CA8u) goto L_08943CA8;
    return;
L_08943CA8:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943CC0;
      }
      goto L_08943CB4;
    }
L_08943CB4:
    aot_gpr[31] = (0x08943CBCu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 65u, 0x089425F4u>(ctx, &aot_mem) && ctx.pc == 0x08943CBCu) goto L_08943CBC;
    return;
L_08943CBC:
    aot_gpr[22] = (aot_gpr[21] | 0u);
    goto L_08943CC0;
L_08943CC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(20), aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08943CDCu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 15u, 0x089421A0u>(ctx, &aot_mem) && ctx.pc == 0x08943CDCu) goto L_08943CDC;
    return;
L_08943CDC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943D04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[19]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08943D58u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 13u, 0x089441A8u>(ctx, &aot_mem) && ctx.pc == 0x08943D58u) goto L_08943D58;
    return;
L_08943D58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(26)));
    aot_gpr[31] = (0x08943D64u);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 13u, 0x089441A8u>(ctx, &aot_mem) && ctx.pc == 0x08943D64u) goto L_08943D64;
    return;
L_08943D64:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[4] = (0u | 146u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08943DA0u);
    aot_gpr[6] = (0u | 48u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943DA0u) goto L_08943DA0;
    return;
L_08943DA0:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943DB8;
      }
      goto L_08943DAC;
    }
L_08943DAC:
    aot_gpr[31] = (0x08943DB4u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 65u, 0x089425F4u>(ctx, &aot_mem) && ctx.pc == 0x08943DB4u) goto L_08943DB4;
    return;
L_08943DB4:
    aot_gpr[22] = (aot_gpr[21] | 0u);
    goto L_08943DB8;
L_08943DB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(20), aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 512u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08943DD8u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 26u, 0x089422A8u>(ctx, &aot_mem) && ctx.pc == 0x08943DD8u) goto L_08943DD8;
    return;
L_08943DD8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943E00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[20]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (aot_gpr[10] | 0u);
    aot_gpr[17] = (aot_gpr[9] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08943E64u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 13u, 0x089441A8u>(ctx, &aot_mem) && ctx.pc == 0x08943E64u) goto L_08943E64;
    return;
L_08943E64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(26)));
    aot_gpr[31] = (0x08943E70u);
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 13u, 0x089441A8u>(ctx, &aot_mem) && ctx.pc == 0x08943E70u) goto L_08943E70;
    return;
L_08943E70:
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    aot_gpr[31] = (0x08943E80u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 38u, 0x089423BCu>(ctx, &aot_mem) && ctx.pc == 0x08943E80u) goto L_08943E80;
    return;
L_08943E80:
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (0u | 18u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[30] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08943EB8u);
    aot_gpr[6] = (0u | 48u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943EB8u) goto L_08943EB8;
    return;
L_08943EB8:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943ED0;
      }
      goto L_08943EC4;
    }
L_08943EC4:
    aot_gpr[31] = (0x08943ECCu);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 65u, 0x089425F4u>(ctx, &aot_mem) && ctx.pc == 0x08943ECCu) goto L_08943ECC;
    return;
L_08943ECC:
    aot_gpr[30] = (aot_gpr[23] | 0u);
    goto L_08943ED0;
L_08943ED0:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(20), aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08943EF4u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 46u, 0x08942410u>(ctx, &aot_mem) && ctx.pc == 0x08943EF4u) goto L_08943EF4;
    return;
L_08943EF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943F24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08943F34u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 48u, 0x08942488u>(ctx, &aot_mem) && ctx.pc == 0x08943F34u) goto L_08943F34;
    return;
L_08943F34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943F40:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[6]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr[7]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943F50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08943F80u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08943F80u) goto L_08943F80;
    return;
L_08943F80:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2432));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08943F9Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 175u, 0x08A51F10u>(ctx, &aot_mem) && ctx.pc == 0x08943F9Cu) goto L_08943F9C;
    return;
L_08943F9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08943FC4;
      }
      goto L_08943FAC;
    }
L_08943FAC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08943FC0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 80u, 0x08942730u>(ctx, &aot_mem) && ctx.pc == 0x08943FC0u) goto L_08943FC0;
    return;
L_08943FC0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08943FC4;
L_08943FC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943FDC;
      }
      goto L_08943FD4;
    }
L_08943FD4:
    aot_gpr[31] = (0x08943FDCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 23u, 0x0891C1B4u>(ctx, &aot_mem) && ctx.pc == 0x08943FDCu) goto L_08943FDC;
    return;
L_08943FDC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
}

void recomp_unit_0319(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0319_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_319(Runtime &runtime) {
    runtime.register_generated_unit(319u, 0x08943000u, 4096u, &recomp_unit_0319, &recomp_unit_0319_entry);
    runtime.register_function(0x08943000u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943004u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943010u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943018u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943024u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894302Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943038u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943040u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943048u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894305Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943068u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943070u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943078u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943080u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089430A8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089430D8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089430E0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089430E8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089430ECu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089430F8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943110u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943120u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943130u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894313Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894314Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943158u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894316Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943180u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943188u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943198u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089431A0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089431B4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089431CCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089431D4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089431E4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943244u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943250u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894325Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943264u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894326Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943274u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943284u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943288u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089432A8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089432D0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089432F0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943310u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943330u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943340u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894334Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943354u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943380u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089433C8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089433D8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089433ECu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943408u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894340Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943464u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943478u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943484u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894348Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943494u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089434A4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089434B0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089434E0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089434FCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943504u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943510u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943540u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894354Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943554u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894355Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943570u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894357Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943584u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089435A4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089435ACu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089435BCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089435D8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089435E8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089435FCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894360Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943620u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943634u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894363Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894364Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943664u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894366Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943678u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943688u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943698u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089436A8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089436B8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089436C8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089436D8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089436E8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089436F8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943708u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943718u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943728u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943730u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894373Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943750u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943768u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943778u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943788u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943798u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089437A8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089437B8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089437C4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089437D4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089437E4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089437F4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943804u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943814u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943824u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943830u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943838u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943840u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943848u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943864u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894386Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943878u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943884u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894389Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089438DCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089438ECu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089438FCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943908u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943948u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943950u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943958u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943960u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943974u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943980u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943990u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x0894399Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089439B8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089439C0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089439D0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089439D8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089439E4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089439ECu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x089439FCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943A2Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943A4Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943A50u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943A70u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943A90u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943AA4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943AB0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943AC0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943ACCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943AE8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B00u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B08u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B10u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B20u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B2Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B34u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B38u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B48u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B58u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B64u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B74u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943B80u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943BA4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943BACu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943BB4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943BBCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943BD0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943BE8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943BF0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943BF4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943C0Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943C60u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943C6Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943CA8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943CB4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943CBCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943CC0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943CDCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943D04u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943D58u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943D64u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943DA0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943DACu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943DB4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943DB8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943DD8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943E00u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943E64u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943E70u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943E80u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943EB8u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943EC4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943ECCu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943ED0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943EF4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943F24u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943F34u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943F40u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943F50u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943F80u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943F9Cu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943FACu, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943FC0u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943FC4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943FD4u, &recomp_unit_0319, "recomp_unit_0319");
    runtime.register_function(0x08943FDCu, &recomp_unit_0319, "recomp_unit_0319");
}
} // namespace psprecomp
