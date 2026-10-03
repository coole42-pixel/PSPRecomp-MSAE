#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0167[1019] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 9,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 12, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0,
    34, 0, 0, 0, 0, 0, 35, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44,
    0, 45, 0, 46, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 70, 0, 71, 0, 0, 0, 72, 0, 0,
    73, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 79, 0, 0, 80, 0, 81, 0, 82, 0,
    0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0,
    92, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106,
    0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 113,
    0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 120, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0,
    138, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0,
    152, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 160, 161, 0,
    0, 0, 0, 162, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0,
    168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 175, 176, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205,
};
void recomp_unit_0167_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088AB000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0167[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088AB000;
    case 2u: goto L_088AB020;
    case 3u: goto L_088AB028;
    case 4u: goto L_088AB034;
    case 5u: goto L_088AB048;
    case 6u: goto L_088AB054;
    case 7u: goto L_088AB068;
    case 8u: goto L_088AB070;
    case 9u: goto L_088AB07C;
    case 10u: goto L_088AB090;
    case 11u: goto L_088AB0A4;
    case 12u: goto L_088AB0A8;
    case 13u: goto L_088AB0AC;
    case 14u: goto L_088AB1D8;
    case 15u: goto L_088AB1E8;
    case 16u: goto L_088AB218;
    case 17u: goto L_088AB220;
    case 18u: goto L_088AB22C;
    case 19u: goto L_088AB240;
    case 20u: goto L_088AB244;
    case 21u: goto L_088AB24C;
    case 22u: goto L_088AB270;
    case 23u: goto L_088AB290;
    case 24u: goto L_088AB2B0;
    case 25u: goto L_088AB2C4;
    case 26u: goto L_088AB300;
    case 27u: goto L_088AB31C;
    case 28u: goto L_088AB32C;
    case 29u: goto L_088AB334;
    case 30u: goto L_088AB33C;
    case 31u: goto L_088AB348;
    case 32u: goto L_088AB364;
    case 33u: goto L_088AB374;
    case 34u: goto L_088AB380;
    case 35u: goto L_088AB398;
    case 36u: goto L_088AB39C;
    case 37u: goto L_088AB3B4;
    case 38u: goto L_088AB3C0;
    case 39u: goto L_088AB3C8;
    case 40u: goto L_088AB3D0;
    case 41u: goto L_088AB3D8;
    case 42u: goto L_088AB3E4;
    case 43u: goto L_088AB3F0;
    case 44u: goto L_088AB3FC;
    case 45u: goto L_088AB404;
    case 46u: goto L_088AB40C;
    case 47u: goto L_088AB41C;
    case 48u: goto L_088AB424;
    case 49u: goto L_088AB42C;
    case 50u: goto L_088AB438;
    case 51u: goto L_088AB448;
    case 52u: goto L_088AB458;
    case 53u: goto L_088AB464;
    case 54u: goto L_088AB474;
    case 55u: goto L_088AB480;
    case 56u: goto L_088AB49C;
    case 57u: goto L_088AB4A4;
    case 58u: goto L_088AB4AC;
    case 59u: goto L_088AB4B8;
    case 60u: goto L_088AB4C0;
    case 61u: goto L_088AB4D0;
    case 62u: goto L_088AB4E0;
    case 63u: goto L_088AB4EC;
    case 64u: goto L_088AB4F4;
    case 65u: goto L_088AB508;
    case 66u: goto L_088AB528;
    case 67u: goto L_088AB530;
    case 68u: goto L_088AB53C;
    case 69u: goto L_088AB558;
    case 70u: goto L_088AB55C;
    case 71u: goto L_088AB564;
    case 72u: goto L_088AB574;
    case 73u: goto L_088AB580;
    case 74u: goto L_088AB58C;
    case 75u: goto L_088AB59C;
    case 76u: goto L_088AB5AC;
    case 77u: goto L_088AB5B8;
    case 78u: goto L_088AB5D8;
    case 79u: goto L_088AB5DC;
    case 80u: goto L_088AB5E8;
    case 81u: goto L_088AB5F0;
    case 82u: goto L_088AB5F8;
    case 83u: goto L_088AB604;
    case 84u: goto L_088AB61C;
    case 85u: goto L_088AB628;
    case 86u: goto L_088AB634;
    case 87u: goto L_088AB648;
    case 88u: goto L_088AB650;
    case 89u: goto L_088AB65C;
    case 90u: goto L_088AB66C;
    case 91u: goto L_088AB674;
    case 92u: goto L_088AB680;
    case 93u: goto L_088AB694;
    case 94u: goto L_088AB69C;
    case 95u: goto L_088AB6A8;
    case 96u: goto L_088AB6BC;
    case 97u: goto L_088AB6D0;
    case 98u: goto L_088AB6DC;
    case 99u: goto L_088AB6F4;
    case 100u: goto L_088AB708;
    case 101u: goto L_088AB71C;
    case 102u: goto L_088AB728;
    case 103u: goto L_088AB744;
    case 104u: goto L_088AB7E0;
    case 105u: goto L_088AB7F0;
    case 106u: goto L_088AB7FC;
    case 107u: goto L_088AB814;
    case 108u: goto L_088AB81C;
    case 109u: goto L_088AB838;
    case 110u: goto L_088AB84C;
    case 111u: goto L_088AB858;
    case 112u: goto L_088AB870;
    case 113u: goto L_088AB87C;
    case 114u: goto L_088AB894;
    case 115u: goto L_088AB89C;
    case 116u: goto L_088AB8B8;
    case 117u: goto L_088AB8CC;
    case 118u: goto L_088AB8D8;
    case 119u: goto L_088AB8EC;
    case 120u: goto L_088AB8F0;
    case 121u: goto L_088AB900;
    case 122u: goto L_088AB920;
    case 123u: goto L_088AB938;
    case 124u: goto L_088AB958;
    case 125u: goto L_088AB974;
    case 126u: goto L_088AB98C;
    case 127u: goto L_088AB998;
    case 128u: goto L_088AB9B8;
    case 129u: goto L_088AB9CC;
    case 130u: goto L_088AB9F0;
    case 131u: goto L_088AB9FC;
    case 132u: goto L_088ABA0C;
    case 133u: goto L_088ABA44;
    case 134u: goto L_088ABA50;
    case 135u: goto L_088ABA5C;
    case 136u: goto L_088ABA68;
    case 137u: goto L_088ABA74;
    case 138u: goto L_088ABA80;
    case 139u: goto L_088ABA98;
    case 140u: goto L_088ABAA4;
    case 141u: goto L_088ABAE0;
    case 142u: goto L_088ABAE8;
    case 143u: goto L_088ABAF4;
    case 144u: goto L_088ABB14;
    case 145u: goto L_088ABB1C;
    case 146u: goto L_088ABB28;
    case 147u: goto L_088ABB4C;
    case 148u: goto L_088ABB54;
    case 149u: goto L_088ABB60;
    case 150u: goto L_088ABB68;
    case 151u: goto L_088ABB74;
    case 152u: goto L_088ABB80;
    case 153u: goto L_088ABB84;
    case 154u: goto L_088ABB98;
    case 155u: goto L_088ABBA4;
    case 156u: goto L_088ABBC4;
    case 157u: goto L_088ABBD4;
    case 158u: goto L_088ABBE0;
    case 159u: goto L_088ABBE8;
    case 160u: goto L_088ABBF4;
    case 161u: goto L_088ABBF8;
    case 162u: goto L_088ABC0C;
    case 163u: goto L_088ABC10;
    case 164u: goto L_088ABC20;
    case 165u: goto L_088ABC2C;
    case 166u: goto L_088ABC38;
    case 167u: goto L_088ABC74;
    case 168u: goto L_088ABC80;
    case 169u: goto L_088ABC90;
    case 170u: goto L_088ABCB4;
    case 171u: goto L_088ABCBC;
    case 172u: goto L_088ABCC0;
    case 173u: goto L_088ABCE4;
    case 174u: goto L_088ABD04;
    case 175u: goto L_088ABD10;
    case 176u: goto L_088ABD14;
    case 177u: goto L_088ABD18;
    case 178u: goto L_088ABD20;
    case 179u: goto L_088ABD34;
    case 180u: goto L_088ABD44;
    case 181u: goto L_088ABD94;
    case 182u: goto L_088ABDA4;
    case 183u: goto L_088ABDB4;
    case 184u: goto L_088ABE04;
    case 185u: goto L_088ABE0C;
    case 186u: goto L_088ABE1C;
    case 187u: goto L_088ABE40;
    case 188u: goto L_088ABE48;
    case 189u: goto L_088ABE54;
    case 190u: goto L_088ABE5C;
    case 191u: goto L_088ABE64;
    case 192u: goto L_088ABE88;
    case 193u: goto L_088ABE90;
    case 194u: goto L_088ABEB8;
    case 195u: goto L_088ABEC0;
    case 196u: goto L_088ABED0;
    case 197u: goto L_088ABF04;
    case 198u: goto L_088ABF18;
    case 199u: goto L_088ABF2C;
    case 200u: goto L_088ABF34;
    case 201u: goto L_088ABF98;
    case 202u: goto L_088ABFA0;
    case 203u: goto L_088ABFB0;
    case 204u: goto L_088ABFD0;
    case 205u: goto L_088ABFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088AB000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088AB1D8;
      }
      goto L_088AB020;
    }
