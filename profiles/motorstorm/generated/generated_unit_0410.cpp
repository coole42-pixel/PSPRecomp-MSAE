#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0410[1022] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 7, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0,
    13, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29,
    0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 39, 0, 0, 40,
    0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 47, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62,
    0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0,
    0, 0, 79, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84,
    0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 96, 0, 97, 0, 0, 0,
    0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    111, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 118, 0,
    119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 132, 0, 133, 0, 0,
    0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 149,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0,
    0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 166, 0, 167,
    0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 175, 0, 0, 176, 0, 177, 0, 178, 179, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196,
    0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0,
    203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 211, 0,
    212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0,
    0, 220, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 224, 0, 225, 0, 0, 226, 0, 227, 0, 0, 228, 229, 0, 230, 0, 0, 231, 0,
    232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 237, 238, 0, 239, 0, 0, 0, 0, 240, 0, 241,
};
void recomp_unit_0410_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0899E000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0410[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0899E000;
    case 2u: goto L_0899E008;
    case 3u: goto L_0899E014;
    case 4u: goto L_0899E024;
    case 5u: goto L_0899E034;
    case 6u: goto L_0899E03C;
    case 7u: goto L_0899E040;
    case 8u: goto L_0899E04C;
    case 9u: goto L_0899E054;
    case 10u: goto L_0899E060;
    case 11u: goto L_0899E070;
    case 12u: goto L_0899E078;
    case 13u: goto L_0899E080;
    case 14u: goto L_0899E090;
    case 15u: goto L_0899E094;
    case 16u: goto L_0899E0AC;
    case 17u: goto L_0899E0B8;
    case 18u: goto L_0899E0C0;
    case 19u: goto L_0899E0DC;
    case 20u: goto L_0899E108;
    case 21u: goto L_0899E114;
    case 22u: goto L_0899E120;
    case 23u: goto L_0899E14C;
    case 24u: goto L_0899E15C;
    case 25u: goto L_0899E190;
    case 26u: goto L_0899E1BC;
    case 27u: goto L_0899E1C8;
    case 28u: goto L_0899E1F4;
    case 29u: goto L_0899E1FC;
    case 30u: goto L_0899E208;
    case 31u: goto L_0899E218;
    case 32u: goto L_0899E224;
    case 33u: goto L_0899E230;
    case 34u: goto L_0899E238;
    case 35u: goto L_0899E244;
    case 36u: goto L_0899E254;
    case 37u: goto L_0899E264;
    case 38u: goto L_0899E26C;
    case 39u: goto L_0899E270;
    case 40u: goto L_0899E27C;
    case 41u: goto L_0899E284;
    case 42u: goto L_0899E290;
    case 43u: goto L_0899E2A0;
    case 44u: goto L_0899E2A8;
    case 45u: goto L_0899E2B0;
    case 46u: goto L_0899E2C0;
    case 47u: goto L_0899E2CC;
    case 48u: goto L_0899E2D0;
    case 49u: goto L_0899E2EC;
    case 50u: goto L_0899E2F8;
    case 51u: goto L_0899E300;
    case 52u: goto L_0899E344;
    case 53u: goto L_0899E350;
    case 54u: goto L_0899E35C;
    case 55u: goto L_0899E364;
    case 56u: goto L_0899E370;
    case 57u: goto L_0899E39C;
    case 58u: goto L_0899E3CC;
    case 59u: goto L_0899E3D8;
    case 60u: goto L_0899E3E4;
    case 61u: goto L_0899E3F0;
    case 62u: goto L_0899E3FC;
    case 63u: goto L_0899E410;
    case 64u: goto L_0899E41C;
    case 65u: goto L_0899E430;
    case 66u: goto L_0899E440;
    case 67u: goto L_0899E458;
    case 68u: goto L_0899E460;
    case 69u: goto L_0899E468;
    case 70u: goto L_0899E474;
    case 71u: goto L_0899E47C;
    case 72u: goto L_0899E4A8;
    case 73u: goto L_0899E4B4;
    case 74u: goto L_0899E4C4;
    case 75u: goto L_0899E4D0;
    case 76u: goto L_0899E4E0;
    case 77u: goto L_0899E4EC;
    case 78u: goto L_0899E4F8;
    case 79u: goto L_0899E508;
    case 80u: goto L_0899E50C;
    case 81u: goto L_0899E514;
    case 82u: goto L_0899E520;
    case 83u: goto L_0899E54C;
    case 84u: goto L_0899E57C;
    case 85u: goto L_0899E58C;
    case 86u: goto L_0899E594;
    case 87u: goto L_0899E5CC;
    case 88u: goto L_0899E5DC;
    case 89u: goto L_0899E5E4;
    case 90u: goto L_0899E608;
    case 91u: goto L_0899E614;
    case 92u: goto L_0899E624;
    case 93u: goto L_0899E640;
    case 94u: goto L_0899E654;
    case 95u: goto L_0899E664;
    case 96u: goto L_0899E668;
    case 97u: goto L_0899E670;
    case 98u: goto L_0899E684;
    case 99u: goto L_0899E68C;
    case 100u: goto L_0899E6D0;
    case 101u: goto L_0899E6DC;
    case 102u: goto L_0899E6E8;
    case 103u: goto L_0899E6F0;
    case 104u: goto L_0899E6F8;
    case 105u: goto L_0899E724;
    case 106u: goto L_0899E754;
    case 107u: goto L_0899E75C;
    case 108u: goto L_0899E764;
    case 109u: goto L_0899E7C8;
    case 110u: goto L_0899E7F4;
    case 111u: goto L_0899E800;
    case 112u: goto L_0899E80C;
    case 113u: goto L_0899E814;
    case 114u: goto L_0899E820;
    case 115u: goto L_0899E84C;
    case 116u: goto L_0899E860;
    case 117u: goto L_0899E874;
    case 118u: goto L_0899E878;
    case 119u: goto L_0899E880;
    case 120u: goto L_0899E888;
    case 121u: goto L_0899E890;
    case 122u: goto L_0899E8B0;
    case 123u: goto L_0899E8B8;
    case 124u: goto L_0899E8C0;
    case 125u: goto L_0899E8E0;
    case 126u: goto L_0899E8E8;
    case 127u: goto L_0899E8F0;
    case 128u: goto L_0899E900;
    case 129u: goto L_0899E930;
    case 130u: goto L_0899E938;
    case 131u: goto L_0899E968;
    case 132u: goto L_0899E96C;
    case 133u: goto L_0899E974;
    case 134u: goto L_0899E98C;
    case 135u: goto L_0899E998;
    case 136u: goto L_0899E9C4;
    case 137u: goto L_0899E9F4;
    case 138u: goto L_0899EA5C;
    case 139u: goto L_0899EA64;
    case 140u: goto L_0899EA7C;
    case 141u: goto L_0899EA8C;
    case 142u: goto L_0899EA9C;
    case 143u: goto L_0899EAB4;
    case 144u: goto L_0899EAC0;
    case 145u: goto L_0899EAC4;
    case 146u: goto L_0899EAD0;
    case 147u: goto L_0899EAEC;
    case 148u: goto L_0899EAF8;
    case 149u: goto L_0899EAFC;
    case 150u: goto L_0899EB04;
    case 151u: goto L_0899EB24;
    case 152u: goto L_0899EB2C;
    case 153u: goto L_0899EB34;
    case 154u: goto L_0899EB3C;
    case 155u: goto L_0899EB60;
    case 156u: goto L_0899EB6C;
    case 157u: goto L_0899EB84;
    case 158u: goto L_0899EB90;
    case 159u: goto L_0899EB9C;
    case 160u: goto L_0899EBA4;
    case 161u: goto L_0899EBAC;
    case 162u: goto L_0899EBB8;
    case 163u: goto L_0899EBD4;
    case 164u: goto L_0899EBDC;
    case 165u: goto L_0899EBE8;
    case 166u: goto L_0899EBF4;
    case 167u: goto L_0899EBFC;
    case 168u: goto L_0899EC04;
    case 169u: goto L_0899EC10;
    case 170u: goto L_0899EC20;
    case 171u: goto L_0899EC50;
    case 172u: goto L_0899EC5C;
    case 173u: goto L_0899EC64;
    case 174u: goto L_0899EC94;
    case 175u: goto L_0899EC98;
    case 176u: goto L_0899ECA4;
    case 177u: goto L_0899ECAC;
    case 178u: goto L_0899ECB4;
    case 179u: goto L_0899ECB8;
    case 180u: goto L_0899ECC8;
    case 181u: goto L_0899ECD0;
    case 182u: goto L_0899ECD8;
    case 183u: goto L_0899ECE0;
    case 184u: goto L_0899ECE8;
    case 185u: goto L_0899ECF0;
    case 186u: goto L_0899ED20;
    case 187u: goto L_0899ED28;
    case 188u: goto L_0899ED30;
    case 189u: goto L_0899ED38;
    case 190u: goto L_0899ED40;
    case 191u: goto L_0899ED48;
    case 192u: goto L_0899ED50;
    case 193u: goto L_0899ED54;
    case 194u: goto L_0899ED64;
    case 195u: goto L_0899ED70;
    case 196u: goto L_0899ED7C;
    case 197u: goto L_0899ED84;
    case 198u: goto L_0899ED8C;
    case 199u: goto L_0899ED94;
    case 200u: goto L_0899ED9C;
    case 201u: goto L_0899EDEC;
    case 202u: goto L_0899EDF8;
    case 203u: goto L_0899EE00;
    case 204u: goto L_0899EE10;
    case 205u: goto L_0899EE18;
    case 206u: goto L_0899EE28;
    case 207u: goto L_0899EE2C;
    case 208u: goto L_0899EE58;
    case 209u: goto L_0899EE60;
    case 210u: goto L_0899EE68;
    case 211u: goto L_0899EE78;
    case 212u: goto L_0899EE80;
    case 213u: goto L_0899EE90;
    case 214u: goto L_0899EE98;
    case 215u: goto L_0899EEC8;
    case 216u: goto L_0899EED4;
    case 217u: goto L_0899EEE0;
    case 218u: goto L_0899EEEC;
    case 219u: goto L_0899EEF8;
    case 220u: goto L_0899EF04;
    case 221u: goto L_0899EF18;
    case 222u: goto L_0899EF24;
    case 223u: goto L_0899EF34;
    case 224u: goto L_0899EF38;
    case 225u: goto L_0899EF40;
    case 226u: goto L_0899EF4C;
    case 227u: goto L_0899EF54;
    case 228u: goto L_0899EF60;
    case 229u: goto L_0899EF64;
    case 230u: goto L_0899EF6C;
    case 231u: goto L_0899EF78;
    case 232u: goto L_0899EF80;
    case 233u: goto L_0899EF88;
    case 234u: goto L_0899EF90;
    case 235u: goto L_0899EFBC;
    case 236u: goto L_0899EFC4;
    case 237u: goto L_0899EFCC;
    case 238u: goto L_0899EFD0;
    case 239u: goto L_0899EFD8;
    case 240u: goto L_0899EFEC;
    case 241u: goto L_0899EFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0899E000:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[16] ? 1u : 0u);
    goto L_0899E040;
