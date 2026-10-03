#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0296[1024] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15,
    0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 21, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 30, 0, 0, 0,
    31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 38, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54,
    0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    71, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78,
    79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 86,
    0, 0, 0, 0, 0, 0, 0, 87, 88, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 93, 0, 0, 0, 0, 0, 0, 0,
    94, 95, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 100, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0,
    0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0,
    144, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0,
    0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0,
    0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 183, 0, 0, 0, 184, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 199, 0, 200,
    0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0,
    212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 219,
};
void recomp_unit_0296_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0892C000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0296[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0892C000;
    case 2u: goto L_0892C008;
    case 3u: goto L_0892C018;
    case 4u: goto L_0892C020;
    case 5u: goto L_0892C034;
    case 6u: goto L_0892C050;
    case 7u: goto L_0892C054;
    case 8u: goto L_0892C060;
    case 9u: goto L_0892C068;
    case 10u: goto L_0892C074;
    case 11u: goto L_0892C090;
    case 12u: goto L_0892C098;
    case 13u: goto L_0892C0AC;
    case 14u: goto L_0892C0E4;
    case 15u: goto L_0892C0FC;
    case 16u: goto L_0892C104;
    case 17u: goto L_0892C114;
    case 18u: goto L_0892C11C;
    case 19u: goto L_0892C130;
    case 20u: goto L_0892C14C;
    case 21u: goto L_0892C150;
    case 22u: goto L_0892C15C;
    case 23u: goto L_0892C164;
    case 24u: goto L_0892C170;
    case 25u: goto L_0892C18C;
    case 26u: goto L_0892C194;
    case 27u: goto L_0892C1A8;
    case 28u: goto L_0892C1D4;
    case 29u: goto L_0892C1EC;
    case 30u: goto L_0892C1F0;
    case 31u: goto L_0892C200;
    case 32u: goto L_0892C208;
    case 33u: goto L_0892C21C;
    case 34u: goto L_0892C238;
    case 35u: goto L_0892C244;
    case 36u: goto L_0892C268;
    case 37u: goto L_0892C270;
    case 38u: goto L_0892C274;
    case 39u: goto L_0892C284;
    case 40u: goto L_0892C2C0;
    case 41u: goto L_0892C2C8;
    case 42u: goto L_0892C2D0;
    case 43u: goto L_0892C2EC;
    case 44u: goto L_0892C2F8;
    case 45u: goto L_0892C31C;
    case 46u: goto L_0892C338;
    case 47u: goto L_0892C354;
    case 48u: goto L_0892C370;
    case 49u: goto L_0892C3BC;
    case 50u: goto L_0892C3CC;
    case 51u: goto L_0892C3D4;
    case 52u: goto L_0892C3DC;
    case 53u: goto L_0892C3E4;
    case 54u: goto L_0892C3FC;
    case 55u: goto L_0892C404;
    case 56u: goto L_0892C40C;
    case 57u: goto L_0892C430;
    case 58u: goto L_0892C458;
    case 59u: goto L_0892C460;
    case 60u: goto L_0892C490;
    case 61u: goto L_0892C4D4;
    case 62u: goto L_0892C4DC;
    case 63u: goto L_0892C4E8;
    case 64u: goto L_0892C4F8;
    case 65u: goto L_0892C500;
    case 66u: goto L_0892C540;
    case 67u: goto L_0892C544;
    case 68u: goto L_0892C550;
    case 69u: goto L_0892C558;
    case 70u: goto L_0892C564;
    case 71u: goto L_0892C580;
    case 72u: goto L_0892C584;
    case 73u: goto L_0892C5A4;
    case 74u: goto L_0892C5B4;
    case 75u: goto L_0892C5C8;
    case 76u: goto L_0892C5D4;
    case 77u: goto L_0892C5E0;
    case 78u: goto L_0892C5FC;
    case 79u: goto L_0892C600;
    case 80u: goto L_0892C620;
    case 81u: goto L_0892C630;
    case 82u: goto L_0892C644;
    case 83u: goto L_0892C650;
    case 84u: goto L_0892C65C;
    case 85u: goto L_0892C678;
    case 86u: goto L_0892C67C;
    case 87u: goto L_0892C69C;
    case 88u: goto L_0892C6A0;
    case 89u: goto L_0892C6AC;
    case 90u: goto L_0892C6B4;
    case 91u: goto L_0892C6C0;
    case 92u: goto L_0892C6DC;
    case 93u: goto L_0892C6E0;
    case 94u: goto L_0892C700;
    case 95u: goto L_0892C704;
    case 96u: goto L_0892C710;
    case 97u: goto L_0892C718;
    case 98u: goto L_0892C724;
    case 99u: goto L_0892C740;
    case 100u: goto L_0892C744;
    case 101u: goto L_0892C758;
    case 102u: goto L_0892C760;
    case 103u: goto L_0892C768;
    case 104u: goto L_0892C770;
    case 105u: goto L_0892C778;
    case 106u: goto L_0892C78C;
    case 107u: goto L_0892C79C;
    case 108u: goto L_0892C7AC;
    case 109u: goto L_0892C7DC;
    case 110u: goto L_0892C7F8;
    case 111u: goto L_0892C810;
    case 112u: goto L_0892C820;
    case 113u: goto L_0892C83C;
    case 114u: goto L_0892C854;
    case 115u: goto L_0892C864;
    case 116u: goto L_0892C888;
    case 117u: goto L_0892C898;
    case 118u: goto L_0892C8A0;
    case 119u: goto L_0892C8B4;
    case 120u: goto L_0892C8C4;
    case 121u: goto L_0892C8D8;
    case 122u: goto L_0892C8E4;
    case 123u: goto L_0892C908;
    case 124u: goto L_0892C918;
    case 125u: goto L_0892C920;
    case 126u: goto L_0892C938;
    case 127u: goto L_0892C94C;
    case 128u: goto L_0892C95C;
    case 129u: goto L_0892C970;
    case 130u: goto L_0892C97C;
    case 131u: goto L_0892C9AC;
    case 132u: goto L_0892C9BC;
    case 133u: goto L_0892C9D0;
    case 134u: goto L_0892C9E0;
    case 135u: goto L_0892C9EC;
    case 136u: goto L_0892CA0C;
    case 137u: goto L_0892CA18;
    case 138u: goto L_0892CA20;
    case 139u: goto L_0892CA2C;
    case 140u: goto L_0892CA3C;
    case 141u: goto L_0892CA44;
    case 142u: goto L_0892CA64;
    case 143u: goto L_0892CA6C;
    case 144u: goto L_0892CA80;
    case 145u: goto L_0892CA84;
    case 146u: goto L_0892CA94;
    case 147u: goto L_0892CAA4;
    case 148u: goto L_0892CAB8;
    case 149u: goto L_0892CAC8;
    case 150u: goto L_0892CAD0;
    case 151u: goto L_0892CAE4;
    case 152u: goto L_0892CAF4;
    case 153u: goto L_0892CB04;
    case 154u: goto L_0892CB0C;
    case 155u: goto L_0892CB1C;
    case 156u: goto L_0892CB34;
    case 157u: goto L_0892CB50;
    case 158u: goto L_0892CB64;
    case 159u: goto L_0892CB78;
    case 160u: goto L_0892CB88;
    case 161u: goto L_0892CB94;
    case 162u: goto L_0892CBBC;
    case 163u: goto L_0892CBC8;
    case 164u: goto L_0892CBD0;
    case 165u: goto L_0892CBDC;
    case 166u: goto L_0892CBEC;
    case 167u: goto L_0892CC00;
    case 168u: goto L_0892CC24;
    case 169u: goto L_0892CC34;
    case 170u: goto L_0892CC3C;
    case 171u: goto L_0892CC48;
    case 172u: goto L_0892CC50;
    case 173u: goto L_0892CC64;
    case 174u: goto L_0892CC70;
    case 175u: goto L_0892CC94;
    case 176u: goto L_0892CCA4;
    case 177u: goto L_0892CCAC;
    case 178u: goto L_0892CCB8;
    case 179u: goto L_0892CCC0;
    case 180u: goto L_0892CCD4;
    case 181u: goto L_0892CCE0;
    case 182u: goto L_0892CD00;
    case 183u: goto L_0892CD0C;
    case 184u: goto L_0892CD1C;
    case 185u: goto L_0892CD20;
    case 186u: goto L_0892CD4C;
    case 187u: goto L_0892CD78;
    case 188u: goto L_0892CD8C;
    case 189u: goto L_0892CDA8;
    case 190u: goto L_0892CDB4;
    case 191u: goto L_0892CDBC;
    case 192u: goto L_0892CDD8;
    case 193u: goto L_0892CDE0;
    case 194u: goto L_0892CDF8;
    case 195u: goto L_0892CE48;
    case 196u: goto L_0892CE54;
    case 197u: goto L_0892CE60;
    case 198u: goto L_0892CE6C;
    case 199u: goto L_0892CE74;
    case 200u: goto L_0892CE7C;
    case 201u: goto L_0892CE8C;
    case 202u: goto L_0892CE94;
    case 203u: goto L_0892CE9C;
    case 204u: goto L_0892CEF8;
    case 205u: goto L_0892CF08;
    case 206u: goto L_0892CF38;
    case 207u: goto L_0892CF44;
    case 208u: goto L_0892CF50;
    case 209u: goto L_0892CF58;
    case 210u: goto L_0892CF6C;
    case 211u: goto L_0892CF74;
    case 212u: goto L_0892CF80;
    case 213u: goto L_0892CF90;
    case 214u: goto L_0892CFA4;
    case 215u: goto L_0892CFAC;
    case 216u: goto L_0892CFC8;
    case 217u: goto L_0892CFDC;
    case 218u: goto L_0892CFE4;
    case 219u: goto L_0892CFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0892C000:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0892C034;
      }
      goto L_0892C008;
    }
