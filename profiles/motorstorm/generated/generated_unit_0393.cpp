#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0393[1020] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 10, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37,
    0, 38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 45, 46, 0, 47, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0,
    53, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 57, 0, 58, 59, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 70, 0, 0,
    0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 89, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0,
    0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 113, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 126, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131,
    0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 137, 138, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0,
    0, 163, 0, 164, 0, 0, 165, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 181, 182, 0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0,
    191, 192, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200,
    0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216,
    0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224,
};
void recomp_unit_0393_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0898D000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0393[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0898D000;
    case 2u: goto L_0898D038;
    case 3u: goto L_0898D044;
    case 4u: goto L_0898D058;
    case 5u: goto L_0898D064;
    case 6u: goto L_0898D074;
    case 7u: goto L_0898D08C;
    case 8u: goto L_0898D09C;
    case 9u: goto L_0898D0E8;
    case 10u: goto L_0898D104;
    case 11u: goto L_0898D108;
    case 12u: goto L_0898D110;
    case 13u: goto L_0898D12C;
    case 14u: goto L_0898D13C;
    case 15u: goto L_0898D154;
    case 16u: goto L_0898D168;
    case 17u: goto L_0898D170;
    case 18u: goto L_0898D18C;
    case 19u: goto L_0898D1A0;
    case 20u: goto L_0898D1A8;
    case 21u: goto L_0898D1C8;
    case 22u: goto L_0898D1DC;
    case 23u: goto L_0898D1E4;
    case 24u: goto L_0898D1F8;
    case 25u: goto L_0898D20C;
    case 26u: goto L_0898D214;
    case 27u: goto L_0898D228;
    case 28u: goto L_0898D23C;
    case 29u: goto L_0898D24C;
    case 30u: goto L_0898D254;
    case 31u: goto L_0898D2B0;
    case 32u: goto L_0898D2BC;
    case 33u: goto L_0898D2C0;
    case 34u: goto L_0898D2C8;
    case 35u: goto L_0898D2D4;
    case 36u: goto L_0898D2F0;
    case 37u: goto L_0898D2FC;
    case 38u: goto L_0898D304;
    case 39u: goto L_0898D30C;
    case 40u: goto L_0898D318;
    case 41u: goto L_0898D330;
    case 42u: goto L_0898D34C;
    case 43u: goto L_0898D364;
    case 44u: goto L_0898D370;
    case 45u: goto L_0898D390;
    case 46u: goto L_0898D394;
    case 47u: goto L_0898D39C;
    case 48u: goto L_0898D3B4;
    case 49u: goto L_0898D3B8;
    case 50u: goto L_0898D3E4;
    case 51u: goto L_0898D3EC;
    case 52u: goto L_0898D3F8;
    case 53u: goto L_0898D400;
    case 54u: goto L_0898D40C;
    case 55u: goto L_0898D418;
    case 56u: goto L_0898D420;
    case 57u: goto L_0898D42C;
    case 58u: goto L_0898D434;
    case 59u: goto L_0898D438;
    case 60u: goto L_0898D444;
    case 61u: goto L_0898D44C;
    case 62u: goto L_0898D45C;
    case 63u: goto L_0898D468;
    case 64u: goto L_0898D470;
    case 65u: goto L_0898D49C;
    case 66u: goto L_0898D4A4;
    case 67u: goto L_0898D4AC;
    case 68u: goto L_0898D4C0;
    case 69u: goto L_0898D4F0;
    case 70u: goto L_0898D4F4;
    case 71u: goto L_0898D50C;
    case 72u: goto L_0898D514;
    case 73u: goto L_0898D524;
    case 74u: goto L_0898D530;
    case 75u: goto L_0898D538;
    case 76u: goto L_0898D568;
    case 77u: goto L_0898D570;
    case 78u: goto L_0898D578;
    case 79u: goto L_0898D584;
    case 80u: goto L_0898D5B0;
    case 81u: goto L_0898D5B8;
    case 82u: goto L_0898D5C0;
    case 83u: goto L_0898D5F0;
    case 84u: goto L_0898D5F8;
    case 85u: goto L_0898D600;
    case 86u: goto L_0898D62C;
    case 87u: goto L_0898D640;
    case 88u: goto L_0898D648;
    case 89u: goto L_0898D64C;
    case 90u: goto L_0898D668;
    case 91u: goto L_0898D670;
    case 92u: goto L_0898D678;
    case 93u: goto L_0898D684;
    case 94u: goto L_0898D698;
    case 95u: goto L_0898D6CC;
    case 96u: goto L_0898D6D4;
    case 97u: goto L_0898D700;
    case 98u: goto L_0898D708;
    case 99u: goto L_0898D714;
    case 100u: goto L_0898D71C;
    case 101u: goto L_0898D724;
    case 102u: goto L_0898D748;
    case 103u: goto L_0898D750;
    case 104u: goto L_0898D7B0;
    case 105u: goto L_0898D7B4;
    case 106u: goto L_0898D7E0;
    case 107u: goto L_0898D7F4;
    case 108u: goto L_0898D824;
    case 109u: goto L_0898D82C;
    case 110u: goto L_0898D838;
    case 111u: goto L_0898D858;
    case 112u: goto L_0898D860;
    case 113u: goto L_0898D864;
    case 114u: goto L_0898D86C;
    case 115u: goto L_0898D890;
    case 116u: goto L_0898D89C;
    case 117u: goto L_0898D8A4;
    case 118u: goto L_0898D8B0;
    case 119u: goto L_0898D8B8;
    case 120u: goto L_0898D8C0;
    case 121u: goto L_0898D8D0;
    case 122u: goto L_0898D8EC;
    case 123u: goto L_0898D8FC;
    case 124u: goto L_0898D904;
    case 125u: goto L_0898D924;
    case 126u: goto L_0898D928;
    case 127u: goto L_0898D934;
    case 128u: goto L_0898D940;
    case 129u: goto L_0898D948;
    case 130u: goto L_0898D974;
    case 131u: goto L_0898D97C;
    case 132u: goto L_0898D984;
    case 133u: goto L_0898D99C;
    case 134u: goto L_0898D9CC;
    case 135u: goto L_0898D9D4;
    case 136u: goto L_0898DA08;
    case 137u: goto L_0898DA18;
    case 138u: goto L_0898DA1C;
    case 139u: goto L_0898DA20;
    case 140u: goto L_0898DA40;
    case 141u: goto L_0898DA54;
    case 142u: goto L_0898DA68;
    case 143u: goto L_0898DA70;
    case 144u: goto L_0898DA80;
    case 145u: goto L_0898DA98;
    case 146u: goto L_0898DAA0;
    case 147u: goto L_0898DAC4;
    case 148u: goto L_0898DADC;
    case 149u: goto L_0898DAF8;
    case 150u: goto L_0898DB00;
    case 151u: goto L_0898DB10;
    case 152u: goto L_0898DB4C;
    case 153u: goto L_0898DB54;
    case 154u: goto L_0898DB80;
    case 155u: goto L_0898DB88;
    case 156u: goto L_0898DB98;
    case 157u: goto L_0898DBA8;
    case 158u: goto L_0898DBB0;
    case 159u: goto L_0898DBBC;
    case 160u: goto L_0898DBE0;
    case 161u: goto L_0898DBE8;
    case 162u: goto L_0898DBF4;
    case 163u: goto L_0898DC04;
    case 164u: goto L_0898DC0C;
    case 165u: goto L_0898DC18;
    case 166u: goto L_0898DC1C;
    case 167u: goto L_0898DC38;
    case 168u: goto L_0898DC40;
    case 169u: goto L_0898DC60;
    case 170u: goto L_0898DC7C;
    case 171u: goto L_0898DC88;
    case 172u: goto L_0898DC98;
    case 173u: goto L_0898DCA0;
    case 174u: goto L_0898DCA8;
    case 175u: goto L_0898DCB4;
    case 176u: goto L_0898DCC0;
    case 177u: goto L_0898DCCC;
    case 178u: goto L_0898DCD4;
    case 179u: goto L_0898DCDC;
    case 180u: goto L_0898DCE8;
    case 181u: goto L_0898DD08;
    case 182u: goto L_0898DD0C;
    case 183u: goto L_0898DD20;
    case 184u: goto L_0898DD28;
    case 185u: goto L_0898DD34;
    case 186u: goto L_0898DD48;
    case 187u: goto L_0898DD50;
    case 188u: goto L_0898DD5C;
    case 189u: goto L_0898DD68;
    case 190u: goto L_0898DD78;
    case 191u: goto L_0898DD80;
    case 192u: goto L_0898DD84;
    case 193u: goto L_0898DD8C;
    case 194u: goto L_0898DDA8;
    case 195u: goto L_0898DDB0;
    case 196u: goto L_0898DDBC;
    case 197u: goto L_0898DDC8;
    case 198u: goto L_0898DDD0;
    case 199u: goto L_0898DDE8;
    case 200u: goto L_0898DDFC;
    case 201u: goto L_0898DE04;
    case 202u: goto L_0898DE0C;
    case 203u: goto L_0898DE24;
    case 204u: goto L_0898DE3C;
    case 205u: goto L_0898DE60;
    case 206u: goto L_0898DE68;
    case 207u: goto L_0898DE70;
    case 208u: goto L_0898DE88;
    case 209u: goto L_0898DEA8;
    case 210u: goto L_0898DEB0;
    case 211u: goto L_0898DEBC;
    case 212u: goto L_0898DED4;
    case 213u: goto L_0898DF24;
    case 214u: goto L_0898DF50;
    case 215u: goto L_0898DF70;
    case 216u: goto L_0898DF7C;
    case 217u: goto L_0898DF88;
    case 218u: goto L_0898DF9C;
    case 219u: goto L_0898DFA4;
    case 220u: goto L_0898DFAC;
    case 221u: goto L_0898DFB4;
    case 222u: goto L_0898DFBC;
    case 223u: goto L_0898DFD0;
    case 224u: goto L_0898DFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0898D000:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(60)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_0898D044;
      }
      goto L_0898D038;
    }
