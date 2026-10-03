#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0291[1019] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 25,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 71, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 76, 0, 0, 77, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0,
    0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 110, 0,
    0, 111, 0, 0, 112, 0, 0, 113, 0, 114, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 120, 0, 121, 0, 0, 0, 122, 123, 0, 0, 124, 0, 0, 0, 125,
    0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 133, 0, 134, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147,
    0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0,
    0, 0, 161, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168,
    169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183,
};
void recomp_unit_0291_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08927000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0291[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08927000;
    case 2u: goto L_08927018;
    case 3u: goto L_08927048;
    case 4u: goto L_0892706C;
    case 5u: goto L_08927080;
    case 6u: goto L_089270D0;
    case 7u: goto L_089270DC;
    case 8u: goto L_0892712C;
    case 9u: goto L_08927130;
    case 10u: goto L_0892716C;
    case 11u: goto L_089271C0;
    case 12u: goto L_089271DC;
    case 13u: goto L_08927218;
    case 14u: goto L_08927220;
    case 15u: goto L_08927248;
    case 16u: goto L_08927258;
    case 17u: goto L_08927270;
    case 18u: goto L_0892728C;
    case 19u: goto L_0892729C;
    case 20u: goto L_089272A8;
    case 21u: goto L_089272BC;
    case 22u: goto L_089272D8;
    case 23u: goto L_089272E0;
    case 24u: goto L_089272E8;
    case 25u: goto L_089272FC;
    case 26u: goto L_0892730C;
    case 27u: goto L_08927318;
    case 28u: goto L_08927324;
    case 29u: goto L_0892733C;
    case 30u: goto L_0892734C;
    case 31u: goto L_08927358;
    case 32u: goto L_08927388;
    case 33u: goto L_08927398;
    case 34u: goto L_089273AC;
    case 35u: goto L_089273B4;
    case 36u: goto L_089273D4;
    case 37u: goto L_089273E4;
    case 38u: goto L_08927400;
    case 39u: goto L_0892741C;
    case 40u: goto L_0892742C;
    case 41u: goto L_08927438;
    case 42u: goto L_0892744C;
    case 43u: goto L_08927468;
    case 44u: goto L_08927470;
    case 45u: goto L_08927478;
    case 46u: goto L_0892748C;
    case 47u: goto L_089274A4;
    case 48u: goto L_089274B0;
    case 49u: goto L_089274CC;
    case 50u: goto L_089274DC;
    case 51u: goto L_08927508;
    case 52u: goto L_08927510;
    case 53u: goto L_08927540;
    case 54u: goto L_0892756C;
    case 55u: goto L_08927574;
    case 56u: goto L_089275A4;
    case 57u: goto L_089275D8;
    case 58u: goto L_089275E0;
    case 59u: goto L_08927620;
    case 60u: goto L_08927640;
    case 61u: goto L_08927660;
    case 62u: goto L_08927670;
    case 63u: goto L_08927680;
    case 64u: goto L_089276AC;
    case 65u: goto L_089276B8;
    case 66u: goto L_089276C8;
    case 67u: goto L_089276D4;
    case 68u: goto L_089276E0;
    case 69u: goto L_089276E8;
    case 70u: goto L_089276F0;
    case 71u: goto L_08927710;
    case 72u: goto L_08927714;
    case 73u: goto L_08927728;
    case 74u: goto L_08927730;
    case 75u: goto L_0892775C;
    case 76u: goto L_08927760;
    case 77u: goto L_0892776C;
    case 78u: goto L_08927778;
    case 79u: goto L_08927798;
    case 80u: goto L_089277BC;
    case 81u: goto L_089277CC;
    case 82u: goto L_089277D8;
    case 83u: goto L_089277E8;
    case 84u: goto L_089277F4;
    case 85u: goto L_08927808;
    case 86u: goto L_08927818;
    case 87u: goto L_08927820;
    case 88u: goto L_08927828;
    case 89u: goto L_08927830;
    case 90u: goto L_08927838;
    case 91u: goto L_08927840;
    case 92u: goto L_08927848;
    case 93u: goto L_08927854;
    case 94u: goto L_0892785C;
    case 95u: goto L_08927864;
    case 96u: goto L_0892786C;
    case 97u: goto L_08927874;
    case 98u: goto L_0892787C;
    case 99u: goto L_08927890;
    case 100u: goto L_089278EC;
    case 101u: goto L_08927904;
    case 102u: goto L_0892790C;
    case 103u: goto L_08927924;
    case 104u: goto L_0892793C;
    case 105u: goto L_08927944;
    case 106u: goto L_0892794C;
    case 107u: goto L_08927958;
    case 108u: goto L_08927960;
    case 109u: goto L_0892796C;
    case 110u: goto L_08927978;
    case 111u: goto L_08927984;
    case 112u: goto L_08927990;
    case 113u: goto L_0892799C;
    case 114u: goto L_089279A4;
    case 115u: goto L_089279A8;
    case 116u: goto L_089279B4;
    case 117u: goto L_08927A28;
    case 118u: goto L_08927A30;
    case 119u: goto L_08927A40;
    case 120u: goto L_08927A44;
    case 121u: goto L_08927A4C;
    case 122u: goto L_08927A5C;
    case 123u: goto L_08927A60;
    case 124u: goto L_08927A6C;
    case 125u: goto L_08927A7C;
    case 126u: goto L_08927A8C;
    case 127u: goto L_08927A98;
    case 128u: goto L_08927AA0;
    case 129u: goto L_08927AB0;
    case 130u: goto L_08927AC0;
    case 131u: goto L_08927ACC;
    case 132u: goto L_08927AD8;
    case 133u: goto L_08927AE0;
    case 134u: goto L_08927AE8;
    case 135u: goto L_08927AEC;
    case 136u: goto L_08927B1C;
    case 137u: goto L_08927B7C;
    case 138u: goto L_08927B8C;
    case 139u: goto L_08927B94;
    case 140u: goto L_08927B9C;
    case 141u: goto L_08927BBC;
    case 142u: goto L_08927BC4;
    case 143u: goto L_08927BD4;
    case 144u: goto L_08927BDC;
    case 145u: goto L_08927BE8;
    case 146u: goto L_08927BF4;
    case 147u: goto L_08927BFC;
    case 148u: goto L_08927C04;
    case 149u: goto L_08927C0C;
    case 150u: goto L_08927C14;
    case 151u: goto L_08927C1C;
    case 152u: goto L_08927C24;
    case 153u: goto L_08927C34;
    case 154u: goto L_08927C44;
    case 155u: goto L_08927C74;
    case 156u: goto L_08927CAC;
    case 157u: goto L_08927CC4;
    case 158u: goto L_08927CE8;
    case 159u: goto L_08927CF0;
    case 160u: goto L_08927CF8;
    case 161u: goto L_08927D08;
    case 162u: goto L_08927D0C;
    case 163u: goto L_08927D28;
    case 164u: goto L_08927D44;
    case 165u: goto L_08927D50;
    case 166u: goto L_08927D60;
    case 167u: goto L_08927D6C;
    case 168u: goto L_08927D7C;
    case 169u: goto L_08927D80;
    case 170u: goto L_08927D88;
    case 171u: goto L_08927DA8;
    case 172u: goto L_08927DBC;
    case 173u: goto L_08927DD0;
    case 174u: goto L_08927DD4;
    case 175u: goto L_08927DDC;
    case 176u: goto L_08927E28;
    case 177u: goto L_08927F2C;
    case 178u: goto L_08927F50;
    case 179u: goto L_08927F58;
    case 180u: goto L_08927F7C;
    case 181u: goto L_08927F98;
    case 182u: goto L_08927FDC;
    case 183u: goto L_08927FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08927000:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08927018u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25912));
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 90u, 0x089268CCu>(ctx, &aot_mem) && ctx.pc == 0x08927018u) goto L_08927018;
    return;