L_0899E008:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0899E014u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 40u, 0x0899F1CCu>(ctx, &aot_mem) && ctx.pc == 0x0899E014u) goto L_0899E014;
    return;
L_0899E014:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_0899E070;
      }
      goto L_0899E024;
    }
L_0899E024:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0899E090;
      }
      goto L_0899E034;
    }
L_0899E034:
    aot_gpr[31] = (0x0899E03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 47u, 0x0899F234u>(ctx, &aot_mem) && ctx.pc == 0x0899E03Cu) goto L_0899E03C;
    return;
L_0899E03C:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[16] ? 1u : 0u);
    goto L_0899E040;
L_0899E040:
    aot_gpr[5] = (aot_gpr[16] - aot_gpr[17]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_0899E008;
      }
      goto L_0899E04C;
    }
L_0899E04C:
    aot_gpr[31] = (0x0899E054u);
    aot_gpr[16] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 47u, 0x0899F234u>(ctx, &aot_mem) && ctx.pc == 0x0899E054u) goto L_0899E054;
    return;
L_0899E054:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0899E060u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 40u, 0x0899F1CCu>(ctx, &aot_mem) && ctx.pc == 0x0899E060u) goto L_0899E060;
    return;
L_0899E060:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_0899E024;
      }
      goto L_0899E070;
    }