L_0892C008:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(5568)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C020;
      }
      goto L_0892C018;
    }
L_0892C018:
    aot_gpr[31] = (0x0892C020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 84u, 0x089295F8u>(ctx, &aot_mem) && ctx.pc == 0x0892C020u) goto L_0892C020;
    return;
L_0892C020:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_0892C008;
      }
      goto L_0892C034;
    }
L_0892C034:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0892C060;
      }
      goto L_0892C050;
    }
L_0892C050:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0892C054;
L_0892C054:
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892C054;
      }
      goto L_0892C060;
    }
L_0892C060:
    if (aot_gpr[6] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-6504), 0u);
        goto L_0892C098;
    }
    goto L_0892C068;
L_0892C068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-6504)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-6504), 0u);
        goto L_0892C098;
    }
    goto L_0892C074;
L_0892C074:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892C090u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C090u) goto L_0892C090;
    return;
L_0892C090:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-6504), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-6504), 0u);
    goto L_0892C098;
L_0892C098:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C130;
      }
      goto L_0892C0AC;
    }
L_0892C0AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-6504), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892C0E4u);
    aot_gpr[5] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C0E4u) goto L_0892C0E4;
    return;
L_0892C0E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-6504), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0892C130;
      }
      goto L_0892C0FC;
    }