L_08927018:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927048:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (39177u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20257));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] < static_cast<std::uint32_t>(624) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0892716C;
      }
      goto L_0892706C;
    }
L_0892706C:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (32768u << 16u);
    goto L_08927080;
L_08927080:
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[10] & aot_gpr[6]);
    aot_gpr[11] = (aot_gpr[11] & aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(1588)));
    aot_gpr[2] = (aot_gpr[10] & 1u);
    aot_gpr[10] = (aot_gpr[10] >> 1u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[10] = (aot_gpr[11] ^ aot_gpr[10]);
    aot_gpr[11] = (aot_gpr[29] + aot_gpr[2]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[10] ^ aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < 227 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08927080;
      }
      goto L_089270D0;
    }
L_089270D0:
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < 623 ? 1u : 0u);
    if (aot_gpr[10] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(2492)));
        goto L_08927130;
    }
    goto L_089270DC;
L_089270DC:
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[10] & aot_gpr[6]);
    aot_gpr[11] = (aot_gpr[11] & aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-908)));
    aot_gpr[2] = (aot_gpr[10] & 1u);
    aot_gpr[10] = (aot_gpr[10] >> 1u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[10] = (aot_gpr[11] ^ aot_gpr[10]);
    aot_gpr[11] = (aot_gpr[29] + aot_gpr[2]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[10] ^ aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < 623 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089270DC;
      }
      goto L_0892712C;
    }