L_0899E070:
    aot_gpr[31] = (0x0899E078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 81u, 0x0899F578u>(ctx, &aot_mem) && ctx.pc == 0x0899E078u) goto L_0899E078;
    return;
L_0899E078:
    aot_gpr[31] = (0x0899E080u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 22u, 0x0899F0D0u>(ctx, &aot_mem) && ctx.pc == 0x0899E080u) goto L_0899E080;
    return;
L_0899E080:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_0899E040;
      }
      goto L_0899E090;
    }
L_0899E090:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    goto L_0899E094;
L_0899E094:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E0AC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899E0B8u);
    aot_gpr[5] = (aot_gpr[17] - aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 62u, 0x0899F394u>(ctx, &aot_mem) && ctx.pc == 0x0899E0B8u) goto L_0899E0B8;
    return;
L_0899E0B8:
    aot_gpr[16] = (aot_gpr[17] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 90u, 0x0899DFF4u>(ctx, &aot_mem); return;
L_0899E0C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-528));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    aot_gpr[9] = (aot_gpr[5] + static_cast<std::uint32_t>(512));
    goto L_0899E0DC;
L_0899E0DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[9];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899E0DC;
      }
      goto L_0899E108;
    }
L_0899E108:
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x0899E114u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 85u, 0x0899DF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E114u) goto L_0899E114;
    return;
L_0899E114:
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    goto L_0899E120;
L_0899E120:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899E120;
      }
      goto L_0899E14C;
    }
L_0899E14C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E15C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-544));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[5] + 0u);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[4] + 0u);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(512));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[16]);
    goto L_0899E190;
L_0899E190:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899E190;
      }
      goto L_0899E1BC;
    }
L_0899E1BC:
    aot_gpr[6] = (aot_gpr[9] + 0u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(512));
    goto L_0899E1C8;
L_0899E1C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899E1C8;
      }
      goto L_0899E1F4;
    }
L_0899E1F4:
    aot_gpr[31] = (0x0899E1FCu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 22u, 0x0899F0D0u>(ctx, &aot_mem) && ctx.pc == 0x0899E1FCu) goto L_0899E1FC;
    return;
L_0899E1FC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899E208u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 22u, 0x0899F0D0u>(ctx, &aot_mem) && ctx.pc == 0x0899E208u) goto L_0899E208;
    return;
L_0899E208:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x0899E218u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 42u, 0x0899DCD8u>(ctx, &aot_mem) && ctx.pc == 0x0899E218u) goto L_0899E218;
    return;
L_0899E218:
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_0899E2EC;
      }
      goto L_0899E224;
    }
L_0899E224:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
      if (branch_taken) {
          goto L_0899E2D0;
      }
      goto L_0899E230;
    }
L_0899E230:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[16] ? 1u : 0u);
    goto L_0899E270;
L_0899E238:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0899E244u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 40u, 0x0899F1CCu>(ctx, &aot_mem) && ctx.pc == 0x0899E244u) goto L_0899E244;
    return;
L_0899E244:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_0899E2A0;
      }
      goto L_0899E254;
    }
L_0899E254:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0899E2CC;
      }
      goto L_0899E264;
    }
L_0899E264:
    aot_gpr[31] = (0x0899E26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 47u, 0x0899F234u>(ctx, &aot_mem) && ctx.pc == 0x0899E26Cu) goto L_0899E26C;
    return;
L_0899E26C:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[16] ? 1u : 0u);
    goto L_0899E270;
L_0899E270:
    aot_gpr[5] = (aot_gpr[16] - aot_gpr[17]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_0899E238;
      }
      goto L_0899E27C;
    }
L_0899E27C:
    aot_gpr[31] = (0x0899E284u);
    aot_gpr[16] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 47u, 0x0899F234u>(ctx, &aot_mem) && ctx.pc == 0x0899E284u) goto L_0899E284;
    return;
L_0899E284:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0899E290u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 40u, 0x0899F1CCu>(ctx, &aot_mem) && ctx.pc == 0x0899E290u) goto L_0899E290;
    return;
L_0899E290:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_0899E254;
      }
      goto L_0899E2A0;
    }
L_0899E2A0:
    aot_gpr[31] = (0x0899E2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 81u, 0x0899F578u>(ctx, &aot_mem) && ctx.pc == 0x0899E2A8u) goto L_0899E2A8;
    return;
L_0899E2A8:
    aot_gpr[31] = (0x0899E2B0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 22u, 0x0899F0D0u>(ctx, &aot_mem) && ctx.pc == 0x0899E2B0u) goto L_0899E2B0;
    return;
L_0899E2B0:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x0899E2C0u);
    aot_gpr[5] = (aot_gpr[16] - aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 63u, 0x0899DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E2C0u) goto L_0899E2C0;
    return;
L_0899E2C0:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_0899E270;
      }
      goto L_0899E2CC;
    }
L_0899E2CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    goto L_0899E2D0;
L_0899E2D0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E2EC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899E2F8u);
    aot_gpr[5] = (aot_gpr[17] - aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 62u, 0x0899F394u>(ctx, &aot_mem) && ctx.pc == 0x0899E2F8u) goto L_0899E2F8;
    return;
L_0899E2F8:
    aot_gpr[16] = (aot_gpr[17] + 0u);
    goto L_0899E224;
