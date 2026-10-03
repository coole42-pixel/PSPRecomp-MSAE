#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0281[1019] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0,
    9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19,
    0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 23, 0, 0, 0, 24,
    25, 0, 26, 0, 0, 0, 0, 27, 28, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 49, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 52, 0, 0, 53,
    54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 62,
    0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0,
    0, 74, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0,
    0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 100, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 106, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 111, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 130, 131,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135,
    0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0,
    150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    156, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0,
    164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178,
    0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0,
    0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199,
    0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 221,
};
void recomp_unit_0281_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0891D000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0281[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0891D000;
    case 2u: goto L_0891D010;
    case 3u: goto L_0891D024;
    case 4u: goto L_0891D028;
    case 5u: goto L_0891D03C;
    case 6u: goto L_0891D048;
    case 7u: goto L_0891D060;
    case 8u: goto L_0891D074;
    case 9u: goto L_0891D080;
    case 10u: goto L_0891D098;
    case 11u: goto L_0891D0B0;
    case 12u: goto L_0891D0C0;
    case 13u: goto L_0891D0F0;
    case 14u: goto L_0891D10C;
    case 15u: goto L_0891D124;
    case 16u: goto L_0891D134;
    case 17u: goto L_0891D13C;
    case 18u: goto L_0891D174;
    case 19u: goto L_0891D17C;
    case 20u: goto L_0891D194;
    case 21u: goto L_0891D19C;
    case 22u: goto L_0891D1E8;
    case 23u: goto L_0891D1EC;
    case 24u: goto L_0891D1FC;
    case 25u: goto L_0891D200;
    case 26u: goto L_0891D208;
    case 27u: goto L_0891D21C;
    case 28u: goto L_0891D220;
    case 29u: goto L_0891D22C;
    case 30u: goto L_0891D23C;
    case 31u: goto L_0891D244;
    case 32u: goto L_0891D258;
    case 33u: goto L_0891D264;
    case 34u: goto L_0891D284;
    case 35u: goto L_0891D290;
    case 36u: goto L_0891D2A0;
    case 37u: goto L_0891D2B4;
    case 38u: goto L_0891D2D4;
    case 39u: goto L_0891D2E0;
    case 40u: goto L_0891D300;
    case 41u: goto L_0891D31C;
    case 42u: goto L_0891D324;
    case 43u: goto L_0891D338;
    case 44u: goto L_0891D348;
    case 45u: goto L_0891D360;
    case 46u: goto L_0891D374;
    case 47u: goto L_0891D38C;
    case 48u: goto L_0891D3A8;
    case 49u: goto L_0891D3AC;
    case 50u: goto L_0891D3B0;
    case 51u: goto L_0891D3EC;
    case 52u: goto L_0891D3F0;
    case 53u: goto L_0891D3FC;
    case 54u: goto L_0891D400;
    case 55u: goto L_0891D414;
    case 56u: goto L_0891D428;
    case 57u: goto L_0891D430;
    case 58u: goto L_0891D444;
    case 59u: goto L_0891D458;
    case 60u: goto L_0891D468;
    case 61u: goto L_0891D474;
    case 62u: goto L_0891D47C;
    case 63u: goto L_0891D484;
    case 64u: goto L_0891D48C;
    case 65u: goto L_0891D498;
    case 66u: goto L_0891D4A0;
    case 67u: goto L_0891D4AC;
    case 68u: goto L_0891D4B4;
    case 69u: goto L_0891D4C0;
    case 70u: goto L_0891D4D0;
    case 71u: goto L_0891D4E4;
    case 72u: goto L_0891D4EC;
    case 73u: goto L_0891D4F8;
    case 74u: goto L_0891D504;
    case 75u: goto L_0891D508;
    case 76u: goto L_0891D514;
    case 77u: goto L_0891D528;
    case 78u: goto L_0891D540;
    case 79u: goto L_0891D54C;
    case 80u: goto L_0891D55C;
    case 81u: goto L_0891D56C;
    case 82u: goto L_0891D578;
    case 83u: goto L_0891D584;
    case 84u: goto L_0891D594;
    case 85u: goto L_0891D5AC;
    case 86u: goto L_0891D5B4;
    case 87u: goto L_0891D5BC;
    case 88u: goto L_0891D5C8;
    case 89u: goto L_0891D5D8;
    case 90u: goto L_0891D5E4;
    case 91u: goto L_0891D628;
    case 92u: goto L_0891D658;
    case 93u: goto L_0891D684;
    case 94u: goto L_0891D6A4;
    case 95u: goto L_0891D6C4;
    case 96u: goto L_0891D6CC;
    case 97u: goto L_0891D6D4;
    case 98u: goto L_0891D6D8;
    case 99u: goto L_0891D6E4;
    case 100u: goto L_0891D704;
    case 101u: goto L_0891D708;
    case 102u: goto L_0891D718;
    case 103u: goto L_0891D720;
    case 104u: goto L_0891D750;
    case 105u: goto L_0891D770;
    case 106u: goto L_0891D784;
    case 107u: goto L_0891D788;
    case 108u: goto L_0891D790;
    case 109u: goto L_0891D798;
    case 110u: goto L_0891D7B4;
    case 111u: goto L_0891D7B8;
    case 112u: goto L_0891D7C0;
    case 113u: goto L_0891D7C8;
    case 114u: goto L_0891D7DC;
    case 115u: goto L_0891D7F8;
    case 116u: goto L_0891D81C;
    case 117u: goto L_0891D824;
    case 118u: goto L_0891D82C;
    case 119u: goto L_0891D834;
    case 120u: goto L_0891D83C;
    case 121u: goto L_0891D848;
    case 122u: goto L_0891D854;
    case 123u: goto L_0891D874;
    case 124u: goto L_0891D888;
    case 125u: goto L_0891D8B0;
    case 126u: goto L_0891D8C8;
    case 127u: goto L_0891D8D4;
    case 128u: goto L_0891D8E4;
    case 129u: goto L_0891D8F4;
    case 130u: goto L_0891D8F8;
    case 131u: goto L_0891D8FC;
    case 132u: goto L_0891D91C;
    case 133u: goto L_0891D958;
    case 134u: goto L_0891D96C;
    case 135u: goto L_0891D97C;
    case 136u: goto L_0891D984;
    case 137u: goto L_0891D994;
    case 138u: goto L_0891D9B0;
    case 139u: goto L_0891D9D4;
    case 140u: goto L_0891D9F0;
    case 141u: goto L_0891DA08;
    case 142u: goto L_0891DA18;
    case 143u: goto L_0891DA24;
    case 144u: goto L_0891DA34;
    case 145u: goto L_0891DA38;
    case 146u: goto L_0891DA40;
    case 147u: goto L_0891DA54;
    case 148u: goto L_0891DA70;
    case 149u: goto L_0891DA78;
    case 150u: goto L_0891DA80;
    case 151u: goto L_0891DA94;
    case 152u: goto L_0891DAB0;
    case 153u: goto L_0891DAC8;
    case 154u: goto L_0891DAD4;
    case 155u: goto L_0891DAE4;
    case 156u: goto L_0891DB00;
    case 157u: goto L_0891DB08;
    case 158u: goto L_0891DB10;
    case 159u: goto L_0891DB24;
    case 160u: goto L_0891DB34;
    case 161u: goto L_0891DB40;
    case 162u: goto L_0891DB5C;
    case 163u: goto L_0891DB68;
    case 164u: goto L_0891DB80;
    case 165u: goto L_0891DB8C;
    case 166u: goto L_0891DBA4;
    case 167u: goto L_0891DBB0;
    case 168u: goto L_0891DBCC;
    case 169u: goto L_0891DBD8;
    case 170u: goto L_0891DBF4;
    case 171u: goto L_0891DC00;
    case 172u: goto L_0891DC08;
    case 173u: goto L_0891DC10;
    case 174u: goto L_0891DC2C;
    case 175u: goto L_0891DC44;
    case 176u: goto L_0891DC50;
    case 177u: goto L_0891DC60;
    case 178u: goto L_0891DC7C;
    case 179u: goto L_0891DC84;
    case 180u: goto L_0891DC8C;
    case 181u: goto L_0891DCA0;
    case 182u: goto L_0891DCB0;
    case 183u: goto L_0891DCBC;
    case 184u: goto L_0891DCE4;
    case 185u: goto L_0891DCF4;
    case 186u: goto L_0891DD0C;
    case 187u: goto L_0891DD24;
    case 188u: goto L_0891DD3C;
    case 189u: goto L_0891DD48;
    case 190u: goto L_0891DD60;
    case 191u: goto L_0891DD6C;
    case 192u: goto L_0891DD84;
    case 193u: goto L_0891DD90;
    case 194u: goto L_0891DDAC;
    case 195u: goto L_0891DDB8;
    case 196u: goto L_0891DDC0;
    case 197u: goto L_0891DDC8;
    case 198u: goto L_0891DDE4;
    case 199u: goto L_0891DDFC;
    case 200u: goto L_0891DE08;
    case 201u: goto L_0891DE18;
    case 202u: goto L_0891DE34;
    case 203u: goto L_0891DE3C;
    case 204u: goto L_0891DE44;
    case 205u: goto L_0891DE58;
    case 206u: goto L_0891DE70;
    case 207u: goto L_0891DE94;
    case 208u: goto L_0891DED0;
    case 209u: goto L_0891DEF0;
    case 210u: goto L_0891DF08;
    case 211u: goto L_0891DF20;
    case 212u: goto L_0891DF44;
    case 213u: goto L_0891DF50;
    case 214u: goto L_0891DF78;
    case 215u: goto L_0891DF84;
    case 216u: goto L_0891DFA8;
    case 217u: goto L_0891DFB4;
    case 218u: goto L_0891DFCC;
    case 219u: goto L_0891DFD8;
    case 220u: goto L_0891DFE0;
    case 221u: goto L_0891DFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0891D000:
    aot_gpr[6] = (aot_gpr[13] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891D010u);
    aot_gpr[5] = (aot_gpr[14] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D010u) goto L_0891D010;
    return;
L_0891D010:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[13] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[14] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891D028;
      }
      goto L_0891D024;
    }