L_0892712C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(2492)));
    goto L_08927130;
L_08927130:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[9] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(1584)));
    aot_gpr[7] = (aot_gpr[5] & 1u);
    aot_gpr[5] = (aot_gpr[5] >> 1u);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (aot_gpr[6] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(2492), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0892716C;
L_0892716C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (40236u << 16u);
    aot_gpr[6] = (aot_gpr[4] >> 11u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] << 7u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22144));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] << 15u);
    aot_gpr[6] = (61382u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] >> 18u);
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089271C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3533));
    goto L_089271DC;
L_089271DC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(624) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089271DC;
      }
      goto L_08927218;
    }
L_08927218:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927220:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08927248u);
    aot_gpr[5] = (0u | 2496u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08927248u) goto L_08927248;
    return;
L_08927248:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08927258u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089271C0;
L_08927258:
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
L_08927270:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089272E8;
      }
      goto L_0892728C;
    }
L_0892728C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0892729Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0892729Cu) goto L_0892729C;
    return;
L_0892729C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089272E8;
      }
      goto L_089272A8;
    }
L_089272A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089272E0;
      }
      goto L_089272BC;
    }
L_089272BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089272D8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089272D8u) goto L_089272D8;
    return;
L_089272D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089272E8;
      }
      goto L_089272E0;
    }
L_089272E0:
    aot_gpr[31] = (0x089272E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x089272E8u) goto L_089272E8;
    return;
L_089272E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089272FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0892730Cu);
    // nop
    goto L_08927048;
L_0892730C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08927324;
      }
      goto L_08927318;
    }
L_08927318:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08927324;
L_08927324:
    aot_gpr[4] = (12160u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892733C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0892734Cu);
    // nop
    goto L_08927048;
L_0892734C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927358:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08927388u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08927388u) goto L_08927388;
    return;
L_08927388:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08927398u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08927220;
L_08927398:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089273D4;
      }
      goto L_089273AC;
    }
L_089273AC:
    aot_gpr[31] = (0x089273B4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_089272FC;
L_089273B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089273AC;
      }
      goto L_089273D4;
    }
L_089273D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089273E4u);
    aot_gpr[5] = (0u | 2u);
    goto L_08927270;
L_089273E4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927400:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08927478;
      }
      goto L_0892741C;
    }
L_0892741C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0892742Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0892742Cu) goto L_0892742C;
    return;
L_0892742C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927478;
      }
      goto L_08927438;
    }
L_08927438:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927470;
      }
      goto L_0892744C;
    }
L_0892744C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08927468u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08927468u) goto L_08927468;
    return;
L_08927468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927478;
      }
      goto L_08927470;
    }
L_08927470:
    aot_gpr[31] = (0x08927478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08927478u) goto L_08927478;
    return;
L_08927478:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892748C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089274B0;
      }
      goto L_089274A4;
    }
L_089274A4:
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[7] = (ctx.hi);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_089274B0;
L_089274B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[7] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089274CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089274DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (2194u << 16u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08927508u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(29900));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x08927508u) goto L_08927508;
    return;