L_0899E300:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1600));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1560), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1536), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1588), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1568), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1556), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1552), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1540), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1584), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1580), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1576), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1572), aot_gpr[21]);
    aot_gpr[31] = (0x0899E344u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1564), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 22u, 0x0899F0D0u>(ctx, &aot_mem) && ctx.pc == 0x0899E344u) goto L_0899E344;
    return;
L_0899E344:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0899E350u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 22u, 0x0899F0D0u>(ctx, &aot_mem) && ctx.pc == 0x0899E350u) goto L_0899E350;
    return;
L_0899E350:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0899E35Cu);
    aot_gpr[20] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 45u, 0x0899DD24u>(ctx, &aot_mem) && ctx.pc == 0x0899E35Cu) goto L_0899E35C;
    return;
L_0899E35C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_0899E3CC;
      }
      goto L_0899E364;
    }
L_0899E364:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1536)));
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(512));
    goto L_0899E370;
L_0899E370:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899E370;
      }
      goto L_0899E39C;
    }
L_0899E39C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1588)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1584)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1580)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1576)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1572)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1568)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1564)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1560)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1556)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1552)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1600));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E3CC:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x0899E3D8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 42u, 0x0899DCD8u>(ctx, &aot_mem) && ctx.pc == 0x0899E3D8u) goto L_0899E3D8;
    return;
L_0899E3D8:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x0899E3E4u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 62u, 0x0899F394u>(ctx, &aot_mem) && ctx.pc == 0x0899E3E4u) goto L_0899E3E4;
    return;
L_0899E3E4:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x0899E3F0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 62u, 0x0899F394u>(ctx, &aot_mem) && ctx.pc == 0x0899E3F0u) goto L_0899E3F0;
    return;
L_0899E3F0:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x0899E3FCu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 81u, 0x0899F578u>(ctx, &aot_mem) && ctx.pc == 0x0899E3FCu) goto L_0899E3FC;
    return;
L_0899E3FC:
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x0899E410u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    goto L_0899E15C;
L_0899E410:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x0899E41Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 64u, 0x0899DE30u>(ctx, &aot_mem) && ctx.pc == 0x0899E41Cu) goto L_0899E41C;
    return;
L_0899E41C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1540)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0899E430u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_0899E0C0;
L_0899E430:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[2] << (aot_gpr[21] & 31u));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[2] = (aot_gpr[21] >> 5u);
      if (branch_taken) {
          goto L_0899E514;
      }
      goto L_0899E440;
    }
L_0899E440:
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[19] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[22] = (0u + 0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
    aot_gpr[17] = (aot_gpr[17] >> 1u);
    goto L_0899E458;
L_0899E458:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[6] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_0899E468;
      }
      goto L_0899E460;
    }
L_0899E460:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-4));
    aot_gpr[17] = (32768u << 16u);
    goto L_0899E468;
L_0899E468:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899E474u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 84u, 0x0899F5E4u>(ctx, &aot_mem) && ctx.pc == 0x0899E474u) goto L_0899E474;
    return;
L_0899E474:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    goto L_0899E47C;
L_0899E47C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[30];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899E47C;
      }
      goto L_0899E4A8;
    }
L_0899E4A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899E4B4u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 47u, 0x0899F234u>(ctx, &aot_mem) && ctx.pc == 0x0899E4B4u) goto L_0899E4B4;
    return;
L_0899E4B4:
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899E4C4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 84u, 0x0899F5E4u>(ctx, &aot_mem) && ctx.pc == 0x0899E4C4u) goto L_0899E4C4;
    return;
L_0899E4C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899E4D0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 47u, 0x0899F234u>(ctx, &aot_mem) && ctx.pc == 0x0899E4D0u) goto L_0899E4D0;
    return;
L_0899E4D0:
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899E4E0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 84u, 0x0899F5E4u>(ctx, &aot_mem) && ctx.pc == 0x0899E4E0u) goto L_0899E4E0;
    return;
L_0899E4E0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899E4ECu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 81u, 0x0899F578u>(ctx, &aot_mem) && ctx.pc == 0x0899E4ECu) goto L_0899E4EC;
    return;
L_0899E4EC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899E4F8u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 85u, 0x0899DF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E4F8u) goto L_0899E4F8;
    return;
L_0899E4F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[17] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1540)));
      if (branch_taken) {
          goto L_0899E57C;
      }
      goto L_0899E508;
    }
L_0899E508:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0899E50C;
L_0899E50C:
    if (aot_gpr[21] != aot_gpr[22]) {
    aot_gpr[17] = (aot_gpr[17] >> 1u);
        goto L_0899E458;
    }
    goto L_0899E514;
L_0899E514:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1536)));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    goto L_0899E520;
L_0899E520:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899E520;
      }
      goto L_0899E54C;
    }
L_0899E54C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1588)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1584)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1580)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1576)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1572)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1568)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1564)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1560)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1556)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1552)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1600));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E57C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899E58Cu);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 99u, 0x0899F714u>(ctx, &aot_mem) && ctx.pc == 0x0899E58Cu) goto L_0899E58C;
    return;
L_0899E58C:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0899E50C;
L_0899E594:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[7] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[5] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    if (aot_gpr[3] == 0u) aot_gpr[17] = (aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16084)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[19] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0899E640;
      }
      goto L_0899E5CC;
    }
L_0899E5CC:
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    aot_gpr[18] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899E664;
      }
      goto L_0899E5DC;
    }
L_0899E5DC:
    aot_gpr[31] = (0x0899E5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E5E4u) goto L_0899E5E4;
    return;
L_0899E5E4:
    aot_gpr[3] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[18] << 2u);
    aot_gpr[3] = (0u - aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] >> (aot_gpr[3] & 31u));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[3] = (aot_gpr[16] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_0899E624;
      }
      goto L_0899E608;
    }
L_0899E608:
    aot_gpr[2] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(128));
    goto L_0899E614;
L_0899E614:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899E614;
      }
      goto L_0899E624;
    }