L_088AB020:
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 1u);
    goto L_088AB028;
L_088AB028:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[30];
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_088AB048;
      }
      goto L_088AB034;
    }
L_088AB034:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088AB0A8;
      }
      goto L_088AB048;
    }
L_088AB048:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_088AB070;
      }
      goto L_088AB054;
    }
L_088AB054:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[10]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088AB070;
      }
      goto L_088AB068;
    }
L_088AB068:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_088AB0A8;
      }
      goto L_088AB070;
    }
L_088AB070:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] != aot_gpr[30]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[9]);
        goto L_088AB0AC;
    }
    goto L_088AB07C;
L_088AB07C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[10]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == aot_gpr[7]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[9]);
        goto L_088AB0AC;
    }
    goto L_088AB090;
L_088AB090:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == aot_gpr[8]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[9]);
        goto L_088AB0AC;
    }
    goto L_088AB0A4;
L_088AB0A4:
    aot_gpr[9] = (0u | 2u);
    goto L_088AB0A8;
L_088AB0A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[9]);
    goto L_088AB0AC;
L_088AB0AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (aot_gpr[9] << 2u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(10))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(4))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(6))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(26)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(8))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(10))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088AB028;
      }
      goto L_088AB1D8;
    }
L_088AB1D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(47)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB218;
      }
      goto L_088AB1E8;
    }
