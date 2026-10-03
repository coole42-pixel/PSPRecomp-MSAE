#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0023[1019] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27,
    0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0,
    0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0,
    41, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0,
    80, 0, 0, 0, 0, 81, 82, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 87, 0, 88, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93,
    0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 97, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0,
    118, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0,
    132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 156, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 161, 162, 0, 163, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 165, 166, 0, 0, 0, 0, 0, 0, 0, 167, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
};
void recomp_unit_0023_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0881B000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0023[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0881B000;
    case 2u: goto L_0881B008;
    case 3u: goto L_0881B040;
    case 4u: goto L_0881B04C;
    case 5u: goto L_0881B064;
    case 6u: goto L_0881B078;
    case 7u: goto L_0881B090;
    case 8u: goto L_0881B0A4;
    case 9u: goto L_0881B0B0;
    case 10u: goto L_0881B0C8;
    case 11u: goto L_0881B0D4;
    case 12u: goto L_0881B0E0;
    case 13u: goto L_0881B0F8;
    case 14u: goto L_0881B10C;
    case 15u: goto L_0881B124;
    case 16u: goto L_0881B138;
    case 17u: goto L_0881B144;
    case 18u: goto L_0881B15C;
    case 19u: goto L_0881B168;
    case 20u: goto L_0881B174;
    case 21u: goto L_0881B18C;
    case 22u: goto L_0881B1A0;
    case 23u: goto L_0881B1B8;
    case 24u: goto L_0881B1CC;
    case 25u: goto L_0881B1D8;
    case 26u: goto L_0881B1F0;
    case 27u: goto L_0881B1FC;
    case 28u: goto L_0881B208;
    case 29u: goto L_0881B220;
    case 30u: goto L_0881B234;
    case 31u: goto L_0881B24C;
    case 32u: goto L_0881B260;
    case 33u: goto L_0881B26C;
    case 34u: goto L_0881B284;
    case 35u: goto L_0881B290;
    case 36u: goto L_0881B29C;
    case 37u: goto L_0881B2B4;
    case 38u: goto L_0881B2C8;
    case 39u: goto L_0881B2E0;
    case 40u: goto L_0881B2F4;
    case 41u: goto L_0881B300;
    case 42u: goto L_0881B318;
    case 43u: goto L_0881B324;
    case 44u: goto L_0881B330;
    case 45u: goto L_0881B348;
    case 46u: goto L_0881B35C;
    case 47u: goto L_0881B374;
    case 48u: goto L_0881B388;
    case 49u: goto L_0881B394;
    case 50u: goto L_0881B3AC;
    case 51u: goto L_0881B3B8;
    case 52u: goto L_0881B3C4;
    case 53u: goto L_0881B3DC;
    case 54u: goto L_0881B3F0;
    case 55u: goto L_0881B408;
    case 56u: goto L_0881B41C;
    case 57u: goto L_0881B428;
    case 58u: goto L_0881B440;
    case 59u: goto L_0881B44C;
    case 60u: goto L_0881B458;
    case 61u: goto L_0881B470;
    case 62u: goto L_0881B484;
    case 63u: goto L_0881B49C;
    case 64u: goto L_0881B4B0;
    case 65u: goto L_0881B4BC;
    case 66u: goto L_0881B4D4;
    case 67u: goto L_0881B4E0;
    case 68u: goto L_0881B4EC;
    case 69u: goto L_0881B504;
    case 70u: goto L_0881B518;
    case 71u: goto L_0881B530;
    case 72u: goto L_0881B544;
    case 73u: goto L_0881B550;
    case 74u: goto L_0881B568;
    case 75u: goto L_0881B590;
    case 76u: goto L_0881B5B0;
    case 77u: goto L_0881B5D8;
    case 78u: goto L_0881B5E4;
    case 79u: goto L_0881B5F0;
    case 80u: goto L_0881B600;
    case 81u: goto L_0881B614;
    case 82u: goto L_0881B618;
    case 83u: goto L_0881B61C;
    case 84u: goto L_0881B63C;
    case 85u: goto L_0881B65C;
    case 86u: goto L_0881B678;
    case 87u: goto L_0881B684;
    case 88u: goto L_0881B68C;
    case 89u: goto L_0881B690;
    case 90u: goto L_0881B6A8;
    case 91u: goto L_0881B6C8;
    case 92u: goto L_0881B6F0;
    case 93u: goto L_0881B6FC;
    case 94u: goto L_0881B708;
    case 95u: goto L_0881B718;
    case 96u: goto L_0881B72C;
    case 97u: goto L_0881B730;
    case 98u: goto L_0881B734;
    case 99u: goto L_0881B754;
    case 100u: goto L_0881B774;
    case 101u: goto L_0881B7A4;
    case 102u: goto L_0881B7C4;
    case 103u: goto L_0881B7D8;
    case 104u: goto L_0881B800;
    case 105u: goto L_0881B854;
    case 106u: goto L_0881B88C;
    case 107u: goto L_0881B898;
    case 108u: goto L_0881B8A4;
    case 109u: goto L_0881B8B4;
    case 110u: goto L_0881B8CC;
    case 111u: goto L_0881B8F0;
    case 112u: goto L_0881B914;
    case 113u: goto L_0881B930;
    case 114u: goto L_0881B94C;
    case 115u: goto L_0881B95C;
    case 116u: goto L_0881B964;
    case 117u: goto L_0881B96C;
    case 118u: goto L_0881B980;
    case 119u: goto L_0881B984;
    case 120u: goto L_0881B9C4;
    case 121u: goto L_0881B9DC;
    case 122u: goto L_0881BA10;
    case 123u: goto L_0881BA24;
    case 124u: goto L_0881BA3C;
    case 125u: goto L_0881BA70;
    case 126u: goto L_0881BA80;
    case 127u: goto L_0881BA90;
    case 128u: goto L_0881BAA0;
    case 129u: goto L_0881BAB8;
    case 130u: goto L_0881BAEC;
    case 131u: goto L_0881BAF4;
    case 132u: goto L_0881BB00;
    case 133u: goto L_0881BB10;
    case 134u: goto L_0881BB24;
    case 135u: goto L_0881BB3C;
    case 136u: goto L_0881BB70;
    case 137u: goto L_0881BB84;
    case 138u: goto L_0881BB9C;
    case 139u: goto L_0881BBD0;
    case 140u: goto L_0881BBD8;
    case 141u: goto L_0881BBE4;
    case 142u: goto L_0881BBF4;
    case 143u: goto L_0881BC08;
    case 144u: goto L_0881BC20;
    case 145u: goto L_0881BC54;
    case 146u: goto L_0881BC68;
    case 147u: goto L_0881BC80;
    case 148u: goto L_0881BCB4;
    case 149u: goto L_0881BCC8;
    case 150u: goto L_0881BCE0;
    case 151u: goto L_0881BD14;
    case 152u: goto L_0881BD28;
    case 153u: goto L_0881BD40;
    case 154u: goto L_0881BD74;
    case 155u: goto L_0881BD88;
    case 156u: goto L_0881BDA0;
    case 157u: goto L_0881BDA4;
    case 158u: goto L_0881BDB4;
    case 159u: goto L_0881BDC4;
    case 160u: goto L_0881BDCC;
    case 161u: goto L_0881BDD4;
    case 162u: goto L_0881BDD8;
    case 163u: goto L_0881BDE0;
    case 164u: goto L_0881BDFC;
    case 165u: goto L_0881BE1C;
    case 166u: goto L_0881BE20;
    case 167u: goto L_0881BE40;
    case 168u: goto L_0881BE44;
    case 169u: goto L_0881BE68;
    case 170u: goto L_0881BE9C;
    case 171u: goto L_0881BEA4;
    case 172u: goto L_0881BEAC;
    case 173u: goto L_0881BEC8;
    case 174u: goto L_0881BECC;
    case 175u: goto L_0881BEDC;
    case 176u: goto L_0881BEE8;
    case 177u: goto L_0881BF04;
    case 178u: goto L_0881BF28;
    case 179u: goto L_0881BF58;
    case 180u: goto L_0881BF88;
    case 181u: goto L_0881BFB8;
    case 182u: goto L_0881BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0881B000:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22432), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0881B0C8;
      }
      goto L_0881B040;
    }
