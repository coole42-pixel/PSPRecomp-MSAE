#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0304[1020] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 33,
    0, 0, 34, 35, 0, 0, 36, 37, 0, 38, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 0,
    0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 53, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 63, 0,
    0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0,
    78, 0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 93, 0, 0, 0, 94,
    0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 103,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0,
    0, 113, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119,
    0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0,
    128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135,
    0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
};
void recomp_unit_0304_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08934000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0304[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08934000;
    case 2u: goto L_08934124;
    case 3u: goto L_08934128;
    case 4u: goto L_0893413C;
    case 5u: goto L_0893416C;
    case 6u: goto L_08934188;
    case 7u: goto L_089342D8;
    case 8u: goto L_089342DC;
    case 9u: goto L_089342F0;
    case 10u: goto L_08934310;
    case 11u: goto L_0893431C;
    case 12u: goto L_08934330;
    case 13u: goto L_0893433C;
    case 14u: goto L_08934348;
    case 15u: goto L_08934354;
    case 16u: goto L_0893435C;
    case 17u: goto L_0893437C;
    case 18u: goto L_0893438C;
    case 19u: goto L_08934394;
    case 20u: goto L_089343A0;
    case 21u: goto L_089343C0;
    case 22u: goto L_089343CC;
    case 23u: goto L_089343E0;
    case 24u: goto L_089343EC;
    case 25u: goto L_089343F8;
    case 26u: goto L_08934400;
    case 27u: goto L_08934420;
    case 28u: goto L_08934430;
    case 29u: goto L_08934438;
    case 30u: goto L_08934444;
    case 31u: goto L_08934468;
    case 32u: goto L_08934478;
    case 33u: goto L_0893447C;
    case 34u: goto L_08934488;
    case 35u: goto L_0893448C;
    case 36u: goto L_08934498;
    case 37u: goto L_0893449C;
    case 38u: goto L_089344A4;
    case 39u: goto L_089344A8;
    case 40u: goto L_089344B8;
    case 41u: goto L_089344C4;
    case 42u: goto L_089344CC;
    case 43u: goto L_089344D8;
    case 44u: goto L_089344E0;
    case 45u: goto L_089344E8;
    case 46u: goto L_089344F4;
    case 47u: goto L_08934504;
    case 48u: goto L_08934510;
    case 49u: goto L_08934520;
    case 50u: goto L_08934530;
    case 51u: goto L_0893453C;
    case 52u: goto L_08934544;
    case 53u: goto L_0893454C;
    case 54u: goto L_08934550;
    case 55u: goto L_0893456C;
    case 56u: goto L_08934594;
    case 57u: goto L_089345A0;
    case 58u: goto L_089345B8;
    case 59u: goto L_089345C0;
    case 60u: goto L_089345D8;
    case 61u: goto L_089345E0;
    case 62u: goto L_089345EC;
    case 63u: goto L_089345F8;
    case 64u: goto L_08934608;
    case 65u: goto L_08934614;
    case 66u: goto L_08934620;
    case 67u: goto L_08934628;
    case 68u: goto L_08934638;
    case 69u: goto L_08934650;
    case 70u: goto L_08934668;
    case 71u: goto L_0893467C;
    case 72u: goto L_089346B0;
    case 73u: goto L_089346C8;
    case 74u: goto L_089346D4;
    case 75u: goto L_089346DC;
    case 76u: goto L_089346E4;
    case 77u: goto L_089346F8;
    case 78u: goto L_08934700;
    case 79u: goto L_08934708;
    case 80u: goto L_0893470C;
    case 81u: goto L_0893472C;
    case 82u: goto L_0893474C;
    case 83u: goto L_0893475C;
    case 84u: goto L_08934764;
    case 85u: goto L_08934778;
    case 86u: goto L_08934790;
    case 87u: goto L_08934798;
    case 88u: goto L_089347A0;
    case 89u: goto L_089347AC;
    case 90u: goto L_089347C0;
    case 91u: goto L_089347D4;
    case 92u: goto L_089347E8;
    case 93u: goto L_089347EC;
    case 94u: goto L_089347FC;
    case 95u: goto L_0893480C;
    case 96u: goto L_08934820;
    case 97u: goto L_08934828;
    case 98u: goto L_08934834;
    case 99u: goto L_0893483C;
    case 100u: goto L_08934844;
    case 101u: goto L_0893484C;
    case 102u: goto L_08934878;
    case 103u: goto L_0893487C;
    case 104u: goto L_0893489C;
    case 105u: goto L_089348C8;
    case 106u: goto L_089348CC;
    case 107u: goto L_089348E4;
    case 108u: goto L_08934914;
    case 109u: goto L_08934918;
    case 110u: goto L_08934938;
    case 111u: goto L_08934968;
    case 112u: goto L_0893496C;
    case 113u: goto L_08934984;
    case 114u: goto L_08934988;
    case 115u: goto L_08934990;
    case 116u: goto L_089349CC;
    case 117u: goto L_089349D4;
    case 118u: goto L_089349EC;
    case 119u: goto L_089349FC;
    case 120u: goto L_08934A10;
    case 121u: goto L_08934A20;
    case 122u: goto L_08934A34;
    case 123u: goto L_08934A3C;
    case 124u: goto L_08934A44;
    case 125u: goto L_08934A54;
    case 126u: goto L_08934A60;
    case 127u: goto L_08934A74;
    case 128u: goto L_08934A80;
    case 129u: goto L_08934A8C;
    case 130u: goto L_08934AAC;
    case 131u: goto L_08934AB8;
    case 132u: goto L_08934AC4;
    case 133u: goto L_08934AD0;
    case 134u: goto L_08934AF0;
    case 135u: goto L_08934AFC;
    case 136u: goto L_08934B08;
    case 137u: goto L_08934B14;
    case 138u: goto L_08934B34;
    case 139u: goto L_08934B4C;
    case 140u: goto L_08934C04;
    case 141u: goto L_08934C1C;
    case 142u: goto L_08934C4C;
    case 143u: goto L_08934C70;
    case 144u: goto L_08934C8C;
    case 145u: goto L_08934D68;
    case 146u: goto L_08934D7C;
    case 147u: goto L_08934DA4;
    case 148u: goto L_08934DB0;
    case 149u: goto L_08934E6C;
    case 150u: goto L_08934E84;
    case 151u: goto L_08934EB4;
    case 152u: goto L_08934ED8;
    case 153u: goto L_08934EF4;
    case 154u: goto L_08934FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08934000:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[25]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[24]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[15]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[14]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[7] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[7] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[13]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21392), aot_gpr[4]);
      if (branch_taken) {
          goto L_08934128;
      }
      goto L_08934124;
    }