L_088AB1E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(45)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[6] = (aot_gpr[5] << (aot_gpr[6] & 31u));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[31] = (0x088AB218u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB218u) goto L_088AB218;
    return;
L_088AB218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB244;
      }
      goto L_088AB220;
    }
L_088AB220:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_088AB22C;
L_088AB22C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AB22C;
      }
      goto L_088AB240;
    }
L_088AB240:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(40), 0u);
    goto L_088AB244;
L_088AB244:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[21] | 0u);
    goto L_088AB24C;
L_088AB24C:
    aot_gpr[4] = (aot_gpr[16] << 24u);
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[18] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(48))))));
    aot_gpr[31] = (0x088AB270u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x088AB270u) goto L_088AB270;
    return;
L_088AB270:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[18] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(48))))));
    aot_gpr[31] = (0x088AB290u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088AB290u) goto L_088AB290;
    return;
L_088AB290:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[18] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(48))))));
    aot_gpr[31] = (0x088AB2B0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB2B0u) goto L_088AB2B0;
    return;
L_088AB2B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AB24C;
      }
      goto L_088AB2C4;
    }
L_088AB2C4:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB300:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB334;
      }
      goto L_088AB31C;
    }
L_088AB31C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[9] & 32u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB33C;
      }
      goto L_088AB32C;
    }
L_088AB32C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB374;
      }
      goto L_088AB334;
    }
L_088AB334:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088AB8F0;
      }
      goto L_088AB33C;
    }
L_088AB33C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB364;
      }
      goto L_088AB348;
    }
L_088AB348:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088AB374;
      }
      goto L_088AB364;
    }
L_088AB364:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088AB8F0;
      }
      goto L_088AB374;
    }
L_088AB374:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[9] & 16u);
      if (branch_taken) {
          goto L_088AB4EC;
      }
      goto L_088AB380;
    }
L_088AB380:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[10];
    aot_gpr[8] = (0u | 255u);
      if (branch_taken) {
          goto L_088AB39C;
      }
      goto L_088AB398;
    }
