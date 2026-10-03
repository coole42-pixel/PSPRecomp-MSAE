#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0219[1022] = {
    1, 0, 2, 0, 3, 4, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0,
    15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 27, 0, 28, 0, 0, 0, 0, 29, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 43,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 78, 0, 0, 79, 0, 0, 80, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 0,
    0, 0, 96, 97, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0,
    0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 110, 111,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 117, 0, 0, 0, 0, 0, 118, 119, 0, 0, 0, 0, 0,
    120, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126,
    0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 134, 0, 135, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 149, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 161, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 165, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 172, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0,
    0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0,
    0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208,
};
void recomp_unit_0219_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088DF000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0219[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088DF000;
    case 2u: goto L_088DF008;
    case 3u: goto L_088DF010;
    case 4u: goto L_088DF014;
    case 5u: goto L_088DF018;
    case 6u: goto L_088DF020;
    case 7u: goto L_088DF028;
    case 8u: goto L_088DF030;
    case 9u: goto L_088DF038;
    case 10u: goto L_088DF044;
    case 11u: goto L_088DF04C;
    case 12u: goto L_088DF054;
    case 13u: goto L_088DF05C;
    case 14u: goto L_088DF068;
    case 15u: goto L_088DF080;
    case 16u: goto L_088DF08C;
    case 17u: goto L_088DF0A8;
    case 18u: goto L_088DF0BC;
    case 19u: goto L_088DF0D4;
    case 20u: goto L_088DF0DC;
    case 21u: goto L_088DF0E4;
    case 22u: goto L_088DF10C;
    case 23u: goto L_088DF118;
    case 24u: goto L_088DF128;
    case 25u: goto L_088DF134;
    case 26u: goto L_088DF150;
    case 27u: goto L_088DF154;
    case 28u: goto L_088DF15C;
    case 29u: goto L_088DF170;
    case 30u: goto L_088DF174;
    case 31u: goto L_088DF1A4;
    case 32u: goto L_088DF1AC;
    case 33u: goto L_088DF1E0;
    case 34u: goto L_088DF1EC;
    case 35u: goto L_088DF220;
    case 36u: goto L_088DF22C;
    case 37u: goto L_088DF260;
    case 38u: goto L_088DF26C;
    case 39u: goto L_088DF29C;
    case 40u: goto L_088DF2A4;
    case 41u: goto L_088DF2E8;
    case 42u: goto L_088DF2F4;
    case 43u: goto L_088DF2FC;
    case 44u: goto L_088DF300;
    case 45u: goto L_088DF324;
    case 46u: goto L_088DF33C;
    case 47u: goto L_088DF358;
    case 48u: goto L_088DF374;
    case 49u: goto L_088DF388;
    case 50u: goto L_088DF39C;
    case 51u: goto L_088DF3A4;
    case 52u: goto L_088DF3C0;
    case 53u: goto L_088DF3DC;
    case 54u: goto L_088DF3F4;
    case 55u: goto L_088DF410;
    case 56u: goto L_088DF42C;
    case 57u: goto L_088DF440;
    case 58u: goto L_088DF450;
    case 59u: goto L_088DF45C;
    case 60u: goto L_088DF47C;
    case 61u: goto L_088DF488;
    case 62u: goto L_088DF490;
    case 63u: goto L_088DF4A4;
    case 64u: goto L_088DF4BC;
    case 65u: goto L_088DF4C0;
    case 66u: goto L_088DF4CC;
    case 67u: goto L_088DF4DC;
    case 68u: goto L_088DF4F4;
    case 69u: goto L_088DF50C;
    case 70u: goto L_088DF518;
    case 71u: goto L_088DF528;
    case 72u: goto L_088DF540;
    case 73u: goto L_088DF550;
    case 74u: goto L_088DF564;
    case 75u: goto L_088DF594;
    case 76u: goto L_088DF5A0;
    case 77u: goto L_088DF5AC;
    case 78u: goto L_088DF5B0;
    case 79u: goto L_088DF5BC;
    case 80u: goto L_088DF5C8;
    case 81u: goto L_088DF5CC;
    case 82u: goto L_088DF5E4;
    case 83u: goto L_088DF604;
    case 84u: goto L_088DF620;
    case 85u: goto L_088DF628;
    case 86u: goto L_088DF644;
    case 87u: goto L_088DF660;
    case 88u: goto L_088DF67C;
    case 89u: goto L_088DF694;
    case 90u: goto L_088DF6A4;
    case 91u: goto L_088DF6B0;
    case 92u: goto L_088DF6D8;
    case 93u: goto L_088DF6E4;
    case 94u: goto L_088DF6EC;
    case 95u: goto L_088DF6F4;
    case 96u: goto L_088DF708;
    case 97u: goto L_088DF70C;
    case 98u: goto L_088DF714;
    case 99u: goto L_088DF720;
    case 100u: goto L_088DF730;
    case 101u: goto L_088DF74C;
    case 102u: goto L_088DF76C;
    case 103u: goto L_088DF778;
    case 104u: goto L_088DF784;
    case 105u: goto L_088DF790;
    case 106u: goto L_088DF7A0;
    case 107u: goto L_088DF7B8;
    case 108u: goto L_088DF7E0;
    case 109u: goto L_088DF7EC;
    case 110u: goto L_088DF7F8;
    case 111u: goto L_088DF7FC;
    case 112u: goto L_088DF810;
    case 113u: goto L_088DF82C;
    case 114u: goto L_088DF894;
    case 115u: goto L_088DF8B0;
    case 116u: goto L_088DF8C8;
    case 117u: goto L_088DF8CC;
    case 118u: goto L_088DF8E4;
    case 119u: goto L_088DF8E8;
    case 120u: goto L_088DF900;
    case 121u: goto L_088DF904;
    case 122u: goto L_088DF90C;
    case 123u: goto L_088DF944;
    case 124u: goto L_088DF958;
    case 125u: goto L_088DF970;
    case 126u: goto L_088DF97C;
    case 127u: goto L_088DF990;
    case 128u: goto L_088DF99C;
    case 129u: goto L_088DF9B0;
    case 130u: goto L_088DF9BC;
    case 131u: goto L_088DF9C8;
    case 132u: goto L_088DF9D8;
    case 133u: goto L_088DFA04;
    case 134u: goto L_088DFA0C;
    case 135u: goto L_088DFA14;
    case 136u: goto L_088DFA18;
    case 137u: goto L_088DFA20;
    case 138u: goto L_088DFA70;
    case 139u: goto L_088DFA84;
    case 140u: goto L_088DFA8C;
    case 141u: goto L_088DFA94;
    case 142u: goto L_088DFABC;
    case 143u: goto L_088DFAC4;
    case 144u: goto L_088DFAD8;
    case 145u: goto L_088DFAEC;
    case 146u: goto L_088DFB0C;
    case 147u: goto L_088DFB1C;
    case 148u: goto L_088DFB20;
    case 149u: goto L_088DFB40;
    case 150u: goto L_088DFB44;
    case 151u: goto L_088DFB54;
    case 152u: goto L_088DFB64;
    case 153u: goto L_088DFB6C;
    case 154u: goto L_088DFB7C;
    case 155u: goto L_088DFB90;
    case 156u: goto L_088DFBA4;
    case 157u: goto L_088DFBB0;
    case 158u: goto L_088DFBCC;
    case 159u: goto L_088DFBD8;
    case 160u: goto L_088DFBEC;
    case 161u: goto L_088DFC08;
    case 162u: goto L_088DFC0C;
    case 163u: goto L_088DFC1C;
    case 164u: goto L_088DFC34;
    case 165u: goto L_088DFC38;
    case 166u: goto L_088DFC54;
    case 167u: goto L_088DFC5C;
    case 168u: goto L_088DFC78;
    case 169u: goto L_088DFCB0;
    case 170u: goto L_088DFCB8;
    case 171u: goto L_088DFCC8;
    case 172u: goto L_088DFCCC;
    case 173u: goto L_088DFCD0;
    case 174u: goto L_088DFD18;
    case 175u: goto L_088DFD30;
    case 176u: goto L_088DFD34;
    case 177u: goto L_088DFD70;
    case 178u: goto L_088DFDBC;
    case 179u: goto L_088DFDE4;
    case 180u: goto L_088DFDEC;
    case 181u: goto L_088DFDF4;
    case 182u: goto L_088DFE08;
    case 183u: goto L_088DFE10;
    case 184u: goto L_088DFE20;
    case 185u: goto L_088DFE28;
    case 186u: goto L_088DFE34;
    case 187u: goto L_088DFE40;
    case 188u: goto L_088DFE5C;
    case 189u: goto L_088DFE6C;
    case 190u: goto L_088DFEA0;
    case 191u: goto L_088DFEA8;
    case 192u: goto L_088DFEB8;
    case 193u: goto L_088DFEBC;
    case 194u: goto L_088DFED8;
    case 195u: goto L_088DFEE8;
    case 196u: goto L_088DFEF8;
    case 197u: goto L_088DFF0C;
    case 198u: goto L_088DFF1C;
    case 199u: goto L_088DFF4C;
    case 200u: goto L_088DFF5C;
    case 201u: goto L_088DFF80;
    case 202u: goto L_088DFF84;
    case 203u: goto L_088DFF8C;
    case 204u: goto L_088DFF94;
    case 205u: goto L_088DFFA4;
    case 206u: goto L_088DFFB4;
    case 207u: goto L_088DFFEC;
    case 208u: goto L_088DFFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088DF000:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_088DF018;
      }
      goto L_088DF008;
    }