L_0898D038:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0898D044u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D044u) goto L_0898D044;
    return;
L_0898D044:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12940)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(12940));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0392_entry, 392u, 221u, 0x0898CFC8u>(ctx, &aot_mem); return;
      }
      goto L_0898D058;
    }
L_0898D058:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898D064u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D064u) goto L_0898D064;
    return;
L_0898D064:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D074:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0898D08Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 138u, 0x089918B4u>(ctx, &aot_mem) && ctx.pc == 0x0898D08Cu) goto L_0898D08C;
    return;
L_0898D08C:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem); return;
L_0898D09C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[13] = (aot_gpr[5] + 0u);
    aot_gpr[12] = (aot_gpr[4] + 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[8] + 0u);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[9] + 0u);
    aot_gpr[17] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0898D104;
      }
      goto L_0898D0E8;
    }
L_0898D0E8:
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-18652));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D104:
    aot_gpr[4] = (0u + 0u);
    goto L_0898D108;
L_0898D108:
    aot_gpr[31] = (0x0898D110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898D110u) goto L_0898D110;
    return;
L_0898D110:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D12C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(1040)));
    aot_gpr[4] = (aot_gpr[13] + 0u);
    aot_gpr[31] = (0x0898D13Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 112u, 0x08993670u>(ctx, &aot_mem) && ctx.pc == 0x0898D13Cu) goto L_0898D13C;
    return;