L_0892C0FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (2218u << 16u);
    goto L_0892C104;
L_0892C104:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-6504)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C11C;
      }
      goto L_0892C114;
    }
L_0892C114:
    aot_gpr[31] = (0x0892C11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 101u, 0x08929768u>(ctx, &aot_mem) && ctx.pc == 0x0892C11Cu) goto L_0892C11C;
    return;
L_0892C11C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_0892C104;
      }
      goto L_0892C130;
    }
L_0892C130:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0892C15C;
      }
      goto L_0892C14C;
    }
L_0892C14C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0892C150;
L_0892C150:
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892C150;
      }
      goto L_0892C15C;
    }
L_0892C15C:
    if (aot_gpr[6] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(5392), 0u);
        goto L_0892C194;
    }
    goto L_0892C164;
L_0892C164:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5392)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(5392), 0u);
        goto L_0892C194;
    }
    goto L_0892C170;
L_0892C170:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892C18Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C18Cu) goto L_0892C18C;
    return;
L_0892C18C:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(5392), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(5392), 0u);
    goto L_0892C194;
L_0892C194:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C21C;
      }
      goto L_0892C1A8;
    }
L_0892C1A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(5392), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] << 7u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0892C1D4u);
    aot_gpr[5] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C1D4u) goto L_0892C1D4;
    return;
L_0892C1D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(5392), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0892C21C;
      }
      goto L_0892C1EC;
    }
L_0892C1EC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0892C1F0;
L_0892C1F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C208;
      }
      goto L_0892C200;
    }
L_0892C200:
    aot_gpr[31] = (0x0892C208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 117u, 0x08929904u>(ctx, &aot_mem) && ctx.pc == 0x0892C208u) goto L_0892C208;
    return;
L_0892C208:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0892C1F0;
      }
      goto L_0892C21C;
    }
L_0892C21C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-8468), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_0892C284;
      }
      goto L_0892C238;
    }
L_0892C238:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (2219u << 16u);
    goto L_0892C244;
L_0892C244:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5392)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-8468)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5392)));
    aot_gpr[6] = (aot_gpr[8] - aot_gpr[6]);
    aot_gpr[11] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[5]);
      if (branch_taken) {
          goto L_0892C270;
      }
      goto L_0892C268;
    }
L_0892C268:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_0892C274;
      }
      goto L_0892C270;
    }
L_0892C270:
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    goto L_0892C274;
L_0892C274:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0892C244;
      }
      goto L_0892C284;
    }
L_0892C284:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10800), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10788), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10796), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10792), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-8476), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-8472), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0892C2C0u);
    aot_gpr[5] = (0u | 100u);
    ctx.pc = 0x08A5B0A4u;
    return;
L_0892C2C0:
    aot_gpr[31] = (0x0892C2C8u);
    aot_gpr[4] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 45u, 0x08A49C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C2C8u) goto L_0892C2C8;
    return;
L_0892C2C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C3D4;
      }
      goto L_0892C2D0;
    }
L_0892C2D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[16] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-10816), aot_gpr[5]);
    aot_gpr[31] = (0x0892C2ECu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 16u, 0x08A4A100u>(ctx, &aot_mem) && ctx.pc == 0x0892C2ECu) goto L_0892C2EC;
    return;