L_088DF008:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_088DF014;
      }
      goto L_088DF010;
    }
L_088DF010:
    aot_gpr[19] = (0u | 1u);
    goto L_088DF014;
L_088DF014:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088DF018;
L_088DF018:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DF04C;
      }
      goto L_088DF020;
    }
L_088DF020:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 195u, 0x088DEFD0u>(ctx, &aot_mem); return;
      }
      goto L_088DF028;
    }
L_088DF028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF04C;
      }
      goto L_088DF030;
    }
L_088DF030:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF04C;
      }
      goto L_088DF038;
    }
L_088DF038:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088DF044u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088DF044u) goto L_088DF044;
    return;
L_088DF044:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u | 1u);
    goto L_088DF04C;
L_088DF04C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF170;
      }
      goto L_088DF054;
    }
L_088DF054:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF170;
      }
      goto L_088DF05C;
    }
L_088DF05C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[30] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF118;
      }
      goto L_088DF068;
    }
L_088DF068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (20224u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_088DF08C;
      }
      goto L_088DF080;
    }
L_088DF080:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_088DF08C;
L_088DF08C:
    aot_gpr[4] = (17530u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = aot_fpr[12] - aot_fpr[13];
        goto L_088DF0BC;
    }
    goto L_088DF0A8;
L_088DF0A8:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_088DF0D4;
      }
      goto L_088DF0BC;
    }
