#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0184[1021] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0,
    0, 0, 8, 0, 9, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    14, 0, 15, 0, 16, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0,
    39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0,
    49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67,
    0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0,
    0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 84, 85, 0, 0, 86, 0, 0, 0, 0, 87, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 92, 0, 0,
    93, 0, 0, 0, 0, 0, 94, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 108, 109, 0, 0, 110, 0, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 114, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 120, 121, 0, 0, 122,
    0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 126, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 132, 133, 0,
    0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 138, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143, 144,
    145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 150, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0,
    155, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0,
    0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 178, 0, 0, 179, 0, 180, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0,
    186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 198, 0, 0, 199, 200, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 207, 0, 0,
    0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0,
    0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 225,
};
void recomp_unit_0184_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088BC000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0184[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BC000;
    case 2u: goto L_088BC014;
    case 3u: goto L_088BC044;
    case 4u: goto L_088BC04C;
    case 5u: goto L_088BC054;
    case 6u: goto L_088BC06C;
    case 7u: goto L_088BC070;
    case 8u: goto L_088BC088;
    case 9u: goto L_088BC090;
    case 10u: goto L_088BC094;
    case 11u: goto L_088BC0AC;
    case 12u: goto L_088BC0C8;
    case 13u: goto L_088BC0E8;
    case 14u: goto L_088BC100;
    case 15u: goto L_088BC108;
    case 16u: goto L_088BC110;
    case 17u: goto L_088BC114;
    case 18u: goto L_088BC128;
    case 19u: goto L_088BC140;
    case 20u: goto L_088BC154;
    case 21u: goto L_088BC15C;
    case 22u: goto L_088BC190;
    case 23u: goto L_088BC1A4;
    case 24u: goto L_088BC1B8;
    case 25u: goto L_088BC1C0;
    case 26u: goto L_088BC1D8;
    case 27u: goto L_088BC1E0;
    case 28u: goto L_088BC1E8;
    case 29u: goto L_088BC1F0;
    case 30u: goto L_088BC208;
    case 31u: goto L_088BC210;
    case 32u: goto L_088BC218;
    case 33u: goto L_088BC22C;
    case 34u: goto L_088BC248;
    case 35u: goto L_088BC250;
    case 36u: goto L_088BC268;
    case 37u: goto L_088BC270;
    case 38u: goto L_088BC278;
    case 39u: goto L_088BC280;
    case 40u: goto L_088BC298;
    case 41u: goto L_088BC2A0;
    case 42u: goto L_088BC2A8;
    case 43u: goto L_088BC2B4;
    case 44u: goto L_088BC314;
    case 45u: goto L_088BC34C;
    case 46u: goto L_088BC360;
    case 47u: goto L_088BC368;
    case 48u: goto L_088BC378;
    case 49u: goto L_088BC380;
    case 50u: goto L_088BC390;
    case 51u: goto L_088BC3A0;
    case 52u: goto L_088BC3AC;
    case 53u: goto L_088BC3B4;
    case 54u: goto L_088BC3BC;
    case 55u: goto L_088BC3C4;
    case 56u: goto L_088BC3D4;
    case 57u: goto L_088BC3DC;
    case 58u: goto L_088BC400;
    case 59u: goto L_088BC418;
    case 60u: goto L_088BC428;
    case 61u: goto L_088BC440;
    case 62u: goto L_088BC448;
    case 63u: goto L_088BC44C;
    case 64u: goto L_088BC45C;
    case 65u: goto L_088BC468;
    case 66u: goto L_088BC474;
    case 67u: goto L_088BC47C;
    case 68u: goto L_088BC494;
    case 69u: goto L_088BC4A0;
    case 70u: goto L_088BC4B0;
    case 71u: goto L_088BC4F4;
    case 72u: goto L_088BC53C;
    case 73u: goto L_088BC544;
    case 74u: goto L_088BC55C;
    case 75u: goto L_088BC564;
    case 76u: goto L_088BC56C;
    case 77u: goto L_088BC584;
    case 78u: goto L_088BC58C;
    case 79u: goto L_088BC59C;
    case 80u: goto L_088BC5B4;
    case 81u: goto L_088BC5B8;
    case 82u: goto L_088BC5C8;
    case 83u: goto L_088BC5F8;
    case 84u: goto L_088BC614;
    case 85u: goto L_088BC618;
    case 86u: goto L_088BC624;
    case 87u: goto L_088BC638;
    case 88u: goto L_088BC63C;
    case 89u: goto L_088BC64C;
    case 90u: goto L_088BC654;
    case 91u: goto L_088BC670;
    case 92u: goto L_088BC674;
    case 93u: goto L_088BC680;
    case 94u: goto L_088BC698;
    case 95u: goto L_088BC69C;
    case 96u: goto L_088BC6AC;
    case 97u: goto L_088BC6B4;
    case 98u: goto L_088BC6F4;
    case 99u: goto L_088BC70C;
    case 100u: goto L_088BC714;
    case 101u: goto L_088BC730;
    case 102u: goto L_088BC754;
    case 103u: goto L_088BC774;
    case 104u: goto L_088BC7B0;
    case 105u: goto L_088BC7BC;
    case 106u: goto L_088BC7CC;
    case 107u: goto L_088BC7E0;
    case 108u: goto L_088BC7E4;
    case 109u: goto L_088BC7E8;
    case 110u: goto L_088BC7F4;
    case 111u: goto L_088BC800;
    case 112u: goto L_088BC810;
    case 113u: goto L_088BC824;
    case 114u: goto L_088BC828;
    case 115u: goto L_088BC82C;
    case 116u: goto L_088BC838;
    case 117u: goto L_088BC844;
    case 118u: goto L_088BC854;
    case 119u: goto L_088BC868;
    case 120u: goto L_088BC86C;
    case 121u: goto L_088BC870;
    case 122u: goto L_088BC87C;
    case 123u: goto L_088BC888;
    case 124u: goto L_088BC898;
    case 125u: goto L_088BC8AC;
    case 126u: goto L_088BC8B0;
    case 127u: goto L_088BC8B4;
    case 128u: goto L_088BC8C0;
    case 129u: goto L_088BC8CC;
    case 130u: goto L_088BC8DC;
    case 131u: goto L_088BC8F0;
    case 132u: goto L_088BC8F4;
    case 133u: goto L_088BC8F8;
    case 134u: goto L_088BC904;
    case 135u: goto L_088BC910;
    case 136u: goto L_088BC920;
    case 137u: goto L_088BC934;
    case 138u: goto L_088BC938;
    case 139u: goto L_088BC93C;
    case 140u: goto L_088BC948;
    case 141u: goto L_088BC954;
    case 142u: goto L_088BC964;
    case 143u: goto L_088BC978;
    case 144u: goto L_088BC97C;
    case 145u: goto L_088BC980;
    case 146u: goto L_088BC98C;
    case 147u: goto L_088BC998;
    case 148u: goto L_088BC9A8;
    case 149u: goto L_088BC9BC;
    case 150u: goto L_088BC9C0;
    case 151u: goto L_088BC9C4;
    case 152u: goto L_088BC9D0;
    case 153u: goto L_088BC9DC;
    case 154u: goto L_088BC9EC;
    case 155u: goto L_088BCA00;
    case 156u: goto L_088BCA04;
    case 157u: goto L_088BCA14;
    case 158u: goto L_088BCA28;
    case 159u: goto L_088BCA34;
    case 160u: goto L_088BCA38;
    case 161u: goto L_088BCA60;
    case 162u: goto L_088BCAA8;
    case 163u: goto L_088BCAB4;
    case 164u: goto L_088BCAC4;
    case 165u: goto L_088BCAE8;
    case 166u: goto L_088BCAF8;
    case 167u: goto L_088BCB04;
    case 168u: goto L_088BCB1C;
    case 169u: goto L_088BCB34;
    case 170u: goto L_088BCB50;
    case 171u: goto L_088BCB60;
    case 172u: goto L_088BCB70;
    case 173u: goto L_088BCB98;
    case 174u: goto L_088BCB9C;
    case 175u: goto L_088BCBAC;
    case 176u: goto L_088BCBBC;
    case 177u: goto L_088BCBD4;
    case 178u: goto L_088BCC04;
    case 179u: goto L_088BCC10;
    case 180u: goto L_088BCC18;
    case 181u: goto L_088BCC1C;
    case 182u: goto L_088BCC24;
    case 183u: goto L_088BCC30;
    case 184u: goto L_088BCC64;
    case 185u: goto L_088BCC78;
    case 186u: goto L_088BCC80;
    case 187u: goto L_088BCC90;
    case 188u: goto L_088BCCAC;
    case 189u: goto L_088BCCBC;
    case 190u: goto L_088BCCD4;
    case 191u: goto L_088BCCFC;
    case 192u: goto L_088BCD0C;
    case 193u: goto L_088BCD1C;
    case 194u: goto L_088BCD3C;
    case 195u: goto L_088BCD4C;
    case 196u: goto L_088BCD94;
    case 197u: goto L_088BCDA4;
    case 198u: goto L_088BCDA8;
    case 199u: goto L_088BCDB4;
    case 200u: goto L_088BCDB8;
    case 201u: goto L_088BCDC8;
    case 202u: goto L_088BCDD0;
    case 203u: goto L_088BCDD8;
    case 204u: goto L_088BCDE8;
    case 205u: goto L_088BCDF0;
    case 206u: goto L_088BCE70;
    case 207u: goto L_088BCE74;
    case 208u: goto L_088BCE94;
    case 209u: goto L_088BCE9C;
    case 210u: goto L_088BCEA8;
    case 211u: goto L_088BCEB4;
    case 212u: goto L_088BCEE8;
    case 213u: goto L_088BCEF4;
    case 214u: goto L_088BCF0C;
    case 215u: goto L_088BCF14;
    case 216u: goto L_088BCF50;
    case 217u: goto L_088BCF88;
    case 218u: goto L_088BCF94;
    case 219u: goto L_088BCF9C;
    case 220u: goto L_088BCFAC;
    case 221u: goto L_088BCFB4;
    case 222u: goto L_088BCFCC;
    case 223u: goto L_088BCFDC;
    case 224u: goto L_088BCFE8;
    case 225u: goto L_088BCFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088BC000:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC04C;
      }
      goto L_088BC014;
    }