L_0892C2EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10816)));
    aot_gpr[31] = (0x0892C2F8u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 91u, 0x08A49FD8u>(ctx, &aot_mem) && ctx.pc == 0x0892C2F8u) goto L_0892C2F8;
    return;
L_0892C2F8:
    aot_gpr[4] = (2219u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10820)));
    aot_gpr[4] = (17792u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0892C31Cu);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 8u, 0x08A4A06Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C31Cu) goto L_0892C31C;
    return;
L_0892C31C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5416), aot_gpr[6]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0892C338u);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C338u) goto L_0892C338;
    return;
L_0892C338:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5412), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 64u);
    aot_gpr[31] = (0x0892C354u);
    aot_gpr[6] = (4u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C354u) goto L_0892C354;
    return;
L_0892C354:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16148), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 64u);
    aot_gpr[31] = (0x0892C370u);
    aot_gpr[6] = (0u | 9216u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C370u) goto L_0892C370;
    return;
L_0892C370:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16152), aot_gpr[2]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16128), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16132), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16136), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16144), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (2195u << 16u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[7] = (0u | 1024u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25856));
    aot_gpr[31] = (0x0892C3BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19328));
    ctx.pc = 0x08A5B05Cu;
    return;
L_0892C3BC:
    aot_gpr[16] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-10812), aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[17] = (2219u << 16u);
      if (branch_taken) {
          goto L_0892C3DC;
      }
      goto L_0892C3CC;
    }
L_0892C3CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C3E4;
      }
      goto L_0892C3D4;
    }
L_0892C3D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C460;
      }
      goto L_0892C3DC;
    }
L_0892C3DC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-10812), aot_gpr[4]);
    goto L_0892C3E4;
L_0892C3E4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 512u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0892C3FCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25844));
    ctx.pc = 0x08A5B074u;
    return;
L_0892C3FC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-10808), aot_gpr[2]);
      if (branch_taken) {
          goto L_0892C40C;
      }
      goto L_0892C404;
    }
L_0892C404:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-10808), aot_gpr[4]);
    goto L_0892C40C;
L_0892C40C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (2195u << 16u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25832));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9424));
    aot_gpr[31] = (0x0892C430u);
    aot_gpr[7] = (1u << 16u);
    ctx.pc = 0x08A5B05Cu;
    return;
L_0892C430:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10804), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10812)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-10836), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0892C458u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5AFFCu;
    return;
L_0892C458:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C460;
      }
      goto L_0892C460;
    }
L_0892C460:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C490:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-10836), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10812)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x0892C4D4u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B00Cu;
    return;
L_0892C4D4:
    aot_gpr[31] = (0x0892C4DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10812)));
    ctx.pc = 0x08A5B0D4u;
    return;
L_0892C4DC:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x0892C4E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10808)));
    ctx.pc = 0x08A5AFF4u;
    return;
L_0892C4E8:
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10804)));
    aot_gpr[31] = (0x0892C4F8u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B00Cu;
    return;
L_0892C4F8:
    aot_gpr[31] = (0x0892C500u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10804)));
    ctx.pc = 0x08A5B0D4u;
    return;
L_0892C500:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(5376));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(-7472));
    aot_gpr[20] = (aot_gpr[21] + static_cast<std::uint32_t>(5568));
    aot_gpr[22] = (aot_gpr[23] + static_cast<std::uint32_t>(-6504));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(5392));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C550;
      }
      goto L_0892C540;
    }
L_0892C540:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0892C544;
L_0892C544:
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892C544;
      }
      goto L_0892C550;
    }
L_0892C550:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C584;
      }
      goto L_0892C558;
    }
L_0892C558:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5376)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C584;
      }
      goto L_0892C564;
    }
L_0892C564:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892C580u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C580u) goto L_0892C580;
    return;
L_0892C580:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(5376), 0u);
    goto L_0892C584;
L_0892C584:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(5376), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0892C5C8;
      }
      goto L_0892C5A4;
    }
L_0892C5A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0892C5B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 58u, 0x08929414u>(ctx, &aot_mem) && ctx.pc == 0x0892C5B4u) goto L_0892C5B4;
    return;
L_0892C5B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892C5A4;
      }
      goto L_0892C5C8;
    }
L_0892C5C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_0892C600;
      }
      goto L_0892C5D4;
    }
L_0892C5D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7472)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0892C600;
      }
      goto L_0892C5E0;
    }
L_0892C5E0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892C5FCu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C5FCu) goto L_0892C5FC;
    return;
L_0892C5FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-7472), 0u);
    goto L_0892C600;
L_0892C600:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-7472), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0892C644;
      }
      goto L_0892C620;
    }
L_0892C620:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(5568)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0892C630u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 85u, 0x0892960Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C630u) goto L_0892C630;
    return;
L_0892C630:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_0892C620;
      }
      goto L_0892C644;
    }