L_08927508:
    aot_gpr[31] = (0x08927510u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 18u, 0x08A57184u>(ctx, &aot_mem) && ctx.pc == 0x08927510u) goto L_08927510;
    return;
L_08927510:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), 0u);
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
L_08927540:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (2194u << 16u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0892756Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(29900));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x0892756Cu) goto L_0892756C;
    return;
L_0892756C:
    aot_gpr[31] = (0x08927574u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 18u, 0x08A57184u>(ctx, &aot_mem) && ctx.pc == 0x08927574u) goto L_08927574;
    return;
L_08927574:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), 0u);
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
L_089275A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[7] = (2194u << 16u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089275D8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(29900));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x089275D8u) goto L_089275D8;
    return;
L_089275D8:
    aot_gpr[31] = (0x089275E0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 18u, 0x08A57184u>(ctx, &aot_mem) && ctx.pc == 0x089275E0u) goto L_089275E0;
    return;
L_089275E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08927620:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927670;
      }
      goto L_08927640;
    }
L_08927640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08927660u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08927660u) goto L_08927660;
    return;
L_08927660:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927640;
      }
      goto L_08927670;
    }
L_08927670:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927680:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08927798;
      }
      goto L_089276AC;
    }
L_089276AC:
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x089276B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08927620;
L_089276B8:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    goto L_089276C8;
L_089276C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927714;
      }
      goto L_089276D4;
    }
L_089276D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927714;
      }
      goto L_089276E0;
    }
L_089276E0:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_089276F0;
      }
      goto L_089276E8;
    }
L_089276E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08927714;
      }
      goto L_089276F0;
    }
L_089276F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08927710u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08927710u) goto L_08927710;
    return;
L_08927710:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08927714;
L_08927714:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[20] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089276C8;
      }
      goto L_08927728;
    }
L_08927728:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[21]) < 0;
    aot_gpr[4] = (aot_gpr[21] << 3u);
      if (branch_taken) {
          goto L_08927760;
      }
      goto L_08927730;
    }
L_08927730:
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892775Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892775Cu) goto L_0892775C;
    return;
L_0892775C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08927760;
L_08927760:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0892776Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 19u, 0x08A57198u>(ctx, &aot_mem) && ctx.pc == 0x0892776Cu) goto L_0892776C;
    return;
L_0892776C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08927798;
      }
      goto L_08927778;
    }
L_08927778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08927798u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08927798u) goto L_08927798;
    return;
L_08927798:
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
L_089277BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089277CCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 26u, 0x08A571F8u>(ctx, &aot_mem) && ctx.pc == 0x089277CCu) goto L_089277CC;
    return;
L_089277CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089277D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089277E8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 30u, 0x08A57244u>(ctx, &aot_mem) && ctx.pc == 0x089277E8u) goto L_089277E8;
    return;
L_089277E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089277F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08927808u);
    aot_gpr[16] = (0u | 2u);
    ctx.pc = 0x08A5AC54u;
    return;
L_08927808:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892787C;
      }
      goto L_08927818;
    }
L_08927818:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08927874;
      }
      goto L_08927820;
    }
L_08927820:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08927848;
      }
      goto L_08927828;
    }
L_08927828:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08927864;
      }
      goto L_08927830;
    }
L_08927830:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08927874;
      }
      goto L_08927838;
    }
L_08927838:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_0892785C;
      }
      goto L_08927840;
    }
L_08927840:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0892787C;
      }
      goto L_08927848;
    }
L_08927848:
    aot_gpr[16] = (0u | 2u);
    aot_gpr[31] = (0x08927854u);
    aot_gpr[4] = (0u | 2u);
    ctx.pc = 0x08A5AC34u;
    return;
L_08927854:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892787C;
      }
      goto L_0892785C;
    }
L_0892785C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892787C;
      }
      goto L_08927864;
    }
L_08927864:
    aot_gpr[31] = (0x0892786Cu);
    // nop
    ctx.pc = 0x08A5AC84u;
    return;
L_0892786C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892787C;
      }
      goto L_08927874;
    }
L_08927874:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_0892787C;
      }
      goto L_0892787C;
    }
