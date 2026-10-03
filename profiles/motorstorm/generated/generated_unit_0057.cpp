#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0057[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 0, 10,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0,
    0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 21, 0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 33, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0,
    50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0,
    85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 95, 96, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 122, 123, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 128, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165,
    0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0,
    173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 177, 0, 0, 178, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 186, 0,
    0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    199, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0,
    205, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210,
};
void recomp_unit_0057_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0883D004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0057[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0883D004;
    case 2u: goto L_0883D028;
    case 3u: goto L_0883D02C;
    case 4u: goto L_0883D034;
    case 5u: goto L_0883D03C;
    case 6u: goto L_0883D050;
    case 7u: goto L_0883D058;
    case 8u: goto L_0883D06C;
    case 9u: goto L_0883D074;
    case 10u: goto L_0883D080;
    case 11u: goto L_0883D090;
    case 12u: goto L_0883D0A8;
    case 13u: goto L_0883D0BC;
    case 14u: goto L_0883D0C4;
    case 15u: goto L_0883D0E4;
    case 16u: goto L_0883D0EC;
    case 17u: goto L_0883D108;
    case 18u: goto L_0883D110;
    case 19u: goto L_0883D12C;
    case 20u: goto L_0883D134;
    case 21u: goto L_0883D138;
    case 22u: goto L_0883D140;
    case 23u: goto L_0883D154;
    case 24u: goto L_0883D160;
    case 25u: goto L_0883D168;
    case 26u: goto L_0883D180;
    case 27u: goto L_0883D19C;
    case 28u: goto L_0883D1BC;
    case 29u: goto L_0883D1C4;
    case 30u: goto L_0883D1CC;
    case 31u: goto L_0883D1D0;
    case 32u: goto L_0883D1FC;
    case 33u: goto L_0883D20C;
    case 34u: goto L_0883D210;
    case 35u: goto L_0883D238;
    case 36u: goto L_0883D254;
    case 37u: goto L_0883D270;
    case 38u: goto L_0883D27C;
    case 39u: goto L_0883D28C;
    case 40u: goto L_0883D2B8;
    case 41u: goto L_0883D2C8;
    case 42u: goto L_0883D2D4;
    case 43u: goto L_0883D304;
    case 44u: goto L_0883D310;
    case 45u: goto L_0883D31C;
    case 46u: goto L_0883D354;
    case 47u: goto L_0883D35C;
    case 48u: goto L_0883D368;
    case 49u: goto L_0883D37C;
    case 50u: goto L_0883D384;
    case 51u: goto L_0883D394;
    case 52u: goto L_0883D3A8;
    case 53u: goto L_0883D3C4;
    case 54u: goto L_0883D3D0;
    case 55u: goto L_0883D3DC;
    case 56u: goto L_0883D3F4;
    case 57u: goto L_0883D400;
    case 58u: goto L_0883D408;
    case 59u: goto L_0883D430;
    case 60u: goto L_0883D448;
    case 61u: goto L_0883D46C;
    case 62u: goto L_0883D48C;
    case 63u: goto L_0883D4AC;
    case 64u: goto L_0883D4CC;
    case 65u: goto L_0883D4D8;
    case 66u: goto L_0883D4EC;
    case 67u: goto L_0883D51C;
    case 68u: goto L_0883D538;
    case 69u: goto L_0883D544;
    case 70u: goto L_0883D560;
    case 71u: goto L_0883D584;
    case 72u: goto L_0883D590;
    case 73u: goto L_0883D5A8;
    case 74u: goto L_0883D5C4;
    case 75u: goto L_0883D5E4;
    case 76u: goto L_0883D5F0;
    case 77u: goto L_0883D5F8;
    case 78u: goto L_0883D618;
    case 79u: goto L_0883D630;
    case 80u: goto L_0883D63C;
    case 81u: goto L_0883D644;
    case 82u: goto L_0883D660;
    case 83u: goto L_0883D668;
    case 84u: goto L_0883D674;
    case 85u: goto L_0883D684;
    case 86u: goto L_0883D68C;
    case 87u: goto L_0883D6BC;
    case 88u: goto L_0883D70C;
    case 89u: goto L_0883D718;
    case 90u: goto L_0883D730;
    case 91u: goto L_0883D73C;
    case 92u: goto L_0883D750;
    case 93u: goto L_0883D75C;
    case 94u: goto L_0883D784;
    case 95u: goto L_0883D794;
    case 96u: goto L_0883D798;
    case 97u: goto L_0883D7A4;
    case 98u: goto L_0883D7B4;
    case 99u: goto L_0883D7BC;
    case 100u: goto L_0883D7D0;
    case 101u: goto L_0883D7E4;
    case 102u: goto L_0883D800;
    case 103u: goto L_0883D814;
    case 104u: goto L_0883D840;
    case 105u: goto L_0883D84C;
    case 106u: goto L_0883D85C;
    case 107u: goto L_0883D874;
    case 108u: goto L_0883D898;
    case 109u: goto L_0883D8A8;
    case 110u: goto L_0883D8AC;
    case 111u: goto L_0883D8BC;
    case 112u: goto L_0883D8D0;
    case 113u: goto L_0883D8DC;
    case 114u: goto L_0883D8F0;
    case 115u: goto L_0883D8FC;
    case 116u: goto L_0883D920;
    case 117u: goto L_0883D92C;
    case 118u: goto L_0883D948;
    case 119u: goto L_0883D958;
    case 120u: goto L_0883D95C;
    case 121u: goto L_0883D980;
    case 122u: goto L_0883D990;
    case 123u: goto L_0883D994;
    case 124u: goto L_0883D99C;
    case 125u: goto L_0883D9B0;
    case 126u: goto L_0883D9B8;
    case 127u: goto L_0883D9C8;
    case 128u: goto L_0883D9D4;
    case 129u: goto L_0883D9D8;
    case 130u: goto L_0883D9EC;
    case 131u: goto L_0883D9F8;
    case 132u: goto L_0883DA08;
    case 133u: goto L_0883DA2C;
    case 134u: goto L_0883DA3C;
    case 135u: goto L_0883DA40;
    case 136u: goto L_0883DA60;
    case 137u: goto L_0883DA74;
    case 138u: goto L_0883DA80;
    case 139u: goto L_0883DA84;
    case 140u: goto L_0883DAB4;
    case 141u: goto L_0883DAC4;
    case 142u: goto L_0883DAC8;
    case 143u: goto L_0883DAEC;
    case 144u: goto L_0883DAF8;
    case 145u: goto L_0883DB30;
    case 146u: goto L_0883DB48;
    case 147u: goto L_0883DB50;
    case 148u: goto L_0883DB68;
    case 149u: goto L_0883DB88;
    case 150u: goto L_0883DB94;
    case 151u: goto L_0883DBB0;
    case 152u: goto L_0883DBBC;
    case 153u: goto L_0883DBD8;
    case 154u: goto L_0883DBE4;
    case 155u: goto L_0883DC00;
    case 156u: goto L_0883DC14;
    case 157u: goto L_0883DC20;
    case 158u: goto L_0883DC2C;
    case 159u: goto L_0883DC38;
    case 160u: goto L_0883DC44;
    case 161u: goto L_0883DC4C;
    case 162u: goto L_0883DC58;
    case 163u: goto L_0883DC64;
    case 164u: goto L_0883DC74;
    case 165u: goto L_0883DC80;
    case 166u: goto L_0883DC8C;
    case 167u: goto L_0883DC9C;
    case 168u: goto L_0883DCA8;
    case 169u: goto L_0883DCB4;
    case 170u: goto L_0883DCC0;
    case 171u: goto L_0883DCE4;
    case 172u: goto L_0883DCF8;
    case 173u: goto L_0883DD04;
    case 174u: goto L_0883DD10;
    case 175u: goto L_0883DD38;
    case 176u: goto L_0883DD64;
    case 177u: goto L_0883DD68;
    case 178u: goto L_0883DD74;
    case 179u: goto L_0883DD80;
    case 180u: goto L_0883DD9C;
    case 181u: goto L_0883DDC0;
    case 182u: goto L_0883DDD8;
    case 183u: goto L_0883DDE4;
    case 184u: goto L_0883DDF0;
    case 185u: goto L_0883DDF8;
    case 186u: goto L_0883DDFC;
    case 187u: goto L_0883DE18;
    case 188u: goto L_0883DE20;
    case 189u: goto L_0883DE2C;
    case 190u: goto L_0883DE38;
    case 191u: goto L_0883DE54;
    case 192u: goto L_0883DE60;
    case 193u: goto L_0883DE70;
    case 194u: goto L_0883DEA0;
    case 195u: goto L_0883DEA8;
    case 196u: goto L_0883DEC4;
    case 197u: goto L_0883DED0;
    case 198u: goto L_0883DEF4;
    case 199u: goto L_0883DF04;
    case 200u: goto L_0883DF08;
    case 201u: goto L_0883DF34;
    case 202u: goto L_0883DF40;
    case 203u: goto L_0883DF60;
    case 204u: goto L_0883DF74;
    case 205u: goto L_0883DF84;
    case 206u: goto L_0883DF8C;
    case 207u: goto L_0883DF94;
    case 208u: goto L_0883DFA8;
    case 209u: goto L_0883DFC8;
    case 210u: goto L_0883DFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0883D004:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(3352)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0883D06C;
      }
      goto L_0883D028;
    }