L_0892C644:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C67C;
      }
      goto L_0892C650;
    }
L_0892C650:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(5568)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0892C67C;
      }
      goto L_0892C65C;
    }
L_0892C65C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892C678u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C678u) goto L_0892C678;
    return;
L_0892C678:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(5568), 0u);
    goto L_0892C67C;
L_0892C67C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(5568), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0892C6AC;
      }
      goto L_0892C69C;
    }
L_0892C69C:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0892C6A0;
L_0892C6A0:
    aot_gpr[6] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892C6A0;
      }
      goto L_0892C6AC;
    }
L_0892C6AC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C6E0;
      }
      goto L_0892C6B4;
    }
L_0892C6B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-6504)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0892C6E0;
      }
      goto L_0892C6C0;
    }
L_0892C6C0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892C6DCu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C6DCu) goto L_0892C6DC;
    return;
L_0892C6DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-6504), 0u);
    goto L_0892C6E0;
L_0892C6E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-6504), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0892C710;
      }
      goto L_0892C700;
    }
L_0892C700:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    goto L_0892C704;
L_0892C704:
    aot_gpr[6] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892C704;
      }
      goto L_0892C710;
    }
L_0892C710:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C744;
      }
      goto L_0892C718;
    }
L_0892C718:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5392)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0892C744;
      }
      goto L_0892C724;
    }
L_0892C724:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892C740u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C740u) goto L_0892C740;
    return;
L_0892C740:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(5392), 0u);
    goto L_0892C744;
L_0892C744:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(5392), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[31] = (0x0892C758u);
    aot_gpr[4] = (0u | 771u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 76u, 0x089333E4u>(ctx, &aot_mem) && ctx.pc == 0x0892C758u) goto L_0892C758;
    return;
L_0892C758:
    aot_gpr[31] = (0x0892C760u);
    aot_gpr[4] = (0u | 772u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 76u, 0x089333E4u>(ctx, &aot_mem) && ctx.pc == 0x0892C760u) goto L_0892C760;
    return;
L_0892C760:
    aot_gpr[31] = (0x0892C768u);
    aot_gpr[4] = (0u | 770u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 76u, 0x089333E4u>(ctx, &aot_mem) && ctx.pc == 0x0892C768u) goto L_0892C768;
    return;
L_0892C768:
    aot_gpr[31] = (0x0892C770u);
    aot_gpr[4] = (0u | 769u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 76u, 0x089333E4u>(ctx, &aot_mem) && ctx.pc == 0x0892C770u) goto L_0892C770;
    return;
L_0892C770:
    aot_gpr[31] = (0x0892C778u);
    aot_gpr[4] = (0u | 768u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 76u, 0x089333E4u>(ctx, &aot_mem) && ctx.pc == 0x0892C778u) goto L_0892C778;
    return;
L_0892C778:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0892C78Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5412));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0892C78Cu) goto L_0892C78C;
    return;
L_0892C78C:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0892C79Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16148));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0892C79Cu) goto L_0892C79C;
    return;
L_0892C79C:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0892C7ACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16152));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0892C7ACu) goto L_0892C7AC;
    return;
L_0892C7AC:
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
L_0892C7DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10808)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0892C7F8u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5AFD4u;
    return;
L_0892C7F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10808)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 33u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0892C810u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B054u;
    return;
L_0892C810:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C820:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10808)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0892C83Cu);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = 0x08A5AFD4u;
    return;
L_0892C83C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10808)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (0u | 33u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0892C854u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B054u;
    return;
L_0892C854:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C864:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(-7472));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0892C8D8;
      }
      goto L_0892C888;
    }
L_0892C888:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[31] = (0x0892C898u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 53u, 0x0892A460u>(ctx, &aot_mem) && ctx.pc == 0x0892C898u) goto L_0892C898;
    return;
L_0892C898:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C8C4;
      }
      goto L_0892C8A0;
    }
L_0892C8A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[31] = (0x0892C8B4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 43u, 0x0892A384u>(ctx, &aot_mem) && ctx.pc == 0x0892C8B4u) goto L_0892C8B4;
    return;
L_0892C8B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (2218u << 16u);
    goto L_0892C8C4;
L_0892C8C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892C888;
      }
      goto L_0892C8D8;
    }
L_0892C8D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C8E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-7472));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_0892C970;
      }
      goto L_0892C908;
    }
L_0892C908:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[31] = (0x0892C918u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 53u, 0x0892A460u>(ctx, &aot_mem) && ctx.pc == 0x0892C918u) goto L_0892C918;
    return;
L_0892C918:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C95C;
      }
      goto L_0892C920;
    }
L_0892C920:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C95C;
      }
      goto L_0892C938;
    }
L_0892C938:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[31] = (0x0892C94Cu);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 43u, 0x0892A384u>(ctx, &aot_mem) && ctx.pc == 0x0892C94Cu) goto L_0892C94C;
    return;