L_088BC014:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088BC054;
    }
    goto L_088BC044;
L_088BC044:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BC070;
      }
      goto L_088BC04C;
    }
L_088BC04C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088BC094;
      }
      goto L_088BC054;
    }
L_088BC054:
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC088;
      }
      goto L_088BC06C;
    }
L_088BC06C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088BC070;
L_088BC070:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC090;
      }
      goto L_088BC088;
    }
L_088BC088:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC094;
      }
      goto L_088BC090;
    }
L_088BC090:
    aot_gpr[2] = (0u | 0u);
    goto L_088BC094;
L_088BC094:
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
L_088BC0AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088BC0C8u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BC0C8u) goto L_088BC0C8;
    return;
L_088BC0C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(156)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BC108;
      }
      goto L_088BC0E8;
    }
L_088BC0E8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BC110;
      }
      goto L_088BC100;
    }
L_088BC100:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BC114;
      }
      goto L_088BC108;
    }
L_088BC108:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088BC114;
      }
      goto L_088BC110;
    }
L_088BC110:
    aot_gpr[2] = (0u | 0u);
    goto L_088BC114;
L_088BC114:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC128:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    goto L_088BC140;
L_088BC140:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BC140;
      }
      goto L_088BC154;
    }
L_088BC154:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC15C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088BC190u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BC190u) goto L_088BC190;
    return;