L_0883D028:
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(3356));
    goto L_0883D02C;
L_0883D02C:
    aot_gpr[31] = (0x0883D034u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 96u, 0x0881C72Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D034u) goto L_0883D034;
    return;
L_0883D034:
    aot_gpr[31] = (0x0883D03Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 88u, 0x0881C658u>(ctx, &aot_mem) && ctx.pc == 0x0883D03Cu) goto L_0883D03C;
    return;
L_0883D03C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] << (aot_gpr[2] & 31u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D058;
      }
      goto L_0883D050;
    }
L_0883D050:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_0883D06C;
      }
      goto L_0883D058;
    }
L_0883D058:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(3352)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883D02C;
      }
      goto L_0883D06C;
    }
L_0883D06C:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_0883D134;
      }
      goto L_0883D074;
    }
L_0883D074:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D110;
      }
      goto L_0883D080;
    }
L_0883D080:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1612)));
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883D138;
      }
      goto L_0883D090;
    }
L_0883D090:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1616)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D0EC;
      }
      goto L_0883D0A8;
    }
L_0883D0A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0883D0BCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 223u, 0x08874C40u>(ctx, &aot_mem) && ctx.pc == 0x0883D0BCu) goto L_0883D0BC;
    return;
L_0883D0BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D138;
      }
      goto L_0883D0C4;
    }