L_0892C94C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2218u << 16u);
    goto L_0892C95C;
L_0892C95C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892C908;
      }
      goto L_0892C970;
    }
L_0892C970:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C97C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(-7472));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0892CA3C;
      }
      goto L_0892C9AC;
    }
L_0892C9AC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[12] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[3] = (2218u << 16u);
    goto L_0892C9BC;
L_0892C9BC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[9]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892CA2C;
      }
      goto L_0892C9D0;
    }
L_0892C9D0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (aot_gpr[10] & 8u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA2C;
      }
      goto L_0892C9E0;
    }
L_0892C9E0:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[11] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892CA2C;
      }
      goto L_0892C9EC;
    }
L_0892C9EC:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(5376)));
    aot_gpr[11] = (aot_gpr[11] << 2u);
    aot_gpr[11] = (aot_gpr[13] + aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(52)));
    aot_gpr[11] = (aot_gpr[11] & 1u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA2C;
      }
      goto L_0892CA0C;
    }
L_0892CA0C:
    aot_gpr[4] = (aot_gpr[10] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA20;
      }
      goto L_0892CA18;
    }
L_0892CA18:
    aot_gpr[4] = (aot_gpr[12] << (aot_gpr[9] & 31u));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    goto L_0892CA20;
L_0892CA20:
    aot_gpr[4] = (aot_gpr[10] | 4096u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0892CA2C;
L_0892CA2C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892C9BC;
      }
      goto L_0892CA3C;
    }
L_0892CA3C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CB1C;
      }
      goto L_0892CA44;
    }
L_0892CA44:
    aot_gpr[18] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-10784)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-10784), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA84;
      }
      goto L_0892CA64;
    }
L_0892CA64:
    aot_gpr[31] = (0x0892CA6Cu);
    aot_gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 162u, 0x08943B48u>(ctx, &aot_mem) && ctx.pc == 0x0892CA6Cu) goto L_0892CA6C;
    return;
L_0892CA6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-10784)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA64;
      }
      goto L_0892CA80;
    }
L_0892CA80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0892CA84;
L_0892CA84:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0892CB04;
      }
      goto L_0892CA94;
    }
L_0892CA94:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[2] = (2219u << 16u);
    goto L_0892CAA4;
L_0892CAA4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892CAF4;
      }
      goto L_0892CAB8;
    }
L_0892CAB8:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    aot_gpr[12] = (aot_gpr[11] & 8u);
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[12] = (aot_gpr[11] & 4096u);
      if (branch_taken) {
          goto L_0892CAF4;
      }
      goto L_0892CAC8;
    }
L_0892CAC8:
    { const bool branch_taken = aot_gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CAF4;
      }
      goto L_0892CAD0;
    }
L_0892CAD0:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-8472)));
    aot_gpr[10] = (aot_gpr[5] << (aot_gpr[10] & 31u));
    aot_gpr[12] = (aot_gpr[12] & aot_gpr[10]);
    { const bool branch_taken = aot_gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CAF4;
      }
      goto L_0892CAE4;
    }
L_0892CAE4:
    aot_gpr[4] = (aot_gpr[11] & aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[10]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0892CAF4;
L_0892CAF4:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892CAA4;
      }
      goto L_0892CB04;
    }
L_0892CB04:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CB1C;
      }
      goto L_0892CB0C;
    }
L_0892CB0C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10780)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10780), aot_gpr[5]);
    goto L_0892CB1C;
L_0892CB1C:
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
L_0892CB34:
    aot_gpr[13] = (2218u << 16u);
    aot_gpr[12] = (aot_gpr[13] + static_cast<std::uint32_t>(-7472));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr[14] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[14] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[15] = (0u | 0u);
      if (branch_taken) {
          goto L_0892CBEC;
      }
      goto L_0892CB50;
    }
L_0892CB50:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[6] = (2218u << 16u);
    goto L_0892CB64;
L_0892CB64:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[2]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892CBDC;
      }
      goto L_0892CB78;
    }
L_0892CB78:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[9] & 4096u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CBDC;
      }
      goto L_0892CB88;
    }
L_0892CB88:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0892CBDC;
      }
      goto L_0892CB94;
    }
L_0892CB94:
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(5376)));
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[8] = (aot_gpr[24] + aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (aot_gpr[8] & 2u);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CBDC;
      }
      goto L_0892CBBC;
    }
L_0892CBBC:
    aot_gpr[8] = (aot_gpr[9] & 1u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CBD0;
      }
      goto L_0892CBC8;
    }
L_0892CBC8:
    aot_gpr[8] = (aot_gpr[5] << (aot_gpr[10] & 31u));
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[8]);
    goto L_0892CBD0;
L_0892CBD0:
    aot_gpr[8] = (aot_gpr[9] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    goto L_0892CBDC;
L_0892CBDC:
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[14] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892CB64;
      }
      goto L_0892CBEC;
    }