L_08934124:
    aot_gpr[2] = (0u | 0u);
    goto L_08934128;
L_08934128:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893413C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[13] = (aot_gpr[11] | 0u);
    aot_gpr[14] = (aot_gpr[10] | 0u);
    aot_gpr[15] = (aot_gpr[9] | 0u);
    aot_gpr[24] = (aot_gpr[8] | 0u);
    aot_gpr[25] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0893416Cu);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 102u, 0x08932940u>(ctx, &aot_mem) && ctx.pc == 0x0893416Cu) goto L_0893416C;
    return;
L_0893416C:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21388)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] << 4u);
      if (branch_taken) {
          goto L_089342D8;
      }
      goto L_08934188;
    }
L_08934188:
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[25]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[24]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[15]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[14]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[7] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[7] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[13]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21392), aot_gpr[4]);
      if (branch_taken) {
          goto L_089342DC;
      }
      goto L_089342D8;
    }
L_089342D8:
    aot_gpr[2] = (0u | 0u);
    goto L_089342DC;
L_089342DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089342F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(21392)));
    aot_gpr[12] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[12] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_0893438C;
      }
      goto L_08934310;
    }
L_08934310:
    aot_gpr[6] = (0u | 1u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[10] = (2219u << 16u);
    goto L_0893431C;
L_0893431C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(21396)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[11]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893437C;
      }
      goto L_08934330;
    }