L_0891D024:
    aot_gpr[4] = (aot_gpr[13] | 0u);
    goto L_0891D028;
L_0891D028:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[14] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0891D03Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0891D03Cu) goto L_0891D03C;
    return;
L_0891D03C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891D048u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0891D048u) goto L_0891D048;
    return;
L_0891D048:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D060:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891D074u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 219u, 0x0891CFA4u>(ctx, &aot_mem) && ctx.pc == 0x0891D074u) goto L_0891D074;
    return;
L_0891D074:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D080:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[13] = (aot_gpr[5] | 0u);
    aot_gpr[25] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891D098u);
    aot_gpr[14] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 43u, 0x0891C2E8u>(ctx, &aot_mem) && ctx.pc == 0x0891D098u) goto L_0891D098;
    return;
L_0891D098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(60)));
    aot_gpr[24] = (4096u << 16u);
    aot_gpr[15] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0891D0C0;
      }
      goto L_0891D0B0;
    }
L_0891D0B0:
    aot_gpr[4] = (aot_gpr[14] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0891D0C0u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x0891D0C0u) goto L_0891D0C0;
    return;
L_0891D0C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[25] + aot_gpr[5]);
    aot_gpr[11] = (aot_gpr[5] + static_cast<std::uint32_t>(15));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (aot_gpr[4] & aot_gpr[24]);
    aot_gpr[11] = (aot_gpr[11] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[11] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D22C;
      }
      goto L_0891D0F0;
    }
