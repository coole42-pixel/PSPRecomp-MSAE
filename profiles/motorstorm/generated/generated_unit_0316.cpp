#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0316[1012] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3,
    0, 4, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 9,
    0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23,
    0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0,
    34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    46, 0, 47, 48, 0, 49, 50, 0, 51, 0, 52, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0,
    0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109,
    0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114,
    115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0,
    0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 137, 0, 0, 0, 138,
};
void recomp_unit_0316_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08940000u;
        entry_id = (entry_delta < 4048u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0316[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08940000;
    case 2u: goto L_089400F4;
    case 3u: goto L_089400FC;
    case 4u: goto L_08940104;
    case 5u: goto L_08940108;
    case 6u: goto L_08940124;
    case 7u: goto L_0894016C;
    case 8u: goto L_08940178;
    case 9u: goto L_0894017C;
    case 10u: goto L_08940194;
    case 11u: goto L_0894019C;
    case 12u: goto L_089401A4;
    case 13u: goto L_089401AC;
    case 14u: goto L_089401B8;
    case 15u: goto L_089401E8;
    case 16u: goto L_08940218;
    case 17u: goto L_08940220;
    case 18u: goto L_08940228;
    case 19u: goto L_08940244;
    case 20u: goto L_08940254;
    case 21u: goto L_08940264;
    case 22u: goto L_08940274;
    case 23u: goto L_0894027C;
    case 24u: goto L_08940290;
    case 25u: goto L_089402A0;
    case 26u: goto L_089402B0;
    case 27u: goto L_089402B8;
    case 28u: goto L_089402C0;
    case 29u: goto L_089402C8;
    case 30u: goto L_089402D0;
    case 31u: goto L_089402E0;
    case 32u: goto L_089402F0;
    case 33u: goto L_089402F8;
    case 34u: goto L_08940300;
    case 35u: goto L_08940308;
    case 36u: goto L_08940310;
    case 37u: goto L_0894032C;
    case 38u: goto L_08940358;
    case 39u: goto L_0894037C;
    case 40u: goto L_089403A8;
    case 41u: goto L_089403B8;
    case 42u: goto L_089403C0;
    case 43u: goto L_089403F8;
    case 44u: goto L_089403FC;
    case 45u: goto L_08940474;
    case 46u: goto L_08940480;
    case 47u: goto L_08940488;
    case 48u: goto L_0894048C;
    case 49u: goto L_08940494;
    case 50u: goto L_08940498;
    case 51u: goto L_089404A0;
    case 52u: goto L_089404A8;
    case 53u: goto L_089404AC;
    case 54u: goto L_089404C8;
    case 55u: goto L_0894053C;
    case 56u: goto L_08940548;
    case 57u: goto L_089405C4;
    case 58u: goto L_089405D0;
    case 59u: goto L_089405E8;
    case 60u: goto L_089405F4;
    case 61u: goto L_08940604;
    case 62u: goto L_08940610;
    case 63u: goto L_08940620;
    case 64u: goto L_0894062C;
    case 65u: goto L_0894063C;
    case 66u: goto L_08940648;
    case 67u: goto L_089406D4;
    case 68u: goto L_08940798;
    case 69u: goto L_089407A4;
    case 70u: goto L_089407B8;
    case 71u: goto L_089407C4;
    case 72u: goto L_089407DC;
    case 73u: goto L_089407E8;
    case 74u: goto L_089407FC;
    case 75u: goto L_08940808;
    case 76u: goto L_0894083C;
    case 77u: goto L_08940848;
    case 78u: goto L_08940860;
    case 79u: goto L_089408AC;
    case 80u: goto L_089408B0;
    case 81u: goto L_089408B8;
    case 82u: goto L_089408FC;
    case 83u: goto L_0894092C;
    case 84u: goto L_089409F4;
    case 85u: goto L_08940A38;
    case 86u: goto L_08940A40;
    case 87u: goto L_08940A70;
    case 88u: goto L_08940A78;
    case 89u: goto L_08940AA0;
    case 90u: goto L_08940AFC;
    case 91u: goto L_08940B14;
    case 92u: goto L_08940B28;
    case 93u: goto L_08940B68;
    case 94u: goto L_08940B74;
    case 95u: goto L_08940B94;
    case 96u: goto L_08940BA0;
    case 97u: goto L_08940BDC;
    case 98u: goto L_08940C14;
    case 99u: goto L_08940C48;
    case 100u: goto L_08940C5C;
    case 101u: goto L_08940C68;
    case 102u: goto L_08940C74;
    case 103u: goto L_08940C90;
    case 104u: goto L_08940CA8;
    case 105u: goto L_08940CBC;
    case 106u: goto L_08940CCC;
    case 107u: goto L_08940CD8;
    case 108u: goto L_08940CEC;
    case 109u: goto L_08940CFC;
    case 110u: goto L_08940D0C;
    case 111u: goto L_08940D18;
    case 112u: goto L_08940D38;
    case 113u: goto L_08940D4C;
    case 114u: goto L_08940D7C;
    case 115u: goto L_08940D80;
    case 116u: goto L_08940D94;
    case 117u: goto L_08940DA4;
    case 118u: goto L_08940DBC;
    case 119u: goto L_08940DD8;
    case 120u: goto L_08940E0C;
    case 121u: goto L_08940E24;
    case 122u: goto L_08940E30;
    case 123u: goto L_08940E48;
    case 124u: goto L_08940E58;
    case 125u: goto L_08940E64;
    case 126u: goto L_08940E78;
    case 127u: goto L_08940E84;
    case 128u: goto L_08940E90;
    case 129u: goto L_08940EA8;
    case 130u: goto L_08940EBC;
    case 131u: goto L_08940ED4;
    case 132u: goto L_08940EFC;
    case 133u: goto L_08940F28;
    case 134u: goto L_08940F58;
    case 135u: goto L_08940F68;
    case 136u: goto L_08940FB8;
    case 137u: goto L_08940FBC;
    case 138u: goto L_08940FCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08940000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_089400F4;
L_089400F4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940108;
      }
      goto L_089400FC;
    }