L_088BC190:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BC1A4;
      }
      goto L_088BC1A4;
    }
L_088BC1A4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BC1E0;
      }
      goto L_088BC1B8;
    }
L_088BC1B8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BC218;
      }
      goto L_088BC1C0;
    }
L_088BC1C0:
    aot_gpr[7] = (2188u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x088BC1D8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-16660));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 202u, 0x08A39C40u>(ctx, &aot_mem) && ctx.pc == 0x088BC1D8u) goto L_088BC1D8;
    return;
L_088BC1D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC218;
      }
      goto L_088BC1E0;
    }
L_088BC1E0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BC210;
      }
      goto L_088BC1E8;
    }
L_088BC1E8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC218;
      }
      goto L_088BC1F0;
    }
L_088BC1F0:
    aot_gpr[7] = (2188u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x088BC208u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-16212));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 202u, 0x08A39C40u>(ctx, &aot_mem) && ctx.pc == 0x088BC208u) goto L_088BC208;
    return;
L_088BC208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC218;
      }
      goto L_088BC210;
    }
L_088BC210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC218;
      }
      goto L_088BC218;
    }
L_088BC218:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC22C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2072)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BC270;
      }
      goto L_088BC248;
    }
L_088BC248:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BC2A8;
      }
      goto L_088BC250;
    }