L_088AB398:
    aot_gpr[5] = (0u | 0u);
    goto L_088AB39C;
L_088AB39C:
    aot_gpr[10] = (aot_gpr[5] << 2u);
    aot_gpr[11] = (aot_gpr[6] | 0u);
    aot_gpr[10] = (aot_gpr[16] + aot_gpr[10]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(97)));
      if (branch_taken) {
          goto L_088AB3FC;
      }
      goto L_088AB3B4;
    }
L_088AB3B4:
    aot_gpr[11] = (aot_gpr[9] & 8u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[11] = (aot_gpr[9] & 1u);
      if (branch_taken) {
          goto L_088AB3FC;
      }
      goto L_088AB3C0;
    }
L_088AB3C0:
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB3FC;
      }
      goto L_088AB3C8;
    }
L_088AB3C8:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088AB3FC;
      }
      goto L_088AB3D0;
    }
L_088AB3D0:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088AB3FC;
      }
      goto L_088AB3D8;
    }
L_088AB3D8:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(98)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088AB3FC;
      }
      goto L_088AB3E4;
    }
L_088AB3E4:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(99)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088AB3FC;
      }
      goto L_088AB3F0;
    }
L_088AB3F0:
    aot_gpr[11] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[11]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    goto L_088AB3FC;
L_088AB3FC:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088AB41C;
      }
      goto L_088AB404;
    }
L_088AB404:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB41C;
      }
      goto L_088AB40C;
    }
L_088AB40C:
    aot_gpr[9] = (aot_gpr[9] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[6] = (0u | 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_088AB41C;
L_088AB41C:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088AB4AC;
      }
      goto L_088AB424;
    }
L_088AB424:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB4AC;
      }
      goto L_088AB42C;
    }
L_088AB42C:
    aot_gpr[4] = (aot_gpr[9] | 8u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088AB480;
      }
      goto L_088AB438;
    }
L_088AB438:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088AB464;
      }
      goto L_088AB448;
    }
L_088AB448:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(44))))));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AB458u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 72u, 0x088AAC30u>(ctx, &aot_mem) && ctx.pc == 0x088AB458u) goto L_088AB458;
    return;
L_088AB458:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
      if (branch_taken) {
          goto L_088AB4A4;
      }
      goto L_088AB464;
    }
L_088AB464:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(45))))));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AB474u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 72u, 0x088AAC30u>(ctx, &aot_mem) && ctx.pc == 0x088AB474u) goto L_088AB474;
    return;
L_088AB474:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
      if (branch_taken) {
          goto L_088AB4A4;
      }
      goto L_088AB480;
    }
L_088AB480:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27272)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x088AB49Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 72u, 0x088AAC30u>(ctx, &aot_mem) && ctx.pc == 0x088AB49Cu) goto L_088AB49C;
    return;
L_088AB49C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    goto L_088AB4A4;
L_088AB4A4:
    aot_gpr[5] = (0u | 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088AB4AC;
L_088AB4AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(98)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[8];
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088AB4E0;
      }
      goto L_088AB4B8;
    }
L_088AB4B8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB4E0;
      }
      goto L_088AB4C0;
    }
L_088AB4C0:
    aot_gpr[4] = (aot_gpr[9] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x088AB4D0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 183u, 0x088A9DECu>(ctx, &aot_mem) && ctx.pc == 0x088AB4D0u) goto L_088AB4D0;
    return;
L_088AB4D0:
    aot_gpr[4] = (0u | 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    goto L_088AB4E0;
L_088AB4E0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (aot_gpr[9] & 16u);
    goto L_088AB4EC;
L_088AB4EC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB574;
      }
      goto L_088AB4F4;
    }
L_088AB4F4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AB530;
      }
      goto L_088AB508;
    }
L_088AB508:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(27276)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB55C;
      }
      goto L_088AB528;
    }
L_088AB528:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088AB55C;
      }
      goto L_088AB530;
    }
L_088AB530:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (2215u << 16u);
      if (branch_taken) {
          goto L_088AB55C;
      }
      goto L_088AB53C;
    }
L_088AB53C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(27276)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB55C;
      }
      goto L_088AB558;
    }