L_089400FC:
    aot_gpr[31] = (0x08940104u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08940104u) goto L_08940104;
    return;
L_08940104:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08940108;
L_08940108:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940124:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[6] & 255u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<8u>(aot_gpr[8]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7872));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vmscl(32u, 36u, 8u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<39u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 4u>(vfpu_d); }
    aot_gpr[4] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22656));
      if (branch_taken) {
          goto L_08940178;
      }
      goto L_0894016C;
    }
L_0894016C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<9u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894017C;
      }
      goto L_08940178;
    }
L_08940178:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    goto L_0894017C;
L_0894017C:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089401A4;
      }
      goto L_08940194;
    }
L_08940194:
    aot_gpr[31] = (0x0894019Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 87u, 0x0893F96Cu>(ctx, &aot_mem) && ctx.pc == 0x0894019Cu) goto L_0894019C;
    return;
L_0894019C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089401AC;
      }
      goto L_089401A4;
    }
L_089401A4:
    aot_gpr[31] = (0x089401ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0314_entry, 314u, 7u, 0x0893E0A4u>(ctx, &aot_mem) && ctx.pc == 0x089401ACu) goto L_089401AC;
    return;
L_089401AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089401B8:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23472));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<25u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<26u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<28u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<29u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<30u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<31u, 4u>(vfpu_value); }
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089401E8:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22528));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<25u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<26u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<28u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<29u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<30u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<31u, 4u>(vfpu_value); }
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940218:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940228;
      }
      goto L_08940220;
    }
L_08940220:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28796)));
    goto L_08940228;
L_08940228:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-28750)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28792), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[7] | 4u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-28750), static_cast<std::uint16_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940244:
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08940274;
      }
      goto L_08940254;
    }
L_08940254:
    aot_gpr[8] = (2219u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-22112)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08940274;
      }
      goto L_08940264;
    }
