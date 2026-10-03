#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0220[1023] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12,
    0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 43, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78,
    0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84,
    85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 90, 0, 91, 92, 0, 93, 94, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 100,
    0, 101, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 131, 0, 132, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142,
    0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0,
    150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0,
    169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 195,
};
void recomp_unit_0220_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088E0000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0220[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E0000;
    case 2u: goto L_088E0004;
    case 3u: goto L_088E0050;
    case 4u: goto L_088E0058;
    case 5u: goto L_088E0068;
    case 6u: goto L_088E0078;
    case 7u: goto L_088E00B4;
    case 8u: goto L_088E00C4;
    case 9u: goto L_088E00CC;
    case 10u: goto L_088E00DC;
    case 11u: goto L_088E00E4;
    case 12u: goto L_088E00FC;
    case 13u: goto L_088E0108;
    case 14u: goto L_088E0110;
    case 15u: goto L_088E0118;
    case 16u: goto L_088E0138;
    case 17u: goto L_088E0148;
    case 18u: goto L_088E0158;
    case 19u: goto L_088E0198;
    case 20u: goto L_088E01A8;
    case 21u: goto L_088E01B0;
    case 22u: goto L_088E01BC;
    case 23u: goto L_088E01D0;
    case 24u: goto L_088E01E8;
    case 25u: goto L_088E01F0;
    case 26u: goto L_088E01F8;
    case 27u: goto L_088E0218;
    case 28u: goto L_088E0230;
    case 29u: goto L_088E0238;
    case 30u: goto L_088E0240;
    case 31u: goto L_088E0254;
    case 32u: goto L_088E0260;
    case 33u: goto L_088E0274;
    case 34u: goto L_088E0284;
    case 35u: goto L_088E02CC;
    case 36u: goto L_088E0330;
    case 37u: goto L_088E034C;
    case 38u: goto L_088E0358;
    case 39u: goto L_088E0390;
    case 40u: goto L_088E03D8;
    case 41u: goto L_088E03E0;
    case 42u: goto L_088E03EC;
    case 43u: goto L_088E03F8;
    case 44u: goto L_088E040C;
    case 45u: goto L_088E042C;
    case 46u: goto L_088E0444;
    case 47u: goto L_088E045C;
    case 48u: goto L_088E0470;
    case 49u: goto L_088E0494;
    case 50u: goto L_088E04AC;
    case 51u: goto L_088E04C4;
    case 52u: goto L_088E04DC;
    case 53u: goto L_088E04F0;
    case 54u: goto L_088E0504;
    case 55u: goto L_088E0518;
    case 56u: goto L_088E0530;
    case 57u: goto L_088E0544;
    case 58u: goto L_088E055C;
    case 59u: goto L_088E0570;
    case 60u: goto L_088E0590;
    case 61u: goto L_088E05A8;
    case 62u: goto L_088E05C0;
    case 63u: goto L_088E05D4;
    case 64u: goto L_088E05F8;
    case 65u: goto L_088E0610;
    case 66u: goto L_088E0628;
    case 67u: goto L_088E0640;
    case 68u: goto L_088E0654;
    case 69u: goto L_088E0668;
    case 70u: goto L_088E067C;
    case 71u: goto L_088E0694;
    case 72u: goto L_088E06A8;
    case 73u: goto L_088E06BC;
    case 74u: goto L_088E06CC;
    case 75u: goto L_088E06D4;
    case 76u: goto L_088E06E4;
    case 77u: goto L_088E06F4;
    case 78u: goto L_088E06FC;
    case 79u: goto L_088E070C;
    case 80u: goto L_088E071C;
    case 81u: goto L_088E072C;
    case 82u: goto L_088E0744;
    case 83u: goto L_088E0774;
    case 84u: goto L_088E077C;
    case 85u: goto L_088E0780;
    case 86u: goto L_088E0788;
    case 87u: goto L_088E0848;
    case 88u: goto L_088E0854;
    case 89u: goto L_088E085C;
    case 90u: goto L_088E0860;
    case 91u: goto L_088E0868;
    case 92u: goto L_088E086C;
    case 93u: goto L_088E0874;
    case 94u: goto L_088E0878;
    case 95u: goto L_088E0888;
    case 96u: goto L_088E08D0;
    case 97u: goto L_088E08E0;
    case 98u: goto L_088E08E8;
    case 99u: goto L_088E08F0;
    case 100u: goto L_088E08FC;
    case 101u: goto L_088E0904;
    case 102u: goto L_088E090C;
    case 103u: goto L_088E0914;
    case 104u: goto L_088E0924;
    case 105u: goto L_088E0930;
    case 106u: goto L_088E0938;
    case 107u: goto L_088E0940;
    case 108u: goto L_088E0950;
    case 109u: goto L_088E0958;
    case 110u: goto L_088E0960;
    case 111u: goto L_088E0978;
    case 112u: goto L_088E09A4;
    case 113u: goto L_088E09AC;
    case 114u: goto L_088E09B4;
    case 115u: goto L_088E09C4;
    case 116u: goto L_088E09E8;
    case 117u: goto L_088E09F0;
    case 118u: goto L_088E0A20;
    case 119u: goto L_088E0A30;
    case 120u: goto L_088E0A40;
    case 121u: goto L_088E0A48;
    case 122u: goto L_088E0A5C;
    case 123u: goto L_088E0A6C;
    case 124u: goto L_088E0A94;
    case 125u: goto L_088E0AA0;
    case 126u: goto L_088E0AB0;
    case 127u: goto L_088E0AC0;
    case 128u: goto L_088E0ACC;
    case 129u: goto L_088E0AD8;
    case 130u: goto L_088E0AFC;
    case 131u: goto L_088E0B18;
    case 132u: goto L_088E0B20;
    case 133u: goto L_088E0B24;
    case 134u: goto L_088E0B48;
    case 135u: goto L_088E0B5C;
    case 136u: goto L_088E0B6C;
    case 137u: goto L_088E0B90;
    case 138u: goto L_088E0C44;
    case 139u: goto L_088E0C4C;
    case 140u: goto L_088E0C60;
    case 141u: goto L_088E0C74;
    case 142u: goto L_088E0C7C;
    case 143u: goto L_088E0C90;
    case 144u: goto L_088E0C98;
    case 145u: goto L_088E0CA0;
    case 146u: goto L_088E0CA8;
    case 147u: goto L_088E0CB4;
    case 148u: goto L_088E0CE0;
    case 149u: goto L_088E0CE8;
    case 150u: goto L_088E0D00;
    case 151u: goto L_088E0D0C;
    case 152u: goto L_088E0D20;
    case 153u: goto L_088E0D28;
    case 154u: goto L_088E0D34;
    case 155u: goto L_088E0D3C;
    case 156u: goto L_088E0D70;
    case 157u: goto L_088E0DA0;
    case 158u: goto L_088E0DD4;
    case 159u: goto L_088E0DE0;
    case 160u: goto L_088E0DF4;
    case 161u: goto L_088E0E14;
    case 162u: goto L_088E0E20;
    case 163u: goto L_088E0E30;
    case 164u: goto L_088E0E40;
    case 165u: goto L_088E0E50;
    case 166u: goto L_088E0E60;
    case 167u: goto L_088E0E6C;
    case 168u: goto L_088E0E78;
    case 169u: goto L_088E0E80;
    case 170u: goto L_088E0E90;
    case 171u: goto L_088E0EA4;
    case 172u: goto L_088E0EB0;
    case 173u: goto L_088E0EB8;
    case 174u: goto L_088E0EC4;
    case 175u: goto L_088E0ED0;
    case 176u: goto L_088E0EDC;
    case 177u: goto L_088E0EE4;
    case 178u: goto L_088E0EF0;
    case 179u: goto L_088E0EF8;
    case 180u: goto L_088E0F1C;
    case 181u: goto L_088E0F2C;
    case 182u: goto L_088E0F3C;
    case 183u: goto L_088E0F4C;
    case 184u: goto L_088E0F5C;
    case 185u: goto L_088E0F68;
    case 186u: goto L_088E0F70;
    case 187u: goto L_088E0F88;
    case 188u: goto L_088E0F98;
    case 189u: goto L_088E0FB0;
    case 190u: goto L_088E0FBC;
    case 191u: goto L_088E0FC4;
    case 192u: goto L_088E0FD4;
    case 193u: goto L_088E0FE0;
    case 194u: goto L_088E0FF0;
    case 195u: goto L_088E0FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E0000:
    aot_gpr[3] = (aot_gpr[10] - aot_gpr[4]);
    goto L_088E0004;
L_088E0004:
    aot_gpr[13] = (aot_gpr[12] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[13] = (aot_gpr[3] >> 4u);
    aot_gpr[14] = (aot_gpr[3] & 15u);
    aot_gpr[15] = (aot_gpr[12] & 7u);
    aot_gpr[15] = (aot_gpr[15] << 4u);
    aot_gpr[24] = (ctx.lo);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[24]);
    aot_gpr[13] = (aot_gpr[13] << 7u);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[15]);
    aot_gpr[13] = (aot_gpr[14] + aot_gpr[13]);
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0))))));
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[13]));
    aot_gpr[13] = (aot_gpr[12] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E0004;
      }
      goto L_088E0050;
    }