L_0881B040:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881B04Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 55u, 0x08A4B384u>(ctx, &aot_mem) && ctx.pc == 0x0881B04Cu) goto L_0881B04C;
    return;
L_0881B04C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(37)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B0C8;
      }
      goto L_0881B064;
    }
L_0881B064:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x0881B078u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 56u, 0x08A4B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B078u) goto L_0881B078;
    return;
L_0881B078:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B0B0;
      }
      goto L_0881B090;
    }
L_0881B090:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0881B0A4u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x0881D028u>(ctx, &aot_mem) && ctx.pc == 0x0881B0A4u) goto L_0881B0A4;
    return;
L_0881B0A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    goto L_0881B0B0;
L_0881B0B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(37)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B064;
      }
      goto L_0881B0C8;
    }
L_0881B0C8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B15C;
      }
      goto L_0881B0D4;
    }
L_0881B0D4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881B0E0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 57u, 0x08A4B394u>(ctx, &aot_mem) && ctx.pc == 0x0881B0E0u) goto L_0881B0E0;
    return;
L_0881B0E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(38)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B15C;
      }
      goto L_0881B0F8;
    }
L_0881B0F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x0881B10Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 58u, 0x08A4B39Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B10Cu) goto L_0881B10C;
    return;
L_0881B10C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B144;
      }
      goto L_0881B124;
    }