L_08940264:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28780), 0u);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28772), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0894027C;
      }
      goto L_08940274;
    }
L_08940274:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28780), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28772), static_cast<std::uint8_t>(aot_gpr[7]));
    goto L_0894027C;
L_0894027C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(-28750)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-28750), static_cast<std::uint16_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940290:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28772)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089402B8;
      }
      goto L_089402A0;
    }
L_089402A0:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-28780)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089402C0;
      }
      goto L_089402B0;
    }
L_089402B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089402C8;
      }
      goto L_089402B8;
    }
L_089402B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089402C8;
      }
      goto L_089402C0;
    }
L_089402C0:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-22112)));
    goto L_089402C8;
L_089402C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089402D0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28771)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089402F8;
      }
      goto L_089402E0;
    }
L_089402E0:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-28776)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940300;
      }
      goto L_089402F0;
    }
L_089402F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940308;
      }
      goto L_089402F8;
    }
L_089402F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08940308;
      }
      goto L_08940300;
    }
L_08940300:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-12896)));
    goto L_08940308;
L_08940308:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940310:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-28750)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28788), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[7] | 2u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-28750), static_cast<std::uint16_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894032C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08940358u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 17u, 0x0893F128u>(ctx, &aot_mem) && ctx.pc == 0x08940358u) goto L_08940358;
    return;
L_08940358:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[2] = (0u | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12864));
      if (branch_taken) {
          goto L_089403A8;
      }
      goto L_0894037C;
    }
L_0894037C:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 8u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 32u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 52u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089403B8;
      }
      goto L_089403A8;
    }
L_089403A8:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<23u, 4u>(vfpu_value); }
    goto L_089403B8;
L_089403B8:
    aot_gpr[31] = (0x089403C0u);
    // nop
    goto L_089401B8;
L_089403C0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_gpr[4]);
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (0u | 0u);
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<44u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08940474;
      }
      goto L_089403F8;
    }
L_089403F8:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[10]);
    goto L_089403FC;
L_089403FC:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 52u, 4u);
      ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 1u, vfpu_side); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 24u, 4u);
      ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 2u, vfpu_side); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 28u, 4u);
      ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 3u, vfpu_side); }
    ctx.execute_vfpu_compare3(4u, 59u, 2u, 4u, 6u);
    ctx.execute_vfpu_compare3(5u, 63u, 3u, 4u, 6u);
    ctx.execute_vfpu_compare3(6u, 12u, 65u, 1u, 6u);
    ctx.execute_vfpu_compare3(38u, 44u, 65u, 1u, 7u);
    ctx.execute_vfpu_vminmax(76u, 76u, 65u, 1u, false);
    ctx.execute_vfpu_vminmax(108u, 108u, 65u, 1u, true);
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(24u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(4u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<5u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(24u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(5u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<6u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(24u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(6u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(13u, 4u, 4u, 0u);
    ctx.execute_vfpu_vi2x(45u, 5u, 4u, 0u);
    ctx.execute_vfpu_vi2x(77u, 6u, 2u, 2u);
    aot_gpr[10] = (ctx.vfpu_scalar_bits_ct<13u>());
    aot_gpr[11] = (ctx.vfpu_scalar_bits_ct<45u>());
    aot_gpr[3] = (ctx.vfpu_scalar_bits_ct<77u>());
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[11]);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[11]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089403FC;
      }
      goto L_08940474;
    }
L_08940474:
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089404AC;
      }
      goto L_08940480;
    }
L_08940480:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0894048C;
      }
      goto L_08940488;
    }
L_08940488:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<76u>());
    goto L_0894048C;
L_0894048C:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940498;
      }
      goto L_08940494;
    }
L_08940494:
    aot_gpr[2] = (0u | 3u);
    goto L_08940498;
L_08940498:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089404AC;
      }
      goto L_089404A0;
    }
L_089404A0:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[2] = (aot_gpr[2] | 8u);
      if (branch_taken) {
          goto L_089404AC;
      }
      goto L_089404A8;
    }