L_088BC250:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (2188u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x088BC268u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-16660));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 202u, 0x08A39C40u>(ctx, &aot_mem) && ctx.pc == 0x088BC268u) goto L_088BC268;
    return;
L_088BC268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC2A8;
      }
      goto L_088BC270;
    }
L_088BC270:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BC2A0;
      }
      goto L_088BC278;
    }
L_088BC278:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC2A8;
      }
      goto L_088BC280;
    }
L_088BC280:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (2188u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x088BC298u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-16212));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 202u, 0x08A39C40u>(ctx, &aot_mem) && ctx.pc == 0x088BC298u) goto L_088BC298;
    return;
L_088BC298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC2A8;
      }
      goto L_088BC2A0;
    }
L_088BC2A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC2A8;
      }
      goto L_088BC2A8;
    }
L_088BC2A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC2B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_088BC4B0;
      }
      goto L_088BC314;
    }
L_088BC314:
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[4] = (18907u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] | 47616u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-7504));
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[23] = (32768u << 16u);
    goto L_088BC34C;
L_088BC34C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC390;
      }
      goto L_088BC360;
    }
L_088BC360:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    goto L_088BC368;
L_088BC368:
    aot_gpr[20] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088BC380;
      }
      goto L_088BC378;
    }
L_088BC378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC390;
      }
      goto L_088BC380;
    }
L_088BC380:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_088BC368;
      }
      goto L_088BC390;
    }
L_088BC390:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BC3D4;
      }
      goto L_088BC3A0;
    }
L_088BC3A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC3B4;
      }
      goto L_088BC3AC;
    }
L_088BC3AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC3D4;
      }
      goto L_088BC3B4;
    }
L_088BC3B4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088BC3C4;
      }
      goto L_088BC3BC;
    }
L_088BC3BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC3D4;
      }
      goto L_088BC3C4;
    }
L_088BC3C4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BC3A0;
      }
      goto L_088BC3D4;
    }
L_088BC3D4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC4A0;
      }
      goto L_088BC3DC;
    }
L_088BC3DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(52)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BC448;
      }
      goto L_088BC400;
    }
L_088BC400:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(28044)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_fpr[13] = aot_fpr[13] + aot_fpr[22];
        goto L_088BC418;
    }
    goto L_088BC418;
L_088BC418:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[14] = aot_fpr[14] + aot_fpr[22];
        goto L_088BC428;
    }
    goto L_088BC428;
L_088BC428:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BC44C;
      }
      goto L_088BC440;
    }
L_088BC440:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088BC44C;
      }
      goto L_088BC448;
    }
L_088BC448:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    goto L_088BC44C;
L_088BC44C:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[28];
        goto L_088BC468;
    }
    goto L_088BC45C;
L_088BC45C:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088BC474;
      }
      goto L_088BC468;
    }
L_088BC468:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    goto L_088BC474;
L_088BC474:
    aot_gpr[31] = (0x088BC47Cu);
    aot_gpr[30] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BC47Cu) goto L_088BC47C;
    return;
L_088BC47C:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x088BC494u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 40u, 0x0882C3D8u>(ctx, &aot_mem) && ctx.pc == 0x088BC494u) goto L_088BC494;
    return;
L_088BC494:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088BC4A0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_088BC15C;
L_088BC4A0:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC34C;
      }
      goto L_088BC4B0;
    }
L_088BC4B0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_088BC4F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC5C8;
      }
      goto L_088BC53C;
    }