L_088AB558:
    aot_gpr[4] = (0u | 1u);
    goto L_088AB55C;
L_088AB55C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB574;
      }
      goto L_088AB564;
    }
L_088AB564:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(aot_gpr[6]));
    goto L_088AB574;
L_088AB574:
    aot_gpr[4] = (aot_gpr[9] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB5F8;
      }
      goto L_088AB580;
    }
L_088AB580:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(111))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB5F0;
      }
      goto L_088AB58C;
    }
L_088AB58C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(110))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB5B8;
      }
      goto L_088AB59C;
    }
L_088AB59C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(113))))));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AB5ACu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 59u, 0x088AAB50u>(ctx, &aot_mem) && ctx.pc == 0x088AB5ACu) goto L_088AB5AC;
    return;
L_088AB5AC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(109))))));
      if (branch_taken) {
          goto L_088AB5E8;
      }
      goto L_088AB5B8;
    }
L_088AB5B8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(108))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(108))))));
    aot_gpr[6] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(109))))));
      if (branch_taken) {
          goto L_088AB5DC;
      }
      goto L_088AB5D8;
    }
L_088AB5D8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    goto L_088AB5DC;
L_088AB5DC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    goto L_088AB5E8;
L_088AB5E8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088AB5F8;
      }
      goto L_088AB5F0;
    }
L_088AB5F0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088AB5F8;
L_088AB5F8:
    aot_gpr[4] = (aot_gpr[9] & 8u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB6D0;
      }
      goto L_088AB604;
    }
L_088AB604:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(114))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(114))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB6BC;
      }
      goto L_088AB61C;
    }
L_088AB61C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(116))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088AB648;
      }
      goto L_088AB628;
    }
L_088AB628:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088AB648;
      }
      goto L_088AB634;
    }
L_088AB634:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(115))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u - aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088AB6D0;
      }
      goto L_088AB648;
    }
L_088AB648:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088AB66C;
      }
      goto L_088AB650;
    }
L_088AB650:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088AB66C;
      }
      goto L_088AB65C;
    }
L_088AB65C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(115))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088AB6D0;
      }
      goto L_088AB66C;
    }
L_088AB66C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088AB694;
      }
      goto L_088AB674;
    }
L_088AB674:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088AB694;
      }
      goto L_088AB680;
    }
L_088AB680:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(115))))));
    aot_gpr[4] = (0u - aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088AB6D0;
      }
      goto L_088AB694;
    }
L_088AB694:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088AB6D0;
      }
      goto L_088AB69C;
    }
L_088AB69C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088AB6D0;
      }
      goto L_088AB6A8;
    }
L_088AB6A8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(115))))));
    aot_gpr[5] = (0u - aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088AB6D0;
      }
      goto L_088AB6BC;
    }
L_088AB6BC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    goto L_088AB6D0;
L_088AB6D0:
    aot_gpr[4] = (aot_gpr[9] & 64u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB71C;
      }
      goto L_088AB6DC;
    }
L_088AB6DC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(140))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(140))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB708;
      }
      goto L_088AB6F4;
    }
L_088AB6F4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(136)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088AB71C;
      }
      goto L_088AB708;
    }
L_088AB708:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    goto L_088AB71C;
L_088AB71C:
    aot_gpr[4] = (aot_gpr[9] & 128u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB7F0;
      }
      goto L_088AB728;
    }
L_088AB728:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(130))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(130))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB7E0;
      }
      goto L_088AB744;
    }
L_088AB744:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(124))))));
    aot_gpr[8] = (aot_gpr[5] & 65280u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (aot_gpr[8] >> 8u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(126))))));
    aot_gpr[6] = (255u << 16u);
    aot_gpr[6] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[10] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 8u));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(128))))));
    aot_gpr[6] = (aot_gpr[6] >> 16u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[8]) >> 8u));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 8u));
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (256u << 16u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_088AB7F0;
      }
      goto L_088AB7E0;
    }
L_088AB7E0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    goto L_088AB7F0;
L_088AB7F0:
    aot_gpr[4] = (aot_gpr[9] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB870;
      }
      goto L_088AB7FC;
    }
L_088AB7FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB8EC;
      }
      goto L_088AB814;
    }
L_088AB814:
    aot_gpr[31] = (0x088AB81Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088AB81Cu) goto L_088AB81C;
    return;