L_0899E624:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0899E640:
    aot_gpr[4] = (11955u << 16u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] | 44663u);
    aot_gpr[31] = (0x0899E654u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16084), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 55u, 0x08990534u>(ctx, &aot_mem) && ctx.pc == 0x0899E654u) goto L_0899E654;
    return;
L_0899E654:
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    aot_gpr[18] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899E5DC;
      }
      goto L_0899E664;
    }
L_0899E664:
    aot_gpr[16] = (aot_gpr[19] + 0u);
    goto L_0899E668;
L_0899E668:
    aot_gpr[31] = (0x0899E670u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E670u) goto L_0899E670;
    return;
L_0899E670:
    aot_gpr[3] = (aot_gpr[17] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899E668;
      }
      goto L_0899E684;
    }
L_0899E684:
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0899E5DC;
L_0899E68C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1072));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1052), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1036), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1060), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1040), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1032), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1028), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1024), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1056), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1048), aot_gpr[22]);
    aot_gpr[31] = (0x0899E6D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1044), aot_gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 22u, 0x0899F0D0u>(ctx, &aot_mem) && ctx.pc == 0x0899E6D0u) goto L_0899E6D0;
    return;
L_0899E6D0:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0899E6DCu);
    aot_gpr[18] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 22u, 0x0899F0D0u>(ctx, &aot_mem) && ctx.pc == 0x0899E6DCu) goto L_0899E6DC;
    return;
L_0899E6DC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0899E6E8u);
    aot_gpr[20] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 45u, 0x0899DD24u>(ctx, &aot_mem) && ctx.pc == 0x0899E6E8u) goto L_0899E6E8;
    return;
L_0899E6E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0899E754;
      }
      goto L_0899E6F0;
    }
L_0899E6F0:
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(512));
    goto L_0899E6F8;
L_0899E6F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899E6F8;
      }
      goto L_0899E724;
    }
L_0899E724:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1060)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1056)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1052)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1048)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1040)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1028)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1024)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E754:
    aot_gpr[31] = (0x0899E75Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 44u, 0x0899DD14u>(ctx, &aot_mem) && ctx.pc == 0x0899E75Cu) goto L_0899E75C;
    return;
L_0899E75C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_0899E8F0;
      }
      goto L_0899E764;
    }
L_0899E764:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(2));
    ctx.lo = aot_gpr[9];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] & 4u);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    rt.unsupported(0x0899E780u, 0x0082002Eu, "special? not lowered yet"); return;
L_0899E7C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899E7C8;
      }
      goto L_0899E7F4;
    }
L_0899E7F4:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0899E800u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 62u, 0x0899F394u>(ctx, &aot_mem) && ctx.pc == 0x0899E800u) goto L_0899E800;
    return;
L_0899E800:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899E80Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 85u, 0x0899DF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E80Cu) goto L_0899E80C;
    return;
L_0899E80C:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_0899E930;
      }
      goto L_0899E814;
    }
L_0899E814:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    goto L_0899E820;
L_0899E820:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899E820;
      }
      goto L_0899E84C;
    }
L_0899E84C:
    aot_gpr[21] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[2] << (aot_gpr[21] & 31u));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[2] = (aot_gpr[21] >> 5u);
      if (branch_taken) {
          goto L_0899E968;
      }
      goto L_0899E860;
    }
L_0899E860:
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[19] = (aot_gpr[2] + aot_gpr[19]);
    aot_gpr[20] = (0u + 0u);
    aot_gpr[30] = (2217u << 16u);
    goto L_0899E890;
L_0899E874:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(16080)));
    goto L_0899E878;
L_0899E878:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E888;
      }
      goto L_0899E880;
    }
L_0899E880:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0899E888u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899E888u) goto L_0899E888;
    return;
L_0899E888:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[21];
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_0899E96C;
      }
      goto L_0899E890;
    }
L_0899E890:
    aot_gpr[16] = (aot_gpr[16] >> 1u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899E8B8;
      }
      goto L_0899E8B0;
    }
L_0899E8B0:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-4));
    aot_gpr[16] = (32768u << 16u);
    goto L_0899E8B8;
L_0899E8B8:
    aot_gpr[31] = (0x0899E8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 112u, 0x0899F7C0u>(ctx, &aot_mem) && ctx.pc == 0x0899E8C0u) goto L_0899E8C0;
    return;
L_0899E8C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[16] & aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_0899E874;
      }
      goto L_0899E8E0;
    }
L_0899E8E0:
    aot_gpr[31] = (0x0899E8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 112u, 0x0899F7C0u>(ctx, &aot_mem) && ctx.pc == 0x0899E8E8u) goto L_0899E8E8;
    return;
L_0899E8E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(16080)));
    goto L_0899E878;
L_0899E8F0:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0899E900u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    goto L_0899E300;
L_0899E900:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1060)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1056)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1052)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1048)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1040)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1028)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1024)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E930:
    aot_gpr[31] = (0x0899E938u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 42u, 0x0899DCD8u>(ctx, &aot_mem) && ctx.pc == 0x0899E938u) goto L_0899E938;
    return;
L_0899E938:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1060)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1056)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1052)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1048)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1040)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1028)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1024)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E968:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899E96C;
L_0899E96C:
    aot_gpr[31] = (0x0899E974u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 42u, 0x0899DCD8u>(ctx, &aot_mem) && ctx.pc == 0x0899E974u) goto L_0899E974;
    return;
L_0899E974:
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0899E98Cu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 112u, 0x0899F7C0u>(ctx, &aot_mem) && ctx.pc == 0x0899E98Cu) goto L_0899E98C;
    return;
L_0899E98C:
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    goto L_0899E998;
L_0899E998:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899E998;
      }
      goto L_0899E9C4;
    }
L_0899E9C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1060)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1056)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1052)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1048)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1040)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1028)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1024)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E9F4:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(31));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2128));
    aot_gpr[2] = (aot_gpr[2] >> 5u);
    aot_gpr[3] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2064), aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-22088));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2048), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2112), aot_gpr[30]);
    aot_gpr[30] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2108), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[5] + static_cast<std::uint32_t>(-22976));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2100), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2116), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2096), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2092), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2088), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2084), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2080), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2052), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2060), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2056), aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2064)));
    goto L_0899EA5C;