L_088E0050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E00B4;
      }
      goto L_088E0058;
    }
L_088E0058:
    aot_gpr[13] = (0u | 0u);
    aot_gpr[3] = (aot_gpr[13] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (aot_gpr[4] >> 3u);
      if (branch_taken) {
          goto L_088E00B4;
      }
      goto L_088E0068;
    }
L_088E0068:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (aot_gpr[4] & 7u);
    aot_gpr[3] = (aot_gpr[3] << 4u);
    aot_gpr[12] = (ctx.lo);
    goto L_088E0078;
L_088E0078:
    aot_gpr[14] = (aot_gpr[2] - aot_gpr[13]);
    aot_gpr[15] = (aot_gpr[14] >> 4u);
    aot_gpr[15] = (aot_gpr[15] + aot_gpr[12]);
    aot_gpr[15] = (aot_gpr[15] << 7u);
    aot_gpr[14] = (aot_gpr[14] & 15u);
    aot_gpr[14] = (aot_gpr[15] + aot_gpr[14]);
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
          goto L_088E0078;
      }
      goto L_088E00B4;
    }
L_088E00B4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 202u, 0x088DFF84u>(ctx, &aot_mem); return;
      }
      goto L_088E00C4;
    }
L_088E00C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E00CC:
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E00FC;
      }
      goto L_088E00DC;
    }