L_088BC53C:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(104));
    aot_gpr[19] = (0u | 0u);
    goto L_088BC544;
L_088BC544:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC5B8;
      }
      goto L_088BC55C;
    }
L_088BC55C:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088BC5B8;
      }
      goto L_088BC564;
    }
L_088BC564:
    aot_gpr[31] = (0x088BC56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BC56Cu) goto L_088BC56C;
    return;
L_088BC56C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(104));
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC5B8;
      }
      goto L_088BC584;
    }
L_088BC584:
    aot_gpr[31] = (0x088BC58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BC58Cu) goto L_088BC58C;
    return;
L_088BC58C:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[31] = (0x088BC59Cu);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BC59Cu) goto L_088BC59C;
    return;
L_088BC59C:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC5B8;
      }
      goto L_088BC5B4;
    }
L_088BC5B4:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    goto L_088BC5B8;
L_088BC5B8:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_088BC544;
      }
      goto L_088BC5C8;
    }
L_088BC5C8:
    aot_gpr[2] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC5F8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC64C;
      }
      goto L_088BC614;
    }
L_088BC614:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    goto L_088BC618;
L_088BC618:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088BC63C;
      }
      goto L_088BC624;
    }
L_088BC624:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(144)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(144)));
    aot_gpr[9] = (aot_gpr[10] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC63C;
      }
      goto L_088BC638;
    }
L_088BC638:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088BC63C;
L_088BC63C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_088BC618;
      }
      goto L_088BC64C;
    }
L_088BC64C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC654:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC6AC;
      }
      goto L_088BC670;
    }
L_088BC670:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    goto L_088BC674;
L_088BC674:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088BC69C;
      }
      goto L_088BC680;
    }
L_088BC680:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(156)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BC69C;
      }
      goto L_088BC698;
    }
L_088BC698:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088BC69C;
L_088BC69C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_088BC674;
      }
      goto L_088BC6AC;
    }
L_088BC6AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC6B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC730;
      }
      goto L_088BC6F4;
    }
L_088BC6F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088BC70Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_088BC4F4;
L_088BC70C:
    aot_gpr[31] = (0x088BC714u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 97u, 0x088BA8C4u>(ctx, &aot_mem) && ctx.pc == 0x088BC714u) goto L_088BC714;
    return;
L_088BC714:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(144)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_088BC6F4;
      }
      goto L_088BC730;
    }
L_088BC730:
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
L_088BC754:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC774:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[21] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BC7E8;
      }
      goto L_088BC7B0;
    }
L_088BC7B0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088BC7BCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 186u, 0x08A4FE54u>(ctx, &aot_mem) && ctx.pc == 0x088BC7BCu) goto L_088BC7BC;
    return;
L_088BC7BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC7E4;
      }
      goto L_088BC7CC;
    }
L_088BC7CC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BC7E0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 204u, 0x08A4FF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC7E0u) goto L_088BC7E0;
    return;
L_088BC7E0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088BC7E4;
L_088BC7E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088BC7E8;
L_088BC7E8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC82C;
      }
      goto L_088BC7F4;
    }
L_088BC7F4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088BC800u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 187u, 0x08A4FE5Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC800u) goto L_088BC800;
    return;
L_088BC800:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC828;
      }
      goto L_088BC810;
    }
L_088BC810:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BC824u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 3u, 0x08A50034u>(ctx, &aot_mem) && ctx.pc == 0x088BC824u) goto L_088BC824;
    return;
L_088BC824:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088BC828;
L_088BC828:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_088BC82C;
L_088BC82C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC870;
      }
      goto L_088BC838;
    }
L_088BC838:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088BC844u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 188u, 0x08A4FE64u>(ctx, &aot_mem) && ctx.pc == 0x088BC844u) goto L_088BC844;
    return;
L_088BC844:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC86C;
      }
      goto L_088BC854;
    }
L_088BC854:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BC868u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 14u, 0x08A5013Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC868u) goto L_088BC868;
    return;
L_088BC868:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088BC86C;
L_088BC86C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088BC870;
L_088BC870:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC8B4;
      }
      goto L_088BC87C;
    }