L_0892787C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927890:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[6] | 0u);
    aot_gpr[23] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    aot_gpr[22] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[31] = (0x089278ECu);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = 0x08A5AF54u;
    return;
L_089278EC:
    aot_gpr[20] = (2219u << 16u);
    aot_gpr[16] = (aot_gpr[20] + static_cast<std::uint32_t>(-11776));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08927904u);
    aot_gpr[6] = (0u | 928u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08927904u) goto L_08927904;
    return;
L_08927904:
    aot_gpr[31] = (0x0892790Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 83u, 0x08943620u>(ctx, &aot_mem) && ctx.pc == 0x0892790Cu) goto L_0892790C;
    return;
L_0892790C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    aot_gpr[17] = (0u | 1u);
    aot_gpr[19] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 3u);
      if (branch_taken) {
          goto L_089279A4;
      }
      goto L_08927924;
    }
L_08927924:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-25904)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892793C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_089279A8;
      }
      goto L_08927944;
    }
L_08927944:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[19]);
      if (branch_taken) {
          goto L_089279A8;
      }
      goto L_0892794C;
    }
L_0892794C:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_089279A8;
      }
      goto L_08927958;
    }
L_08927958:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[18]);
      if (branch_taken) {
          goto L_089279A8;
      }
      goto L_08927960;
    }
L_08927960:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_089279A8;
      }
      goto L_0892796C;
    }
L_0892796C:
    aot_gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_089279A8;
      }
      goto L_08927978;
    }
L_08927978:
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_089279A8;
      }
      goto L_08927984;
    }
L_08927984:
    aot_gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_089279A8;
      }
      goto L_08927990;
    }
L_08927990:
    aot_gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_089279A8;
      }
      goto L_0892799C;
    }
L_0892799C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089279A8;
      }
      goto L_089279A4;
    }
L_089279A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    goto L_089279A8;
L_089279A8:
    aot_gpr[4] = (0u | 928u);
    aot_gpr[31] = (0x089279B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-11776), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 128u, 0x089438FCu>(ctx, &aot_mem) && ctx.pc == 0x089279B4u) goto L_089279B4;
    return;
L_089279B4:
    aot_gpr[4] = (0u < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (0u | 19u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u | 18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    aot_gpr[4] = (0u | 100u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    aot_gpr[4] = (0u | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr[4] = (0u | 480u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[4] = (0u | 272u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(92));
    aot_gpr[31] = (0x08927A28u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08927A28u) goto L_08927A28;
    return;
L_08927A28:
    { const bool branch_taken = aot_gpr[23] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08927A44;
      }
      goto L_08927A30;
    }
L_08927A30:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08927A40u);
    aot_gpr[6] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08927A40u) goto L_08927A40;
    return;
L_08927A40:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(295), static_cast<std::uint8_t>(0u));
    goto L_08927A44;
L_08927A44:
    { const bool branch_taken = aot_gpr[30] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[17]);
      if (branch_taken) {
          goto L_08927A60;
      }
      goto L_08927A4C;
    }
L_08927A4C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(304));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08927A5Cu);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08927A5Cu) goto L_08927A5C;
    return;
L_08927A5C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(431), static_cast<std::uint8_t>(0u));
    goto L_08927A60;
L_08927A60:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(432), 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), 0u);
      if (branch_taken) {
          goto L_08927A98;
      }
      goto L_08927A6C;
    }
L_08927A6C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(440));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08927A7Cu);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08927A7Cu) goto L_08927A7C;
    return;
L_08927A7C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(503), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08927A8Cu);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 268u, 0x08A3AD90u>(ctx, &aot_mem) && ctx.pc == 0x08927A8Cu) goto L_08927A8C;
    return;
L_08927A8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(508), aot_gpr[4]);
    goto L_08927A98;
L_08927A98:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927ACC;
      }
      goto L_08927AA0;
    }
L_08927AA0:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(512));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08927AB0u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08927AB0u) goto L_08927AB0;
    return;
L_08927AB0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(575), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08927AC0u);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 268u, 0x08A3AD90u>(ctx, &aot_mem) && ctx.pc == 0x08927AC0u) goto L_08927AC0;
    return;