L_0891D0F0:
    aot_gpr[3] = (61440u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[3]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[11]);
    { const bool branch_taken = aot_gpr[12] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_0891D174;
      }
      goto L_0891D10C;
    }
L_0891D10C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D174;
      }
      goto L_0891D124;
    }
L_0891D124:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0891D134u);
    aot_gpr[4] = (aot_gpr[14] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 36u, 0x0891C288u>(ctx, &aot_mem) && ctx.pc == 0x0891D134u) goto L_0891D134;
    return;
L_0891D134:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D174;
      }
      goto L_0891D13C;
    }
L_0891D13C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[5] & aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[10]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_0891D22C;
      }
      goto L_0891D174;
    }
L_0891D174:
    { const bool branch_taken = aot_gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D194;
      }
      goto L_0891D17C;
    }
L_0891D17C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (12288u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D22C;
      }
      goto L_0891D194;
    }
L_0891D194:
    aot_gpr[31] = (0x0891D19Cu);
    aot_gpr[4] = (aot_gpr[14] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 106u, 0x0891C698u>(ctx, &aot_mem) && ctx.pc == 0x0891D19Cu) goto L_0891D19C;
    return;
L_0891D19C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[24]);
    aot_gpr[6] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D1EC;
      }
      goto L_0891D1E8;
    }