L_0883D0C4:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1616)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0883D0E4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 230u, 0x08874C94u>(ctx, &aot_mem) && ctx.pc == 0x0883D0E4u) goto L_0883D0E4;
    return;
L_0883D0E4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_0883D138;
      }
      goto L_0883D0EC;
    }
L_0883D0EC:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0883D108u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 133u, 0x088747ECu>(ctx, &aot_mem) && ctx.pc == 0x0883D108u) goto L_0883D108;
    return;
L_0883D108:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_0883D138;
      }
      goto L_0883D110;
    }
L_0883D110:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0883D12Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 133u, 0x088747ECu>(ctx, &aot_mem) && ctx.pc == 0x0883D12Cu) goto L_0883D12C;
    return;
L_0883D12C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_0883D138;
      }
      goto L_0883D134;
    }
L_0883D134:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_0883D138;
L_0883D138:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1572)));
      if (branch_taken) {
          goto L_0883D168;
      }
      goto L_0883D140;
    }
L_0883D140:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1604)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883D160;
      }
      goto L_0883D154;
    }
L_0883D154:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[23]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1572)));
      if (branch_taken) {
          goto L_0883D168;
      }
      goto L_0883D160;
    }
L_0883D160:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1572)));
    goto L_0883D168;
L_0883D168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 183u, 0x0883CEA4u>(ctx, &aot_mem); return;
      }
      goto L_0883D180;
    }
L_0883D180:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6208)));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1600), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_0883D1C4;
      }
      goto L_0883D19C;
    }
L_0883D19C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 16u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0883D1BCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D1BCu) goto L_0883D1BC;
    return;
L_0883D1BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0883D1D0;
      }
      goto L_0883D1C4;
    }
L_0883D1C4:
    aot_gpr[31] = (0x0883D1CCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x0883D1CCu) goto L_0883D1CC;
    return;
L_0883D1CC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0883D1D0;
L_0883D1D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1620), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8436)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[4] = (aot_gpr[4] >> 30u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1596), aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1588), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883D20C;
      }
      goto L_0883D1FC;
    }
L_0883D1FC:
    aot_gpr[5] = (0u - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u - aot_gpr[5]);
      if (branch_taken) {
          goto L_0883D210;
      }
      goto L_0883D20C;
    }
L_0883D20C:
    aot_gpr[5] = (aot_gpr[5] & 3u);
    goto L_0883D210;
L_0883D210:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1592), aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1296), 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1560), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1556), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0883D238;
L_0883D238:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1300), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1340), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1380), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883D238;
      }
      goto L_0883D254;
    }
L_0883D254:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D270u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7468));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D270u) goto L_0883D270;
    return;
L_0883D270:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D3A8;
      }
      goto L_0883D27C;
    }
L_0883D27C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 49u);
    aot_gpr[31] = (0x0883D28Cu);
    aot_gpr[16] = (2218u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D28Cu) goto L_0883D28C;
    return;
L_0883D28C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1296), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883D2B8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 204u, 0x08893DACu>(ctx, &aot_mem) && ctx.pc == 0x0883D2B8u) goto L_0883D2B8;
    return;
L_0883D2B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883D2C8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 209u, 0x08893DDCu>(ctx, &aot_mem) && ctx.pc == 0x0883D2C8u) goto L_0883D2C8;
    return;
L_0883D2C8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (2218u << 16u);
    goto L_0883D2D4;