L_0881B124:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0881B138u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 16u, 0x0881D0F4u>(ctx, &aot_mem) && ctx.pc == 0x0881B138u) goto L_0881B138;
    return;
L_0881B138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    goto L_0881B144;
L_0881B144:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(38)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B0F8;
      }
      goto L_0881B15C;
    }
L_0881B15C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B1F0;
      }
      goto L_0881B168;
    }
L_0881B168:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881B174u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 59u, 0x08A4B3A4u>(ctx, &aot_mem) && ctx.pc == 0x0881B174u) goto L_0881B174;
    return;
L_0881B174:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(39)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B1F0;
      }
      goto L_0881B18C;
    }
L_0881B18C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x0881B1A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 60u, 0x08A4B3ACu>(ctx, &aot_mem) && ctx.pc == 0x0881B1A0u) goto L_0881B1A0;
    return;
L_0881B1A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B1D8;
      }
      goto L_0881B1B8;
    }
L_0881B1B8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0881B1CCu);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 217u, 0x0881CF80u>(ctx, &aot_mem) && ctx.pc == 0x0881B1CCu) goto L_0881B1CC;
    return;
L_0881B1CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    goto L_0881B1D8;
L_0881B1D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(39)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B18C;
      }
      goto L_0881B1F0;
    }
L_0881B1F0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B284;
      }
      goto L_0881B1FC;
    }
L_0881B1FC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881B208u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 61u, 0x08A4B3B4u>(ctx, &aot_mem) && ctx.pc == 0x0881B208u) goto L_0881B208;
    return;
L_0881B208:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B284;
      }
      goto L_0881B220;
    }
L_0881B220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x0881B234u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 62u, 0x08A4B3BCu>(ctx, &aot_mem) && ctx.pc == 0x0881B234u) goto L_0881B234;
    return;
L_0881B234:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B26C;
      }
      goto L_0881B24C;
    }
L_0881B24C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0881B260u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 211u, 0x0881CF10u>(ctx, &aot_mem) && ctx.pc == 0x0881B260u) goto L_0881B260;
    return;