L_0891D1E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891D1EC;
L_0891D1EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[15];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_0891D200;
      }
      goto L_0891D1FC;
    }
L_0891D1FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    goto L_0891D200;
L_0891D200:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D21C;
      }
      goto L_0891D208;
    }
L_0891D208:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D220;
      }
      goto L_0891D21C;
    }
L_0891D21C:
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    goto L_0891D220;
L_0891D220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_0891D22C;
L_0891D22C:
    aot_gpr[2] = (aot_gpr[13] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D23C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D244:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891D258u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x0891D258u) goto L_0891D258;
    return;
L_0891D258:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D264:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0891D284u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 34u, 0x0891C268u>(ctx, &aot_mem) && ctx.pc == 0x0891D284u) goto L_0891D284;
    return;
L_0891D284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (4096u << 16u);
      if (branch_taken) {
          goto L_0891D324;
      }
      goto L_0891D290;
    }
L_0891D290:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (61440u << 16u);
    aot_gpr[8] = (16384u << 16u);
    aot_gpr[5] = (8192u << 16u);
    goto L_0891D2A0;
L_0891D2A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (aot_gpr[6] & aot_gpr[9]);
    aot_gpr[11] = (aot_gpr[10] & aot_gpr[8]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
      if (branch_taken) {
          goto L_0891D2D4;
      }
      goto L_0891D2B4;
    }
L_0891D2B4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0891D31C;
      }
      goto L_0891D2D4;
    }
L_0891D2D4:
    aot_gpr[10] = (aot_gpr[10] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D300;
      }
      goto L_0891D2E0;
    }
L_0891D2E0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0891D31C;
      }
      goto L_0891D300;
    }
L_0891D300:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0891D31C;
L_0891D31C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D2A0;
      }
      goto L_0891D324;
    }
L_0891D324:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D338:
    aot_gpr[2] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D348:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891D360u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 106u, 0x0891C698u>(ctx, &aot_mem) && ctx.pc == 0x0891D360u) goto L_0891D360;
    return;
L_0891D360:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[8] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891D38C;
      }
      goto L_0891D374;
    }
L_0891D374:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(52), aot_gpr[4]);
      if (branch_taken) {
          goto L_0891D3AC;
      }
      goto L_0891D38C;
    }
L_0891D38C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[5] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0891D3B0;
    }
    goto L_0891D3A8;
L_0891D3A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    goto L_0891D3AC;
L_0891D3AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_0891D3B0;
L_0891D3B0:
    aot_gpr[6] = (61440u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[6] = (4096u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[6] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D3F0;
      }
      goto L_0891D3EC;
    }
L_0891D3EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891D3F0;
L_0891D3F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D400;
      }
      goto L_0891D3FC;
    }
L_0891D3FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0891D400;
L_0891D400:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(72), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(76), aot_gpr[7]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D428;
    }
L_0891D428:
    aot_gpr[10] = (61440u << 16u);
    aot_gpr[9] = (16384u << 16u);
    goto L_0891D430;
L_0891D430:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(72)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0891D508;
      }
      goto L_0891D444;
    }
L_0891D444:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D508;
      }
      goto L_0891D458;
    }
L_0891D458:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[10]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_0891D508;
      }
      goto L_0891D468;
    }
L_0891D468:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D47C;
      }
      goto L_0891D474;
    }
L_0891D474:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    goto L_0891D47C;
L_0891D47C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D48C;
      }
      goto L_0891D484;
    }
L_0891D484:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0891D48C;
L_0891D48C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_0891D4A0;
      }
      goto L_0891D498;
    }
L_0891D498:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    goto L_0891D4A0;
L_0891D4A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_0891D4B4;
      }
      goto L_0891D4AC;
    }
L_0891D4AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_0891D4B4;
L_0891D4B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_0891D4F8;
      }
      goto L_0891D4C0;
    }