L_0899EA5C:
    aot_gpr[31] = (0x0899EA64u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    goto L_0899E594;
L_0899EA64:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2052)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[2] = (aot_gpr[2] | 1u);
    aot_gpr[31] = (0x0899EA7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 63u, 0x0899DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EA7Cu) goto L_0899EA7C;
    return;
L_0899EA7C:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2048)));
    aot_gpr[31] = (0x0899EA8Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2310));
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 102u, 0x0899F744u>(ctx, &aot_mem) && ctx.pc == 0x0899EA8Cu) goto L_0899EA8C;
    return;
L_0899EA8C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2310));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[31] = (0x0899EA9Cu);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 64u, 0x0899DE30u>(ctx, &aot_mem) && ctx.pc == 0x0899EA9Cu) goto L_0899EA9C;
    return;
L_0899EA9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(512));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2068), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0899EAF8;
L_0899EAB4:
    aot_gpr[2] = (aot_gpr[30] & 1u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2060), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899EB24;
      }
      goto L_0899EAC0;
    }
L_0899EAC0:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    goto L_0899EAC4;
L_0899EAC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[30] = (aot_gpr[30] >> 1u);
      if (branch_taken) {
          goto L_0899EAEC;
      }
      goto L_0899EAD0;
    }
L_0899EAD0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[23] = (aot_gpr[5] + static_cast<std::uint32_t>(-22976));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-22088));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2060), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2056), aot_gpr[2]);
    goto L_0899EAEC;
L_0899EAEC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_0899EB2C;
      }
      goto L_0899EAF8;
    }
L_0899EAF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2060)));
    goto L_0899EAFC;
L_0899EAFC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0899EAB4;
      }
      goto L_0899EB04;
    }
L_0899EB04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2056)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2056), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[30] & 1u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2060), aot_gpr[3]);
      if (branch_taken) {
          goto L_0899EAC0;
      }
      goto L_0899EB24;
    }
L_0899EB24:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_0899EAC4;
L_0899EB2C:
    aot_gpr[31] = (0x0899EB34u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 64u, 0x0899DE30u>(ctx, &aot_mem) && ctx.pc == 0x0899EB34u) goto L_0899EB34;
    return;
L_0899EB34:
    aot_gpr[31] = (0x0899EB3Cu);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 22u, 0x0899F0D0u>(ctx, &aot_mem) && ctx.pc == 0x0899EB3Cu) goto L_0899EB3C;
    return;
L_0899EB3C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(31));
    aot_gpr[20] = (aot_gpr[2] >> 5u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(-21916));
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(-22976));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_0899EB60;
L_0899EB60:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0899EBAC;
L_0899EB6C:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] >> 1u);
      if (branch_taken) {
          goto L_0899EBD4;
      }
      goto L_0899EB84;
    }
L_0899EB84:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899EBA4;
      }
      goto L_0899EB90;
    }
L_0899EB90:
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[31] = (0x0899EB9Cu);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 102u, 0x0899F744u>(ctx, &aot_mem) && ctx.pc == 0x0899EB9Cu) goto L_0899EB9C;
    return;
L_0899EB9C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0899EAF8;
      }
      goto L_0899EBA4;
    }
L_0899EBA4:
    if (aot_gpr[17] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0899EB60;
    }
    goto L_0899EBAC;
L_0899EBAC:
    aot_gpr[2] = (aot_gpr[16] & 1u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_0899EB6C;
    }
    goto L_0899EBB8;
L_0899EBB8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] >> 1u);
      if (branch_taken) {
          goto L_0899EB84;
      }
      goto L_0899EBD4;
    }
L_0899EBD4:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2060)));
      if (branch_taken) {
          goto L_0899EAFC;
      }
      goto L_0899EBDC;
    }
L_0899EBDC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899EBE8u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 42u, 0x0899DCD8u>(ctx, &aot_mem) && ctx.pc == 0x0899EBE8u) goto L_0899EBE8;
    return;
L_0899EBE8:
    aot_gpr[2] = (9252u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 8722u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    goto L_0899EBF4;
L_0899EBF4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899ECE0;
      }
      goto L_0899EBFC;
    }
L_0899EBFC:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2060)));
      if (branch_taken) {
          goto L_0899EAFC;
      }
      goto L_0899EC04;
    }
L_0899EC04:
    aot_gpr[5] = (aot_gpr[17] & 15u);
    aot_gpr[31] = (0x0899EC10u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 64u, 0x0899DE30u>(ctx, &aot_mem) && ctx.pc == 0x0899EC10u) goto L_0899EC10;
    return;
L_0899EC10:
    aot_gpr[17] = (aot_gpr[17] >> 4u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0899EC20;
L_0899EC20:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2068)));
    if (aot_gpr[6] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_0899EC20;
    }
    goto L_0899EC50;
L_0899EC50:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    aot_gpr[31] = (0x0899EC5Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 70u, 0x0899DE74u>(ctx, &aot_mem) && ctx.pc == 0x0899EC5Cu) goto L_0899EC5C;
    return;
L_0899EC5C:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    goto L_0899EC64;
L_0899EC64:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899EC64;
      }
      goto L_0899EC94;
    }
L_0899EC94:
    aot_gpr[16] = (0u + 0u);
    goto L_0899EC98;
L_0899EC98:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899ECA4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 62u, 0x0899DDE8u>(ctx, &aot_mem) && ctx.pc == 0x0899ECA4u) goto L_0899ECA4;
    return;
L_0899ECA4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0899EC98;
    }
    goto L_0899ECAC;
L_0899ECAC:
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
        goto L_0899ED40;
    }
    goto L_0899ECB4;
L_0899ECB4:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
    goto L_0899ECB8;
L_0899ECB8:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    aot_gpr[31] = (0x0899ECC8u);
    aot_gpr[7] = (aot_gpr[21] + 0u);
    goto L_0899E68C;