L_0881B260:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    goto L_0881B26C;
L_0881B26C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B220;
      }
      goto L_0881B284;
    }
L_0881B284:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B318;
      }
      goto L_0881B290;
    }
L_0881B290:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881B29Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 63u, 0x08A4B3C4u>(ctx, &aot_mem) && ctx.pc == 0x0881B29Cu) goto L_0881B29C;
    return;
L_0881B29C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(41)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B318;
      }
      goto L_0881B2B4;
    }
L_0881B2B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x0881B2C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 64u, 0x08A4B3CCu>(ctx, &aot_mem) && ctx.pc == 0x0881B2C8u) goto L_0881B2C8;
    return;
L_0881B2C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B300;
      }
      goto L_0881B2E0;
    }
L_0881B2E0:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0881B2F4u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 47u, 0x0881D2D4u>(ctx, &aot_mem) && ctx.pc == 0x0881B2F4u) goto L_0881B2F4;
    return;
L_0881B2F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    goto L_0881B300;
L_0881B300:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(41)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B2B4;
      }
      goto L_0881B318;
    }
L_0881B318:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B3AC;
      }
      goto L_0881B324;
    }
L_0881B324:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881B330u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 65u, 0x08A4B3D4u>(ctx, &aot_mem) && ctx.pc == 0x0881B330u) goto L_0881B330;
    return;
L_0881B330:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(42)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B3AC;
      }
      goto L_0881B348;
    }
L_0881B348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x0881B35Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 66u, 0x08A4B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0881B35Cu) goto L_0881B35C;
    return;
L_0881B35C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B394;
      }
      goto L_0881B374;
    }
L_0881B374:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0881B388u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 36u, 0x0881D1F0u>(ctx, &aot_mem) && ctx.pc == 0x0881B388u) goto L_0881B388;
    return;
L_0881B388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    goto L_0881B394;
L_0881B394:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(42)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B348;
      }
      goto L_0881B3AC;
    }
L_0881B3AC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B440;
      }
      goto L_0881B3B8;
    }
L_0881B3B8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881B3C4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 67u, 0x08A4B3E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B3C4u) goto L_0881B3C4;
    return;
L_0881B3C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(43)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B440;
      }
      goto L_0881B3DC;
    }
L_0881B3DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x0881B3F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 68u, 0x08A4B3ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B3F0u) goto L_0881B3F0;
    return;
L_0881B3F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B428;
      }
      goto L_0881B408;
    }
L_0881B408:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0881B41Cu);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_0881B6C8;
L_0881B41C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    goto L_0881B428;
L_0881B428:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(43)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B3DC;
      }
      goto L_0881B440;
    }
L_0881B440:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B4D4;
      }
      goto L_0881B44C;
    }
L_0881B44C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881B458u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 69u, 0x08A4B3F4u>(ctx, &aot_mem) && ctx.pc == 0x0881B458u) goto L_0881B458;
    return;
L_0881B458:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B4D4;
      }
      goto L_0881B470;
    }
L_0881B470:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x0881B484u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 70u, 0x08A4B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0881B484u) goto L_0881B484;
    return;
L_0881B484:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B4BC;
      }
      goto L_0881B49C;
    }
L_0881B49C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0881B4B0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_0881B65C;
L_0881B4B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    goto L_0881B4BC;
L_0881B4BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B470;
      }
      goto L_0881B4D4;
    }
L_0881B4D4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B568;
      }
      goto L_0881B4E0;
    }
L_0881B4E0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881B4ECu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 71u, 0x08A4B404u>(ctx, &aot_mem) && ctx.pc == 0x0881B4ECu) goto L_0881B4EC;
    return;
L_0881B4EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(45)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B568;
      }
      goto L_0881B504;
    }
L_0881B504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x0881B518u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 72u, 0x08A4B40Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B518u) goto L_0881B518;
    return;
L_0881B518:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B550;
      }
      goto L_0881B530;
    }