L_088E00DC:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E00FC;
      }
      goto L_088E00E4;
    }
L_088E00E4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0110;
      }
      goto L_088E00FC;
    }
L_088E00FC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0118;
      }
      goto L_088E0108;
    }
L_088E0108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E01A8;
      }
      goto L_088E0110;
    }
L_088E0110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E01A8;
      }
      goto L_088E0118;
    }
L_088E0118:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(38)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(212)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 4u));
    aot_gpr[11] = (aot_gpr[4] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_088E01A8;
      }
      goto L_088E0138;
    }
L_088E0138:
    aot_gpr[3] = (0u | 0u);
    aot_gpr[11] = (aot_gpr[3] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[11] = (aot_gpr[4] >> 3u);
      if (branch_taken) {
          goto L_088E0198;
      }
      goto L_088E0148;
    }
L_088E0148:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[11] = (aot_gpr[4] & 7u);
    aot_gpr[11] = (aot_gpr[11] << 4u);
    aot_gpr[2] = (ctx.lo);
    goto L_088E0158;
L_088E0158:
    aot_gpr[12] = (aot_gpr[3] >> 4u);
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[2]);
    aot_gpr[12] = (aot_gpr[12] << 7u);
    aot_gpr[14] = (aot_gpr[3] & 15u);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(92)));
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[14]);
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[11]);
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[12]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (aot_gpr[3] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E0158;
      }
      goto L_088E0198;
    }
L_088E0198:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[4] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0138;
      }
      goto L_088E01A8;
    }
L_088E01A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E01B0:
    aot_gpr[4] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E01F0;
      }
      goto L_088E01BC;
    }
L_088E01BC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E01F0;
      }
      goto L_088E01D0;
    }
L_088E01D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E01F0;
      }
      goto L_088E01E8;
    }
L_088E01E8:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(325), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088E01F0;
L_088E01F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E01F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0274;
      }
      goto L_088E0218;
    }
L_088E0218:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0274;
      }
      goto L_088E0230;
    }
L_088E0230:
    aot_gpr[31] = (0x088E0238u);
    aot_gpr[4] = (aot_gpr[15] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 68u, 0x088DF4F4u>(ctx, &aot_mem) && ctx.pc == 0x088E0238u) goto L_088E0238;
    return;
L_088E0238:
    aot_gpr[31] = (0x088E0240u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 101u, 0x088DF74Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0240u) goto L_088E0240;
    return;
L_088E0240:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[15] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[15] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0274;
      }
      goto L_088E0254;
    }
L_088E0254:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088E0260u);
    aot_gpr[5] = (aot_gpr[15] | 0u);
    goto L_088E00CC;
L_088E0260:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[15] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0254;
      }
      goto L_088E0274;
    }
L_088E0274:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0284:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(308), aot_gpr[6]);
    aot_gpr[6] = (0u | 4096u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), aot_gpr[6]);
    aot_gpr[6] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), aot_gpr[6]);
    aot_gpr[6] = (0u | 16384u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088E03E0;
      }
      goto L_088E02CC;
    }
L_088E02CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] >> 31u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4096));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[8] << 3u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (2190u << 16u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E0330u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(432));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 129u, 0x08943908u>(ctx, &aot_mem) && ctx.pc == 0x088E0330u) goto L_088E0330;
    return;
L_088E0330:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[5] = (aot_gpr[9] << 2u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_088E034C;
L_088E034C:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(212), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[9]);
      if (branch_taken) {
          goto L_088E0390;
      }
      goto L_088E0358;
    }
L_088E0358:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(168), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(172), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[11]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[11]) >> 1u));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(176), aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[10] >> 31u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[11] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(144), aot_gpr[6]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[10]);
    goto L_088E0390;