L_0892CBEC:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10780)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[15]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10780), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892CC00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(-7472));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0892CC64;
      }
      goto L_0892CC24;
    }
L_0892CC24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[10]);
    aot_gpr[31] = (0x0892CC34u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 53u, 0x0892A460u>(ctx, &aot_mem) && ctx.pc == 0x0892CC34u) goto L_0892CC34;
    return;
L_0892CC34:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CC48;
      }
      goto L_0892CC3C;
    }
L_0892CC3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892CC50;
      }
      goto L_0892CC48;
    }
L_0892CC48:
    aot_gpr[31] = (0x0892CC50u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 97u, 0x0892A7A0u>(ctx, &aot_mem) && ctx.pc == 0x0892CC50u) goto L_0892CC50;
    return;
L_0892CC50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892CC24;
      }
      goto L_0892CC64;
    }
L_0892CC64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892CC70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(-7472));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_0892CCD4;
      }
      goto L_0892CC94;
    }
L_0892CC94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
    aot_gpr[31] = (0x0892CCA4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 53u, 0x0892A460u>(ctx, &aot_mem) && ctx.pc == 0x0892CCA4u) goto L_0892CCA4;
    return;
L_0892CCA4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CCB8;
      }
      goto L_0892CCAC;
    }
L_0892CCAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892CCC0;
      }
      goto L_0892CCB8;
    }
L_0892CCB8:
    aot_gpr[31] = (0x0892CCC0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 100u, 0x0892A7D0u>(ctx, &aot_mem) && ctx.pc == 0x0892CCC0u) goto L_0892CCC0;
    return;
L_0892CCC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892CC94;
      }
      goto L_0892CCD4;
    }
L_0892CCD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892CCE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0892CD00u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 175u, 0x0892ADC8u>(ctx, &aot_mem) && ctx.pc == 0x0892CD00u) goto L_0892CD00;
    return;
L_0892CD00:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892CD20;
      }
      goto L_0892CD0C;
    }
L_0892CD0C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x0892CD1Cu);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 143u, 0x08929AC8u>(ctx, &aot_mem) && ctx.pc == 0x0892CD1Cu) goto L_0892CD1C;
    return;
L_0892CD1C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0892CD20;
L_0892CD20:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5376)));
    aot_gpr[6] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892CD4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5376)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0892CDE0;
      }
      goto L_0892CD78;
    }
L_0892CD78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CDB4;
      }
      goto L_0892CD8C;
    }
L_0892CD8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0892CDA8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CDA8u) goto L_0892CDA8;
    return;
L_0892CDA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5376)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
      if (branch_taken) {
          goto L_0892CDE0;
      }
      goto L_0892CDB4;
    }
L_0892CDB4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CDE0;
      }
      goto L_0892CDBC;
    }
L_0892CDBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0892CDD8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CDD8u) goto L_0892CDD8;
    return;
L_0892CDD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5376)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    goto L_0892CDE0;
L_0892CDE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892CDF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-688));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(644), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(648), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(656), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(660), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(664), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(676), aot_gpr[30]);
    aot_gpr[21] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(640), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[8] & 255u);
    aot_gpr[20] = (aot_gpr[9] & 255u);
    aot_gpr[30] = (aot_gpr[10] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(652), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(668), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(672), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(680), aot_gpr[31]);
    aot_gpr[31] = (0x0892CE48u);
    aot_gpr[22] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 191u, 0x0892AE94u>(ctx, &aot_mem) && ctx.pc == 0x0892CE48u) goto L_0892CE48;
    return;
L_0892CE48:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[23]) < 0;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892CE74;
      }
      goto L_0892CE54;
    }
L_0892CE54:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0892CE60u);
    aot_gpr[5] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x0892CE60u) goto L_0892CE60;
    return;
L_0892CE60:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CE7C;
      }
      goto L_0892CE6C;
    }
L_0892CE6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[23] + aot_gpr[23]);
      if (branch_taken) {
          goto L_0892CE9C;
      }
      goto L_0892CE74;
    }
L_0892CE74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0297_entry, 297u, 18u, 0x0892D0BCu>(ctx, &aot_mem); return;
      }
      goto L_0892CE7C;
    }
L_0892CE7C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0892CE8Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25816));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0892CE8Cu) goto L_0892CE8C;
    return;
L_0892CE8C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[23] + aot_gpr[23]);
      if (branch_taken) {
          goto L_0892CE9C;
      }
      goto L_0892CE94;
    }
L_0892CE94:
    aot_gpr[22] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[23] + aot_gpr[23]);
    goto L_0892CE9C;
L_0892CE9C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[23] + aot_gpr[5]);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[23] << 6u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(5568)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_0892CF58;
      }
      goto L_0892CEF8;
    }