L_088DF0BC:
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    goto L_088DF0D4;
L_088DF0D4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_088DF0E4;
      }
      goto L_088DF0DC;
    }
L_088DF0DC:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_088DF0E4;
L_088DF0E4:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DF118;
      }
      goto L_088DF10C;
    }
L_088DF10C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088DF118;
L_088DF118:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088DF128u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088DF128u) goto L_088DF128;
    return;
L_088DF128:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF154;
      }
      goto L_088DF134;
    }
L_088DF134:
    aot_gpr[4] = (aot_gpr[30] ^ 2u);
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088DF150u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 186u, 0x088DEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF150u) goto L_088DF150;
    return;
L_088DF150:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088DF154;
L_088DF154:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF170;
      }
      goto L_088DF15C;
    }
L_088DF15C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088DF174;
      }
      goto L_088DF170;
    }
L_088DF170:
    aot_gpr[2] = (0u | 0u);
    goto L_088DF174;
L_088DF174:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF1A4:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF1E0;
      }
      goto L_088DF1AC;
    }
L_088DF1AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(38)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088DF29C;
      }
      goto L_088DF1E0;
    }
L_088DF1E0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF220;
      }
      goto L_088DF1EC;
    }
L_088DF1EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(38)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088DF29C;
      }
      goto L_088DF220;
    }
L_088DF220:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF260;
      }
      goto L_088DF22C;
    }
L_088DF22C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(38)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088DF29C;
      }
      goto L_088DF260;
    }
L_088DF260:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF29C;
      }
      goto L_088DF26C;
    }
L_088DF26C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(38)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088DF29C;
L_088DF29C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF2A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DF2E8u);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DF2E8u) goto L_088DF2E8;
    return;
L_088DF2E8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF300;
      }
      goto L_088DF2F4;
    }
L_088DF2F4:
    aot_gpr[31] = (0x088DF2FCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 10u, 0x08944134u>(ctx, &aot_mem) && ctx.pc == 0x088DF2FCu) goto L_088DF2FC;
    return;