L_0881B530:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0881B544u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_0881B5B0;
L_0881B544:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    goto L_0881B550;
L_0881B550:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(45)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B504;
      }
      goto L_0881B568;
    }
L_0881B568:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_0881B590:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22440), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B5B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0881B5D8u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 11u, 0x0881D098u>(ctx, &aot_mem) && ctx.pc == 0x0881B5D8u) goto L_0881B5D8;
    return;
L_0881B5D8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B61C;
      }
      goto L_0881B5E4;
    }
L_0881B5E4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881B5F0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 73u, 0x08A4B414u>(ctx, &aot_mem) && ctx.pc == 0x0881B5F0u) goto L_0881B5F0;
    return;
L_0881B5F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B618;
      }
      goto L_0881B600;
    }
L_0881B600:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0881B614u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 203u, 0x08943F50u>(ctx, &aot_mem) && ctx.pc == 0x0881B614u) goto L_0881B614;
    return;
L_0881B614:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0881B618;
L_0881B618:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_0881B61C;
L_0881B61C:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_0881B63C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22448), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B65C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0881B678u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 11u, 0x0881D098u>(ctx, &aot_mem) && ctx.pc == 0x0881B678u) goto L_0881B678;
    return;
L_0881B678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B690;
      }
      goto L_0881B684;
    }
L_0881B684:
    aot_gpr[31] = (0x0881B68Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B68Cu) goto L_0881B68C;
    return;
L_0881B68C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_0881B690;
L_0881B690:
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
L_0881B6A8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22456), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B6C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0881B6F0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 11u, 0x0881D098u>(ctx, &aot_mem) && ctx.pc == 0x0881B6F0u) goto L_0881B6F0;
    return;
L_0881B6F0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B734;
      }
      goto L_0881B6FC;
    }
L_0881B6FC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881B708u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 73u, 0x08A4B414u>(ctx, &aot_mem) && ctx.pc == 0x0881B708u) goto L_0881B708;
    return;
L_0881B708:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B730;
      }
      goto L_0881B718;
    }
L_0881B718:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0881B72Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 203u, 0x08943F50u>(ctx, &aot_mem) && ctx.pc == 0x0881B72Cu) goto L_0881B72C;
    return;
L_0881B72C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0881B730;
L_0881B730:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(96), aot_gpr[4]);
    goto L_0881B734;
L_0881B734:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_0881B754:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22464), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B774:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-6464));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6336));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6468), 0u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-15104));
    aot_gpr[6] = (2216u << 16u);
    goto L_0881B7A4;
L_0881B7A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x0881B7C4u);
    aot_gpr[5] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x0881B7C4u) goto L_0881B7C4;
    return;
L_0881B7C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x0881B7D8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0881B7D8u) goto L_0881B7D8;
    return;
L_0881B7D8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 32 ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_0881B7A4;
      }
      goto L_0881B800;
    }
L_0881B800:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6208), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-5944), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-5680), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-5416), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-5152), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-4888), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-4624), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-4360), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-4288), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B854:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-6464));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-6336));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[16] = (2216u << 16u);
    goto L_0881B88C;
L_0881B88C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B8A4;
      }
      goto L_0881B898;
    }
L_0881B898:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0881B8A4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B8A4u) goto L_0881B8A4;
    return;
L_0881B8A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x0881B8B4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0881B8B4u) goto L_0881B8B4;
    return;
L_0881B8B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B88C;
      }
      goto L_0881B8CC;
    }
L_0881B8CC:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6468), 0u);
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
L_0881B8F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-6468)));
    aot_gpr[5] = (0u | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    aot_gpr[17] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881B964;
      }
      goto L_0881B914;
    }
L_0881B914:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15100));
    aot_gpr[31] = (0x0881B930u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-15072));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0881B930u) goto L_0881B930;
    return;
L_0881B930:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0881B94Cu);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x0881B94Cu) goto L_0881B94C;
    return;