L_0883D2D4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1512), aot_gpr[7]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883D2D4;
      }
      goto L_0883D304;
    }
L_0883D304:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[22] | 0u);
    aot_gpr[18] = (aot_gpr[22] + static_cast<std::uint32_t>(16));
    goto L_0883D310;
L_0883D310:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1296)));
    aot_gpr[31] = (0x0883D31Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(101));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D31Cu) goto L_0883D31C;
    return;
L_0883D31C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1300), aot_gpr[2]);
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0883D310;
      }
      goto L_0883D354;
    }
L_0883D354:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[22] | 0u);
    goto L_0883D35C;
L_0883D35C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1296)));
    aot_gpr[31] = (0x0883D368u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 28u, 0x0891F2A8u>(ctx, &aot_mem) && ctx.pc == 0x0883D368u) goto L_0883D368;
    return;
L_0883D368:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1340), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883D35C;
      }
      goto L_0883D37C;
    }
L_0883D37C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[22] | 0u);
    goto L_0883D384;
L_0883D384:
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1296)));
    aot_gpr[31] = (0x0883D394u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 28u, 0x0891F2A8u>(ctx, &aot_mem) && ctx.pc == 0x0883D394u) goto L_0883D394;
    return;
L_0883D394:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1380), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883D384;
      }
      goto L_0883D3A8;
    }
L_0883D3A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1440)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1296)));
    aot_gpr[4] = (aot_gpr[4] | 2048u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1440), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0883D3C4u);
    aot_gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 28u, 0x0891F2A8u>(ctx, &aot_mem) && ctx.pc == 0x0883D3C4u) goto L_0883D3C4;
    return;
L_0883D3C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1492), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883D3DC;
      }
      goto L_0883D3D0;
    }
L_0883D3D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1508)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1508), aot_gpr[4]);
    goto L_0883D3DC;
L_0883D3DC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D3F4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7452));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D3F4u) goto L_0883D3F4;
    return;
L_0883D3F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D430;
      }
      goto L_0883D400;
    }
L_0883D400:
    aot_gpr[31] = (0x0883D408u);
    aot_gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D408u) goto L_0883D408;
    return;
L_0883D408:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1564), aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1568), aot_gpr[4]);
    goto L_0883D430;
L_0883D430:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D448u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7776));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D448u) goto L_0883D448;
    return;
L_0883D448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D46Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7756));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D46Cu) goto L_0883D46C;
    return;
L_0883D46C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D48Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7736));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D48Cu) goto L_0883D48C;
    return;
L_0883D48C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D4ACu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7440));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D4ACu) goto L_0883D4AC;
    return;
L_0883D4AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D4CCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7420));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D4CCu) goto L_0883D4CC;
    return;
L_0883D4CC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883D4D8u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D4D8u) goto L_0883D4D8;
    return;
L_0883D4D8:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    goto L_0883D4EC;
L_0883D4EC:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[9] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(1532), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0883D4EC;
      }
      goto L_0883D51C;
    }
L_0883D51C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-7412));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D538u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D538u) goto L_0883D538;
    return;
L_0883D538:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883D544u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D544u) goto L_0883D544;
    return;
L_0883D544:
    aot_gpr[21] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D560u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D560u) goto L_0883D560;
    return;
L_0883D560:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-7396));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D584u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D584u) goto L_0883D584;
    return;
L_0883D584:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883D590u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D590u) goto L_0883D590;
    return;
L_0883D590:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D5A8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D5A8u) goto L_0883D5A8;
    return;
L_0883D5A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883D5C4u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D5C4u) goto L_0883D5C4;
    return;
L_0883D5C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D5E4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7384));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D5E4u) goto L_0883D5E4;
    return;
L_0883D5E4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D618;
      }
      goto L_0883D5F0;
    }
L_0883D5F0:
    aot_gpr[31] = (0x0883D5F8u);
    aot_gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D5F8u) goto L_0883D5F8;
    return;
L_0883D5F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1548), aot_gpr[4]);
    goto L_0883D618;
L_0883D618:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883D630u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7360));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D630u) goto L_0883D630;
    return;
L_0883D630:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D660;
      }
      goto L_0883D63C;
    }
L_0883D63C:
    aot_gpr[31] = (0x0883D644u);
    aot_gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D644u) goto L_0883D644;
    return;
L_0883D644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1552), aot_gpr[4]);
    goto L_0883D660;
L_0883D660:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[22] + static_cast<std::uint32_t>(656));
    goto L_0883D668;
L_0883D668:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883D674u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 120u, 0x0883C924u>(ctx, &aot_mem) && ctx.pc == 0x0883D674u) goto L_0883D674;
    return;
L_0883D674:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0883D668;
      }
      goto L_0883D684;
    }