L_08934330:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893437C;
      }
      goto L_0893433C;
    }
L_0893433C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934354;
      }
      goto L_08934348;
    }
L_08934348:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(21392)));
      if (branch_taken) {
          goto L_0893437C;
      }
      goto L_08934354;
    }
L_08934354:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0893437C;
      }
      goto L_0893435C;
    }
L_0893435C:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(21392)));
    goto L_0893437C;
L_0893437C:
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[12] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893431C;
      }
      goto L_0893438C;
    }
L_0893438C:
    aot_gpr[31] = (0x08934394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 102u, 0x08932940u>(ctx, &aot_mem) && ctx.pc == 0x08934394u) goto L_08934394;
    return;
L_08934394:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089343A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21392)));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[3] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08934430;
      }
      goto L_089343C0;
    }
L_089343C0:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[9] = (2219u << 16u);
    goto L_089343CC;
L_089343CC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08934420;
      }
      goto L_089343E0;
    }
L_089343E0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089343F8;
      }
      goto L_089343EC;
    }
L_089343EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21392)));
      if (branch_taken) {
          goto L_08934420;
      }
      goto L_089343F8;
    }
L_089343F8:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08934420;
      }
      goto L_08934400;
    }
L_08934400:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(21396)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(21396)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21392)));
    goto L_08934420;
L_08934420:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[3] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089343CC;
      }
      goto L_08934430;
    }
L_08934430:
    aot_gpr[31] = (0x08934438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 102u, 0x08932940u>(ctx, &aot_mem) && ctx.pc == 0x08934438u) goto L_08934438;
    return;
L_08934438:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934444:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-384));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1024)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893454C;
      }
      goto L_08934468;
    }
L_08934468:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    aot_gpr[5] = (aot_gpr[4] & 4u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0893447C;
      }
      goto L_08934478;
    }
L_08934478:
    aot_gpr[17] = (0u | 8192u);
    goto L_0893447C;
L_0893447C:
    aot_gpr[5] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893448C;
      }
      goto L_08934488;
    }
L_08934488:
    aot_gpr[17] = (aot_gpr[17] | 4096u);
    goto L_0893448C;
L_0893448C:
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893449C;
      }
      goto L_08934498;
    }
L_08934498:
    aot_gpr[17] = (aot_gpr[17] | 16384u);
    goto L_0893449C;
L_0893449C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_0893454C;
      }
      goto L_089344A4;
    }
L_089344A4:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(768));
    goto L_089344A8;
L_089344A8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089344B8u);
    aot_gpr[6] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089344B8u) goto L_089344B8;
    return;
L_089344B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1024)));
    aot_gpr[31] = (0x089344C4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B284u;
    return;
L_089344C4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08934544;
      }
      goto L_089344CC;
    }
L_089344CC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089344D8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x089344D8u) goto L_089344D8;
    return;
L_089344D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089344E8;
      }
      goto L_089344E0;
    }
L_089344E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893454C;
      }
      goto L_089344E8;
    }
L_089344E8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089344F4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x089344F4u) goto L_089344F4;
    return;
L_089344F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934544;
      }
      goto L_08934504;
    }
L_08934504:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08934510u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08934510u) goto L_08934510;
    return;
L_08934510:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(256));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(512));
    aot_gpr[31] = (0x08934520u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08934520u) goto L_08934520;
    return;
L_08934520:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08934530u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25316));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08934530u) goto L_08934530;
    return;
L_08934530:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0893453Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0893453Cu) goto L_0893453C;
    return;
L_0893453C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08934550;
      }
      goto L_08934544;
    }