L_0881B94C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0881B96C;
      }
      goto L_0881B95C;
    }
L_0881B95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B984;
      }
      goto L_0881B964;
    }
L_0881B964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BD74;
      }
      goto L_0881B96C;
    }
L_0881B96C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881B980u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    goto L_0881B008;
L_0881B980:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0881B984;
L_0881B984:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-6468)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6464));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-6468), aot_gpr[5]);
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(22476), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(38)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881BA10;
      }
      goto L_0881B9C4;
    }
L_0881B9C4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6208)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6200));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    goto L_0881B9DC;
L_0881B9DC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6208)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-6208), aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(38)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[16] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B9DC;
      }
      goto L_0881BA10;
    }
L_0881BA10:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(37)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881BA70;
      }
      goto L_0881BA24;
    }
L_0881BA24:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5936));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[6]);
    goto L_0881BA3C;
L_0881BA3C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-5944), aot_gpr[10]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(37)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881BA3C;
      }
      goto L_0881BA70;
    }
L_0881BA70:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(41)));
      if (branch_taken) {
          goto L_0881BA90;
      }
      goto L_0881BA80;
    }
L_0881BA80:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881BA80;
      }
      goto L_0881BA90;
    }
L_0881BA90:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881BAEC;
      }
      goto L_0881BAA0;
    }
L_0881BAA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5672));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[5]);
    goto L_0881BAB8;
L_0881BAB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-5680), aot_gpr[10]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(41)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881BAB8;
      }
      goto L_0881BAEC;
    }
L_0881BAEC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_0881BB10;
      }
      goto L_0881BAF4;
    }
L_0881BAF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25336)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881BB10;
      }
      goto L_0881BB00;
    }
L_0881BB00:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-5680), aot_gpr[6]);
    goto L_0881BB10;
L_0881BB10:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(39)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881BB70;
      }
      goto L_0881BB24;
    }
L_0881BB24:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-5416)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-5408));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    goto L_0881BB3C;
L_0881BB3C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-5416)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-5416), aot_gpr[10]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(39)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881BB3C;
      }
      goto L_0881BB70;
    }
L_0881BB70:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881BBD0;
      }
      goto L_0881BB84;
    }
L_0881BB84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5144));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[6]);
    goto L_0881BB9C;
L_0881BB9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-5152), aot_gpr[10]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881BB9C;
      }
      goto L_0881BBD0;
    }
L_0881BBD0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_0881BBF4;
      }
      goto L_0881BBD8;
    }
L_0881BBD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25336)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881BBF4;
      }
      goto L_0881BBE4;
    }
L_0881BBE4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-5152), aot_gpr[6]);
    goto L_0881BBF4;
L_0881BBF4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(42)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881BC54;
      }
      goto L_0881BC08;
    }
L_0881BC08:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4888)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-4880));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    goto L_0881BC20;
L_0881BC20:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4888)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4888), aot_gpr[10]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(42)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881BC20;
      }
      goto L_0881BC54;
    }
L_0881BC54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(43)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881BCB4;
      }
      goto L_0881BC68;
    }
L_0881BC68:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4624)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-4616));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    goto L_0881BC80;
L_0881BC80:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4624)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4624), aot_gpr[10]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(43)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881BC80;
      }
      goto L_0881BCB4;
    }
L_0881BCB4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881BD14;
      }
      goto L_0881BCC8;
    }
L_0881BCC8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4360)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-4352));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    goto L_0881BCE0;
L_0881BCE0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4360)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4360), aot_gpr[10]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881BCE0;
      }
      goto L_0881BD14;
    }
L_0881BD14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(45)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881BD74;
      }
      goto L_0881BD28;
    }
L_0881BD28:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-4280));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    goto L_0881BD40;
L_0881BD40:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4288), aot_gpr[10]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(45)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881BD40;
      }
      goto L_0881BD74;
    }
L_0881BD74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881BD88:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-6208)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881BDD4;
      }
      goto L_0881BDA0;
    }