L_0883D684:
    aot_gpr[31] = (0x0883D68Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 105u, 0x0883C7A8u>(ctx, &aot_mem) && ctx.pc == 0x0883D68Cu) goto L_0883D68C;
    return;
L_0883D68C:
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
L_0883D6BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[31]);
    aot_gpr[31] = (0x0883D70Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7340));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D70Cu) goto L_0883D70C;
    return;
L_0883D70C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883D718u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D718u) goto L_0883D718;
    return;
L_0883D718:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883D730u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7328));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D730u) goto L_0883D730;
    return;
L_0883D730:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883D73Cu);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D73Cu) goto L_0883D73C;
    return;
L_0883D73C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883D750u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7412));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D750u) goto L_0883D750;
    return;
L_0883D750:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883D75Cu);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D75Cu) goto L_0883D75C;
    return;
L_0883D75C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1592)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[6] = (aot_gpr[6] >> 30u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1588)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[5] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_0883D794;
      }
      goto L_0883D784;
    }
L_0883D784:
    aot_gpr[4] = (0u - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u - aot_gpr[4]);
      if (branch_taken) {
          goto L_0883D798;
      }
      goto L_0883D794;
    }
L_0883D794:
    aot_gpr[4] = (aot_gpr[4] & 3u);
    goto L_0883D798;
L_0883D798:
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D7B4;
      }
      goto L_0883D7A4;
    }
L_0883D7A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1572)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883D814;
      }
      goto L_0883D7B4;
    }
L_0883D7B4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883D7D0;
      }
      goto L_0883D7BC;
    }
L_0883D7BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883D7E4;
      }
      goto L_0883D7D0;
    }
L_0883D7D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_0883D7E4;
L_0883D7E4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    aot_gpr[31] = (0x0883D800u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7412));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D800u) goto L_0883D800;
    return;
L_0883D800:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883D84C;
      }
      goto L_0883D814;
    }
L_0883D814:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    aot_gpr[31] = (0x0883D840u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7412));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D840u) goto L_0883D840;
    return;
L_0883D840:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0883D84C;
L_0883D84C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883D8FC;
      }
      goto L_0883D85C;
    }
L_0883D85C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_gpr[5] = (0u - aot_gpr[4]);
        goto L_0883D874;
    }
    goto L_0883D874;
L_0883D874:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1592)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1588)));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[8] = (aot_gpr[8] >> 30u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[8]) >> 2u));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[7] = (aot_gpr[7] << 2u);
      if (branch_taken) {
          goto L_0883D8A8;
      }
      goto L_0883D898;
    }
L_0883D898:
    aot_gpr[6] = (0u - aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u - aot_gpr[6]);
      if (branch_taken) {
          goto L_0883D8AC;
      }
      goto L_0883D8A8;
    }
L_0883D8A8:
    aot_gpr[6] = (aot_gpr[6] & 3u);
    goto L_0883D8AC;
L_0883D8AC:
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0883D8D0;
      }
      goto L_0883D8BC;
    }
L_0883D8BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (0u | 1u);
    if (aot_gpr[5] == aot_gpr[7]) {
    aot_gpr[4] = (0u | 1u);
        goto L_0883D8D0;
    }
    goto L_0883D8D0;
L_0883D8D0:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0883D8FC;
      }
      goto L_0883D8DC;
    }
L_0883D8DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1572)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D8FC;
      }
      goto L_0883D8F0;
    }
L_0883D8F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1592)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(1592), aot_gpr[4]);
    goto L_0883D8FC;
L_0883D8FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    aot_gpr[31] = (0x0883D920u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D920u) goto L_0883D920;
    return;
L_0883D920:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883D92Cu);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D92Cu) goto L_0883D92C;
    return;
L_0883D92C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1572)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[4] = (aot_gpr[4] >> 30u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_0883D958;
      }
      goto L_0883D948;
    }
L_0883D948:
    aot_gpr[5] = (0u - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u - aot_gpr[5]);
      if (branch_taken) {
          goto L_0883D95C;
      }
      goto L_0883D958;
    }
L_0883D958:
    aot_gpr[5] = (aot_gpr[5] & 3u);
    goto L_0883D95C;
L_0883D95C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1592)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1588)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 2u));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    aot_gpr[7] = (aot_gpr[17] + aot_gpr[7]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_gpr[6] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_0883D990;
      }
      goto L_0883D980;
    }
L_0883D980:
    aot_gpr[7] = (0u - aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u - aot_gpr[17]);
      if (branch_taken) {
          goto L_0883D994;
      }
      goto L_0883D990;
    }
L_0883D990:
    aot_gpr[17] = (aot_gpr[17] & 3u);
    goto L_0883D994;