L_0899ECC8:
    aot_gpr[31] = (0x0899ECD0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 50u, 0x0899DD58u>(ctx, &aot_mem) && ctx.pc == 0x0899ECD0u) goto L_0899ECD0;
    return;
L_0899ECD0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
        goto L_0899ED20;
    }
    goto L_0899ECD8;
L_0899ECD8:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899EBFC;
      }
      goto L_0899ECE0;
    }
L_0899ECE0:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2060)));
      if (branch_taken) {
          goto L_0899EAFC;
      }
      goto L_0899ECE8;
    }
L_0899ECE8:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2064)));
      if (branch_taken) {
          goto L_0899EA5C;
      }
      goto L_0899ECF0;
    }
L_0899ECF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2096)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2092)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2088)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2084)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2080)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899ED20:
    aot_gpr[31] = (0x0899ED28u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 57u, 0x0899DDA4u>(ctx, &aot_mem) && ctx.pc == 0x0899ED28u) goto L_0899ED28;
    return;
L_0899ED28:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_0899ECD8;
      }
      goto L_0899ED30;
    }
L_0899ED30:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
        goto L_0899ED50;
    }
    goto L_0899ED38;
L_0899ED38:
    aot_gpr[3] = (0u + 0u);
    goto L_0899EBF4;
L_0899ED40:
    aot_gpr[31] = (0x0899ED48u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 47u, 0x0899F234u>(ctx, &aot_mem) && ctx.pc == 0x0899ED48u) goto L_0899ED48;
    return;
L_0899ED48:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
    goto L_0899ECB8;
L_0899ED50:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
    goto L_0899ED54;
L_0899ED54:
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x0899ED64u);
    aot_gpr[7] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 99u, 0x0899F714u>(ctx, &aot_mem) && ctx.pc == 0x0899ED64u) goto L_0899ED64;
    return;
L_0899ED64:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
    aot_gpr[31] = (0x0899ED70u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 57u, 0x0899DDA4u>(ctx, &aot_mem) && ctx.pc == 0x0899ED70u) goto L_0899ED70;
    return;
L_0899ED70:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
      if (branch_taken) {
          goto L_0899ECD8;
      }
      goto L_0899ED7C;
    }
L_0899ED7C:
    aot_gpr[31] = (0x0899ED84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 50u, 0x0899DD58u>(ctx, &aot_mem) && ctx.pc == 0x0899ED84u) goto L_0899ED84;
    return;
L_0899ED84:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0899EBF4;
      }
      goto L_0899ED8C;
    }
L_0899ED8C:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[16];
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
      if (branch_taken) {
          goto L_0899ED54;
      }
      goto L_0899ED94;
    }
L_0899ED94:
    // nop
    goto L_0899EBF4;
L_0899ED9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2088), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] >> 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2068), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2048), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2092), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2084), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2072), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2064), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2096), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2080), aot_gpr[20]);
    aot_gpr[31] = (0x0899EDECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2076), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 42u, 0x0899DCD8u>(ctx, &aot_mem) && ctx.pc == 0x0899EDECu) goto L_0899EDEC;
    return;
L_0899EDEC:
    aot_gpr[2] = (aot_gpr[22] + static_cast<std::uint32_t>(31));
    aot_gpr[23] = (aot_gpr[2] >> 5u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_0899EDF8;
L_0899EDF8:
    aot_gpr[31] = (0x0899EE00u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    goto L_0899E9F4;
L_0899EE00:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x0899EE10u);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 102u, 0x0899F744u>(ctx, &aot_mem) && ctx.pc == 0x0899EE10u) goto L_0899EE10;
    return;
L_0899EE10:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0899EDF8;
      }
      goto L_0899EE18;
    }
L_0899EE18:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(1536));
    aot_gpr[30] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    goto L_0899EE28;
L_0899EE28:
    aot_gpr[7] = (aot_gpr[29] + 0u);
    goto L_0899EE2C;
L_0899EE2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[30];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899EE2C;
      }
      goto L_0899EE58;
    }
L_0899EE58:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_0899EE60;
L_0899EE60:
    aot_gpr[31] = (0x0899EE68u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    goto L_0899E9F4;
L_0899EE68:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x0899EE78u);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 102u, 0x0899F744u>(ctx, &aot_mem) && ctx.pc == 0x0899EE78u) goto L_0899EE78;
    return;
L_0899EE78:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[19];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0899EE60;
      }
      goto L_0899EE80;
    }
L_0899EE80:
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x0899EE90u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 84u, 0x0899F5E4u>(ctx, &aot_mem) && ctx.pc == 0x0899EE90u) goto L_0899EE90;
    return;
L_0899EE90:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2048)));
    aot_gpr[7] = (aot_gpr[20] + 0u);
    goto L_0899EE98;
L_0899EE98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(2048));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899EE98;
      }
      goto L_0899EEC8;
    }
L_0899EEC8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x0899EED4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 64u, 0x0899DE30u>(ctx, &aot_mem) && ctx.pc == 0x0899EED4u) goto L_0899EED4;
    return;
L_0899EED4:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x0899EEE0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 81u, 0x0899F578u>(ctx, &aot_mem) && ctx.pc == 0x0899EEE0u) goto L_0899EEE0;
    return;
L_0899EEE0:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x0899EEECu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 81u, 0x0899F578u>(ctx, &aot_mem) && ctx.pc == 0x0899EEECu) goto L_0899EEEC;
    return;
L_0899EEEC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899EEF8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 42u, 0x0899DCD8u>(ctx, &aot_mem) && ctx.pc == 0x0899EEF8u) goto L_0899EEF8;
    return;
L_0899EEF8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899EF04u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 42u, 0x0899DCD8u>(ctx, &aot_mem) && ctx.pc == 0x0899EF04u) goto L_0899EF04;
    return;
L_0899EF04:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899EF18u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    goto L_0899E15C;
L_0899EF18:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0899EF24u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 78u, 0x0899F50Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EF24u) goto L_0899EF24;
    return;