L_0898D13C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    goto L_0898D108;
L_0898D154:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(1040)));
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[7] = (aot_gpr[9] + 0u);
    aot_gpr[31] = (0x0898D168u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 235u, 0x08993D74u>(ctx, &aot_mem) && ctx.pc == 0x0898D168u) goto L_0898D168;
    return;
L_0898D168:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_0898D24C;
      }
      goto L_0898D170;
    }
L_0898D170:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_0898D108;
L_0898D18C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(1040)));
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[7] = (aot_gpr[9] + 0u);
    aot_gpr[31] = (0x0898D1A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 209u, 0x08993B6Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D1A0u) goto L_0898D1A0;
    return;
L_0898D1A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0898D24C;
      }
      goto L_0898D1A8;
    }
L_0898D1A8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_0898D108;
L_0898D1C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(1040)));
    aot_gpr[4] = (aot_gpr[13] + 0u);
    aot_gpr[5] = (aot_gpr[9] + 0u);
    aot_gpr[31] = (0x0898D1DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 148u, 0x08993830u>(ctx, &aot_mem) && ctx.pc == 0x0898D1DCu) goto L_0898D1DC;
    return;
L_0898D1DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0898D24C;
      }
      goto L_0898D1E4;
    }
L_0898D1E4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    goto L_0898D108;
L_0898D1F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(1040)));
    aot_gpr[4] = (aot_gpr[13] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0898D20Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 128u, 0x08993740u>(ctx, &aot_mem) && ctx.pc == 0x0898D20Cu) goto L_0898D20C;
    return;
L_0898D20C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0898D24C;
      }
      goto L_0898D214;
    }