L_0881BDA0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6200));
    goto L_0881BDA4;
L_0881BDA4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0881BDCC;
      }
      goto L_0881BDB4;
    }
L_0881BDB4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881BDA4;
      }
      goto L_0881BDC4;
    }
L_0881BDC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BDD4;
      }
      goto L_0881BDCC;
    }
L_0881BDCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BDD8;
      }
      goto L_0881BDD4;
    }
L_0881BDD4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881BDD8;
L_0881BDD8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881BDE0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881BDFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[11] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881BEDC;
      }
      goto L_0881BE1C;
    }
L_0881BE1C:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5936));
    goto L_0881BE20;
L_0881BE20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 24u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BECC;
      }
      goto L_0881BE40;
    }
L_0881BE40:
    aot_gpr[5] = (aot_gpr[9] & 255u);
    goto L_0881BE44;
L_0881BE44:
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[2] = (aot_gpr[7] << 6u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[7] << 3u);
    aot_gpr[7] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BEAC;
      }
      goto L_0881BE68;
    }
L_0881BE68:
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (aot_gpr[6] << 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] << 6u);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x0881BE9Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_0881BD88;
L_0881BE9C:
    aot_gpr[31] = (0x0881BEA4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0881BDE0;
L_0881BEA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_0881BEAC;
L_0881BEAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[9] & 255u);
      if (branch_taken) {
          goto L_0881BE44;
      }
      goto L_0881BEC8;
    }
L_0881BEC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-5944)));
    goto L_0881BECC;
L_0881BECC:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[11] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881BE20;
      }
      goto L_0881BEDC;
    }
L_0881BEDC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881BEE8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881BF04:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[2] = (aot_gpr[4] << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881BF28:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881BF58:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881BF88:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881BFB8:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881BFE8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0023(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0023_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_23(Runtime &runtime) {
    runtime.register_generated_unit(23u, 0x0881B000u, 4096u, &recomp_unit_0023, &recomp_unit_0023_entry);
    runtime.register_function(0x0881B000u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B008u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B040u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B04Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B064u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B078u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B090u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B0A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B0B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B0C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B0D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B0E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B0F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B10Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B124u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B138u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B144u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B15Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B168u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B174u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B18Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B1A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B1B8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B1CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B1D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B1F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B1FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B208u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B220u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B234u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B24Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B260u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B26Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B284u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B290u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B29Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B2B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B2C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B2E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B2F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B300u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B318u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B324u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B330u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B348u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B35Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B374u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B388u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B394u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B3ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B3B8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B3C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B3DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B3F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B408u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B41Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B428u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B440u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B44Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B458u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B470u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B484u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B49Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B4B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B4BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B4D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B4E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B4ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B504u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B518u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B530u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B544u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B550u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B568u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B590u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B5B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B5D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B5E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B5F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B600u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B614u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B618u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B61Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B63Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B65Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B678u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B684u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B68Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B690u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B6A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B6C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B6F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B6FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B708u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B718u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B72Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B730u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B734u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B754u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B774u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B7A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B7C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B7D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B800u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B854u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B88Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B898u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B8A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B8B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B8CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B8F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B914u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B930u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B94Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B95Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B964u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B96Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B980u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B984u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B9C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881B9DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BA10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BA24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BA3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BA70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BA80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BA90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BAA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BAB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BAECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BAF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BB00u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BB10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BB24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BB3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BB70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BB84u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BB9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BBD0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BBD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BBE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BBF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BC08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BC20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BC54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BC68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BC80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BCB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BCC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BCE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BD14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BD28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BD40u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BD74u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BD88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BDA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BDA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BDB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BDC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BDCCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BDD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BDD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BDE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BDFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BE1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BE20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BE40u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BE44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BE68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BE9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BEA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BEACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BEC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BECCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BEDCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BEE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BF04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BF28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BF58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BF88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BFB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0881BFE8u, &recomp_unit_0023, "recomp_unit_0023");
}
} // namespace psprecomp