L_088AB81C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] & 256u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088AB84C;
      }
      goto L_088AB838;
    }
L_088AB838:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088AB84C;
L_088AB84C:
    aot_gpr[5] = (aot_gpr[4] & 512u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB8EC;
      }
      goto L_088AB858;
    }
L_088AB858:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088AB8EC;
      }
      goto L_088AB870;
    }
L_088AB870:
    aot_gpr[4] = (aot_gpr[9] & 4u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB8EC;
      }
      goto L_088AB87C;
    }
L_088AB87C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB8EC;
      }
      goto L_088AB894;
    }
L_088AB894:
    aot_gpr[31] = (0x088AB89Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088AB89Cu) goto L_088AB89C;
    return;
L_088AB89C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] & 256u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088AB8CC;
      }
      goto L_088AB8B8;
    }
L_088AB8B8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088AB8CC;
L_088AB8CC:
    aot_gpr[5] = (aot_gpr[4] & 512u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB8EC;
      }
      goto L_088AB8D8;
    }
L_088AB8D8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088AB8EC;
L_088AB8EC:
    aot_gpr[2] = (0u | 1u);
    goto L_088AB8F0;
L_088AB8F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB900:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27264), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB920:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AB938u);
    aot_gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088AB938u) goto L_088AB938;
    return;
L_088AB938:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4672));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB958:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088AB9B8;
      }
      goto L_088AB974;
    }
L_088AB974:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4672));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088AB98Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB98Cu) goto L_088AB98C;
    return;
L_088AB98C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088AB9B8;
      }
      goto L_088AB998;
    }
L_088AB998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088AB9B8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AB9B8u) goto L_088AB9B8;
    return;
L_088AB9B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB9CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088AB9F0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088AB300;
L_088AB9F0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABCBC;
      }
      goto L_088AB9FC;
    }
L_088AB9FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088ABCBC;
      }
      goto L_088ABA0C;
    }
L_088ABA0C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(156)));
    aot_gpr[7] = (14979u << 16u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[7] | 4719u);
    aot_gpr[6] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6408));
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_088ABA68;
      }
      goto L_088ABA44;
    }
L_088ABA44:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_088ABA5C;
      }
      goto L_088ABA50;
    }
L_088ABA50:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_088ABA5C;
L_088ABA5C:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_088ABA68;
L_088ABA68:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
      if (branch_taken) {
          goto L_088ABA80;
      }
      goto L_088ABA74;
    }
L_088ABA74:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    goto L_088ABA80;
L_088ABA80:
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088ABB68;
      }
      goto L_088ABA98;
    }
L_088ABA98:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB1C;
      }
      goto L_088ABAA4;
    }
L_088ABAA4:
    aot_fpr[12] = aot_fpr[13] + aot_fpr[20];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (16307u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x088ABAE0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 73u, 0x088AAC68u>(ctx, &aot_mem) && ctx.pc == 0x088ABAE0u) goto L_088ABAE0;
    return;
L_088ABAE0:
    aot_gpr[31] = (0x088ABAE8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 183u, 0x088A9DECu>(ctx, &aot_mem) && ctx.pc == 0x088ABAE8u) goto L_088ABAE8;
    return;
L_088ABAE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088ABB84;
      }
      goto L_088ABAF4;
    }
L_088ABAF4:
    aot_gpr[4] = (0u | 25u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (0u | 25u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[31] = (0x088ABB14u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088ABB14u) goto L_088ABB14;
    return;
L_088ABB14:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
      if (branch_taken) {
          goto L_088ABB84;
      }
      goto L_088ABB1C;
    }
L_088ABB1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB54;
      }
      goto L_088ABB28;
    }
L_088ABB28:
    aot_gpr[7] = (16307u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[7] | 13107u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x088ABB4Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 73u, 0x088AAC68u>(ctx, &aot_mem) && ctx.pc == 0x088ABB4Cu) goto L_088ABB4C;
    return;
L_088ABB4C:
    aot_gpr[31] = (0x088ABB54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 183u, 0x088A9DECu>(ctx, &aot_mem) && ctx.pc == 0x088ABB54u) goto L_088ABB54;
    return;
L_088ABB54:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(140))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB84;
      }
      goto L_088ABB60;
    }