L_0898D214:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    goto L_0898D108;
L_0898D228:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(1040)));
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (aot_gpr[11] + 0u);
    aot_gpr[31] = (0x0898D23Cu);
    aot_gpr[7] = (aot_gpr[10] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 187u, 0x08993A0Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D23Cu) goto L_0898D23C;
    return;
L_0898D23C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0898D108;
L_0898D24C:
    aot_gpr[4] = (0u | 56004u);
    goto L_0898D108;
L_0898D254:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(-7));
    aot_gpr[2] = (aot_gpr[16] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[9]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[10]);
      if (branch_taken) {
          goto L_0898D3B4;
      }
      goto L_0898D2B0;
    }
L_0898D2B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1128)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D3E4;
      }
      goto L_0898D2BC;
    }
L_0898D2BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1120)));
    goto L_0898D2C0;
L_0898D2C0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0898D3B8;
      }
      goto L_0898D2C8;
    }
L_0898D2C8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[3] = (aot_gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D3B8;
      }
      goto L_0898D2D4;
    }
L_0898D2D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_0898D4AC;
      }
      goto L_0898D2F0;
    }
L_0898D2F0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_0898D4AC;
      }
      goto L_0898D2FC;
    }
L_0898D2FC:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898D4AC;
      }
      goto L_0898D304;
    }
L_0898D304:
    { const bool branch_taken = aot_gpr[21] == aot_gpr[2];
    aot_gpr[22] = (0u | 65535u);
      if (branch_taken) {
          goto L_0898D578;
      }
      goto L_0898D30C;
    }
L_0898D30C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0898D3B8;
      }
      goto L_0898D318;
    }
L_0898D318:
    aot_gpr[21] = (aot_gpr[21] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[21] = (0u + 0u);
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(8));
    goto L_0898D330;
L_0898D330:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (aot_gpr[21] << 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[19] = (aot_gpr[2] + aot_gpr[5]);
    goto L_0898D34C;
L_0898D34C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[30] << (aot_gpr[17] & 31u));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898D394;
      }
      goto L_0898D364;
    }
L_0898D364:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_0898D370;
    }
    goto L_0898D370;
L_0898D370:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898D390u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[22]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D390u) goto L_0898D390;
    return;
L_0898D390:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_0898D394;
L_0898D394:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[23];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898D34C;
      }
      goto L_0898D39C;
    }
L_0898D39C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898D330;
      }
      goto L_0898D3B4;
    }
L_0898D3B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_0898D3B8;
L_0898D3B8:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D3E4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1040)));
        goto L_0898D438;
    }
    goto L_0898D3EC;
L_0898D3EC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_0898D434;
      }
      goto L_0898D3F8;
    }
L_0898D3F8:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_0898D434;
      }
      goto L_0898D400;
    }
L_0898D400:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1040)));
        goto L_0898D4F4;
    }
    goto L_0898D40C;
L_0898D40C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_0898D4F0;
      }
      goto L_0898D418;
    }
L_0898D418:
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1040)));
        goto L_0898D4F4;
    }
    goto L_0898D420;
L_0898D420:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1040)));
    aot_gpr[31] = (0x0898D42Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 67u, 0x08993444u>(ctx, &aot_mem) && ctx.pc == 0x0898D42Cu) goto L_0898D42C;
    return;
L_0898D42C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1120)));
    goto L_0898D2C0;
L_0898D434:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1040)));
    goto L_0898D438;
L_0898D438:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0898D444u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 161u, 0x089938DCu>(ctx, &aot_mem) && ctx.pc == 0x0898D444u) goto L_0898D444;
    return;
L_0898D444:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0898D3B8;
      }
      goto L_0898D44C;
    }
L_0898D44C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1120)));
        goto L_0898D2C0;
    }
    goto L_0898D45C;
L_0898D45C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0898D584;
      }
      goto L_0898D468;
    }
L_0898D468:
    if (aot_gpr[17] != aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1120)));
        goto L_0898D2C0;
    }
    goto L_0898D470;
L_0898D470:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (aot_gpr[19] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(128)));
    aot_gpr[6] = (aot_gpr[18] & 65535u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898D49Cu);
    aot_gpr[10] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D49Cu) goto L_0898D49C;
    return;
L_0898D49C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1120)));
        goto L_0898D2C0;
    }
    goto L_0898D4A4;
L_0898D4A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_0898D3B8;
L_0898D4AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0898D4C0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D4C0u) goto L_0898D4C0;
    return;
L_0898D4C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D4F0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1040)));
    goto L_0898D4F4;