L_0899EF24:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899EF34u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 79u, 0x0899DEE0u>(ctx, &aot_mem) && ctx.pc == 0x0899EF34u) goto L_0899EF34;
    return;
L_0899EF34:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_0899EF38;
L_0899EF38:
    aot_gpr[31] = (0x0899EF40u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 28u, 0x0899F10Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EF40u) goto L_0899EF40;
    return;
L_0899EF40:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 2u, 0x0899F024u>(ctx, &aot_mem); return;
      }
      goto L_0899EF4C;
    }
L_0899EF4C:
    aot_gpr[31] = (0x0899EF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 34u, 0x0899F16Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EF54u) goto L_0899EF54;
    return;
L_0899EF54:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 14u, 0x0899F090u>(ctx, &aot_mem); return;
      }
      goto L_0899EF60;
    }
L_0899EF60:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899EF64;
L_0899EF64:
    aot_gpr[31] = (0x0899EF6Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 81u, 0x0899F578u>(ctx, &aot_mem) && ctx.pc == 0x0899EF6Cu) goto L_0899EF6C;
    return;
L_0899EF6C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899EF78u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 81u, 0x0899F578u>(ctx, &aot_mem) && ctx.pc == 0x0899EF78u) goto L_0899EF78;
    return;
L_0899EF78:
    aot_gpr[31] = (0x0899EF80u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 50u, 0x0899DD58u>(ctx, &aot_mem) && ctx.pc == 0x0899EF80u) goto L_0899EF80;
    return;
L_0899EF80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0899EF38;
      }
      goto L_0899EF88;
    }
L_0899EF88:
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    goto L_0899EF90;
L_0899EF90:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899EF90;
      }
      goto L_0899EFBC;
    }
L_0899EFBC:
    aot_gpr[31] = (0x0899EFC4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 45u, 0x0899DD24u>(ctx, &aot_mem) && ctx.pc == 0x0899EFC4u) goto L_0899EFC4;
    return;
L_0899EFC4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0899EE28;
      }
      goto L_0899EFCC;
    }
L_0899EFCC:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    goto L_0899EFD0;
L_0899EFD0:
    aot_gpr[31] = (0x0899EFD8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 42u, 0x0899DCD8u>(ctx, &aot_mem) && ctx.pc == 0x0899EFD8u) goto L_0899EFD8;
    return;
L_0899EFD8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899EFECu);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 99u, 0x0899F714u>(ctx, &aot_mem) && ctx.pc == 0x0899EFECu) goto L_0899EFEC;
    return;
L_0899EFEC:
    aot_gpr[31] = (0x0899EFF4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 50u, 0x0899DD58u>(ctx, &aot_mem) && ctx.pc == 0x0899EFF4u) goto L_0899EFF4;
    return;
L_0899EFF4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2096)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2092)));
    ctx.pc = 0x0899F000u; return;
}

void recomp_unit_0410(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0410_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_410(Runtime &runtime) {
    runtime.register_generated_unit(410u, 0x0899E000u, 4096u, &recomp_unit_0410, &recomp_unit_0410_entry);
    runtime.register_function(0x0899E000u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E008u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E014u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E024u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E034u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E03Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E040u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E04Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E054u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E060u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E070u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E078u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E080u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E090u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E094u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E0ACu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E0B8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E0C0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E0DCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E108u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E114u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E120u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E14Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E15Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E190u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E1BCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E1C8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E1F4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E1FCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E208u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E218u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E224u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E230u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E238u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E244u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E254u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E264u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E26Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E270u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E27Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E284u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E290u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E2A0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E2A8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E2B0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E2C0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E2CCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E2D0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E2ECu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E2F8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E300u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E344u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E350u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E35Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E364u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E370u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E39Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E3CCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E3D8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E3E4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E3F0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E3FCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E410u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E41Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E430u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E440u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E458u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E460u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E468u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E474u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E47Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E4A8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E4B4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E4C4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E4D0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E4E0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E4ECu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E4F8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E508u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E50Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E514u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E520u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E54Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E57Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E58Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E594u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E5CCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E5DCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E5E4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E608u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E614u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E624u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E640u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E654u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E664u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E668u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E670u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E684u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E68Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E6D0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E6DCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E6E8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E6F0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E6F8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E724u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E754u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E75Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E764u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E7C8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E7F4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E800u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E80Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E814u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E820u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E84Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E860u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E874u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E878u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E880u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E888u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E890u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E8B0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E8B8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E8C0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E8E0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E8E8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E8F0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E900u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E930u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E938u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E968u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E96Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E974u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E98Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E998u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E9C4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899E9F4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EA5Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EA64u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EA7Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EA8Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EA9Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EAB4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EAC0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EAC4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EAD0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EAECu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EAF8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EAFCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EB04u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EB24u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EB2Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EB34u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EB3Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EB60u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EB6Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EB84u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EB90u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EB9Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EBA4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EBACu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EBB8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EBD4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EBDCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EBE8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EBF4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EBFCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EC04u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EC10u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EC20u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EC50u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EC5Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EC64u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EC94u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EC98u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ECA4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ECACu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ECB4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ECB8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ECC8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ECD0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ECD8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ECE0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ECE8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ECF0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED20u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED28u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED30u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED38u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED40u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED48u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED50u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED54u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED64u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED70u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED7Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED84u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED8Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED94u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899ED9Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EDECu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EDF8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE00u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE10u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE18u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE28u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE2Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE58u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE60u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE68u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE78u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE80u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE90u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EE98u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EEC8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EED4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EEE0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EEECu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EEF8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF04u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF18u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF24u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF34u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF38u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF40u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF4Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF54u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF60u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF64u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF6Cu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF78u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF80u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF88u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EF90u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EFBCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EFC4u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EFCCu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EFD0u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EFD8u, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EFECu, &recomp_unit_0410, "recomp_unit_0410");
    runtime.register_function(0x0899EFF4u, &recomp_unit_0410, "recomp_unit_0410");
}
} // namespace psprecomp