L_088E0390:
    aot_gpr[10] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(180), aot_gpr[6]);
    aot_gpr[11] = (aot_gpr[10] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(196), aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[11] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(228), aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[6] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(244), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(260), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(148), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(276), aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[7] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E034C;
      }
      goto L_088E03D8;
    }
L_088E03D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E06CC;
      }
      goto L_088E03E0;
    }
L_088E03E0:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (2216u << 16u);
    goto L_088E03EC;
L_088E03EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_088E055C;
      }
      goto L_088E03F8;
    }
L_088E03F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[31] = (0x088E040Cu);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E040Cu) goto L_088E040C;
    return;
L_088E040C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(212), aot_gpr[2]);
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (2216u << 16u);
      if (branch_taken) {
          goto L_088E04AC;
      }
      goto L_088E042C;
    }
L_088E042C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[31] = (0x088E0444u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E0444u) goto L_088E0444;
    return;
L_088E0444:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), aot_gpr[2]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[31] = (0x088E045Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E045Cu) goto L_088E045C;
    return;
L_088E045C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(172), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088E0470u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E0470u) goto L_088E0470;
    return;
L_088E0470:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(176), aot_gpr[2]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088E0494u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E0494u) goto L_088E0494;
    return;
L_088E0494:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(144), aot_gpr[2]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (2216u << 16u);
    goto L_088E04AC;
L_088E04AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[31] = (0x088E04C4u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E04C4u) goto L_088E04C4;
    return;
L_088E04C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(180), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (0x088E04DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E04DCu) goto L_088E04DC;
    return;
L_088E04DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(196), aot_gpr[2]);
    aot_gpr[31] = (0x088E04F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E04F0u) goto L_088E04F0;
    return;
L_088E04F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(228), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088E0504u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E0504u) goto L_088E0504;
    return;
L_088E0504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(244), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088E0518u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E0518u) goto L_088E0518;
    return;
L_088E0518:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(260), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[31] = (0x088E0530u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E0530u) goto L_088E0530;
    return;
L_088E0530:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[2]);
    aot_gpr[31] = (0x088E0544u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x088E0544u) goto L_088E0544;
    return;
L_088E0544:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(276), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (2216u << 16u);
      if (branch_taken) {
          goto L_088E06BC;
      }
      goto L_088E055C;
    }
L_088E055C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[31] = (0x088E0570u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E0570u) goto L_088E0570;
    return;
L_088E0570:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(212), aot_gpr[2]);
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (2216u << 16u);
      if (branch_taken) {
          goto L_088E0610;
      }
      goto L_088E0590;
    }
L_088E0590:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[31] = (0x088E05A8u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E05A8u) goto L_088E05A8;
    return;
L_088E05A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), aot_gpr[2]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[31] = (0x088E05C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E05C0u) goto L_088E05C0;
    return;
L_088E05C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(172), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088E05D4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E05D4u) goto L_088E05D4;
    return;
L_088E05D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(176), aot_gpr[2]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088E05F8u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E05F8u) goto L_088E05F8;
    return;
L_088E05F8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(144), aot_gpr[2]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (2216u << 16u);
    goto L_088E0610;
L_088E0610:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[31] = (0x088E0628u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E0628u) goto L_088E0628;
    return;
L_088E0628:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(180), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (0x088E0640u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E0640u) goto L_088E0640;
    return;
L_088E0640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(196), aot_gpr[2]);
    aot_gpr[31] = (0x088E0654u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E0654u) goto L_088E0654;
    return;
L_088E0654:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(228), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088E0668u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E0668u) goto L_088E0668;
    return;
L_088E0668:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(244), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088E067Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E067Cu) goto L_088E067C;
    return;
L_088E067C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(260), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[31] = (0x088E0694u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E0694u) goto L_088E0694;
    return;
L_088E0694:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[2]);
    aot_gpr[31] = (0x088E06A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088E06A8u) goto L_088E06A8;
    return;
L_088E06A8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(276), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (2216u << 16u);
    goto L_088E06BC;
L_088E06BC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E03EC;
      }
      goto L_088E06CC;
    }
L_088E06CC:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_088E06D4;
L_088E06D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(180)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (0x088E06E4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E06E4u) goto L_088E06E4;
    return;
L_088E06E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (0x088E06F4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E06F4u) goto L_088E06F4;
    return;
L_088E06F4:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E071C;
      }
      goto L_088E06FC;
    }
L_088E06FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(172)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[31] = (0x088E070Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E070Cu) goto L_088E070C;
    return;
L_088E070C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[31] = (0x088E071Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E071Cu) goto L_088E071C;
    return;
L_088E071C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E06D4;
      }
      goto L_088E072C;
    }
L_088E072C:
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
L_088E0744:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[9] & 255u);
    aot_gpr[9] = (aot_gpr[11] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088E0788;
      }
      goto L_088E0774;
    }
L_088E0774:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0780;
      }
      goto L_088E077C;
    }