L_0891D4C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D4F8;
      }
      goto L_0891D4D0;
    }
L_0891D4D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[9]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D4EC;
      }
      goto L_0891D4E4;
    }
L_0891D4E4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(52), aot_gpr[4]);
      if (branch_taken) {
          goto L_0891D4F8;
      }
      goto L_0891D4EC;
    }
L_0891D4EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D4D0;
      }
      goto L_0891D4F8;
    }
L_0891D4F8:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0891D504u);
    aot_gpr[5] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 62u, 0x0891C3ACu>(ctx, &aot_mem) && ctx.pc == 0x0891D504u) goto L_0891D504;
    return;
L_0891D504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    goto L_0891D508;
L_0891D508:
    aot_gpr[11] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D430;
      }
      goto L_0891D514;
    }
L_0891D514:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D528:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891D540u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0891D540u) goto L_0891D540;
    return;
L_0891D540:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D54C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D5BC;
      }
      goto L_0891D55C;
    }
L_0891D55C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25400));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0891D578;
      }
      goto L_0891D56C;
    }
L_0891D56C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25368));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0891D578;
L_0891D578:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891D5BC;
      }
      goto L_0891D584;
    }
L_0891D584:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D5B4;
      }
      goto L_0891D594;
    }
L_0891D594:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891D5ACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D5ACu) goto L_0891D5AC;
    return;
L_0891D5AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D5BC;
      }
      goto L_0891D5B4;
    }
L_0891D5B4:
    aot_gpr[31] = (0x0891D5BCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891D5BCu) goto L_0891D5BC;
    return;
L_0891D5BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D5C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891D5D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x0891D5D8u) goto L_0891D5D8;
    return;
L_0891D5D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D5E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x0891D628u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 73u, 0x08943570u>(ctx, &aot_mem) && ctx.pc == 0x0891D628u) goto L_0891D628;
    return;
L_0891D628:
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29328), aot_gpr[2]);
    aot_gpr[23] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-29324), aot_gpr[16]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29320), aot_gpr[18]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29316), aot_gpr[22]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29312), aot_gpr[17]);
    aot_gpr[31] = (0x0891D658u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_0891D338;
L_0891D658:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29328)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[30] = (2216u << 16u);
    if (aot_gpr[17] != 0u) {
    aot_gpr[21] = (aot_gpr[4] | 0u);
        goto L_0891D684;
    }
    goto L_0891D684;
L_0891D684:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-29324)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[18]);
    aot_gpr[23] = (aot_gpr[5] - aot_gpr[17]);
    aot_gpr[23] = (aot_gpr[23] - aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] + aot_gpr[22]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0891D6CC;
      }
      goto L_0891D6A4;
    }
L_0891D6A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0891D6C4u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D6C4u) goto L_0891D6C4;
    return;
L_0891D6C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891D6D8;
      }
      goto L_0891D6CC;
    }
L_0891D6CC:
    aot_gpr[31] = (0x0891D6D4u);
    aot_gpr[4] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x0891D6D4u) goto L_0891D6D4;
    return;
L_0891D6D4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_0891D6D8;
L_0891D6D8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D708;
      }
      goto L_0891D6E4;
    }
L_0891D6E4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0891D704u);
    aot_gpr[10] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 111u, 0x0891C6D0u>(ctx, &aot_mem) && ctx.pc == 0x0891D704u) goto L_0891D704;
    return;
L_0891D704:
    aot_gpr[19] = (aot_gpr[16] | 0u);
    goto L_0891D708;
L_0891D708:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-29308), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D720;
      }
      goto L_0891D718;
    }
L_0891D718:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-30480), aot_gpr[4]);
    goto L_0891D720;
L_0891D720:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D750:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D7C8;
      }
      goto L_0891D770;
    }
L_0891D770:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29328)));
      if (branch_taken) {
          goto L_0891D788;
      }
      goto L_0891D784;
    }
L_0891D784:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-30480), 0u);
    goto L_0891D788;
L_0891D788:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D7C0;
      }
      goto L_0891D790;
    }
L_0891D790:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D7B8;
      }
      goto L_0891D798;
    }
L_0891D798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0891D7B4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D7B4u) goto L_0891D7B4;
    return;