L_0883D994:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[17] = (aot_gpr[6] + aot_gpr[17]);
      if (branch_taken) {
          goto L_0883D9D8;
      }
      goto L_0883D99C;
    }
L_0883D99C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_0883D9D4;
      }
      goto L_0883D9B0;
    }
L_0883D9B0:
    if (static_cast<std::int32_t>(aot_gpr[6]) >= 0) {
    aot_gpr[6] = (aot_gpr[6] & 3u);
        goto L_0883D9C8;
    }
    goto L_0883D9B8;
L_0883D9B8:
    aot_gpr[6] = (0u - aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u - aot_gpr[6]);
      if (branch_taken) {
          goto L_0883D9C8;
      }
      goto L_0883D9C8;
    }
L_0883D9C8:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D9D8;
      }
      goto L_0883D9D4;
    }
L_0883D9D4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0883D9D8;
L_0883D9D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D9F8;
      }
      goto L_0883D9EC;
    }
L_0883D9EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_0883D9F8;
L_0883D9F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1588)));
        goto L_0883DA84;
    }
    goto L_0883DA08;
L_0883DA08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1592)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1588)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[6] = (aot_gpr[6] >> 30u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[5] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_0883DA3C;
      }
      goto L_0883DA2C;
    }
L_0883DA2C:
    aot_gpr[4] = (0u - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u - aot_gpr[4]);
      if (branch_taken) {
          goto L_0883DA40;
      }
      goto L_0883DA3C;
    }
L_0883DA3C:
    aot_gpr[4] = (aot_gpr[4] & 3u);
    goto L_0883DA40;
L_0883DA40:
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    aot_gpr[6] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_0883DA80;
      }
      goto L_0883DA60;
    }
L_0883DA60:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1572)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DA80;
      }
      goto L_0883DA74;
    }
L_0883DA74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1588)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(1588), aot_gpr[4]);
    goto L_0883DA80;
L_0883DA80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1588)));
    goto L_0883DA84;
L_0883DA84:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1592)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1588)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[6] = (aot_gpr[6] >> 30u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[18] = (aot_gpr[5] + aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[18] = (aot_gpr[18] << 2u);
      if (branch_taken) {
          goto L_0883DAC4;
      }
      goto L_0883DAB4;
    }
L_0883DAB4:
    aot_gpr[4] = (0u - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u - aot_gpr[4]);
      if (branch_taken) {
          goto L_0883DAC8;
      }
      goto L_0883DAC4;
    }
L_0883DAC4:
    aot_gpr[4] = (aot_gpr[4] & 3u);
    goto L_0883DAC8;
L_0883DAC8:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(1596), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    aot_gpr[31] = (0x0883DAECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7828));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DAECu) goto L_0883DAEC;
    return;
L_0883DAEC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883DAF8u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883DAF8u) goto L_0883DAF8;
    return;
L_0883DAF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1596)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1596)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1616)));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[31] = (0x0883DB30u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x0881C17Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DB30u) goto L_0883DB30;
    return;
L_0883DB30:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DB68;
      }
      goto L_0883DB48;
    }
L_0883DB48:
    aot_gpr[31] = (0x0883DB50u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 17u, 0x0881C158u>(ctx, &aot_mem) && ctx.pc == 0x0883DB50u) goto L_0883DB50;
    return;
L_0883DB50:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883DB48;
      }
      goto L_0883DB68;
    }
L_0883DB68:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0883DB88u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7504));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DB88u) goto L_0883DB88;
    return;
L_0883DB88:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883DB94u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883DB94u) goto L_0883DB94;
    return;
L_0883DB94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1584)));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0883DBB0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7308));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DBB0u) goto L_0883DBB0;
    return;
L_0883DBB0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883DBBCu);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883DBBCu) goto L_0883DBBC;
    return;
L_0883DBBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1580)));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0883DBD8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7296));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DBD8u) goto L_0883DBD8;
    return;
L_0883DBD8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883DBE4u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883DBE4u) goto L_0883DBE4;
    return;
L_0883DBE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1604)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_0883DC9C;
      }
      goto L_0883DC00;
    }
L_0883DC00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
        goto L_0883DC44;
    }
    goto L_0883DC14;
L_0883DC14:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DC74;
      }
      goto L_0883DC20;
    }
L_0883DC20:
    aot_gpr[4] = (0u | 280u);
    aot_gpr[31] = (0x0883DC2Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883DC2Cu) goto L_0883DC2C;
    return;
L_0883DC2C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883DC38u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0883DC38u) goto L_0883DC38;
    return;
L_0883DC38:
    aot_gpr[19] = (65320u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(10280));
      if (branch_taken) {
          goto L_0883DCC0;
      }
      goto L_0883DC44;
    }
L_0883DC44:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DC20;
      }
      goto L_0883DC4C;
    }