L_0898D4F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x0898D50Cu);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 260u, 0x08993F20u>(ctx, &aot_mem) && ctx.pc == 0x0898D50Cu) goto L_0898D50C;
    return;
L_0898D50C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0898D3B8;
      }
      goto L_0898D514;
    }
L_0898D514:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1120)));
        goto L_0898D2C0;
    }
    goto L_0898D524;
L_0898D524:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_0898D5C0;
      }
      goto L_0898D530;
    }
L_0898D530:
    if (aot_gpr[17] != aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1120)));
        goto L_0898D2C0;
    }
    goto L_0898D538;
L_0898D538:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1100)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(128)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898D568u);
    aot_gpr[10] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D568u) goto L_0898D568;
    return;
L_0898D568:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1120)));
        goto L_0898D2C0;
    }
    goto L_0898D570;
L_0898D570:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_0898D3B8;
L_0898D578:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_0898D30C;
L_0898D584:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (aot_gpr[19] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(128)));
    aot_gpr[6] = (aot_gpr[18] & 65535u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898D5B0u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D5B0u) goto L_0898D5B0;
    return;
L_0898D5B0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1120)));
        goto L_0898D2C0;
    }
    goto L_0898D5B8;
L_0898D5B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_0898D3B8;
L_0898D5C0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1100)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(128)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898D5F0u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D5F0u) goto L_0898D5F0;
    return;
L_0898D5F0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1120)));
        goto L_0898D2C0;
    }
    goto L_0898D5F8;
L_0898D5F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_0898D3B8;
L_0898D600:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1092)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0898D668;
      }
      goto L_0898D62C;
    }
L_0898D62C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2812)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(124)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898D640u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1096)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D640u) goto L_0898D640;
    return;
L_0898D640:
    aot_gpr[31] = (0x0898D648u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898D648u) goto L_0898D648;
    return;
L_0898D648:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_0898D64C;
L_0898D64C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D668:
    aot_gpr[31] = (0x0898D670u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 45u, 0x08989308u>(ctx, &aot_mem) && ctx.pc == 0x0898D670u) goto L_0898D670;
    return;
L_0898D670:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898D64C;
      }
      goto L_0898D678;
    }
L_0898D678:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0898D708;
      }
      goto L_0898D684;
    }
L_0898D684:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1128)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
      if (branch_taken) {
          goto L_0898D640;
      }
      goto L_0898D698;
    }
L_0898D698:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x0898D6CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0898D09C;
L_0898D6CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898D64C;
      }
      goto L_0898D6D4;
    }
L_0898D6D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (0u + 0u);
    aot_gpr[31] = (0x0898D700u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0898D254;
L_0898D700:
    aot_gpr[2] = (0u + 0u);
    goto L_0898D640;
L_0898D708:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x0898D714u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 34u, 0x0898627Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D714u) goto L_0898D714;
    return;
L_0898D714:
    aot_gpr[31] = (0x0898D71Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898D71Cu) goto L_0898D71C;
    return;
L_0898D71C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898D64C;
      }
      goto L_0898D724;
    }
L_0898D724:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898D748u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D748u) goto L_0898D748;
    return;
L_0898D748:
    // nop
    goto L_0898D640;
L_0898D750:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2128), aot_gpr[30]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[30] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2124), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2120), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2112), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2096), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2132), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2116), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2104), aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1128)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[9]);
      if (branch_taken) {
          goto L_0898D7E0;
      }
      goto L_0898D7B0;
    }
L_0898D7B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2132)));
    goto L_0898D7B4;
L_0898D7B4:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2128)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2124)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2096)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D7E0:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898D7F4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2032));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D7F4u) goto L_0898D7F4;
    return;
L_0898D7F4:
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[30] + 0u);
    aot_gpr[8] = (aot_gpr[23] + 0u);
    aot_gpr[9] = (aot_gpr[22] + 0u);
    aot_gpr[10] = (aot_gpr[18] + 0u);
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x0898D824u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_0898D09C;
L_0898D824:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0898D7B0;
      }
      goto L_0898D82C;
    }
L_0898D82C:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898D948;
      }
      goto L_0898D838;
    }
L_0898D838:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1100)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(120)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[16] & 65535u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898D858u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D858u) goto L_0898D858;
    return;
L_0898D858:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2132)));
      if (branch_taken) {
          goto L_0898D7B4;
      }
      goto L_0898D860;
    }
L_0898D860:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1120)));
    goto L_0898D864;
L_0898D864:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0898D7B0;
      }
      goto L_0898D86C;
    }