L_088ABB60:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_088ABB84;
      }
      goto L_088ABB68;
    }
L_088ABB68:
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ABB84;
      }
      goto L_088ABB74;
    }
L_088ABB74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(161)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB84;
      }
      goto L_088ABB80;
    }
L_088ABB80:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr[18]));
    goto L_088ABB84;
L_088ABB84:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(152)));
      if (branch_taken) {
          goto L_088ABC10;
      }
      goto L_088ABB98;
    }
L_088ABB98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC10;
      }
      goto L_088ABBA4;
    }
L_088ABBA4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(154)));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[6] = (aot_gpr[6] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[31] = (0x088ABBC4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 72u, 0x088AAC30u>(ctx, &aot_mem) && ctx.pc == 0x088ABBC4u) goto L_088ABBC4;
    return;
L_088ABBC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ABBE8;
      }
      goto L_088ABBD4;
    }
L_088ABBD4:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088ABBE0u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x088ABBE0u) goto L_088ABBE0;
    return;
L_088ABBE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088ABBF8;
      }
      goto L_088ABBE8;
    }
L_088ABBE8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088ABBF4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x088ABBF4u) goto L_088ABBF4;
    return;
L_088ABBF4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088ABBF8;
L_088ABBF8:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 255u);
    aot_gpr[31] = (0x088ABC0Cu);
    aot_gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088ABC0Cu) goto L_088ABC0C;
    return;
L_088ABC0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    goto L_088ABC10;
L_088ABC10:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(114))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ABC2C;
      }
      goto L_088ABC20;
    }
L_088ABC20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088ABC2C;
L_088ABC2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABCB4;
      }
      goto L_088ABC38;
    }
L_088ABC38:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(140))))));
    aot_gpr[5] = (17279u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (20224u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
        goto L_088ABC80;
    }
    goto L_088ABC74;
L_088ABC74:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088ABC90;
      }
      goto L_088ABC80;
    }
L_088ABC80:
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_088ABC90;
L_088ABC90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_088ABCB4;
L_088ABCB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABCC0;
      }
      goto L_088ABCBC;
    }
L_088ABCBC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    goto L_088ABCC0;
L_088ABCC0:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABCE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088ABD14;
      }
      goto L_088ABD04;
    }
L_088ABD04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088ABD18;
      }
      goto L_088ABD10;
    }
L_088ABD10:
    aot_gpr[4] = (0u | 1u);
    goto L_088ABD14;
L_088ABD14:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088ABD18;
L_088ABD18:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF04;
      }
      goto L_088ABD20;
    }
L_088ABD20:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088ABD34u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 19u, 0x08A4C160u>(ctx, &aot_mem) && ctx.pc == 0x088ABD34u) goto L_088ABD34;
    return;
L_088ABD34:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088ABD44u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 52u, 0x088AAA64u>(ctx, &aot_mem) && ctx.pc == 0x088ABD44u) goto L_088ABD44;
    return;
L_088ABD44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(34))))));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(12))))));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(36))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[9] = (16256u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[31] = (0x088ABD94u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 6u, 0x088AA078u>(ctx, &aot_mem) && ctx.pc == 0x088ABD94u) goto L_088ABD94;
    return;
L_088ABD94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088ABDA4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088ABDA4u) goto L_088ABDA4;
    return;
L_088ABDA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088ABDB4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 48u, 0x088AA9D8u>(ctx, &aot_mem) && ctx.pc == 0x088ABDB4u) goto L_088ABDB4;
    return;
L_088ABDB4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(116))))));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16768u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088ABE48;
      }
      goto L_088ABE04;
    }
L_088ABE04:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088ABF04;
      }
      goto L_088ABE0C;
    }
L_088ABE0C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088ABE64;
      }
      goto L_088ABE1C;
    }
L_088ABE1C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u | 2u);
    aot_gpr[31] = (0x088ABE40u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(29136));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088ABE40u) goto L_088ABE40;
    return;
L_088ABE40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF04;
      }
      goto L_088ABE48;
    }
L_088ABE48:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088ABE90;
      }
      goto L_088ABE54;
    }
L_088ABE54:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABEC0;
      }
      goto L_088ABE5C;
    }
L_088ABE5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF04;
      }
      goto L_088ABE64;
    }