L_0892CEF8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0892CF08u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 4u, 0x08924058u>(ctx, &aot_mem) && ctx.pc == 0x0892CF08u) goto L_0892CF08;
    return;
L_0892CF08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
      if (branch_taken) {
          goto L_0892CF50;
      }
      goto L_0892CF38;
    }
L_0892CF38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CF50;
      }
      goto L_0892CF44;
    }
L_0892CF44:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0297_entry, 297u, 18u, 0x0892D0BCu>(ctx, &aot_mem); return;
      }
      goto L_0892CF50;
    }
L_0892CF50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (4u << 16u);
      if (branch_taken) {
          goto L_0892CFA4;
      }
      goto L_0892CF58;
    }
L_0892CF58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0892CF6Cu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 146u, 0x08933840u>(ctx, &aot_mem) && ctx.pc == 0x0892CF6Cu) goto L_0892CF6C;
    return;
L_0892CF6C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
      if (branch_taken) {
          goto L_0892CF80;
      }
      goto L_0892CF74;
    }
L_0892CF74:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0297_entry, 297u, 18u, 0x0892D0BCu>(ctx, &aot_mem); return;
      }
      goto L_0892CF80;
    }
L_0892CF80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[31] = (0x0892CF90u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x0892CF90u) goto L_0892CF90;
    return;
L_0892CF90:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (4u << 16u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    goto L_0892CFA4;
L_0892CFA4:
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CFC8;
      }
      goto L_0892CFAC;
    }
L_0892CFAC:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5412)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5412), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0892CFDC;
      }
      goto L_0892CFC8;
    }
L_0892CFC8:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_0892CFDC;
L_0892CFDC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0297_entry, 297u, 15u, 0x0892D0A8u>(ctx, &aot_mem); return;
      }
      goto L_0892CFE4;
    }
L_0892CFE4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 512u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0892CFFCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25812));
    ctx.pc = 0x08A5B074u;
    return;
L_0892CFFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    ctx.pc = 0x0892D000u; return;
}

void recomp_unit_0296(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0296_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_296(Runtime &runtime) {
    runtime.register_generated_unit(296u, 0x0892C000u, 4096u, &recomp_unit_0296, &recomp_unit_0296_entry);
    runtime.register_function(0x0892C000u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C008u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C018u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C020u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C034u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C050u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C054u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C060u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C068u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C074u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C090u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C098u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C0ACu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C0E4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C0FCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C104u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C114u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C11Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C130u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C14Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C150u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C15Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C164u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C170u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C18Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C194u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C1A8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C1D4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C1ECu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C1F0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C200u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C208u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C21Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C238u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C244u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C268u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C270u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C274u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C284u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C2C0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C2C8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C2D0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C2ECu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C2F8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C31Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C338u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C354u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C370u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C3BCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C3CCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C3D4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C3DCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C3E4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C3FCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C404u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C40Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C430u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C458u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C460u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C490u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C4D4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C4DCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C4E8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C4F8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C500u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C540u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C544u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C550u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C558u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C564u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C580u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C584u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C5A4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C5B4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C5C8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C5D4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C5E0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C5FCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C600u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C620u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C630u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C644u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C650u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C65Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C678u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C67Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C69Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C6A0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C6ACu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C6B4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C6C0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C6DCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C6E0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C700u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C704u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C710u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C718u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C724u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C740u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C744u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C758u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C760u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C768u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C770u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C778u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C78Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C79Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C7ACu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C7DCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C7F8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C810u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C820u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C83Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C854u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C864u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C888u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C898u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C8A0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C8B4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C8C4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C8D8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C8E4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C908u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C918u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C920u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C938u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C94Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C95Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C970u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C97Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C9ACu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C9BCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C9D0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C9E0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892C9ECu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CA0Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CA18u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CA20u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CA2Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CA3Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CA44u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CA64u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CA6Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CA80u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CA84u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CA94u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CAA4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CAB8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CAC8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CAD0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CAE4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CAF4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CB04u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CB0Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CB1Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CB34u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CB50u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CB64u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CB78u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CB88u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CB94u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CBBCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CBC8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CBD0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CBDCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CBECu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CC00u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CC24u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CC34u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CC3Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CC48u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CC50u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CC64u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CC70u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CC94u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CCA4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CCACu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CCB8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CCC0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CCD4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CCE0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CD00u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CD0Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CD1Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CD20u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CD4Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CD78u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CD8Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CDA8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CDB4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CDBCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CDD8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CDE0u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CDF8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CE48u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CE54u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CE60u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CE6Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CE74u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CE7Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CE8Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CE94u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CE9Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CEF8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CF08u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CF38u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CF44u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CF50u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CF58u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CF6Cu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CF74u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CF80u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CF90u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CFA4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CFACu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CFC8u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CFDCu, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CFE4u, &recomp_unit_0296, "recomp_unit_0296");
    runtime.register_function(0x0892CFFCu, &recomp_unit_0296, "recomp_unit_0296");
}
} // namespace psprecomp