L_088BC87C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088BC888u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 189u, 0x08A4FE6Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC888u) goto L_088BC888;
    return;
L_088BC888:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC8B0;
      }
      goto L_088BC898;
    }
L_088BC898:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BC8ACu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 25u, 0x08A50244u>(ctx, &aot_mem) && ctx.pc == 0x088BC8ACu) goto L_088BC8AC;
    return;
L_088BC8AC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088BC8B0;
L_088BC8B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_088BC8B4;
L_088BC8B4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC8F8;
      }
      goto L_088BC8C0;
    }
L_088BC8C0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088BC8CCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 190u, 0x08A4FE74u>(ctx, &aot_mem) && ctx.pc == 0x088BC8CCu) goto L_088BC8CC;
    return;
L_088BC8CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC8F4;
      }
      goto L_088BC8DC;
    }
L_088BC8DC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BC8F0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 36u, 0x08A5034Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC8F0u) goto L_088BC8F0;
    return;
L_088BC8F0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088BC8F4;
L_088BC8F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_088BC8F8;
L_088BC8F8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC93C;
      }
      goto L_088BC904;
    }
L_088BC904:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088BC910u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 191u, 0x08A4FE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC910u) goto L_088BC910;
    return;
L_088BC910:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC938;
      }
      goto L_088BC920;
    }
L_088BC920:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BC934u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 47u, 0x08A50454u>(ctx, &aot_mem) && ctx.pc == 0x088BC934u) goto L_088BC934;
    return;
L_088BC934:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088BC938;
L_088BC938:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_088BC93C;
L_088BC93C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC980;
      }
      goto L_088BC948;
    }
L_088BC948:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088BC954u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 192u, 0x08A4FE84u>(ctx, &aot_mem) && ctx.pc == 0x088BC954u) goto L_088BC954;
    return;
L_088BC954:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC97C;
      }
      goto L_088BC964;
    }
L_088BC964:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BC978u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 58u, 0x08A5055Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC978u) goto L_088BC978;
    return;
L_088BC978:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088BC97C;
L_088BC97C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_088BC980;
L_088BC980:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC9C4;
      }
      goto L_088BC98C;
    }
L_088BC98C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088BC998u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 193u, 0x08A4FE8Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC998u) goto L_088BC998;
    return;
L_088BC998:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BC9C0;
      }
      goto L_088BC9A8;
    }
L_088BC9A8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BC9BCu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 69u, 0x08A50664u>(ctx, &aot_mem) && ctx.pc == 0x088BC9BCu) goto L_088BC9BC;
    return;
L_088BC9BC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088BC9C0;
L_088BC9C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_088BC9C4;
L_088BC9C4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCA14;
      }
      goto L_088BC9D0;
    }
L_088BC9D0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088BC9DCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 194u, 0x08A4FE94u>(ctx, &aot_mem) && ctx.pc == 0x088BC9DCu) goto L_088BC9DC;
    return;
L_088BC9DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BCA04;
      }
      goto L_088BC9EC;
    }
L_088BC9EC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BCA00u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 80u, 0x08A5076Cu>(ctx, &aot_mem) && ctx.pc == 0x088BCA00u) goto L_088BCA00;
    return;
L_088BCA00:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088BCA04;
L_088BCA04:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCA14;
      }
      goto L_088BCA14;
    }
L_088BCA14:
    aot_gpr[4] = (0u & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_088BCA34;
      }
      goto L_088BCA28;
    }
L_088BCA28:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(28148), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088BCA38;
      }
      goto L_088BCA34;
    }
L_088BCA34:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(28148), static_cast<std::uint8_t>(0u));
    goto L_088BCA38;
L_088BCA38:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BCA60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-304));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[17]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[31]);
    if (aot_gpr[4] != 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088BCAA8;
    }
    goto L_088BCAA8;
L_088BCAA8:
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_088BCAB4;
    }
    goto L_088BCAB4;
L_088BCAB4:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088BCAE8;
      }
      goto L_088BCAC4;
    }
L_088BCAC4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCAC4;
      }
      goto L_088BCAE8;
    }
L_088BCAE8:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088BCBAC;
      }
      goto L_088BCAF8;
    }