L_0891D7B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29328)));
    goto L_0891D7B8;
L_0891D7B8:
    aot_gpr[31] = (0x0891D7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 74u, 0x0894357Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D7C0u) goto L_0891D7C0;
    return;
L_0891D7C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29308), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29328), 0u);
    goto L_0891D7C8;
L_0891D7C8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D7DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891D874;
      }
      goto L_0891D7F8;
    }
L_0891D7F8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1192));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0891D834;
      }
      goto L_0891D81C;
    }
L_0891D81C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D83C;
      }
      goto L_0891D824;
    }
L_0891D824:
    aot_gpr[31] = (0x0891D82Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 69u, 0x0891E4E8u>(ctx, &aot_mem) && ctx.pc == 0x0891D82Cu) goto L_0891D82C;
    return;
L_0891D82C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D83C;
      }
      goto L_0891D834;
    }
L_0891D834:
    aot_gpr[31] = (0x0891D83Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 69u, 0x0891E4E8u>(ctx, &aot_mem) && ctx.pc == 0x0891D83Cu) goto L_0891D83C;
    return;
L_0891D83C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891D848u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x0891D848u) goto L_0891D848;
    return;
L_0891D848:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0891D874;
      }
      goto L_0891D854;
    }
L_0891D854:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891D874u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D874u) goto L_0891D874;
    return;
L_0891D874:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D888:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0891D8B0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D8B0u) goto L_0891D8B0;
    return;
L_0891D8B0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1192));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D8FC;
      }
      goto L_0891D8C8;
    }
L_0891D8C8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0891D8D4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 82u, 0x08A54610u>(ctx, &aot_mem) && ctx.pc == 0x0891D8D4u) goto L_0891D8D4;
    return;
L_0891D8D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0891D8F8;
      }
      goto L_0891D8E4;
    }
L_0891D8E4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891D8F4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 94u, 0x0891E644u>(ctx, &aot_mem) && ctx.pc == 0x0891D8F4u) goto L_0891D8F4;
    return;
L_0891D8F4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0891D8F8;
L_0891D8F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_0891D8FC;
L_0891D8FC:
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
L_0891D91C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0891D958u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0891D958u) goto L_0891D958;
    return;
L_0891D958:
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891D96Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x0891D96Cu) goto L_0891D96C;
    return;
L_0891D96C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0891D97Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0891D97Cu) goto L_0891D97C;
    return;
L_0891D97C:
    aot_gpr[31] = (0x0891D984u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0891D984u) goto L_0891D984;
    return;
L_0891D984:
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891D994u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x0891D994u) goto L_0891D994;
    return;
L_0891D994:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891D9B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26184));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0891D9B0u) goto L_0891D9B0;
    return;
L_0891D9B0:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_0891D9D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891DA80;
      }
      goto L_0891D9F0;
    }
L_0891D9F0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1208));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DA18;
      }
      goto L_0891DA08;
    }
L_0891DA08:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891DA18u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0891DA18u) goto L_0891DA18;
    return;
L_0891DA18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 1u);
      if (branch_taken) {
          goto L_0891DA38;
      }
      goto L_0891DA24;
    }
L_0891DA24:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891DA34u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0891DA34u) goto L_0891DA34;
    return;
L_0891DA34:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    goto L_0891DA38;
L_0891DA38:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DA80;
      }
      goto L_0891DA40;
    }
L_0891DA40:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DA78;
      }
      goto L_0891DA54;
    }
L_0891DA54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0891DA70u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891DA70u) goto L_0891DA70;
    return;
L_0891DA70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DA80;
      }
      goto L_0891DA78;
    }
L_0891DA78:
    aot_gpr[31] = (0x0891DA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891DA80u) goto L_0891DA80;
    return;
L_0891DA80:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DA94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891DB10;
      }
      goto L_0891DAB0;
    }
L_0891DAB0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1288));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891DAC8u);
    aot_gpr[5] = (0u | 0u);
    goto L_0891D9D4;
L_0891DAC8:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891DB10;
      }
      goto L_0891DAD4;
    }
L_0891DAD4:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DB08;
      }
      goto L_0891DAE4;
    }
L_0891DAE4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0891DB00u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891DB00u) goto L_0891DB00;
    return;
L_0891DB00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DB10;
      }
      goto L_0891DB08;
    }