L_089404A8:
    aot_gpr[2] = (aot_gpr[2] | 4u);
    goto L_089404AC;
L_089404AC:
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
L_089404C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<36u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<34u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<36u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<36u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<5u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<6u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<7u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0894053Cu);
    aot_gpr[5] = (0u | 8u);
    goto L_0894032C;
L_0894053C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940548:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28788)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[6] = (16128u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28792)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x089405C4u);
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x089405C4u) goto L_089405C4;
    return;
L_089405C4:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[31] = (0x089405D0u);
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x089405D0u) goto L_089405D0;
    return;
L_089405D0:
    aot_gpr[4] = (aot_gpr[19] >> 1u);
    aot_fpr[12] = aot_fpr[28] / aot_fpr[0];
    aot_gpr[5] = (aot_gpr[20] >> 1u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_089405F4;
      }
      goto L_089405E8;
    }
L_089405E8:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_089405F4;
L_089405F4:
    aot_fpr[20] = aot_fpr[20] - aot_fpr[13];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_08940610;
      }
      goto L_08940604;
    }
L_08940604:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_08940610;
L_08940610:
    aot_fpr[22] = aot_fpr[22] - aot_fpr[13];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_0894062C;
      }
      goto L_08940620;
    }
L_08940620:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_0894062C;
L_0894062C:
    aot_fpr[20] = aot_fpr[20] / aot_fpr[13];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_08940648;
      }
      goto L_0894063C;
    }
L_0894063C:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_08940648;
L_08940648:
    aot_fpr[13] = aot_fpr[22] / aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28792)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28788)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<14u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 15u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089406D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<46u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<78u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28796)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[1] = (aot_gpr[4] + static_cast<std::uint32_t>(-2928));
    { const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 4u);
      ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 15u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[14] / aot_fpr[13];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] >> 1u);
    aot_gpr[4] = (aot_gpr[7] >> 1u);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
      if (branch_taken) {
          goto L_089407A4;
      }
      goto L_08940798;
    }
L_08940798:
    aot_gpr[8] = (20352u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[16] = aot_fpr[16] + aot_fpr[17];
    goto L_089407A4;
L_089407A4:
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
      if (branch_taken) {
          goto L_089407C4;
      }
      goto L_089407B8;
    }
L_089407B8:
    aot_gpr[8] = (20352u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    goto L_089407C4;
L_089407C4:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089407E8;
      }
      goto L_089407DC;
    }
L_089407DC:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[16] = aot_fpr[16] + aot_fpr[17];
    goto L_089407E8;
L_089407E8:
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
      if (branch_taken) {
          goto L_08940808;
      }
      goto L_089407FC;
    }
L_089407FC:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    goto L_08940808;
L_08940808:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<46u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08940848;
      }
      goto L_0894083C;
    }
L_0894083C:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[16];
    goto L_08940848;
L_08940848:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    aot_fpr[16] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_089408AC;
      }
      goto L_08940860;
    }
L_08940860:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2120)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2122)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_089408B0;
      }
      goto L_089408AC;
    }
L_089408AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_089408B0;
L_089408B0:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089408B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28756)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940C14;
      }
      goto L_089408FC;
    }
L_089408FC:
    aot_gpr[16] = (aot_gpr[19] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[19] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0894092Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x0894092Cu) goto L_0894092C;
    return;
L_0894092C:
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[5] = (aot_gpr[4] & 2u);
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[7] = (~(aot_gpr[5] | 0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(-28940), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(-28939), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[8] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] & 1u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[30] = (32u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[4] & 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[20] = (0u | 255u);
    aot_gpr[30] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[30] = (64u << 16u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[30]);
    aot_gpr[5] = (256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089409F4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28808), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x089409F4u) goto L_089409F4;
    return;
L_089409F4:
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (0u | 4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[23] = (2219u << 16u);
    aot_gpr[18] = (16u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[23] + static_cast<std::uint32_t>(-12880), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x08940A38u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08940A38u) goto L_08940A38;
    return;
L_08940A38:
    aot_gpr[31] = (0x08940A40u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28756)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x08940A40u) goto L_08940A40;
    return;
L_08940A40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE16(aot_gpr[23] + static_cast<std::uint32_t>(-12880), static_cast<std::uint16_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x08940A70u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08940A70u) goto L_08940A70;
    return;
L_08940A70:
    aot_gpr[31] = (0x08940A78u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28756)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x08940A78u) goto L_08940A78;
    return;