L_088E077C:
    aot_gpr[6] = (0u | 0u);
    goto L_088E0780;
L_088E0780:
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    goto L_088E0788;
L_088E0788:
    aot_gpr[11] = (aot_gpr[9] | 0u);
    aot_gpr[9] = (aot_gpr[6] >> 16u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[10] = (aot_gpr[6] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[10] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[6] & 255u);
    aot_gpr[10] = (aot_gpr[7] >> 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[10] & 255u);
    aot_gpr[10] = (aot_gpr[7] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[10] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[7] & 255u);
    aot_gpr[10] = (aot_gpr[8] >> 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[10] & 255u);
    aot_gpr[10] = (aot_gpr[8] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[10] & 255u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[10] >> 16u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[18] = (aot_gpr[5] << 2u);
    aot_gpr[2] = (aot_gpr[10] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[2] & 255u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[10] & 255u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(45)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[9] = (aot_gpr[10] << (aot_gpr[9] & 31u));
    aot_gpr[25] = (0u | 0u);
    aot_gpr[24] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[20] = (0u | 4u);
      if (branch_taken) {
          goto L_088E0854;
      }
      goto L_088E0848;
    }
L_088E0848:
    aot_gpr[10] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_088E0878;
      }
      goto L_088E0854;
    }
L_088E0854:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0860;
      }
      goto L_088E085C;
    }
L_088E085C:
    aot_gpr[10] = (0u | 1u);
    goto L_088E0860;
L_088E0860:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E086C;
      }
      goto L_088E0868;
    }
L_088E0868:
    aot_gpr[10] = (0u | 3u);
    goto L_088E086C;
L_088E086C:
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0878;
      }
      goto L_088E0874;
    }
L_088E0874:
    aot_gpr[20] = (0u | 3u);
    goto L_088E0878;
L_088E0878:
    aot_gpr[12] = (aot_gpr[10] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[12]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (aot_gpr[10] << 5u);
      if (branch_taken) {
          goto L_088E0B6C;
      }
      goto L_088E0888;
    }
L_088E0888:
    aot_gpr[22] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[17] << 2u);
    aot_gpr[21] = (aot_gpr[17] << 7u);
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[8] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[9] << 2u);
    aot_gpr[4] = (16128u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-64));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(688));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[4] = (20224u << 16u);
    aot_gpr[13] = (0u | 2u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[2] = (0u | 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(576));
    aot_gpr[3] = (32768u << 16u);
    goto L_088E08D0;
L_088E08D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[12]) > 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088E08F0;
      }
      goto L_088E08E0;
    }
L_088E08E0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[12]) < 0;
    // nop
      if (branch_taken) {
          goto L_088E0A30;
      }
      goto L_088E08E8;
    }
L_088E08E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E090C;
      }
      goto L_088E08F0;
    }
L_088E08F0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[12]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[12]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E0938;
      }
      goto L_088E08FC;
    }
L_088E08FC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E09AC;
      }
      goto L_088E0904;
    }
L_088E0904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0A30;
      }
      goto L_088E090C;
    }
L_088E090C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088E0924;
      }
      goto L_088E0914;
    }
L_088E0914:
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[25] = (0u | 864u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(864));
      if (branch_taken) {
          goto L_088E0930;
      }
      goto L_088E0924;
    }
L_088E0924:
    aot_gpr[25] = (0u | 704u);
    aot_gpr[24] = (0u | 768u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(704));
    goto L_088E0930;
L_088E0930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0A30;
      }
      goto L_088E0938;
    }
L_088E0938:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_088E0950;
      }
      goto L_088E0940;
    }
L_088E0940:
    aot_gpr[25] = (aot_gpr[17] | 0u);
    aot_gpr[24] = (aot_gpr[25] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(864));
      if (branch_taken) {
          goto L_088E09A4;
      }
      goto L_088E0950;
    }
L_088E0950:
    { const bool branch_taken = aot_gpr[12] != aot_gpr[13];
    // nop
      if (branch_taken) {
          goto L_088E0960;
      }
      goto L_088E0958;
    }
L_088E0958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B5C;
      }
      goto L_088E0960;
    }
L_088E0960:
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr[24] = (aot_gpr[25] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[25]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u | 3u);
    goto L_088E0978;
L_088E0978:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] << 7u);
    aot_gpr[7] = (aot_gpr[7] << 5u);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E0978;
      }
      goto L_088E09A4;
    }
L_088E09A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0A30;
      }
      goto L_088E09AC;
    }
L_088E09AC:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[16] = (0u | 6u);
      if (branch_taken) {
          goto L_088E09C4;
      }
      goto L_088E09B4;
    }
L_088E09B4:
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(68)));
    aot_gpr[25] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[24] = (aot_gpr[24] << 2u);
      if (branch_taken) {
          goto L_088E0A30;
      }
      goto L_088E09C4;
    }