L_08927AC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(576), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(580), aot_gpr[4]);
    goto L_08927ACC;
L_08927ACC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(584), aot_gpr[17]);
    aot_gpr[31] = (0x08927AD8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ABCCu;
    return;
L_08927AD8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08927AE8;
      }
      goto L_08927AE0;
    }
L_08927AE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08927AEC;
      }
      goto L_08927AE8;
    }
L_08927AE8:
    aot_gpr[2] = (0u | 1u);
    goto L_08927AEC;
L_08927AEC:
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
L_08927B1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (0u | 1u);
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[22] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[10] | 0u);
    aot_gpr[17] = (aot_gpr[9] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[23] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08927B7Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08927B7Cu) goto L_08927B7C;
    return;
L_08927B7C:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08927B8Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08927B8Cu) goto L_08927B8C;
    return;
L_08927B8C:
    aot_gpr[31] = (0x08927B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 164u, 0x08942C88u>(ctx, &aot_mem) && ctx.pc == 0x08927B94u) goto L_08927B94;
    return;
L_08927B94:
    aot_gpr[31] = (0x08927B9Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 173u, 0x08942D14u>(ctx, &aot_mem) && ctx.pc == 0x08927B9Cu) goto L_08927B9C;
    return;
L_08927B9C:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08927BBCu);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    goto L_08927890;
L_08927BBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927C0C;
      }
      goto L_08927BC4;
    }
L_08927BC4:
    aot_gpr[17] = (2219u << 16u);
    aot_gpr[19] = (0u | 3u);
    aot_gpr[16] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-11776));
    goto L_08927BD4;
L_08927BD4:
    aot_gpr[31] = (0x08927BDCu);
    // nop
    goto L_089277F4;
L_08927BDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08927BFC;
      }
      goto L_08927BE8;
    }
L_08927BE8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08927BF4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08927BF4u) goto L_08927BF4;
    return;
L_08927BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927C04;
      }
      goto L_08927BFC;
    }
L_08927BFC:
    aot_gpr[31] = (0x08927C04u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5B094u;
    return;
L_08927C04:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08927BD4;
      }
      goto L_08927C0C;
    }
L_08927C0C:
    aot_gpr[31] = (0x08927C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 81u, 0x089435FCu>(ctx, &aot_mem) && ctx.pc == 0x08927C14u) goto L_08927C14;
    return;
L_08927C14:
    aot_gpr[31] = (0x08927C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 180u, 0x08942D80u>(ctx, &aot_mem) && ctx.pc == 0x08927C1Cu) goto L_08927C1C;
    return;
L_08927C1C:
    aot_gpr[31] = (0x08927C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 184u, 0x08942DD8u>(ctx, &aot_mem) && ctx.pc == 0x08927C24u) goto L_08927C24;
    return;
L_08927C24:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08927C34u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08927C34u) goto L_08927C34;
    return;
L_08927C34:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08927C44u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08927C44u) goto L_08927C44;
    return;
L_08927C44:
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
L_08927C74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08927CF0;
      }
      goto L_08927CAC;
    }
L_08927CAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08927CC4u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08927CC4u) goto L_08927CC4;
    return;
L_08927CC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08927CE8u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08927CE8u) goto L_08927CE8;
    return;
L_08927CE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08927CF0;
L_08927CF0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927D0C;
      }
      goto L_08927CF8;
    }
L_08927CF8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x08927D08u);
    aot_gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08927D08u) goto L_08927D08;
    return;
L_08927D08:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    goto L_08927D0C;
L_08927D0C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927D28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08927DA8;
      }
      goto L_08927D44;
    }
L_08927D44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927D60;
      }
      goto L_08927D50;
    }
L_08927D50:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08927D60u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08927D60u) goto L_08927D60;
    return;
L_08927D60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08927D80;
      }
      goto L_08927D6C;
    }
L_08927D6C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08927D7Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08927D7Cu) goto L_08927D7C;
    return;
L_08927D7C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08927D80;
L_08927D80:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08927DA8;
      }
      goto L_08927D88;
    }