L_0898D86C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(-7));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_0898D984;
      }
      goto L_0898D890;
    }
L_0898D890:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_0898D984;
      }
      goto L_0898D89C;
    }
L_0898D89C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0898D984;
      }
      goto L_0898D8A4;
    }
L_0898D8A4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0898D9CC;
      }
      goto L_0898D8B0;
    }
L_0898D8B0:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2132)));
      if (branch_taken) {
          goto L_0898D7B4;
      }
      goto L_0898D8B8;
    }
L_0898D8B8:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[21] = (aot_gpr[29] + 0u);
    goto L_0898D8C0;
L_0898D8C0:
    aot_gpr[16] = (aot_gpr[22] + 0u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[20] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[21] + static_cast<std::uint32_t>(48));
    goto L_0898D8D0;
L_0898D8D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[4] << (aot_gpr[17] & 31u));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0898D928;
      }
      goto L_0898D8EC;
    }
L_0898D8EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898D904;
      }
      goto L_0898D8FC;
    }
L_0898D8FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_0898D904;
L_0898D904:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2080), aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898D924u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D924u) goto L_0898D924;
    return;
L_0898D924:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2080)));
    goto L_0898D928;
L_0898D928:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898D8D0;
      }
      goto L_0898D934;
    }
L_0898D934:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[23] != aot_gpr[5];
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0898D8C0;
      }
      goto L_0898D940;
    }
L_0898D940:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2132)));
    goto L_0898D7B4;
L_0898D948:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1100)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(124)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[11] = (aot_gpr[16] & 65535u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[6] = (aot_gpr[23] & 255u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898D974u);
    aot_gpr[7] = (aot_gpr[30] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D974u) goto L_0898D974;
    return;
L_0898D974:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1120)));
        goto L_0898D864;
    }
    goto L_0898D97C;
L_0898D97C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2132)));
    goto L_0898D7B4;
L_0898D984:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0898D99Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898D99Cu) goto L_0898D99C;
    return;
L_0898D99C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2132)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2128)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2124)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2096)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D9CC:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_0898D8B0;
L_0898D9D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1128)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0898DA18;
      }
      goto L_0898DA08;
    }
L_0898DA08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1040)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898DA40;
      }
      goto L_0898DA18;
    }
L_0898DA18:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    goto L_0898DA1C;
L_0898DA1C:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    goto L_0898DA20;
L_0898DA20:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DA40:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(127));
    aot_gpr[31] = (0x0898DA54u);
    aot_gpr[22] = (2217u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DA54u) goto L_0898DA54;
    return;
L_0898DA54:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898DA68u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898DA68u) goto L_0898DA68;
    return;
L_0898DA68:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_0898DA1C;
      }
      goto L_0898DA70;
    }
L_0898DA70:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1040)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
        goto L_0898DA20;
    }
    goto L_0898DA80;
L_0898DA80:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[18] = (0u + 0u);
    aot_gpr[13] = (0u + 0u);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[19] = (0u + 0u);
    goto L_0898DADC;
L_0898DA98:
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[2] = (aot_gpr[18] + static_cast<std::uint32_t>(1015));
      if (branch_taken) {
          goto L_0898DAC4;
      }
      goto L_0898DAA0;
    }
L_0898DAA0:
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[21] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[9] = (aot_gpr[29] + 0u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[11] = (aot_gpr[20] & 65535u);
      if (branch_taken) {
          goto L_0898DB88;
      }
      goto L_0898DAC4;
    }
L_0898DAC4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898DB4C;
      }
      goto L_0898DADC;
    }
L_0898DADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[5];
    aot_gpr[7] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_0898DA98;
      }
      goto L_0898DAF8;
    }
L_0898DAF8:
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[7]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898DB10;
      }
      goto L_0898DB00;
    }
L_0898DB00:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[18] = (aot_gpr[17] + 0u);
    aot_gpr[13] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[7]) < 0 ? 1u : 0u);
    goto L_0898DB10;
L_0898DB10:
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(7));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (aot_gpr[7]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 31u));
    aot_gpr[19] = ((aot_gpr[2] >> 3u) & 0x000000FFu);
    aot_gpr[4] = (aot_gpr[4] >> 29u);
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[19]);
    aot_gpr[3] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[3] & 7u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[3] & 31u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0898DA98;
L_0898DB4C:
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
      if (branch_taken) {
          goto L_0898DA18;
      }
      goto L_0898DB54;
    }