L_088E09C4:
    aot_gpr[25] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr[24] = (aot_gpr[25] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (aot_gpr[25] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[25]);
    aot_gpr[7] = (aot_gpr[24] + static_cast<std::uint32_t>(64));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E0A30;
      }
      goto L_088E09E8;
    }
L_088E09E8:
    aot_gpr[8] = (0u | 6u);
    aot_gpr[9] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088E09F0;
L_088E09F0:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[14] = (aot_gpr[11] << 7u);
    aot_gpr[11] = (aot_gpr[11] << 5u);
    aot_gpr[11] = (aot_gpr[14] + aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[11] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[11]));
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[11] = (aot_gpr[8] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[9] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E09F0;
      }
      goto L_088E0A20;
    }
L_088E0A20:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_088E09E8;
      }
      goto L_088E0A30;
    }
L_088E0A30:
    aot_gpr[14] = (aot_gpr[25] | 0u);
    aot_gpr[5] = (aot_gpr[14] < aot_gpr[24] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[25]);
      if (branch_taken) {
          goto L_088E0B5C;
      }
      goto L_088E0A40;
    }
L_088E0A40:
    aot_gpr[11] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    aot_gpr[15] = (aot_gpr[16] & 255u);
    goto L_088E0A48;
L_088E0A48:
    aot_gpr[7] = (aot_gpr[15] | 0u);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E0B48;
      }
      goto L_088E0A5C;
    }
L_088E0A5C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[7]);
    { const bool branch_taken = aot_gpr[12] != aot_gpr[13];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E0AFC;
      }
      goto L_088E0A6C;
    }
L_088E0A6C:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3)));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
      if (branch_taken) {
          goto L_088E0AA0;
      }
      goto L_088E0A94;
    }
L_088E0A94:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088E0AB0;
      }
      goto L_088E0AA0;
    }
L_088E0AA0:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    goto L_088E0AB0;
L_088E0AB0:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = aot_fpr[15] - aot_fpr[14];
        goto L_088E0ACC;
    }
    goto L_088E0AC0;
L_088E0AC0:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088E0AD8;
      }
      goto L_088E0ACC;
    }
L_088E0ACC:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    goto L_088E0AD8;
L_088E0AD8:
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
      if (branch_taken) {
          goto L_088E0B18;
      }
      goto L_088E0AFC;
    }
L_088E0AFC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    goto L_088E0B18;
L_088E0B18:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E0B20;
    }
L_088E0B20:
    aot_gpr[4] = (0u | 255u);
    goto L_088E0B24;
L_088E0B24:
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E0A5C;
      }
      goto L_088E0B48;
    }
L_088E0B48:
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (aot_gpr[14] < aot_gpr[24] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088E0A48;
      }
      goto L_088E0B5C;
    }
L_088E0B5C:
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[12]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088E08D0;
      }
      goto L_088E0B6C;
    }
L_088E0B6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0B90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1648));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1656)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1660)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1620), aot_gpr[20]);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1664)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1540), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] & 255u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1648)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1604), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1564), aot_gpr[3]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28708)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1532), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1544), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1560), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (0u < aot_gpr[3] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1580), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1584), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1608), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1612), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1616), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1628), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1632), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1636), aot_gpr[30]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1556), aot_gpr[11]);
    aot_gpr[20] = (aot_gpr[20] & 255u);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[23] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[22] = (aot_gpr[7] | 0u);
    aot_gpr[30] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1588), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1592), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1596), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1600), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1624), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1640), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1552), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088E0C60;
      }
      goto L_088E0C44;
    }
L_088E0C44:
    aot_gpr[31] = (0x088E0C4Cu);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5B094u;
    return;
L_088E0C4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28708)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0C44;
      }
      goto L_088E0C60;
    }
L_088E0C60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1532)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[18];
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_088E0C98;
      }
      goto L_088E0C74;
    }
L_088E0C74:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_088E0C90;
      }
      goto L_088E0C7C;
    }
L_088E0C7C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(322), static_cast<std::uint16_t>(aot_gpr[6]));
      if (branch_taken) {
          goto L_088E0C98;
      }
      goto L_088E0C90;
    }
L_088E0C90:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(322))))));
    aot_gpr[16] = (aot_gpr[23] + aot_gpr[16]);
    goto L_088E0C98;
L_088E0C98:
    { const bool branch_taken = aot_gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0CA8;
      }
      goto L_088E0CA0;
    }
L_088E0CA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1544)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_088E0CA8;
L_088E0CA8:
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[23] << 2u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 156u, 0x088E1C9Cu>(ctx, &aot_mem); return;
      }
      goto L_088E0CB4;
    }
L_088E0CB4:
    aot_gpr[6] = (aot_gpr[19] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1436), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1412), aot_gpr[6]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1492), aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088E0D0C;
      }
      goto L_088E0CE0;
    }