L_08934544:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089344A8;
      }
      goto L_0893454C;
    }
L_0893454C:
    aot_gpr[2] = (0u | 0u);
    goto L_08934550;
L_08934550:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893456C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08934594u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 129u, 0x08933718u>(ctx, &aot_mem) && ctx.pc == 0x08934594u) goto L_08934594;
    return;
L_08934594:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089345A0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089345A0u) goto L_089345A0;
    return;
L_089345A0:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 92u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089345D8;
      }
      goto L_089345B8;
    }
L_089345B8:
    aot_gpr[31] = (0x089345C0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089345C0u) goto L_089345C0;
    return;
L_089345C0:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 47u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089345EC;
      }
      goto L_089345D8;
    }
L_089345D8:
    aot_gpr[31] = (0x089345E0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089345E0u) goto L_089345E0;
    return;
L_089345E0:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089345EC;
L_089345EC:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(512));
    aot_gpr[31] = (0x089345F8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x089345F8u) goto L_089345F8;
    return;
L_089345F8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(768));
    aot_gpr[31] = (0x08934608u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25400));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08934608u) goto L_08934608;
    return;
L_08934608:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08934614u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08934614u) goto L_08934614;
    return;
L_08934614:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(256));
    aot_gpr[31] = (0x08934620u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08934620u) goto L_08934620;
    return;
L_08934620:
    aot_gpr[31] = (0x08934628u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = 0x08A5B274u;
    return;
L_08934628:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1024), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1028), aot_gpr[16]);
    aot_gpr[31] = (0x08934638u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08934444;
L_08934638:
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
L_08934650:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08934668u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1024)));
    ctx.pc = 0x08A5B28Cu;
    return;
L_08934668:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1024), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893467C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089346B0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 129u, 0x08933718u>(ctx, &aot_mem) && ctx.pc == 0x089346B0u) goto L_089346B0;
    return;
L_089346B0:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    goto L_089346C8;
L_089346C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089346E4;
      }
      goto L_089346D4;
    }
L_089346D4:
    aot_gpr[31] = (0x089346DCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x089346DCu) goto L_089346DC;
    return;
L_089346DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934700;
      }
      goto L_089346E4;
    }
L_089346E4:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(320));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_089346C8;
      }
      goto L_089346F8;
    }
L_089346F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934708;
      }
      goto L_08934700;
    }
L_08934700:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_0893470C;
      }
      goto L_08934708;
    }
L_08934708:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_0893470C;
L_0893470C:
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
L_0893472C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893474C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_089347A0;
      }
      goto L_0893475C;
    }
L_0893475C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089347A0;
      }
      goto L_08934764;
    }
L_08934764:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934798;
      }
      goto L_08934778;
    }
L_08934778:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08934790u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934790u) goto L_08934790;
    return;
L_08934790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089347A0;
      }
      goto L_08934798;
    }
L_08934798:
    aot_gpr[31] = (0x089347A0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x089347A0u) goto L_089347A0;
    return;
L_089347A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089347AC:
    aot_gpr[8] = (1u << 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089347EC;
      }
      goto L_089347C0;
    }
L_089347C0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[5]);
    if (aot_gpr[7] != 0u) {
    aot_gpr[6] = (0u | 255u);
        goto L_089347D4;
    }
    goto L_089347D4;
L_089347D4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[5]);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 255u);
        goto L_089347E8;
    }
    goto L_089347E8;
L_089347E8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    goto L_089347EC;
L_089347EC:
    aot_gpr[2] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089347FC:
    aot_gpr[6] = (1u << 16u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934828;
      }
      goto L_0893480C;
    }
L_0893480C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 255u);
        goto L_08934820;
    }
    goto L_08934820;
L_08934820:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08934988;
      }
      goto L_08934828;
    }
L_08934828:
    aot_gpr[7] = (8u << 16u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (4u << 16u);
      if (branch_taken) {
          goto L_08934938;
      }
      goto L_08934834;
    }