L_08940A78:
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28940), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28939), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08940AA0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x08940AA0u) goto L_08940AA0;
    return;
L_08940AA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (0u | 255u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (32u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28808), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x08940AFCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08940AFCu) goto L_08940AFC;
    return;
L_08940AFC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08940B14u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 36u, 0x08A4A22Cu>(ctx, &aot_mem) && ctx.pc == 0x08940B14u) goto L_08940B14;
    return;
L_08940B14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[19] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[31] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08940BDC;
      }
      goto L_08940B28;
    }
L_08940B28:
    PSPRECOMP_AOT_STORE16(aot_gpr[31] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[31] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[31] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28728)));
    PSPRECOMP_AOT_STORE32(aot_gpr[31] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08940B74;
      }
      goto L_08940B68;
    }
L_08940B68:
    aot_gpr[7] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08940B74;
L_08940B74:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[31] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08940BA0;
      }
      goto L_08940B94;
    }
L_08940B94:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08940BA0;
L_08940BA0:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[31] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[31] | 0u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[31] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-28728)));
    PSPRECOMP_AOT_STORE32(aot_gpr[31] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[31] = (0x08940BDCu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 51u, 0x0892F518u>(ctx, &aot_mem) && ctx.pc == 0x08940BDCu) goto L_08940BDC;
    return;
L_08940BDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (aot_gpr[20] & 65535u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x08940C14u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08940C14u) goto L_08940C14;
    return;
L_08940C14:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
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
L_08940C48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08940C5Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2104));
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 129u, 0x08A588B4u>(ctx, &aot_mem) && ctx.pc == 0x08940C5Cu) goto L_08940C5C;
    return;
L_08940C5C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08940C68u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28724));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08940C68u) goto L_08940C68;
    return;
L_08940C68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940C74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08940D38;
      }
      goto L_08940C90;
    }
L_08940C90:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2152));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940CCC;
      }
      goto L_08940CA8;
    }
L_08940CA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940CCC;
      }
      goto L_08940CBC;
    }
L_08940CBC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08940CCCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08940CCCu) goto L_08940CCC;
    return;
L_08940CCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940CFC;
      }
      goto L_08940CD8;
    }
L_08940CD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940CFC;
      }
      goto L_08940CEC;
    }
L_08940CEC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08940CFCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08940CFCu) goto L_08940CFC;
    return;
L_08940CFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08940D0Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08940D0Cu) goto L_08940D0C;
    return;
L_08940D0C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08940D38;
      }
      goto L_08940D18;
    }
L_08940D18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08940D38u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940D38u) goto L_08940D38;
    return;
L_08940D38:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940D4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08940DBC;
      }
      goto L_08940D7C;
    }
L_08940D7C:
    aot_gpr[17] = (0u | 0u);
    goto L_08940D80;
L_08940D80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940DA4;
      }
      goto L_08940D94;
    }
L_08940D94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (0x08940DA4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 141u, 0x08918CF8u>(ctx, &aot_mem) && ctx.pc == 0x08940DA4u) goto L_08940DA4;
    return;
L_08940DA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08940D80;
      }
      goto L_08940DBC;
    }
L_08940DBC:
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
L_08940DD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08940E0Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08940E0Cu) goto L_08940E0C;
    return;
L_08940E0C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2152));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E78;
      }
      goto L_08940E24;
    }
L_08940E24:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08940E30u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 137u, 0x08A58928u>(ctx, &aot_mem) && ctx.pc == 0x08940E30u) goto L_08940E30;
    return;