L_088E0CE0:
    { const bool branch_taken = aot_gpr[20] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1436), aot_gpr[19]);
      if (branch_taken) {
          goto L_088E0D0C;
      }
      goto L_088E0CE8;
    }
L_088E0CE8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(276)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1520), aot_gpr[16]);
    aot_gpr[31] = (0x088E0D00u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E0D00u) goto L_088E0D00;
    return;
L_088E0D00:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(38)));
      if (branch_taken) {
          goto L_088E0D28;
      }
      goto L_088E0D0C;
    }
L_088E0D0C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1520), aot_gpr[16]);
    aot_gpr[31] = (0x088E0D20u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E0D20u) goto L_088E0D20;
    return;
L_088E0D20:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(38)));
    goto L_088E0D28;
L_088E0D28:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1516), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1548), aot_gpr[19]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 10u, 0x088E10BCu>(ctx, &aot_mem); return;
      }
      goto L_088E0D34;
    }
L_088E0D34:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 10u, 0x088E10BCu>(ctx, &aot_mem); return;
      }
      goto L_088E0D3C;
    }
L_088E0D3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1572), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1568), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1436)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(124)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(260)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(276)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(308)));
    aot_gpr[31] = (0x088E0D70u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0D70u) goto L_088E0D70;
    return;
L_088E0D70:
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[23]);
    aot_gpr[15] = (aot_gpr[24] + static_cast<std::uint32_t>(56));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(164)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1568)));
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1572)));
      if (branch_taken) {
          goto L_088E0E30;
      }
      goto L_088E0DA0;
    }
L_088E0DA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[20] = aot_fpr[20] - aot_fpr[12];
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(38)));
      if (branch_taken) {
          goto L_088E0DE0;
      }
      goto L_088E0DD4;
    }
L_088E0DD4:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088E0DF4;
      }
      goto L_088E0DE0;
    }
L_088E0DE0:
    aot_fpr[14] = aot_fpr[20] - aot_fpr[13];
    aot_gpr[14] = (32768u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[14] = (aot_gpr[4] + aot_gpr[14]);
    goto L_088E0DF4;
L_088E0DF4:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[17]);
    aot_fpr[22] = aot_fpr[22] - aot_fpr[12];
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[22] - aot_fpr[13];
        goto L_088E0E20;
    }
    goto L_088E0E14;
L_088E0E14:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[31] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088E0E30;
      }
      goto L_088E0E20;
    }
L_088E0E20:
    aot_gpr[31] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (aot_gpr[4] + aot_gpr[31]);
    goto L_088E0E30;
L_088E0E30:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1492)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1532)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E0F3C;
      }
      goto L_088E0E40;
    }
L_088E0E40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1516)));
    aot_gpr[5] = (0u | 256u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0F3C;
      }
      goto L_088E0E50;
    }
L_088E0E50:
    aot_gpr[13] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[13] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_088E0F2C;
      }
      goto L_088E0E60;
    }
L_088E0E60:
    aot_gpr[12] = (0u | 14u);
    aot_gpr[11] = (0u | 15u);
    aot_gpr[10] = (65280u << 16u);
    goto L_088E0E6C;
L_088E0E6C:
    aot_gpr[4] = (aot_gpr[31] + aot_gpr[13]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E0F1C;
      }
      goto L_088E0E78;
    }
L_088E0E78:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0F1C;
      }
      goto L_088E0E80;
    }
L_088E0E80:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0F1C;
      }
      goto L_088E0E90;
    }
L_088E0E90:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 240 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0EF8;
      }
      goto L_088E0EA4;
    }
L_088E0EA4:
    aot_gpr[4] = (aot_gpr[14] + aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E0EF8;
      }
      goto L_088E0EB0;
    }
L_088E0EB0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0EF8;
      }
      goto L_088E0EB8;
    }
L_088E0EB8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[12];
    // nop
      if (branch_taken) {
          goto L_088E0EDC;
      }
      goto L_088E0EC4;
    }
L_088E0EC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_088E0EDC;
      }
      goto L_088E0ED0;
    }
L_088E0ED0:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-24));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088E0EF8;
      }
      goto L_088E0EDC;
    }
L_088E0EDC:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_088E0EF8;
      }
      goto L_088E0EE4;
    }
L_088E0EE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[24] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_088E0EF8;
      }
      goto L_088E0EF0;
    }
L_088E0EF0:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088E0EF8;
L_088E0EF8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E0E90;
      }
      goto L_088E0F1C;
    }
L_088E0F1C:
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[13] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0E6C;
      }
      goto L_088E0F2C;
    }
L_088E0F2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1520)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 5u, 0x088E1054u>(ctx, &aot_mem); return;
      }
      goto L_088E0F3C;
    }