L_0898DB54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(124)));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[7] = (aot_gpr[21] + 0u);
    aot_gpr[11] = (aot_gpr[20] & 65535u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[9] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898DB80u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898DB80u) goto L_0898DB80;
    return;
L_0898DB80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    goto L_0898DA1C;
L_0898DB88:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(124)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898DB98u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898DB98u) goto L_0898DB98;
    return;
L_0898DB98:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_0898DA18;
      }
      goto L_0898DBA8;
    }
L_0898DBA8:
    aot_gpr[31] = (0x0898DBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DBB0u) goto L_0898DBB0;
    return;
L_0898DBB0:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1040)));
    aot_gpr[13] = (0u + 0u);
    goto L_0898DAC4;
L_0898DBBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
      if (branch_taken) {
          goto L_0898DC18;
      }
      goto L_0898DBE0;
    }
L_0898DBE0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898DC1C;
      }
      goto L_0898DBE8;
    }
L_0898DBE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1128)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_0898DC1C;
      }
      goto L_0898DBF4;
    }
L_0898DBF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_0898DC1C;
      }
      goto L_0898DC04;
    }
L_0898DC04:
    aot_gpr[31] = (0x0898DC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 38u, 0x0899326Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DC0Cu) goto L_0898DC0C;
    return;
L_0898DC0C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0898DC38;
      }
      goto L_0898DC18;
    }
L_0898DC18:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    goto L_0898DC1C;
L_0898DC1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DC38:
    aot_gpr[31] = (0x0898DC40u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1040)));
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 112u, 0x08993670u>(ctx, &aot_mem) && ctx.pc == 0x0898DC40u) goto L_0898DC40;
    return;
L_0898DC40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DC60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_0898DD20;
      }
      goto L_0898DC7C;
    }
L_0898DC7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1128)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_0898DD0C;
      }
      goto L_0898DC88;
    }
L_0898DC88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_0898DD0C;
      }
      goto L_0898DC98;
    }
L_0898DC98:
    aot_gpr[31] = (0x0898DCA0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 38u, 0x0899326Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DCA0u) goto L_0898DCA0;
    return;
L_0898DCA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898DD0C;
      }
      goto L_0898DCA8;
    }
L_0898DCA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1040)));
    aot_gpr[31] = (0x0898DCB4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 39u, 0x0899327Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DCB4u) goto L_0898DCB4;
    return;
L_0898DCB4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898DD08;
      }
      goto L_0898DCC0;
    }
L_0898DCC0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1092)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_0898DD08;
      }
      goto L_0898DCCC;
    }
L_0898DCCC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_0898DD08;
      }
      goto L_0898DCD4;
    }
L_0898DCD4:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_0898DD0C;
      }
      goto L_0898DCDC;
    }
L_0898DCDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1040)));
    aot_gpr[31] = (0x0898DCE8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 94u, 0x089935A8u>(ctx, &aot_mem) && ctx.pc == 0x0898DCE8u) goto L_0898DCE8;
    return;
L_0898DCE8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0898D600;
L_0898DD08:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1000));
    goto L_0898DD0C;
L_0898DD0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DD20:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    goto L_0898DD0C;
L_0898DD28:
    aot_gpr[3] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-26180)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DD34:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DD48:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0898DD84;
      }
      goto L_0898DD50;
    }
L_0898DD50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DD84;
      }
      goto L_0898DD5C;
    }
L_0898DD5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898DD80;
      }
      goto L_0898DD68;
    }
L_0898DD68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_0898DD84;
    }
    goto L_0898DD78;
L_0898DD78:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DD80:
    aot_gpr[3] = (0u + 0u);
    goto L_0898DD84;
L_0898DD84:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DD8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0898DDA8u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    goto L_0898DD48;
L_0898DDA8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898DDD0;
      }
      goto L_0898DDB0;
    }
L_0898DDB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 50005u);
      if (branch_taken) {
          goto L_0898DDD0;
      }
      goto L_0898DDBC;
    }
L_0898DDBC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0898DDE8;
      }
      goto L_0898DDC8;
    }
L_0898DDC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (0u + 0u);
    goto L_0898DDD0;
L_0898DDD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DDE8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898DDFCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898DDFCu) goto L_0898DDFC;
    return;
L_0898DDFC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898DDD0;
      }
      goto L_0898DE04;
    }
L_0898DE04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0898DDC8;
L_0898DE0C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DE24:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DE3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0898DE60u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_0898DD48;
L_0898DE60:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898DE70;
      }
      goto L_0898DE68;
    }