L_088DF2FC:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_088DF300;
L_088DF300:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (0u | 128u);
    aot_gpr[7] = (0u | 4u);
    aot_gpr[8] = (0u | 776u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088DF324u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 191u, 0x08943E00u>(ctx, &aot_mem) && ctx.pc == 0x088DF324u) goto L_088DF324;
    return;
L_088DF324:
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
L_088DF33C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF374;
      }
      goto L_088DF358;
    }
L_088DF358:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088DF374u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DF374u) goto L_088DF374;
    return;
L_088DF374:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF388:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[7] = (0u | 0u);
    goto L_088DF39C;
L_088DF39C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_088DF3F4;
      }
      goto L_088DF3A4;
    }
L_088DF3A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x088DF3C0u);
    aot_gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x088DF3C0u) goto L_088DF3C0;
    return;
L_088DF3C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DF3DCu);
    aot_gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x088DF3DCu) goto L_088DF3DC;
    return;
L_088DF3DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088DF440;
      }
      goto L_088DF3F4;
    }
L_088DF3F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x088DF410u);
    aot_gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF410u) goto L_088DF410;
    return;
L_088DF410:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DF42Cu);
    aot_gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF42Cu) goto L_088DF42C;
    return;
L_088DF42C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2216u << 16u);
    goto L_088DF440;
L_088DF440:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DF39C;
      }
      goto L_088DF450;
    }
L_088DF450:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF45C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088DF47C;
L_088DF47C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF4CC;
      }
      goto L_088DF488;
    }
L_088DF488:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF4C0;
      }
      goto L_088DF490;
    }
L_088DF490:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 1024u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088DF4A4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DF4A4u) goto L_088DF4A4;
    return;
L_088DF4A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088DF4BCu);
    aot_gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DF4BCu) goto L_088DF4BC;
    return;
L_088DF4BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088DF4C0;
L_088DF4C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    goto L_088DF4CC;
L_088DF4CC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DF47C;
      }
      goto L_088DF4DC;
    }
L_088DF4DC:
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
L_088DF4F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088DF50C;
L_088DF50C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF540;
      }
      goto L_088DF518;
    }
L_088DF518:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[31] = (0x088DF528u);
    aot_gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DF528u) goto L_088DF528;
    return;
L_088DF528:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 1024u);
    aot_gpr[31] = (0x088DF540u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DF540u) goto L_088DF540;
    return;
L_088DF540:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DF50C;
      }
      goto L_088DF550;
    }
L_088DF550:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF564:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(76));
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(108));
    aot_gpr[17] = (2216u << 16u);
    goto L_088DF594;
L_088DF594:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF5B0;
      }
      goto L_088DF5A0;
    }
L_088DF5A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DF5ACu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DF5ACu) goto L_088DF5AC;
    return;
L_088DF5AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(76), 0u);
    goto L_088DF5B0;
L_088DF5B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF5CC;
      }
      goto L_088DF5BC;
    }
L_088DF5BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DF5C8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DF5C8u) goto L_088DF5C8;
    return;
L_088DF5C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(108), 0u);
    goto L_088DF5CC;
L_088DF5CC:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[20] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DF594;
      }
      goto L_088DF5E4;
    }
L_088DF5E4:
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
L_088DF604:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (0u | 32768u);
    goto L_088DF620;
L_088DF620:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_088DF660;
      }
      goto L_088DF628;
    }
L_088DF628:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x088DF644u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x088DF644u) goto L_088DF644;
    return;
L_088DF644:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088DF694;
      }
      goto L_088DF660;
    }
L_088DF660:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x088DF67Cu);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF67Cu) goto L_088DF67C;
    return;
L_088DF67C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2216u << 16u);
    goto L_088DF694;
L_088DF694:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DF620;
      }
      goto L_088DF6A4;
    }
L_088DF6A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF6B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (0u | 32768u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_088DF6D8;
L_088DF6D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DF70C;
      }
      goto L_088DF6E4;
    }
L_088DF6E4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF70C;
      }
      goto L_088DF6EC;
    }
L_088DF6EC:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF70C;
      }
      goto L_088DF6F4;
    }
L_088DF6F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x088DF708u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DF708u) goto L_088DF708;
    return;
L_088DF708:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088DF70C;
L_088DF70C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF720;
      }
      goto L_088DF714;
    }