L_08927D88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08927DA8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08927DA8u) goto L_08927DA8;
    return;
L_08927DA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927DBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DD4;
      }
      goto L_08927DD0;
    }
L_08927DD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_08927DD4;
L_08927DD4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927DDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[11] | 0u);
    aot_gpr[11] = (aot_gpr[9] & 255u);
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[17] = (aot_gpr[17] & 255u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[3] = (aot_gpr[6] < aot_gpr[3] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 10u, 0x08928130u>(ctx, &aot_mem); return;
      }
      goto L_08927E28;
    }
L_08927E28:
    aot_gpr[2] = (aot_gpr[6] << 5u);
    aot_gpr[12] = (aot_gpr[2] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[12]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[12] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 5u);
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[3]);
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
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[6]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(aot_gpr[10]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[6]);
      if (branch_taken) {
          goto L_08927F50;
      }
      goto L_08927F2C;
    }
L_08927F2C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (aot_gpr[6] | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[6]);
    goto L_08927F50;
L_08927F50:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927F7C;
      }
      goto L_08927F58;
    }
L_08927F58:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (aot_gpr[6] | 64u);
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[6]);
    goto L_08927F7C;
L_08927F7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(176)));
    aot_gpr[7] = (32u << 16u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927FDC;
      }
      goto L_08927F98;
    }
L_08927F98:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (aot_gpr[6] | 4u);
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[5]);
    goto L_08927FDC;
L_08927FDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(65)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 2u, 0x0892800Cu>(ctx, &aot_mem); return;
      }
      goto L_08927FE8;
    }
L_08927FE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (aot_gpr[5] | 32u);
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 5u);
    ctx.pc = 0x08928000u; return;
}

void recomp_unit_0291(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0291_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_291(Runtime &runtime) {
    runtime.register_generated_unit(291u, 0x08927000u, 4096u, &recomp_unit_0291, &recomp_unit_0291_entry);
    runtime.register_function(0x08927000u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927018u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927048u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892706Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927080u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089270D0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089270DCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892712Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927130u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892716Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089271C0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089271DCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927218u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927220u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927248u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927258u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927270u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892728Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892729Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089272A8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089272BCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089272D8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089272E0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089272E8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089272FCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892730Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927318u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927324u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892733Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892734Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927358u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927388u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927398u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089273ACu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089273B4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089273D4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089273E4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927400u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892741Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892742Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927438u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892744Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927468u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927470u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927478u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892748Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089274A4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089274B0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089274CCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089274DCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927508u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927510u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927540u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892756Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927574u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089275A4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089275D8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089275E0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927620u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927640u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927660u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927670u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927680u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089276ACu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089276B8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089276C8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089276D4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089276E0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089276E8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089276F0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927710u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927714u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927728u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927730u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892775Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927760u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892776Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927778u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927798u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089277BCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089277CCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089277D8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089277E8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089277F4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927808u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927818u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927820u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927828u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927830u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927838u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927840u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927848u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927854u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892785Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927864u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892786Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927874u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892787Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927890u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089278ECu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927904u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892790Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927924u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892793Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927944u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892794Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927958u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927960u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892796Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927978u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927984u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927990u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x0892799Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089279A4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089279A8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x089279B4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927A28u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927A30u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927A40u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927A44u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927A4Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927A5Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927A60u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927A6Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927A7Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927A8Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927A98u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927AA0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927AB0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927AC0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927ACCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927AD8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927AE0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927AE8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927AECu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927B1Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927B7Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927B8Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927B94u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927B9Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927BBCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927BC4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927BD4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927BDCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927BE8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927BF4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927BFCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927C04u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927C0Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927C14u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927C1Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927C24u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927C34u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927C44u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927C74u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927CACu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927CC4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927CE8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927CF0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927CF8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927D08u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927D0Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927D28u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927D44u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927D50u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927D60u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927D6Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927D7Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927D80u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927D88u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927DA8u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927DBCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927DD0u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927DD4u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927DDCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927E28u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927F2Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927F50u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927F58u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927F7Cu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927F98u, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927FDCu, &recomp_unit_0291, "recomp_unit_0291");
    runtime.register_function(0x08927FE8u, &recomp_unit_0291, "recomp_unit_0291");
}
} // namespace psprecomp