L_088ABE64:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u | 2u);
    aot_gpr[31] = (0x088ABE88u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(29140));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088ABE88u) goto L_088ABE88;
    return;
L_088ABE88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF04;
      }
      goto L_088ABE90;
    }
L_088ABE90:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u | 2u);
    aot_gpr[31] = (0x088ABEB8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(29144));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088ABEB8u) goto L_088ABEB8;
    return;
L_088ABEB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF04;
      }
      goto L_088ABEC0;
    }
L_088ABEC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x088ABED0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088ABED0u) goto L_088ABED0;
    return;
L_088ABED0:
    aot_gpr[4] = (16339u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x088ABF04u);
    aot_gpr[10] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088ABF04u) goto L_088ABF04;
    return;
L_088ABF04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABF18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088ABF2Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABF2Cu) goto L_088ABF2C;
    return;
L_088ABF2C:
    aot_gpr[31] = (0x088ABF34u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088ABF34u) goto L_088ABF34;
    return;
L_088ABF34:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    aot_gpr[4] = (16307u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x088ABF98u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 73u, 0x088AAC68u>(ctx, &aot_mem) && ctx.pc == 0x088ABF98u) goto L_088ABF98;
    return;
L_088ABF98:
    aot_gpr[31] = (0x088ABFA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 183u, 0x088A9DECu>(ctx, &aot_mem) && ctx.pc == 0x088ABFA0u) goto L_088ABFA0;
    return;
L_088ABFA0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABFB0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27304), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABFD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088ABFE8u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 3u, 0x088B3054u>(ctx, &aot_mem) && ctx.pc == 0x088ABFE8u) goto L_088ABFE8;
    return;
L_088ABFE8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4624));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x088AC000u; return;
}

void recomp_unit_0167(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0167_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_167(Runtime &runtime) {
    runtime.register_generated_unit(167u, 0x088AB000u, 4096u, &recomp_unit_0167, &recomp_unit_0167_entry);
    runtime.register_function(0x088AB000u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB020u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB028u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB034u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB048u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB054u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB068u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB070u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB07Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB090u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB0A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB0A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB0ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB1D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB1E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB218u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB220u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB22Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB240u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB244u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB24Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB270u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB290u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB2B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB2C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB300u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB31Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB32Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB334u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB33Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB348u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB364u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB374u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB380u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB398u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB39Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB3B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB3C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB3C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB3D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB3D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB3E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB3F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB3FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB404u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB40Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB41Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB424u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB42Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB438u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB448u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB458u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB464u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB474u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB480u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB49Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB4A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB4ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB4B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB4C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB4D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB4E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB4ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB4F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB508u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB528u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB530u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB53Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB558u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB55Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB564u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB574u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB580u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB58Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB59Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB5ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB5B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB5D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB5DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB5E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB5F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB5F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB604u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB61Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB628u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB634u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB648u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB650u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB65Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB66Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB674u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB680u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB694u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB69Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB6A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB6BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB6D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB6DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB6F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB708u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB71Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB728u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB744u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB7E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB7F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB7FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB814u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB81Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB838u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB84Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB858u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB870u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB87Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB894u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB89Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB8B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB8CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB8D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB8ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB8F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB900u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB920u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB938u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB958u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB974u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB98Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB998u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB9B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB9CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB9F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088AB9FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABA0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABA44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABA50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABA5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABA68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABA74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABA80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABA98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABAA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABAE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABAE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABAF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABB14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABB1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABB28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABB4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABB54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABB60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABB68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABB74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABB80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABB84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABB98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABBA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABBC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABBD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABBE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABBE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABBF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABBF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABC0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABC10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABC20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABC2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABC38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABC74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABC80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABC90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABCB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABCBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABCC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABCE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABD04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABD10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABD14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABD18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABD20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABD34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABD44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABD94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABDA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABDB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABE04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABE0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABE1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABE40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABE48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABE54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABE5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABE64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABE88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABE90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABEB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABEC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABED0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABF04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABF18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABF2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABF34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABF98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABFA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABFB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABFD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x088ABFE8u, &recomp_unit_0167, "recomp_unit_0167");
}
} // namespace psprecomp