L_088DF714:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    goto L_088DF720;
L_088DF720:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DF6D8;
      }
      goto L_088DF730;
    }
L_088DF730:
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
L_088DF74C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (0u | 32768u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_088DF76C;
L_088DF76C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF790;
      }
      goto L_088DF778;
    }
L_088DF778:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF790;
      }
      goto L_088DF784;
    }
L_088DF784:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x088DF790u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DF790u) goto L_088DF790;
    return;
L_088DF790:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DF76C;
      }
      goto L_088DF7A0;
    }
L_088DF7A0:
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
L_088DF7B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(92));
    aot_gpr[16] = (2216u << 16u);
    goto L_088DF7E0;
L_088DF7E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF7FC;
      }
      goto L_088DF7EC;
    }
L_088DF7EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DF7F8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DF7F8u) goto L_088DF7F8;
    return;
L_088DF7F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(92), 0u);
    goto L_088DF7FC;
L_088DF7FC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DF7E0;
      }
      goto L_088DF810;
    }
L_088DF810:
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
L_088DF82C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[7] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (255u << 16u);
    aot_gpr[3] = (aot_gpr[8] & 255u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[12] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(1)));
    aot_gpr[13] = (65409u << 16u);
    aot_gpr[6] = (aot_gpr[14] & aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[14] & 65280u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(2)));
    aot_gpr[15] = (aot_gpr[13] + static_cast<std::uint32_t>(-32640));
    aot_gpr[6] = (aot_gpr[6] >> 16u);
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    aot_gpr[8] = (aot_gpr[14] & 255u);
    { const bool branch_taken = aot_gpr[14] != aot_gpr[15];
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DF8B0;
      }
      goto L_088DF894;
    }
L_088DF894:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[10] = (aot_gpr[10] << 2u);
    aot_gpr[12] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(1)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(2)));
    goto L_088DF8B0;
L_088DF8B0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[8] = (ctx.lo);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[8]) >> 8u));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF8CC;
      }
      goto L_088DF8C8;
    }
L_088DF8C8:
    aot_gpr[8] = (0u | 255u);
    goto L_088DF8CC;
L_088DF8CC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (ctx.lo);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 8u));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF8E8;
      }
      goto L_088DF8E4;
    }
L_088DF8E4:
    aot_gpr[7] = (0u | 255u);
    goto L_088DF8E8;
L_088DF8E8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (ctx.lo);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 8u));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[6]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF904;
      }
      goto L_088DF900;
    }
L_088DF900:
    aot_gpr[6] = (0u | 255u);
    goto L_088DF904;
L_088DF904:
    { const bool branch_taken = aot_gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF944;
      }
      goto L_088DF90C;
    }
L_088DF90C:
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[5] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u | 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 168u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088DFA04;
      }
      goto L_088DF944;
    }
L_088DF944:
    aot_gpr[13] = (aot_gpr[13] << 2u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF9D8;
      }
      goto L_088DF958;
    }
L_088DF958:
    aot_gpr[10] = (aot_gpr[11] + aot_gpr[9]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] - aot_gpr[5]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
      if (branch_taken) {
          goto L_088DF9C8;
      }
      goto L_088DF970;
    }
L_088DF970:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF9C8;
      }
      goto L_088DF97C;
    }
L_088DF97C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(1)));
    aot_gpr[3] = (aot_gpr[2] - aot_gpr[5]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
      if (branch_taken) {
          goto L_088DF9C8;
      }
      goto L_088DF990;
    }
L_088DF990:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF9C8;
      }
      goto L_088DF99C;
    }
L_088DF99C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (aot_gpr[10] - aot_gpr[5]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[5]);
      if (branch_taken) {
          goto L_088DF9C8;
      }
      goto L_088DF9B0;
    }
L_088DF9B0:
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF9C8;
      }
      goto L_088DF9BC;
    }
L_088DF9BC:
    aot_gpr[2] = (aot_gpr[9] >> 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] & 255u);
      if (branch_taken) {
          goto L_088DFA18;
      }
      goto L_088DF9C8;
    }
L_088DF9C8:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF958;
      }
      goto L_088DF9D8;
    }
L_088DF9D8:
    aot_gpr[5] = (0u | 168u);
    aot_gpr[9] = (aot_gpr[11] + aot_gpr[13]);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (0u | 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_088DFA04;
L_088DFA04:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFA14;
      }
      goto L_088DFA0C;
    }