L_08934834:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (2u << 16u);
      if (branch_taken) {
          goto L_089348E4;
      }
      goto L_0893483C;
    }
L_0893483C:
    if (aot_gpr[5] == aot_gpr[7]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
        goto L_0893489C;
    }
    goto L_08934844;
L_08934844:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08934984;
      }
      goto L_0893484C;
    }
L_0893484C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[4] = (17151u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893487C;
      }
      goto L_08934878;
    }
L_08934878:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0893487C;
L_0893487C:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] & 255u);
      if (branch_taken) {
          goto L_08934988;
      }
      goto L_0893489C;
    }
L_0893489C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[4] = (17151u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_089348CC;
      }
      goto L_089348C8;
    }
L_089348C8:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_089348CC;
L_089348CC:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] & 255u);
      if (branch_taken) {
          goto L_08934988;
      }
      goto L_089348E4;
    }
L_089348E4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[4] = (17151u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934918;
      }
      goto L_08934914;
    }
L_08934914:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08934918;
L_08934918:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] & 255u);
      if (branch_taken) {
          goto L_08934988;
      }
      goto L_08934938;
    }
L_08934938:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[4] = (17151u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_0893496C;
      }
      goto L_08934968;
    }
L_08934968:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0893496C;
L_0893496C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] & 255u);
      if (branch_taken) {
          goto L_08934988;
      }
      goto L_08934984;
    }
L_08934984:
    aot_gpr[2] = (0u | 0u);
    goto L_08934988;
L_08934988:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934990:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(-6560));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(9)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-6560)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[31]);
    aot_gpr[31] = (0x089349CCu);
    aot_gpr[5] = (0u | 8u);
    ctx.pc = 0x08A5AF64u;
    return;
L_089349CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934A10;
      }
      goto L_089349D4;
    }
L_089349D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-6560), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089349FC;
      }
      goto L_089349EC;
    }
L_089349EC:
    aot_gpr[4] = (0u | 128u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08934A20;
      }
      goto L_089349FC;
    }
L_089349FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(9)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08934A20;
      }
      goto L_08934A10;
    }
L_08934A10:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-6560), 0u);
    aot_gpr[4] = (0u | 128u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08934A20;
L_08934A20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A34:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A3C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08934A54u);
    // nop
    goto L_08934990;
L_08934A54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08934A74u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6560));
    goto L_0893472C;
L_08934A74:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08934A80u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29024));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08934A80u) goto L_08934A80;
    return;
L_08934A80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08934B34;
      }
      goto L_08934AAC;
    }
L_08934AAC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[18] = (2216u << 16u);
      if (branch_taken) {
          goto L_08934AFC;
      }
      goto L_08934AB8;
    }
L_08934AB8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08934AC4u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 64u, 0x08A584F4u>(ctx, &aot_mem) && ctx.pc == 0x08934AC4u) goto L_08934AC4;
    return;
L_08934AC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934AF0;
      }
      goto L_08934AD0;
    }
L_08934AD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08934AF0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934AF0u) goto L_08934AF0;
    return;
L_08934AF0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934AB8;
      }
      goto L_08934AFC;
    }
L_08934AFC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08934B08u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 71u, 0x08A58548u>(ctx, &aot_mem) && ctx.pc == 0x08934B08u) goto L_08934B08;
    return;
L_08934B08:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08934B34;
      }
      goto L_08934B14;
    }
L_08934B14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08934B34u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934B34u) goto L_08934B34;
    return;
L_08934B34:
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
L_08934B4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (5888u << 16u);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (24064u << 16u);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[7] = (16640u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[10] = (23296u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] >> 8u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(84)));
    aot_gpr[24] = (256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(136), aot_gpr[7]);
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[24]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (23552u << 16u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[15] = (0u | 0u);
    aot_gpr[14] = (0u | 1u);
    aot_gpr[12] = (0u | 144u);
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[11] = (0u | 145u);
    aot_gpr[10] = (0u | 99u);
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[9]);
    aot_gpr[8] = (0u | 100u);
    aot_gpr[7] = (0u | 101u);
    goto L_08934C04;