L_088BCAF8:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[29] | 0u);
    aot_gpr[23] = (2216u << 16u);
    goto L_088BCB04;
L_088BCB04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088BCB1Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 140u, 0x088BDC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088BCB1Cu) goto L_088BCB1C;
    return;
L_088BCB1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(184)));
    aot_gpr[4] = (aot_gpr[4] & 8192u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCB9C;
      }
      goto L_088BCB34;
    }
L_088BCB34:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(220)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCB9C;
      }
      goto L_088BCB50;
    }
L_088BCB50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_088BCB60;
    }
    goto L_088BCB60;
L_088BCB60:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088BCB98;
      }
      goto L_088BCB70;
    }
L_088BCB70:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-32516), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088BCB70;
      }
      goto L_088BCB98;
    }
L_088BCB98:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088BCB9C;
L_088BCB9C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCB04;
      }
      goto L_088BCBAC;
    }
L_088BCBAC:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_088BCBD4;
      }
      goto L_088BCBBC;
    }
L_088BCBBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCBBC;
      }
      goto L_088BCBD4;
    }
L_088BCBD4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BCC04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCC18;
      }
      goto L_088BCC10;
    }
L_088BCC10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BCC1C;
      }
      goto L_088BCC18;
    }
L_088BCC18:
    aot_gpr[2] = (0u | 0u);
    goto L_088BCC1C;
L_088BCC1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BCC24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCC64;
      }
      goto L_088BCC30;
    }
L_088BCC30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088BCC78;
      }
      goto L_088BCC64;
    }
L_088BCC64:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088BCC78;
L_088BCC78:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BCC80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088BCDE8;
      }
      goto L_088BCC90;
    }
L_088BCC90:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[12] = (0u | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[12] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088BCD1C;
      }
      goto L_088BCCAC;
    }
L_088BCCAC:
    aot_gpr[9] = (16256u << 16u);
    aot_gpr[10] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    goto L_088BCCBC;
L_088BCCBC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[9] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BCD0C;
      }
      goto L_088BCCD4;
    }
L_088BCCD4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(48)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(220)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BCD0C;
      }
      goto L_088BCCFC;
    }
L_088BCCFC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(440)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    goto L_088BCD0C;
L_088BCD0C:
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[12] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCCBC;
      }
      goto L_088BCD1C;
    }
L_088BCD1C:
    aot_gpr[9] = (32639u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[9] | 65535u);
    aot_gpr[6] = (0u | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCDE8;
      }
      goto L_088BCD3C;
    }
L_088BCD3C:
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[9] = (16512u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    goto L_088BCD4C;
L_088BCD4C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 21u, 3u>();
    aot_gpr[9] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BCDD8;
      }
      goto L_088BCD94;
    }
L_088BCD94:
    aot_gpr[10] = (0u | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[11] = (0u | 1u);
      if (branch_taken) {
          goto L_088BCDC8;
      }
      goto L_088BCDA4;
    }
L_088BCDA4:
    aot_gpr[9] = (aot_gpr[29] | 0u);
    goto L_088BCDA8;
L_088BCDA8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BCDB8;
      }
      goto L_088BCDB4;
    }
L_088BCDB4:
    aot_gpr[11] = (0u | 0u);
    goto L_088BCDB8;
L_088BCDB8:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCDA8;
      }
      goto L_088BCDC8;
    }
L_088BCDC8:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCDD8;
      }
      goto L_088BCDD0;
    }
L_088BCDD0:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (aot_gpr[6] | 0u);
    goto L_088BCDD8;
L_088BCDD8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCD4C;
      }
      goto L_088BCDE8;
    }
L_088BCDE8:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BCDF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    aot_gpr[22] = (aot_gpr[8] & 255u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[30] = (aot_gpr[6] | 0u);
    aot_gpr[10] = (aot_gpr[7] | 0u);
    aot_gpr[23] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[10]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (32639u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] | 65535u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_088BCF0C;
      }
      goto L_088BCE70;
    }
L_088BCE70:
    aot_gpr[17] = (0u | 0u);
    goto L_088BCE74;