L_088DFA0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_088DFA14;
L_088DFA14:
    aot_gpr[2] = (aot_gpr[6] & 255u);
    goto L_088DFA18;
L_088DFA18:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFA20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[9] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_088DFA8C;
      }
      goto L_088DFA70;
    }
L_088DFA70:
    aot_gpr[16] = (aot_gpr[5] << 2u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088DFA94;
      }
      goto L_088DFA84;
    }
L_088DFA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFD34;
      }
      goto L_088DFA8C;
    }
L_088DFA8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088DFD34;
      }
      goto L_088DFA94;
    }
L_088DFA94:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (15267u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    aot_gpr[10] = (16128u << 16u);
    aot_gpr[5] = (16896u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[10]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_088DFAC4;
      }
      goto L_088DFABC;
    }
L_088DFABC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088DFAC4;
L_088DFAC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(26)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(26)));
      if (branch_taken) {
          goto L_088DFB7C;
      }
      goto L_088DFAD8;
    }
L_088DFAD8:
    aot_gpr[10] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_088DFB7C;
      }
      goto L_088DFAEC;
    }
L_088DFAEC:
    aot_gpr[2] = (aot_gpr[8] | 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[8] = (0u | 0u);
    aot_gpr[11] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (ctx.lo);
    goto L_088DFB0C;
L_088DFB0C:
    aot_gpr[12] = (0u | 0u);
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[12]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_088DFB54;
      }
      goto L_088DFB1C;
    }
L_088DFB1C:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    goto L_088DFB20;
L_088DFB20:
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[8]);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[3]);
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[13]));
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DFB44;
      }
      goto L_088DFB40;
    }
L_088DFB40:
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    goto L_088DFB44;
L_088DFB44:
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[12]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    if (aot_gpr[13] != 0u) {
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
        goto L_088DFB20;
    }
    goto L_088DFB54;
L_088DFB54:
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[11]);
      if (branch_taken) {
          goto L_088DFB6C;
      }
      goto L_088DFB64;
    }
L_088DFB64:
    aot_gpr[9] = (aot_gpr[9] - aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[2]);
    goto L_088DFB6C;
L_088DFB6C:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFB0C;
      }
      goto L_088DFB7C;
    }
L_088DFB7C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25184)));
      if (branch_taken) {
          goto L_088DFBA4;
      }
      goto L_088DFB90;
    }
L_088DFB90:
    aot_gpr[4] = (17024u << 16u);
    aot_gpr[19] = (0u | 128u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 64u);
      if (branch_taken) {
          goto L_088DFBB0;
      }
      goto L_088DFBA4;
    }
L_088DFBA4:
    aot_gpr[19] = (0u | 64u);
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[20] = (0u | 32u);
    goto L_088DFBB0;
L_088DFBB0:
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[18]);
    aot_fpr[20] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[20])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DFBCCu);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088DFBCCu) goto L_088DFBCC;
    return;
L_088DFBCC:
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x088DFBD8u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088DFBD8u) goto L_088DFBD8;
    return;
L_088DFBD8:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088DFC0C;
      }
      goto L_088DFBEC;
    }
L_088DFBEC:
    aot_gpr[4] = (48035u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFC0C;
      }
      goto L_088DFC08;
    }
L_088DFC08:
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    goto L_088DFC0C;
L_088DFC0C:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (48035u << 16u);
      if (branch_taken) {
          goto L_088DFC38;
      }
      goto L_088DFC1C;
    }
L_088DFC1C:
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFC38;
      }
      goto L_088DFC34;
    }
L_088DFC34:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    goto L_088DFC38;
L_088DFC38:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[28] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[28] = fs * ft; }
      if (branch_taken) {
          goto L_088DFD30;
      }
      goto L_088DFC54;
    }
L_088DFC54:
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]) ^ 0x80000000u);
    aot_gpr[5] = (aot_gpr[4] - aot_gpr[20]);
    goto L_088DFC5C;
L_088DFC5C:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const bool branch_taken = aot_gpr[6] == 0u;
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
      if (branch_taken) {
          goto L_088DFD18;
      }
      goto L_088DFC78;
    }