L_0891DB08:
    aot_gpr[31] = (0x0891DB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891DB10u) goto L_0891DB10;
    return;
L_0891DB10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DB24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DB34u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 67u, 0x0891E4ACu>(ctx, &aot_mem) && ctx.pc == 0x0891DB34u) goto L_0891DB34;
    return;
L_0891DB34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DB40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-26176));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DB5Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0891DB5Cu) goto L_0891DB5C;
    return;
L_0891DB5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DB68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DB80u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 55u, 0x0891E41Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DB80u) goto L_0891DB80;
    return;
L_0891DB80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DB8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DBA4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 55u, 0x0891E41Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DBA4u) goto L_0891DBA4;
    return;
L_0891DBA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DBB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-26176));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DBCCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0891DBCCu) goto L_0891DBCC;
    return;
L_0891DBCC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DBD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-26176));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DBF4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0891DBF4u) goto L_0891DBF4;
    return;
L_0891DBF4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DC00:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DC08:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DC10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891DC8C;
      }
      goto L_0891DC2C;
    }
L_0891DC2C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1368));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891DC44u);
    aot_gpr[5] = (0u | 0u);
    goto L_0891D9D4;
L_0891DC44:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891DC8C;
      }
      goto L_0891DC50;
    }
L_0891DC50:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DC84;
      }
      goto L_0891DC60;
    }
L_0891DC60:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0891DC7Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891DC7Cu) goto L_0891DC7C;
    return;
L_0891DC7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DC8C;
      }
      goto L_0891DC84;
    }
L_0891DC84:
    aot_gpr[31] = (0x0891DC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891DC8Cu) goto L_0891DC8C;
    return;
L_0891DC8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DCA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DCB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 45u, 0x0891E348u>(ctx, &aot_mem) && ctx.pc == 0x0891DCB0u) goto L_0891DCB0;
    return;
L_0891DCB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DCBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[31]);
    aot_gpr[31] = (0x0891DCE4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 53u, 0x0891E3F8u>(ctx, &aot_mem) && ctx.pc == 0x0891DCE4u) goto L_0891DCE4;
    return;
L_0891DCE4:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x0891DCF4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 53u, 0x0891E3F8u>(ctx, &aot_mem) && ctx.pc == 0x0891DCF4u) goto L_0891DCF4;
    return;
L_0891DCF4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0891DD0Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26172));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0891DD0Cu) goto L_0891DD0C;
    return;
L_0891DD0C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DD24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DD3Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 53u, 0x0891E3F8u>(ctx, &aot_mem) && ctx.pc == 0x0891DD3Cu) goto L_0891DD3C;
    return;
L_0891DD3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DD48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DD60u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 53u, 0x0891E3F8u>(ctx, &aot_mem) && ctx.pc == 0x0891DD60u) goto L_0891DD60;
    return;
L_0891DD60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DD6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(36));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DD84u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 53u, 0x0891E3F8u>(ctx, &aot_mem) && ctx.pc == 0x0891DD84u) goto L_0891DD84;
    return;
L_0891DD84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DD90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-26176));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DDACu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0891DDACu) goto L_0891DDAC;
    return;
L_0891DDAC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DDB8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DDC0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DDC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891DE44;
      }
      goto L_0891DDE4;
    }
L_0891DDE4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1448));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891DDFCu);
    aot_gpr[5] = (0u | 0u);
    goto L_0891D9D4;
L_0891DDFC:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891DE44;
      }
      goto L_0891DE08;
    }
L_0891DE08:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DE3C;
      }
      goto L_0891DE18;
    }
L_0891DE18:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0891DE34u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891DE34u) goto L_0891DE34;
    return;
L_0891DE34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DE44;
      }
      goto L_0891DE3C;
    }
L_0891DE3C:
    aot_gpr[31] = (0x0891DE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891DE44u) goto L_0891DE44;
    return;
L_0891DE44:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DE58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891DE70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 47u, 0x0891E374u>(ctx, &aot_mem) && ctx.pc == 0x0891DE70u) goto L_0891DE70;
    return;
L_0891DE70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DE94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    aot_gpr[31] = (0x0891DED0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 50u, 0x0891E3ACu>(ctx, &aot_mem) && ctx.pc == 0x0891DED0u) goto L_0891DED0;
    return;