L_088E0F3C:
    aot_gpr[25] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[25] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[13] = (0u | 14u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 4u, 0x088E1048u>(ctx, &aot_mem); return;
      }
      goto L_088E0F4C;
    }
L_088E0F4C:
    aot_gpr[12] = (0u | 15u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_gpr[9] = (65280u << 16u);
    goto L_088E0F5C;
L_088E0F5C:
    aot_gpr[7] = (aot_gpr[31] + aot_gpr[25]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) < 0;
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[19] ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 3u, 0x088E1030u>(ctx, &aot_mem); return;
      }
      goto L_088E0F68;
    }
L_088E0F68:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 3u, 0x088E1030u>(ctx, &aot_mem); return;
      }
      goto L_088E0F70;
    }
L_088E0F70:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[18] ? 1u : 0u);
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 3u, 0x088E1030u>(ctx, &aot_mem); return;
      }
      goto L_088E0F88;
    }
L_088E0F88:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1492)));
    aot_gpr[5] = (aot_gpr[11] << 2u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[21] + aot_gpr[4]);
    goto L_088E0F98;
L_088E0F98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 240 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 2u, 0x088E1010u>(ctx, &aot_mem); return;
      }
      goto L_088E0FB0;
    }
L_088E0FB0:
    aot_gpr[4] = (aot_gpr[14] + aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 2u, 0x088E1010u>(ctx, &aot_mem); return;
      }
      goto L_088E0FBC;
    }
L_088E0FBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 2u, 0x088E1010u>(ctx, &aot_mem); return;
      }
      goto L_088E0FC4;
    }
L_088E0FC4:
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[13];
    // nop
      if (branch_taken) {
          goto L_088E0FF0;
      }
      goto L_088E0FD4;
    }
L_088E0FD4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088E0FF0;
      }
      goto L_088E0FE0;
    }
L_088E0FE0:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-24));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 2u, 0x088E1010u>(ctx, &aot_mem); return;
      }
      goto L_088E0FF0;
    }
L_088E0FF0:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[12];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 2u, 0x088E1010u>(ctx, &aot_mem); return;
      }
      goto L_088E0FF8;
    }
L_088E0FF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[24] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[9];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 2u, 0x088E1010u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 1u, 0x088E1004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0220(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0220_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_220(Runtime &runtime) {
    runtime.register_generated_unit(220u, 0x088E0000u, 4096u, &recomp_unit_0220, &recomp_unit_0220_entry);
    runtime.register_function(0x088E0000u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0004u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0050u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0058u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0068u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0078u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E00B4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E00C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E00CCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E00DCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E00E4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E00FCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0108u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0110u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0118u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0138u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0148u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0158u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0198u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E01A8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E01B0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E01BCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E01D0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E01E8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E01F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E01F8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0218u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0230u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0238u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0240u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0254u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0260u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0274u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0284u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E02CCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0330u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E034Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0358u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0390u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E03D8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E03E0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E03ECu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E03F8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E040Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E042Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0444u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E045Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0470u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0494u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E04ACu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E04C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E04DCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E04F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0504u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0518u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0530u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0544u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E055Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0570u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0590u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E05A8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E05C0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E05D4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E05F8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0610u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0628u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0640u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0654u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0668u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E067Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0694u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E06A8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E06BCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E06CCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E06D4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E06E4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E06F4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E06FCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E070Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E071Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E072Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0744u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0774u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E077Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0780u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0788u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0848u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0854u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E085Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0860u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0868u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E086Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0874u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0878u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0888u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E08D0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E08E0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E08E8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E08F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E08FCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0904u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E090Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0914u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0924u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0930u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0938u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0940u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0950u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0958u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0960u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0978u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E09A4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E09ACu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E09B4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E09C4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E09E8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E09F0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0A20u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0A30u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0A40u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0A48u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0A5Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0A6Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0A94u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0AA0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0AB0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0AC0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0ACCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0AD8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0AFCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0B18u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0B20u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0B24u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0B48u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0B5Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0B6Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0B90u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0C44u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0C4Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0C60u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0C74u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0C7Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0C90u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0C98u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0CA0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0CA8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0CB4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0CE0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0CE8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0D00u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0D0Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0D20u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0D28u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0D34u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0D3Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0D70u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0DA0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0DD4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0DE0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0DF4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0E14u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0E20u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0E30u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0E40u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0E50u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0E60u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0E6Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0E78u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0E80u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0E90u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0EA4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0EB0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0EB8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0EC4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0ED0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0EDCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0EE4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0EF0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0EF8u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0F1Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0F2Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0F3Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0F4Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0F5Cu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0F68u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0F70u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0F88u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0F98u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0FB0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0FBCu, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0FC4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0FD4u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0FE0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0FF0u, &recomp_unit_0220, "recomp_unit_0220");
    runtime.register_function(0x088E0FF8u, &recomp_unit_0220, "recomp_unit_0220");
}
} // namespace psprecomp