L_088DFC78:
    aot_gpr[6] = (aot_gpr[5] - aot_gpr[19]);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[17] = aot_fpr[17] + aot_fpr[14];
    aot_fpr[16] = aot_fpr[16] - aot_fpr[15];
    aot_fpr[17] = aot_fpr[28] + aot_fpr[17];
    aot_fpr[19] = aot_fpr[13] + aot_fpr[16];
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[26] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
      if (branch_taken) {
          goto L_088DFCB8;
      }
      goto L_088DFCB0;
    }
L_088DFCB0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[16] = aot_fpr[16] - aot_fpr[20];
      if (branch_taken) {
          goto L_088DFCCC;
      }
      goto L_088DFCB8;
    }
L_088DFCB8:
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
        goto L_088DFCD0;
    }
    goto L_088DFCC8;
L_088DFCC8:
    aot_fpr[16] = aot_fpr[20] + aot_fpr[16];
    goto L_088DFCCC;
L_088DFCCC:
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    goto L_088DFCD0;
L_088DFCD0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[20]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    aot_gpr[7] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[19]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DFC78;
      }
      goto L_088DFD18;
    }
L_088DFD18:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 16u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] - aot_gpr[20]);
      if (branch_taken) {
          goto L_088DFC5C;
      }
      goto L_088DFD30;
    }
L_088DFD30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    goto L_088DFD34;
L_088DFD34:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFD70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[30] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[8] & 255u);
    aot_gpr[4] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[23] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088DFF1C;
      }
      goto L_088DFDBC;
    }
L_088DFDBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (aot_gpr[23] << 2u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(26)));
    aot_gpr[20] = (aot_gpr[30] + aot_gpr[20]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (0u | 4u);
    aot_gpr[21] = (0u | 2u);
    aot_gpr[10] = (0u | 64u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[10];
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_088DFDEC;
      }
      goto L_088DFDE4;
    }
L_088DFDE4:
    aot_gpr[22] = (0u | 2u);
    aot_gpr[21] = (0u | 1u);
    goto L_088DFDEC;
L_088DFDEC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE10;
      }
      goto L_088DFDF4;
    }
L_088DFDF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (0u | 256u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_088DFE10;
      }
      goto L_088DFE08;
    }
L_088DFE08:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[21]);
    goto L_088DFE10;
L_088DFE10:
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088DFEA8;
      }
      goto L_088DFE20;
    }
L_088DFE20:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE6C;
      }
      goto L_088DFE28;
    }
L_088DFE28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE6C;
      }
      goto L_088DFE34;
    }
L_088DFE34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE6C;
      }
      goto L_088DFE40;
    }
L_088DFE40:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088DFE5Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DFE5Cu) goto L_088DFE5C;
    return;
L_088DFE5C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(26)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(124)));
    goto L_088DFE6C;
L_088DFE6C:
    aot_gpr[11] = (aot_gpr[7] | 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(42)));
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (ctx.lo);
    aot_gpr[31] = (0x088DFEA0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 191u, 0x08943E00u>(ctx, &aot_mem) && ctx.pc == 0x088DFEA0u) goto L_088DFEA0;
    return;
L_088DFEA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_088DFEBC;
      }
      goto L_088DFEA8;
    }
L_088DFEA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(144)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088DFEB8u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 200u, 0x08943F24u>(ctx, &aot_mem) && ctx.pc == 0x088DFEB8u) goto L_088DFEB8;
    return;
L_088DFEB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(168)));
    goto L_088DFEBC;
L_088DFEBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[30] + aot_gpr[23]);
    aot_gpr[30] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088DFF1C;
      }
      goto L_088DFED8;
    }
L_088DFED8:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFF0C;
      }
      goto L_088DFEE8;
    }
L_088DFEE8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088DFEF8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 55u, 0x08942578u>(ctx, &aot_mem) && ctx.pc == 0x088DFEF8u) goto L_088DFEF8;
    return;
L_088DFEF8:
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DFEE8;
      }
      goto L_088DFF0C;
    }
L_088DFF0C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFED8;
      }
      goto L_088DFF1C;
    }
L_088DFF1C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFF4C:
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (aot_gpr[9] & 255u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 8u, 0x088E00C4u>(ctx, &aot_mem); return;
      }
      goto L_088DFF5C;
    }
L_088DFF5C:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(38)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(180)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[11]) >> 4u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 8u, 0x088E00C4u>(ctx, &aot_mem); return;
      }
      goto L_088DFF80;
    }
L_088DFF80:
    aot_gpr[2] = (aot_gpr[11] + static_cast<std::uint32_t>(-1));
    goto L_088DFF84;