L_0883DC4C:
    aot_gpr[4] = (0u | 282u);
    aot_gpr[31] = (0x0883DC58u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883DC58u) goto L_0883DC58;
    return;
L_0883DC58:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883DC64u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0883DC64u) goto L_0883DC64;
    return;
L_0883DC64:
    aot_gpr[19] = (65373u << 16u);
    aot_gpr[30] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(10265));
      if (branch_taken) {
          goto L_0883DCC0;
      }
      goto L_0883DC74;
    }
L_0883DC74:
    aot_gpr[4] = (0u | 281u);
    aot_gpr[31] = (0x0883DC80u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883DC80u) goto L_0883DC80;
    return;
L_0883DC80:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883DC8Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0883DC8Cu) goto L_0883DC8C;
    return;
L_0883DC8C:
    aot_gpr[19] = (65286u << 16u);
    aot_gpr[30] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(5473));
      if (branch_taken) {
          goto L_0883DCC0;
      }
      goto L_0883DC9C;
    }
L_0883DC9C:
    aot_gpr[4] = (0u | 283u);
    aot_gpr[31] = (0x0883DCA8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883DCA8u) goto L_0883DCA8;
    return;
L_0883DCA8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883DCB4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0883DCB4u) goto L_0883DCB4;
    return;
L_0883DCB4:
    aot_gpr[19] = (65300u << 16u);
    aot_gpr[30] = (0u | 3u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(13600));
    goto L_0883DCC0;
L_0883DCC0:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-7848));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-7284));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0883DCE4u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883DCE4u) goto L_0883DCE4;
    return;
L_0883DCE4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0883DCF8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DCF8u) goto L_0883DCF8;
    return;
L_0883DCF8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883DD04u);
    aot_gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883DD04u) goto L_0883DD04;
    return;
L_0883DD04:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DD68;
      }
      goto L_0883DD10;
    }
L_0883DD10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1616)));
    aot_gpr[6] = (aot_gpr[17] << 5u);
    aot_gpr[7] = (aot_gpr[17] << 2u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (65320u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10280));
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[19] | 0u);
        goto L_0883DD38;
    }
    goto L_0883DD38;
L_0883DD38:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1616)));
    aot_gpr[6] = (aot_gpr[17] << 5u);
    aot_gpr[7] = (aot_gpr[17] << 2u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (65320u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10280));
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[19] | 0u);
        goto L_0883DD64;
    }
    goto L_0883DD64;
L_0883DD64:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_0883DD68;
L_0883DD68:
    aot_gpr[4] = (0u | 200u);
    aot_gpr[31] = (0x0883DD74u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883DD74u) goto L_0883DD74;
    return;
L_0883DD74:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883DD80u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0883DD80u) goto L_0883DD80;
    return;
L_0883DD80:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7848));
    aot_gpr[31] = (0x0883DD9Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-7276));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883DD9Cu) goto L_0883DD9C;
    return;
L_0883DD9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1596)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1616)));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DE20;
      }
      goto L_0883DDC0;
    }
L_0883DDC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0883DDF8;
      }
      goto L_0883DDD8;
    }
L_0883DDD8:
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[31] = (0x0883DDE4u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883DDE4u) goto L_0883DDE4;
    return;
L_0883DDE4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883DDF0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0883DDF0u) goto L_0883DDF0;
    return;
L_0883DDF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DDFC;
      }
      goto L_0883DDF8;
    }
L_0883DDF8:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0883DDFC;
L_0883DDFC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7848));
    aot_gpr[31] = (0x0883DE18u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-7264));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883DE18u) goto L_0883DE18;
    return;
L_0883DE18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DE54;
      }
      goto L_0883DE20;
    }
L_0883DE20:
    aot_gpr[4] = (0u | 284u);
    aot_gpr[31] = (0x0883DE2Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883DE2Cu) goto L_0883DE2C;
    return;
L_0883DE2C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883DE38u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0883DE38u) goto L_0883DE38;
    return;
L_0883DE38:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7848));
    aot_gpr[31] = (0x0883DE54u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-7264));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883DE54u) goto L_0883DE54;
    return;
L_0883DE54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1596)));
    if (static_cast<std::int32_t>(aot_gpr[4]) >= 0) {
    aot_gpr[4] = (aot_gpr[4] & 3u);
        goto L_0883DE70;
    }
    goto L_0883DE60;
L_0883DE60:
    aot_gpr[4] = (0u - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u - aot_gpr[4]);
      if (branch_taken) {
          goto L_0883DE70;
      }
      goto L_0883DE70;
    }
L_0883DE70:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1596)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1616)));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0883DEA0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 138u, 0x0883BBE4u>(ctx, &aot_mem) && ctx.pc == 0x0883DEA0u) goto L_0883DEA0;
    return;