L_088BCE74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088BCE94u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 25u, 0x088BE0E4u>(ctx, &aot_mem) && ctx.pc == 0x088BCE94u) goto L_088BCE94;
    return;
L_088BCE94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCEF4;
      }
      goto L_088BCE9C;
    }
L_088BCE9C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088BCEA8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 86u, 0x088BD838u>(ctx, &aot_mem) && ctx.pc == 0x088BCEA8u) goto L_088BCEA8;
    return;
L_088BCEA8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BCEF4;
      }
      goto L_088BCEB4;
    }
L_088BCEB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BCEF4;
      }
      goto L_088BCEE8;
    }
L_088BCEE8:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088BCEF4;
L_088BCEF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCE74;
      }
      goto L_088BCF0C;
    }
L_088BCF0C:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCF50;
      }
      goto L_088BCF14;
    }
L_088BCF14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
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
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088BCF50;
L_088BCF50:
    aot_gpr[2] = (aot_gpr[20] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BCF88:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BCFE8;
      }
      goto L_088BCF94;
    }
L_088BCF94:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    goto L_088BCF9C;
L_088BCF9C:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (aot_gpr[9] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088BCFE8;
      }
      goto L_088BCFAC;
    }
L_088BCFAC:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCFE8;
      }
      goto L_088BCFB4;
    }
L_088BCFB4:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[8]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BCFDC;
      }
      goto L_088BCFCC;
    }
L_088BCFCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088BCFDC;
L_088BCFDC:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCF9C;
      }
      goto L_088BCFE8;
    }
L_088BCFE8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BCFF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    ctx.pc = 0x088BD000u; return;
}

void recomp_unit_0184(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0184_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_184(Runtime &runtime) {
    runtime.register_generated_unit(184u, 0x088BC000u, 4096u, &recomp_unit_0184, &recomp_unit_0184_entry);
    runtime.register_function(0x088BC000u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC014u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC044u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC04Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC054u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC06Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC070u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC088u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC090u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC094u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC0ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC0C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC0E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC100u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC108u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC110u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC114u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC128u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC140u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC154u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC15Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC190u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC1A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC1B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC1C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC1D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC1E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC1E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC1F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC208u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC210u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC218u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC22Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC248u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC250u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC268u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC270u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC278u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC280u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC298u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC2A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC2A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC2B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC314u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC34Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC360u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC368u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC378u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC380u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC390u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC3A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC3ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC3B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC3BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC3C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC3D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC3DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC400u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC418u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC428u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC440u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC448u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC44Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC45Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC468u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC474u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC47Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC494u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC4A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC4B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC4F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC53Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC544u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC55Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC564u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC56Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC584u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC58Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC59Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC5B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC5B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC5C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC5F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC614u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC618u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC624u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC638u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC63Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC64Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC654u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC670u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC674u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC680u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC698u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC69Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC6ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC6B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC6F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC70Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC714u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC730u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC754u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC774u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC7B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC7BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC7CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC7E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC7E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC7E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC7F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC800u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC810u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC824u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC828u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC82Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC838u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC844u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC854u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC868u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC86Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC870u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC87Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC888u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC898u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC8ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC8B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC8B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC8C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC8CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC8DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC8F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC8F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC8F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC904u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC910u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC920u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC934u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC938u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC93Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC948u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC954u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC964u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC978u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC97Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC980u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC98Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC998u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC9A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC9BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC9C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC9C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC9D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC9DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BC9ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCA00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCA04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCA14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCA28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCA34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCA38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCA60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCAA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCAB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCAC4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCAE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCAF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCB04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCB1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCB34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCB50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCB60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCB70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCB98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCB9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCBACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCBBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCBD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCC04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCC10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCC18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCC1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCC24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCC30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCC64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCC78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCC80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCC90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCCACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCCBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCCD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCCFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCD0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCD1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCD3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCD4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCD94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCDA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCDA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCDB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCDB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCDC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCDD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCDD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCDE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCDF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCE70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCE74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCE94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCE9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCEA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCEB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCEE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCEF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCF0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCF14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCF50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCF88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCF94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCF9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCFACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCFB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCFCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCFDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCFE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x088BCFF0u, &recomp_unit_0184, "recomp_unit_0184");
}
} // namespace psprecomp