L_088DFF84:
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 4u, 0x088E0058u>(ctx, &aot_mem); return;
      }
      goto L_088DFF8C;
    }
L_088DFF8C:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFFF4;
      }
      goto L_088DFF94;
    }
L_088DFF94:
    aot_gpr[13] = (0u | 0u);
    aot_gpr[3] = (aot_gpr[13] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (aot_gpr[4] >> 3u);
      if (branch_taken) {
          goto L_088DFFEC;
      }
      goto L_088DFFA4;
    }
L_088DFFA4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (aot_gpr[4] & 7u);
    aot_gpr[3] = (aot_gpr[3] << 4u);
    aot_gpr[12] = (ctx.lo);
    goto L_088DFFB4;
L_088DFFB4:
    aot_gpr[14] = (aot_gpr[13] >> 4u);
    aot_gpr[14] = (aot_gpr[14] + aot_gpr[12]);
    aot_gpr[14] = (aot_gpr[14] << 7u);
    aot_gpr[15] = (aot_gpr[13] & 15u);
    aot_gpr[14] = (aot_gpr[14] + aot_gpr[15]);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[14] = (aot_gpr[14] + aot_gpr[3]);
    aot_gpr[14] = (aot_gpr[15] + aot_gpr[14]);
    aot_gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0))))));
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[14]));
    aot_gpr[14] = (aot_gpr[13] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[14] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DFFB4;
      }
      goto L_088DFFEC;
    }
L_088DFFEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 7u, 0x088E00B4u>(ctx, &aot_mem); return;
      }
      goto L_088DFFF4;
    }
L_088DFFF4:
    aot_gpr[12] = (0u | 0u);
    aot_gpr[3] = (aot_gpr[12] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (aot_gpr[10] - aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 3u, 0x088E0050u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 2u, 0x088E0004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0219(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0219_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_219(Runtime &runtime) {
    runtime.register_generated_unit(219u, 0x088DF000u, 4096u, &recomp_unit_0219, &recomp_unit_0219_entry);
    runtime.register_function(0x088DF000u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF008u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF010u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF014u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF018u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF020u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF028u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF030u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF038u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF044u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF04Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF054u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF05Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF068u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF080u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF08Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF0A8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF0BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF0D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF0DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF0E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF10Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF118u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF128u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF134u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF150u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF154u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF15Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF170u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF174u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF1A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF1ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF1E0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF1ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF220u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF22Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF260u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF26Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF29Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF2A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF2E8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF2F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF2FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF300u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF324u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF33Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF358u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF374u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF388u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF39Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF3A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF3C0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF3DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF3F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF410u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF42Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF440u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF450u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF45Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF47Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF488u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF490u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF4A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF4BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF4C0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF4CCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF4DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF4F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF50Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF518u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF528u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF540u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF550u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF564u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF594u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF5A0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF5ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF5B0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF5BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF5C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF5CCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF5E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF604u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF620u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF628u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF644u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF660u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF67Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF694u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF6A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF6B0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF6D8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF6E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF6ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF6F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF708u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF70Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF714u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF720u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF730u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF74Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF76Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF778u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF784u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF790u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF7A0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF7B8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF7E0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF7ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF7F8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF7FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF810u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF82Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF894u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF8B0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF8C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF8CCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF8E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF8E8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF900u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF904u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF90Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF944u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF958u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF970u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF97Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF990u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF99Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF9B0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF9BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF9C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DF9D8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFA04u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFA0Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFA14u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFA18u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFA20u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFA70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFA84u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFA8Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFA94u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFABCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFAC4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFAD8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFAECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFB0Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFB1Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFB20u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFB40u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFB44u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFB54u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFB64u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFB6Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFB7Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFB90u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFBA4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFBB0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFBCCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFBD8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFBECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFC08u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFC0Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFC1Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFC34u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFC38u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFC54u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFC5Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFC78u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFCB0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFCB8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFCC8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFCCCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFCD0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFD18u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFD30u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFD34u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFD70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFDBCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFDE4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFDECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFDF4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFE08u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFE10u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFE20u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFE28u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFE34u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFE40u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFE5Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFE6Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFEA0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFEA8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFEB8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFEBCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFED8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFEE8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFEF8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFF0Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFF1Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFF4Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFF5Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFF80u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFF84u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFF8Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFF94u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFFA4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFFB4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFFECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x088DFFF4u, &recomp_unit_0219, "recomp_unit_0219");
}
} // namespace psprecomp