L_08934C04:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[13] = (aot_gpr[15] + static_cast<std::uint32_t>(24));
    aot_gpr[25] = (aot_gpr[15] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[15]);
    { const bool branch_taken = aot_gpr[25] == 0u;
    aot_gpr[13] = (aot_gpr[13] << 24u);
      if (branch_taken) {
          goto L_08934D68;
      }
      goto L_08934C1C;
    }
L_08934C1C:
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(aot_gpr[14]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[13] | 1u);
    aot_gpr[25] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[3] = (aot_gpr[5] + aot_gpr[15]);
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(80)));
    aot_gpr[13] = (aot_gpr[15] + static_cast<std::uint32_t>(95));
    aot_gpr[13] = (aot_gpr[13] << 24u);
    { const bool branch_taken = aot_gpr[25] == 0u;
    aot_gpr[3] = (aot_gpr[12] << 24u);
      if (branch_taken) {
          goto L_08934C70;
      }
      goto L_08934C4C;
    }
L_08934C4C:
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[13] | 1u);
    aot_gpr[16] = (aot_gpr[25] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[13] = (aot_gpr[13] & aot_gpr[24]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (aot_gpr[3] | aot_gpr[13]);
      if (branch_taken) {
          goto L_08934C8C;
      }
      goto L_08934C70;
    }
L_08934C70:
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[25] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[13] = (aot_gpr[13] & aot_gpr[24]);
    aot_gpr[13] = (aot_gpr[3] | aot_gpr[13]);
    goto L_08934C8C;
L_08934C8C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[13] = (aot_gpr[11] << 24u);
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[24]);
    aot_gpr[3] = (aot_gpr[13] | aot_gpr[3]);
    aot_gpr[13] = (aot_gpr[25] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[10] << 24u);
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
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
    aot_gpr[13] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[13]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[13] = (aot_gpr[13] >> 8u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[8] << 24u);
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<46u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[13] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[13]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (aot_gpr[13] >> 8u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[7] << 24u);
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<78u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[13] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[13]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[13] = (aot_gpr[13] >> 8u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_08934D7C;
      }
      goto L_08934D68;
    }
L_08934D68:
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    goto L_08934D7C;
L_08934D7C:
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(3));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(3));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3));
    aot_gpr[3] = (aot_gpr[15] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08934C04;
      }
      goto L_08934DA4;
    }
L_08934DA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934DB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (5888u << 16u);
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (24064u << 16u);
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[8] = (16640u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[11] = (23296u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[9] >> 8u);
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(84)));
    aot_gpr[25] = (256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(136), aot_gpr[8]);
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[25]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (23552u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[24] = (0u | 0u);
    aot_gpr[15] = (0u | 1u);
    aot_gpr[13] = (0u | 144u);
    aot_gpr[3] = (aot_gpr[5] | 0u);
    aot_gpr[2] = (0u | 145u);
    aot_gpr[11] = (aot_gpr[5] + aot_gpr[11]);
    aot_gpr[10] = (0u | 99u);
    aot_gpr[9] = (0u | 100u);
    aot_gpr[8] = (0u | 101u);
    goto L_08934E6C;
L_08934E6C:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[14] = (aot_gpr[24] + static_cast<std::uint32_t>(24));
    aot_gpr[16] = (aot_gpr[24] < aot_gpr[12] ? 1u : 0u);
    aot_gpr[12] = (aot_gpr[6] + aot_gpr[24]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[14] = (aot_gpr[14] << 24u);
      if (branch_taken) {
          goto L_08934FEC;
      }
      goto L_08934E84;
    }
L_08934E84:
    PSPRECOMP_AOT_STORE8(aot_gpr[12] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(aot_gpr[15]));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (aot_gpr[14] | 1u);
    aot_gpr[16] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[12] = (aot_gpr[5] + aot_gpr[24]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(80)));
    aot_gpr[14] = (aot_gpr[24] + static_cast<std::uint32_t>(95));
    aot_gpr[14] = (aot_gpr[14] << 24u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[12] = (aot_gpr[13] << 24u);
      if (branch_taken) {
          goto L_08934ED8;
      }
      goto L_08934EB4;
    }