L_0883DEA0:
    aot_gpr[31] = (0x0883DEA8u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 146u, 0x0883BD08u>(ctx, &aot_mem) && ctx.pc == 0x0883DEA8u) goto L_0883DEA8;
    return;
L_0883DEA8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    aot_gpr[31] = (0x0883DEC4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7420));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DEC4u) goto L_0883DEC4;
    return;
L_0883DEC4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883DED0u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883DED0u) goto L_0883DED0;
    return;
L_0883DED0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1596)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0883DF04;
      }
      goto L_0883DEF4;
    }
L_0883DEF4:
    aot_gpr[4] = (0u - aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u - aot_gpr[16]);
      if (branch_taken) {
          goto L_0883DF08;
      }
      goto L_0883DF04;
    }
L_0883DF04:
    aot_gpr[16] = (aot_gpr[16] & 3u);
    goto L_0883DF08;
L_0883DF08:
    aot_gpr[4] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1532)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    aot_gpr[31] = (0x0883DF34u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7252));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DF34u) goto L_0883DF34;
    return;
L_0883DF34:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883DF40u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883DF40u) goto L_0883DF40;
    return;
L_0883DF40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1616)));
    aot_gpr[5] = (aot_gpr[17] << 5u);
    aot_gpr[6] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0883DF74;
      }
      goto L_0883DF60;
    }
L_0883DF60:
    aot_gpr[4] = (65409u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32640));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883DF84;
      }
      goto L_0883DF74;
    }
L_0883DF74:
    aot_gpr[4] = (65384u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26728));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0883DF84;
L_0883DF84:
    aot_gpr[31] = (0x0883DF8Cu);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 173u, 0x0883BF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DF8Cu) goto L_0883DF8C;
    return;
L_0883DF8C:
    aot_gpr[31] = (0x0883DF94u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 65u, 0x0883C470u>(ctx, &aot_mem) && ctx.pc == 0x0883DF94u) goto L_0883DF94;
    return;
L_0883DF94:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1612)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883DFA8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7552));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0883DFA8u) goto L_0883DFA8;
    return;
L_0883DFA8:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-7848));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883DFC8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-7232));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883DFC8u) goto L_0883DFC8;
    return;
L_0883DFC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1596)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1616)));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0883DFF8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7220));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0883DFF8u) goto L_0883DFF8;
    return;
L_0883DFF8:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    ctx.pc = 0x0883E000u; return;
}

void recomp_unit_0057(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0057_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_57(Runtime &runtime) {
    runtime.register_generated_unit(57u, 0x0883D000u, 4096u, &recomp_unit_0057, &recomp_unit_0057_entry);
    runtime.register_function(0x0883D004u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D028u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D02Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D034u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D03Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D050u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D058u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D06Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D074u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D080u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D090u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D0A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D0BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D0C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D0E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D0ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D108u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D110u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D12Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D134u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D138u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D140u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D154u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D160u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D168u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D180u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D19Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D1BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D1C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D1CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D1D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D1FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D20Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D210u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D238u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D254u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D270u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D27Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D28Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D2B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D2C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D2D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D304u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D310u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D31Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D354u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D35Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D368u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D37Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D384u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D394u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D3A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D3C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D3D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D3DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D3F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D400u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D408u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D430u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D448u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D46Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D48Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D4ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D4CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D4D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D4ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D51Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D538u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D544u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D560u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D584u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D590u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D5A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D5C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D5E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D5F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D5F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D618u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D630u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D63Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D644u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D660u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D668u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D674u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D684u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D68Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D6BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D70Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D718u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D730u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D73Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D750u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D75Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D784u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D794u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D798u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D7A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D7B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D7BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D7D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D7E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D800u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D814u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D840u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D84Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D85Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D874u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D898u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D8A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D8ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D8BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D8D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D8DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D8F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D8FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D920u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D92Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D948u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D958u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D95Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D980u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D990u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D994u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D99Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D9B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D9B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D9C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D9D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D9D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D9ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883D9F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DA08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DA2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DA3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DA40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DA60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DA74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DA80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DA84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DAB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DAC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DAC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DAECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DAF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DB30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DB48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DB50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DB68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DB88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DB94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DBB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DBBCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DBD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DBE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DC9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DCA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DCB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DCC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DCE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DCF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DD04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DD10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DD38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DD64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DD68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DD74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DD80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DD9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DDC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DDD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DDE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DDF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DDF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DDFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DE18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DE20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DE2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DE38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DE54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DE60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DE70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DEA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DEA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DEC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DED0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DEF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DF04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DF08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DF34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DF40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DF60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DF74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DF84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DF8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DF94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DFA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DFC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x0883DFF8u, &recomp_unit_0057, "recomp_unit_0057");
}
} // namespace psprecomp