L_08940E30:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08940E78;
      }
      goto L_08940E48;
    }
L_08940E48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08940E64;
      }
      goto L_08940E58;
    }
L_08940E58:
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08940E64u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 142u, 0x08918D38u>(ctx, &aot_mem) && ctx.pc == 0x08940E64u) goto L_08940E64;
    return;
L_08940E64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08940E48;
      }
      goto L_08940E78;
    }
L_08940E78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940ED4;
      }
      goto L_08940E84;
    }
L_08940E84:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08940E90u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 138u, 0x08A58930u>(ctx, &aot_mem) && ctx.pc == 0x08940E90u) goto L_08940E90;
    return;
L_08940E90:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08940ED4;
      }
      goto L_08940EA8;
    }
L_08940EA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[31] = (0x08940EBCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 103u, 0x08A546ECu>(ctx, &aot_mem) && ctx.pc == 0x08940EBCu) goto L_08940EBC;
    return;
L_08940EBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08940EA8;
      }
      goto L_08940ED4;
    }
L_08940ED4:
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
L_08940EFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08940F28u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08940F28u) goto L_08940F28;
    return;
L_08940F28:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2152));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] & 15u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08940F68;
    }
    goto L_08940F58;
L_08940F58:
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08940F68;
L_08940F68:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] << 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0317_entry, 317u, 3u, 0x0894104Cu>(ctx, &aot_mem); return;
      }
      goto L_08940FB8;
    }
L_08940FB8:
    aot_gpr[6] = (0u | 0u);
    goto L_08940FBC;
L_08940FBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
        (void)rt.invoke_chained_direct<&recomp_unit_0317_entry, 317u, 2u, 0x08941020u>(ctx, &aot_mem); return;
    }
    goto L_08940FCC;
L_08940FCC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<15u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    ctx.pc = 0x08941000u; return;
}

void recomp_unit_0316(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0316_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_316(Runtime &runtime) {
    runtime.register_generated_unit(316u, 0x08940000u, 4096u, &recomp_unit_0316, &recomp_unit_0316_entry);
    runtime.register_function(0x08940000u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089400F4u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089400FCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940104u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940108u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940124u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894016Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940178u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894017Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940194u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894019Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089401A4u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089401ACu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089401B8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089401E8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940218u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940220u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940228u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940244u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940254u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940264u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940274u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894027Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940290u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089402A0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089402B0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089402B8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089402C0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089402C8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089402D0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089402E0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089402F0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089402F8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940300u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940308u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940310u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894032Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940358u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894037Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089403A8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089403B8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089403C0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089403F8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089403FCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940474u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940480u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940488u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894048Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940494u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940498u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089404A0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089404A8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089404ACu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089404C8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894053Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940548u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089405C4u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089405D0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089405E8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089405F4u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940604u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940610u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940620u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894062Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894063Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940648u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089406D4u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940798u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089407A4u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089407B8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089407C4u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089407DCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089407E8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089407FCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940808u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894083Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940848u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940860u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089408ACu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089408B0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089408B8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089408FCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x0894092Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x089409F4u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940A38u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940A40u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940A70u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940A78u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940AA0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940AFCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940B14u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940B28u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940B68u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940B74u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940B94u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940BA0u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940BDCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940C14u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940C48u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940C5Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940C68u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940C74u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940C90u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940CA8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940CBCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940CCCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940CD8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940CECu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940CFCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940D0Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940D18u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940D38u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940D4Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940D7Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940D80u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940D94u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940DA4u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940DBCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940DD8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940E0Cu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940E24u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940E30u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940E48u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940E58u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940E64u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940E78u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940E84u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940E90u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940EA8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940EBCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940ED4u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940EFCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940F28u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940F58u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940F68u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940FB8u, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940FBCu, &recomp_unit_0316, "recomp_unit_0316");
    runtime.register_function(0x08940FCCu, &recomp_unit_0316, "recomp_unit_0316");
}
} // namespace psprecomp