L_08934EB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (aot_gpr[14] | 1u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[25]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (aot_gpr[12] | aot_gpr[14]);
      if (branch_taken) {
          goto L_08934EF4;
      }
      goto L_08934ED8;
    }
L_08934ED8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[25]);
    aot_gpr[14] = (aot_gpr[12] | aot_gpr[14]);
    goto L_08934EF4;
L_08934EF4:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    aot_gpr[14] = (aot_gpr[2] << 24u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[12] & aot_gpr[25]);
    aot_gpr[12] = (aot_gpr[14] | aot_gpr[12]);
    aot_gpr[14] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[12] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[12]);
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
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
    aot_gpr[12] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_gpr[12]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[10] << 24u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[14] = (aot_gpr[14] >> 8u);
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[12] = (aot_gpr[9] << 24u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[14] = (aot_gpr[14] >> 8u);
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[12] = (aot_gpr[8] << 24u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[14] = (aot_gpr[14] >> 8u);
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[12]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 1u, 0x08935000u>(ctx, &aot_mem); return;
      }
      goto L_08934FEC;
    }
L_08934FEC:
    PSPRECOMP_AOT_STORE8(aot_gpr[12] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    ctx.pc = 0x08935000u; return;
}

void recomp_unit_0304(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0304_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_304(Runtime &runtime) {
    runtime.register_generated_unit(304u, 0x08934000u, 4096u, &recomp_unit_0304, &recomp_unit_0304_entry);
    runtime.register_function(0x08934000u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934124u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934128u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893413Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893416Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934188u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089342D8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089342DCu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089342F0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934310u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893431Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934330u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893433Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934348u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934354u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893435Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893437Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893438Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934394u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089343A0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089343C0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089343CCu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089343E0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089343ECu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089343F8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934400u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934420u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934430u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934438u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934444u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934468u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934478u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893447Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934488u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893448Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934498u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893449Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089344A4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089344A8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089344B8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089344C4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089344CCu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089344D8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089344E0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089344E8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089344F4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934504u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934510u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934520u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934530u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893453Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934544u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893454Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934550u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893456Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934594u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089345A0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089345B8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089345C0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089345D8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089345E0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089345ECu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089345F8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934608u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934614u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934620u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934628u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934638u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934650u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934668u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893467Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089346B0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089346C8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089346D4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089346DCu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089346E4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089346F8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934700u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934708u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893470Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893472Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893474Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893475Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934764u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934778u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934790u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934798u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089347A0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089347ACu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089347C0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089347D4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089347E8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089347ECu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089347FCu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893480Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934820u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934828u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934834u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893483Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934844u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893484Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934878u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893487Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893489Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089348C8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089348CCu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089348E4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934914u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934918u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934938u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934968u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x0893496Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934984u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934988u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934990u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089349CCu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089349D4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089349ECu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x089349FCu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934A10u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934A20u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934A34u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934A3Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934A44u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934A54u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934A60u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934A74u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934A80u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934A8Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934AACu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934AB8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934AC4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934AD0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934AF0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934AFCu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934B08u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934B14u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934B34u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934B4Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934C04u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934C1Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934C4Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934C70u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934C8Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934D68u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934D7Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934DA4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934DB0u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934E6Cu, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934E84u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934EB4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934ED8u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934EF4u, &recomp_unit_0304, "recomp_unit_0304");
    runtime.register_function(0x08934FECu, &recomp_unit_0304, "recomp_unit_0304");
}
} // namespace psprecomp