L_0898DE68:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (0u + 0u);
    goto L_0898DE70;
L_0898DE70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DE88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0898DEA8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_0898DD48;
L_0898DEA8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898DEBC;
      }
      goto L_0898DEB0;
    }
L_0898DEB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0898DEBC;
L_0898DEBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DED4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(14420));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[31] = (0x0898DF24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x0898DF24u) goto L_0898DF24;
    return;
L_0898DF24:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(14412));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(14420)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(14412), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DF50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0898DF88;
      }
      goto L_0898DF70;
    }
L_0898DF70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(13064)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0898DF9C;
    }
    goto L_0898DF7C;
L_0898DF7C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(13064), aot_gpr[2]);
    goto L_0898DF88;
L_0898DF88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DF9C:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898DFA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898DFA4u) goto L_0898DFA4;
    return;
L_0898DFA4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898DF88;
      }
      goto L_0898DFAC;
    }
L_0898DFAC:
    aot_gpr[31] = (0x0898DFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 119u, 0x089927ECu>(ctx, &aot_mem) && ctx.pc == 0x0898DFB4u) goto L_0898DFB4;
    return;
L_0898DFB4:
    aot_gpr[31] = (0x0898DFBCu);
    // nop
    goto L_0898DED4;
L_0898DFBC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13864));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898DFD0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(548));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DFD0u) goto L_0898DFD0;
    return;
L_0898DFD0:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(13852));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(13064)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(13852), 0u);
    goto L_0898DF7C;
L_0898DFEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0898E004u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0393(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0393_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_393(Runtime &runtime) {
    runtime.register_generated_unit(393u, 0x0898D000u, 4096u, &recomp_unit_0393, &recomp_unit_0393_entry);
    runtime.register_function(0x0898D000u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D038u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D044u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D058u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D064u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D074u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D08Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D09Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D0E8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D104u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D108u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D110u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D12Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D13Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D154u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D168u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D170u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D18Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D1A0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D1A8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D1C8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D1DCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D1E4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D1F8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D20Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D214u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D228u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D23Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D24Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D254u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D2B0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D2BCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D2C0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D2C8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D2D4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D2F0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D2FCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D304u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D30Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D318u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D330u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D34Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D364u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D370u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D390u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D394u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D39Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D3B4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D3B8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D3E4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D3ECu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D3F8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D400u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D40Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D418u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D420u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D42Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D434u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D438u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D444u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D44Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D45Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D468u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D470u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D49Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D4A4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D4ACu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D4C0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D4F0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D4F4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D50Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D514u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D524u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D530u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D538u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D568u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D570u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D578u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D584u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D5B0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D5B8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D5C0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D5F0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D5F8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D600u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D62Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D640u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D648u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D64Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D668u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D670u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D678u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D684u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D698u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D6CCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D6D4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D700u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D708u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D714u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D71Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D724u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D748u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D750u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D7B0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D7B4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D7E0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D7F4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D824u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D82Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D838u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D858u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D860u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D864u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D86Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D890u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D89Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D8A4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D8B0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D8B8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D8C0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D8D0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D8ECu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D8FCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D904u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D924u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D928u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D934u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D940u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D948u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D974u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D97Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D984u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D99Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D9CCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898D9D4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DA08u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DA18u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DA1Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DA20u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DA40u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DA54u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DA68u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DA70u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DA80u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DA98u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DAA0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DAC4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DADCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DAF8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DB00u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DB10u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DB4Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DB54u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DB80u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DB88u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DB98u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DBA8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DBB0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DBBCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DBE0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DBE8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DBF4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DC04u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DC0Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DC18u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DC1Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DC38u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DC40u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DC60u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DC7Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DC88u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DC98u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DCA0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DCA8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DCB4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DCC0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DCCCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DCD4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DCDCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DCE8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD08u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD0Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD20u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD28u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD34u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD48u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD50u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD5Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD68u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD78u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD80u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD84u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DD8Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DDA8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DDB0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DDBCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DDC8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DDD0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DDE8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DDFCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DE04u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DE0Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DE24u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DE3Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DE60u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DE68u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DE70u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DE88u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DEA8u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DEB0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DEBCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DED4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DF24u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DF50u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DF70u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DF7Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DF88u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DF9Cu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DFA4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DFACu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DFB4u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DFBCu, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DFD0u, &recomp_unit_0393, "recomp_unit_0393");
    runtime.register_function(0x0898DFECu, &recomp_unit_0393, "recomp_unit_0393");
}
} // namespace psprecomp