L_0891DED0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0891DEF0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 50u, 0x0891E3ACu>(ctx, &aot_mem) && ctx.pc == 0x0891DEF0u) goto L_0891DEF0;
    return;
L_0891DEF0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891DF08u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26172));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0891DF08u) goto L_0891DF08;
    return;
L_0891DF08:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DF20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891DF44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 50u, 0x0891E3ACu>(ctx, &aot_mem) && ctx.pc == 0x0891DF44u) goto L_0891DF44;
    return;
L_0891DF44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DF50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891DF78u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 50u, 0x0891E3ACu>(ctx, &aot_mem) && ctx.pc == 0x0891DF78u) goto L_0891DF78;
    return;
L_0891DF78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DF84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891DFA8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 50u, 0x0891E3ACu>(ctx, &aot_mem) && ctx.pc == 0x0891DFA8u) goto L_0891DFA8;
    return;
L_0891DFA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DFB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891DFCCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 50u, 0x0891E3ACu>(ctx, &aot_mem) && ctx.pc == 0x0891DFCCu) goto L_0891DFCC;
    return;
L_0891DFCC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DFD8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DFE0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DFE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 7u, 0x0891E064u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 1u, 0x0891E004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0281(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0281_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_281(Runtime &runtime) {
    runtime.register_generated_unit(281u, 0x0891D000u, 4096u, &recomp_unit_0281, &recomp_unit_0281_entry);
    runtime.register_function(0x0891D000u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D010u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D024u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D028u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D03Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D048u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D060u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D074u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D080u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D098u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D0B0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D0C0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D0F0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D10Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D124u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D134u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D13Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D174u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D17Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D194u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D19Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D1E8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D1ECu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D1FCu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D200u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D208u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D21Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D220u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D22Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D23Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D244u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D258u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D264u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D284u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D290u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D2A0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D2B4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D2D4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D2E0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D300u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D31Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D324u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D338u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D348u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D360u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D374u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D38Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D3A8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D3ACu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D3B0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D3ECu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D3F0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D3FCu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D400u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D414u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D428u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D430u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D444u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D458u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D468u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D474u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D47Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D484u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D48Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D498u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D4A0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D4ACu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D4B4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D4C0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D4D0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D4E4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D4ECu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D4F8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D504u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D508u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D514u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D528u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D540u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D54Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D55Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D56Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D578u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D584u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D594u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D5ACu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D5B4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D5BCu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D5C8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D5D8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D5E4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D628u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D658u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D684u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D6A4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D6C4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D6CCu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D6D4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D6D8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D6E4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D704u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D708u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D718u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D720u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D750u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D770u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D784u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D788u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D790u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D798u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D7B4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D7B8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D7C0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D7C8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D7DCu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D7F8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D81Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D824u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D82Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D834u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D83Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D848u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D854u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D874u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D888u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D8B0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D8C8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D8D4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D8E4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D8F4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D8F8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D8FCu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D91Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D958u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D96Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D97Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D984u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D994u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D9B0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D9D4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891D9F0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DA08u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DA18u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DA24u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DA34u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DA38u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DA40u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DA54u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DA70u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DA78u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DA80u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DA94u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DAB0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DAC8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DAD4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DAE4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DB00u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DB08u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DB10u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DB24u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DB34u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DB40u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DB5Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DB68u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DB80u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DB8Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DBA4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DBB0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DBCCu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DBD8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DBF4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DC00u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DC08u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DC10u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DC2Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DC44u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DC50u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DC60u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DC7Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DC84u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DC8Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DCA0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DCB0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DCBCu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DCE4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DCF4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DD0Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DD24u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DD3Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DD48u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DD60u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DD6Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DD84u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DD90u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DDACu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DDB8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DDC0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DDC8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DDE4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DDFCu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DE08u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DE18u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DE34u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DE3Cu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DE44u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DE58u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DE70u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DE94u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DED0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DEF0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DF08u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DF20u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DF44u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DF50u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DF78u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DF84u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DFA8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DFB4u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DFCCu, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DFD8u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DFE0u, &recomp_unit_0281, "recomp_unit_0281");
    runtime.register_function(0x0891DFE8u, &recomp_unit_0281, "recomp_unit_0281");
}
} // namespace psprecomp
