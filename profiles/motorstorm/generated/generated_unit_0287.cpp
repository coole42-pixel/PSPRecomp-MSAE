#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0287[1021] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0,
    17, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 0,
    29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    37, 38, 0, 0, 39, 0, 0, 0, 0, 40, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0,
    0, 50, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68,
    69, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 79, 80, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87,
    0, 88, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 99, 0, 100, 0, 0, 101, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118,
    0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 125, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134,
    0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0,
    144, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 162, 0, 0, 0, 0, 163, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0,
    174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0,
    212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 220, 0, 221,
};
void recomp_unit_0287_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08923000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0287[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08923000;
    case 2u: goto L_0892300C;
    case 3u: goto L_08923014;
    case 4u: goto L_08923030;
    case 5u: goto L_08923040;
    case 6u: goto L_0892304C;
    case 7u: goto L_08923074;
    case 8u: goto L_08923090;
    case 9u: goto L_0892309C;
    case 10u: goto L_089230B4;
    case 11u: goto L_089230BC;
    case 12u: goto L_089230CC;
    case 13u: goto L_089230D4;
    case 14u: goto L_089230DC;
    case 15u: goto L_089230F0;
    case 16u: goto L_089230F8;
    case 17u: goto L_08923100;
    case 18u: goto L_08923104;
    case 19u: goto L_08923114;
    case 20u: goto L_08923124;
    case 21u: goto L_0892312C;
    case 22u: goto L_08923138;
    case 23u: goto L_08923140;
    case 24u: goto L_08923148;
    case 25u: goto L_08923158;
    case 26u: goto L_08923164;
    case 27u: goto L_0892316C;
    case 28u: goto L_08923174;
    case 29u: goto L_08923180;
    case 30u: goto L_0892318C;
    case 31u: goto L_089231A0;
    case 32u: goto L_089231B0;
    case 33u: goto L_089231C0;
    case 34u: goto L_089231D0;
    case 35u: goto L_089231D8;
    case 36u: goto L_089231F4;
    case 37u: goto L_08923200;
    case 38u: goto L_08923204;
    case 39u: goto L_08923210;
    case 40u: goto L_08923224;
    case 41u: goto L_08923228;
    case 42u: goto L_08923280;
    case 43u: goto L_08923290;
    case 44u: goto L_089232A0;
    case 45u: goto L_089232B0;
    case 46u: goto L_089232BC;
    case 47u: goto L_089232CC;
    case 48u: goto L_089232E4;
    case 49u: goto L_089232EC;
    case 50u: goto L_08923304;
    case 51u: goto L_08923308;
    case 52u: goto L_08923330;
    case 53u: goto L_0892334C;
    case 54u: goto L_08923364;
    case 55u: goto L_08923370;
    case 56u: goto L_08923390;
    case 57u: goto L_089233A4;
    case 58u: goto L_089233C0;
    case 59u: goto L_089233DC;
    case 60u: goto L_089233F8;
    case 61u: goto L_08923418;
    case 62u: goto L_08923424;
    case 63u: goto L_0892342C;
    case 64u: goto L_08923434;
    case 65u: goto L_08923444;
    case 66u: goto L_08923454;
    case 67u: goto L_08923474;
    case 68u: goto L_0892347C;
    case 69u: goto L_08923480;
    case 70u: goto L_08923494;
    case 71u: goto L_0892349C;
    case 72u: goto L_089234A4;
    case 73u: goto L_089234AC;
    case 74u: goto L_089234B4;
    case 75u: goto L_089234BC;
    case 76u: goto L_089234C4;
    case 77u: goto L_089234D4;
    case 78u: goto L_089234DC;
    case 79u: goto L_089234E4;
    case 80u: goto L_089234E8;
    case 81u: goto L_08923500;
    case 82u: goto L_0892353C;
    case 83u: goto L_08923544;
    case 84u: goto L_08923550;
    case 85u: goto L_08923564;
    case 86u: goto L_0892356C;
    case 87u: goto L_0892357C;
    case 88u: goto L_08923584;
    case 89u: goto L_08923588;
    case 90u: goto L_0892359C;
    case 91u: goto L_089235A8;
    case 92u: goto L_089235B0;
    case 93u: goto L_089235D8;
    case 94u: goto L_089235F4;
    case 95u: goto L_08923624;
    case 96u: goto L_0892364C;
    case 97u: goto L_08923654;
    case 98u: goto L_0892365C;
    case 99u: goto L_08923660;
    case 100u: goto L_08923668;
    case 101u: goto L_08923674;
    case 102u: goto L_0892367C;
    case 103u: goto L_089236C0;
    case 104u: goto L_089236CC;
    case 105u: goto L_089236D4;
    case 106u: goto L_089236DC;
    case 107u: goto L_089236E0;
    case 108u: goto L_08923704;
    case 109u: goto L_08923718;
    case 110u: goto L_08923724;
    case 111u: goto L_08923730;
    case 112u: goto L_0892373C;
    case 113u: goto L_08923748;
    case 114u: goto L_08923754;
    case 115u: goto L_08923760;
    case 116u: goto L_0892376C;
    case 117u: goto L_08923774;
    case 118u: goto L_0892377C;
    case 119u: goto L_08923784;
    case 120u: goto L_0892378C;
    case 121u: goto L_08923794;
    case 122u: goto L_0892379C;
    case 123u: goto L_089237A4;
    case 124u: goto L_089237AC;
    case 125u: goto L_089237B0;
    case 126u: goto L_089237B8;
    case 127u: goto L_089237C4;
    case 128u: goto L_089237D4;
    case 129u: goto L_089237DC;
    case 130u: goto L_089237FC;
    case 131u: goto L_08923808;
    case 132u: goto L_08923854;
    case 133u: goto L_08923864;
    case 134u: goto L_0892387C;
    case 135u: goto L_08923888;
    case 136u: goto L_08923894;
    case 137u: goto L_0892389C;
    case 138u: goto L_089238F0;
    case 139u: goto L_0892391C;
    case 140u: goto L_08923930;
    case 141u: goto L_08923938;
    case 142u: goto L_08923968;
    case 143u: goto L_08923974;
    case 144u: goto L_08923980;
    case 145u: goto L_08923984;
    case 146u: goto L_08923994;
    case 147u: goto L_089239BC;
    case 148u: goto L_089239E4;
    case 149u: goto L_089239EC;
    case 150u: goto L_08923A1C;
    case 151u: goto L_08923A2C;
    case 152u: goto L_08923A34;
    case 153u: goto L_08923A48;
    case 154u: goto L_08923A70;
    case 155u: goto L_08923A84;
    case 156u: goto L_08923AA8;
    case 157u: goto L_08923AC0;
    case 158u: goto L_08923AD4;
    case 159u: goto L_08923ADC;
    case 160u: goto L_08923AF0;
    case 161u: goto L_08923B3C;
    case 162u: goto L_08923B40;
    case 163u: goto L_08923B54;
    case 164u: goto L_08923B58;
    case 165u: goto L_08923B7C;
    case 166u: goto L_08923B90;
    case 167u: goto L_08923B94;
    case 168u: goto L_08923BB8;
    case 169u: goto L_08923BC4;
    case 170u: goto L_08923BCC;
    case 171u: goto L_08923BDC;
    case 172u: goto L_08923BE4;
    case 173u: goto L_08923BF8;
    case 174u: goto L_08923C00;
    case 175u: goto L_08923C10;
    case 176u: goto L_08923C1C;
    case 177u: goto L_08923C30;
    case 178u: goto L_08923C3C;
    case 179u: goto L_08923C44;
    case 180u: goto L_08923C6C;
    case 181u: goto L_08923C74;
    case 182u: goto L_08923CA8;
    case 183u: goto L_08923CC0;
    case 184u: goto L_08923CE8;
    case 185u: goto L_08923D04;
    case 186u: goto L_08923D10;
    case 187u: goto L_08923D34;
    case 188u: goto L_08923D40;
    case 189u: goto L_08923D4C;
    case 190u: goto L_08923D54;
    case 191u: goto L_08923D68;
    case 192u: goto L_08923DAC;
    case 193u: goto L_08923DB8;
    case 194u: goto L_08923DE4;
    case 195u: goto L_08923E04;
    case 196u: goto L_08923E0C;
    case 197u: goto L_08923E14;
    case 198u: goto L_08923E1C;
    case 199u: goto L_08923E4C;
    case 200u: goto L_08923E54;
    case 201u: goto L_08923E60;
    case 202u: goto L_08923E68;
    case 203u: goto L_08923E70;
    case 204u: goto L_08923E84;
    case 205u: goto L_08923EC4;
    case 206u: goto L_08923ED0;
    case 207u: goto L_08923EDC;
    case 208u: goto L_08923F1C;
    case 209u: goto L_08923F28;
    case 210u: goto L_08923F64;
    case 211u: goto L_08923F78;
    case 212u: goto L_08923F80;
    case 213u: goto L_08923F90;
    case 214u: goto L_08923FA0;
    case 215u: goto L_08923FAC;
    case 216u: goto L_08923FBC;
    case 217u: goto L_08923FC4;
    case 218u: goto L_08923FD4;
    case 219u: goto L_08923FE4;
    case 220u: goto L_08923FE8;
    case 221u: goto L_08923FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08923000:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923104;
      }
      goto L_0892300C;
    }
L_0892300C:
    aot_gpr[31] = (0x08923014u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 202u, 0x08A55E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08923014u) goto L_08923014;
    return;
L_08923014:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    goto L_08923030;
L_08923030:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08923040u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923040u) goto L_08923040;
    return;
L_08923040:
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923100;
      }
      goto L_0892304C;
    }
L_0892304C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08923074u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923074u) goto L_08923074;
    return;
L_08923074:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089230F8;
      }
      goto L_08923090;
    }
L_08923090:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(72)));
    if (aot_gpr[7] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
        goto L_089230DC;
    }
    goto L_0892309C;
L_0892309C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(35)));
    aot_gpr[6] = (aot_gpr[7] & 64u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[7] & 32u);
      if (branch_taken) {
          goto L_089230BC;
      }
      goto L_089230B4;
    }
L_089230B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] | 64u);
      if (branch_taken) {
          goto L_089230D4;
      }
      goto L_089230BC;
    }
L_089230BC:
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[18] = (aot_gpr[18] | 16u);
        goto L_089230D4;
    }
    goto L_089230CC;
L_089230CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] | 32u);
      if (branch_taken) {
          goto L_089230D4;
      }
      goto L_089230D4;
    }
L_089230D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089230F8;
      }
      goto L_089230DC;
    }
L_089230DC:
    aot_gpr[6] = (aot_gpr[6] & 8u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[18] = (aot_gpr[18] | 16u);
        goto L_089230F8;
    }
    goto L_089230F0;
L_089230F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] | 64u);
      if (branch_taken) {
          goto L_089230F8;
      }
      goto L_089230F8;
    }
L_089230F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08923030;
      }
      goto L_08923100;
    }
L_08923100:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(210)));
    goto L_08923104;
L_08923104:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 223u, 0x08922FF8u>(ctx, &aot_mem); return;
      }
      goto L_08923114;
    }
L_08923114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (aot_gpr[18] & 64u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_0892312C;
      }
      goto L_08923124;
    }
L_08923124:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 64u);
      if (branch_taken) {
          goto L_08923140;
      }
      goto L_0892312C;
    }
L_0892312C:
    aot_gpr[5] = (aot_gpr[18] & 32u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[4] | 16u);
        goto L_08923140;
    }
    goto L_08923138;
L_08923138:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 32u);
      if (branch_taken) {
          goto L_08923140;
      }
      goto L_08923140;
    }
L_08923140:
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), aot_gpr[4]);
      if (branch_taken) {
          goto L_08923308;
      }
      goto L_08923148;
    }
L_08923148:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892316C;
      }
      goto L_08923158;
    }
L_08923158:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08923164u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 23u, 0x0891C1B4u>(ctx, &aot_mem) && ctx.pc == 0x08923164u) goto L_08923164;
    return;
L_08923164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923308;
      }
      goto L_0892316C;
    }
L_0892316C:
    aot_gpr[31] = (0x08923174u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08923174u) goto L_08923174;
    return;
L_08923174:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923308;
      }
      goto L_08923180;
    }
L_08923180:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x0892318Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 182u, 0x08922D60u>(ctx, &aot_mem) && ctx.pc == 0x0892318Cu) goto L_0892318C;
    return;
L_0892318C:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089231A0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 60u, 0x08945BBCu>(ctx, &aot_mem) && ctx.pc == 0x089231A0u) goto L_089231A0;
    return;
L_089231A0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[20] = (0u | 1u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089231D0;
      }
      goto L_089231B0;
    }
L_089231B0:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x089231C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x089231C0u) goto L_089231C0;
    return;
L_089231C0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089231D8;
      }
      goto L_089231D0;
    }
L_089231D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    goto L_089231D8;
L_089231D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[4] = (0u | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08923204;
      }
      goto L_089231F4;
    }
L_089231F4:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08923200u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 53u, 0x08927540u>(ctx, &aot_mem) && ctx.pc == 0x08923200u) goto L_08923200;
    return;
L_08923200:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08923204;
L_08923204:
    aot_gpr[6] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08923228;
      }
      goto L_08923210;
    }
L_08923210:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x08923224u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 188u, 0x08922DA0u>(ctx, &aot_mem) && ctx.pc == 0x08923224u) goto L_08923224;
    return;
L_08923224:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08923228;
L_08923228:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[20]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(168), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(210)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08923304;
      }
      goto L_08923280;
    }
L_08923280:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(210)));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089232A0;
      }
      goto L_08923290;
    }
L_08923290:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089232A0;
      }
      goto L_089232A0;
    }
L_089232A0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(210)));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[20]));
      if (branch_taken) {
          goto L_089232BC;
      }
      goto L_089232B0;
    }
L_089232B0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(308)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_089232BC;
L_089232BC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(210)));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089232E4;
      }
      goto L_089232CC;
    }
L_089232CC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089232EC;
      }
      goto L_089232E4;
    }
L_089232E4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089232EC;
L_089232EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(210)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08923280;
      }
      goto L_08923304;
    }
L_08923304:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[5]);
    goto L_08923308;
L_08923308:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08923330:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08923390;
      }
      goto L_0892334C;
    }
L_0892334C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1672));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08923364u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08923364u) goto L_08923364;
    return;
L_08923364:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08923390;
      }
      goto L_08923370;
    }
L_08923370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08923390u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923390u) goto L_08923390;
    return;
L_08923390:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089233A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089233C0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x089233C0u) goto L_089233C0;
    return;
L_089233C0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1672));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089233DCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 103u, 0x08A546ECu>(ctx, &aot_mem) && ctx.pc == 0x089233DCu) goto L_089233DC;
    return;
L_089233DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089233F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08923418u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08923418u) goto L_08923418;
    return;
L_08923418:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08923424u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08923424u) goto L_08923424;
    return;
L_08923424:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08923434;
      }
      goto L_0892342C;
    }
L_0892342C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089234E8;
      }
      goto L_08923434;
    }
L_08923434:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089234E4;
      }
      goto L_08923444;
    }
L_08923444:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(8160));
    aot_gpr[10] = (0u | 92u);
    aot_gpr[11] = (0u | 47u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08923454;
L_08923454:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[7] & 2u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0892347C;
      }
      goto L_08923474;
    }
L_08923474:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08923480;
      }
      goto L_0892347C;
    }
L_0892347C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    goto L_08923480;
L_08923480:
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (aot_gpr[9] & 2u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_0892349C;
      }
      goto L_08923494;
    }
L_08923494:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_0892349C;
      }
      goto L_0892349C;
    }
L_0892349C:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_089234C4;
      }
      goto L_089234A4;
    }
L_089234A4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_089234C4;
      }
      goto L_089234AC;
    }
L_089234AC:
    { const bool branch_taken = aot_gpr[8] == aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_089234C4;
      }
      goto L_089234B4;
    }
L_089234B4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_089234C4;
      }
      goto L_089234BC;
    }
L_089234BC:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_089234DC;
      }
      goto L_089234C4;
    }
L_089234C4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923454;
      }
      goto L_089234D4;
    }
L_089234D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089234E4;
      }
      goto L_089234DC;
    }
L_089234DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089234E8;
      }
      goto L_089234E4;
    }
L_089234E4:
    aot_gpr[2] = (0u | 1u);
    goto L_089234E8;
L_089234E8:
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
L_08923500:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[17] = (4096u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 92u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (61440u << 16u);
    goto L_0892353C;
L_0892353C:
    aot_gpr[31] = (0x08923544u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08923544u) goto L_08923544;
    return;
L_08923544:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089235B0;
      }
      goto L_08923550;
    }
L_08923550:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 123 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892357C;
      }
      goto L_08923564;
    }
L_08923564:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892357C;
      }
      goto L_0892356C;
    }
L_0892356C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_08923588;
      }
      goto L_0892357C;
    }
L_0892357C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08923588;
      }
      goto L_08923584;
    }
L_08923584:
    aot_gpr[4] = (0u | 47u);
    goto L_08923588;
L_08923588:
    aot_gpr[21] = (aot_gpr[21] << 4u);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[21] & aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089235A8;
      }
      goto L_0892359C;
    }
L_0892359C:
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    aot_gpr[21] = (aot_gpr[21] ^ aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[21] & aot_gpr[17]);
    goto L_089235A8;
L_089235A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892353C;
      }
      goto L_089235B0;
    }
L_089235B0:
    aot_gpr[2] = (aot_gpr[21] | 0u);
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
L_089235D8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089235F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08923624u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08923500;
L_08923624:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const std::uint32_t dividend = aot_gpr[20]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (ctx.hi);
    aot_gpr[5] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08923654;
      }
      goto L_0892364C;
    }
L_0892364C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0892365C;
      }
      goto L_08923654;
    }
L_08923654:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089236E0;
      }
      goto L_0892365C;
    }
L_0892365C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08923660;
L_08923660:
    aot_gpr[31] = (0x08923668u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_089235D8;
L_08923668:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08923674u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_089233F8;
L_08923674:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089236DC;
      }
      goto L_0892367C;
    }
L_0892367C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    { const std::uint32_t dividend = aot_gpr[20]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[19] = (ctx.hi);
    aot_gpr[6] = (aot_gpr[19] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089236D4;
      }
      goto L_089236C0;
    }
L_089236C0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089236D4;
      }
      goto L_089236CC;
    }
L_089236CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08923660;
      }
      goto L_089236D4;
    }
L_089236D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089236E0;
      }
      goto L_089236DC;
    }
L_089236DC:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    goto L_089236E0;
L_089236E0:
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
L_08923704:
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (0u | 40000u);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089237A4;
      }
      goto L_08923718;
    }
L_08923718:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(20001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892379C;
      }
      goto L_08923724;
    }
L_08923724:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(10001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923794;
      }
      goto L_08923730;
    }
L_08923730:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(5001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892378C;
      }
      goto L_0892373C;
    }
L_0892373C:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923784;
      }
      goto L_08923748;
    }
L_08923748:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892377C;
      }
      goto L_08923754;
    }
L_08923754:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923774;
      }
      goto L_08923760;
    }
L_08923760:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(201) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089237AC;
      }
      goto L_0892376C;
    }
L_0892376C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 499u);
      if (branch_taken) {
          goto L_089237B0;
      }
      goto L_08923774;
    }
L_08923774:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 997u);
      if (branch_taken) {
          goto L_089237B0;
      }
      goto L_0892377C;
    }
L_0892377C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1999u);
      if (branch_taken) {
          goto L_089237B0;
      }
      goto L_08923784;
    }
L_08923784:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4999u);
      if (branch_taken) {
          goto L_089237B0;
      }
      goto L_0892378C;
    }
L_0892378C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9973u);
      if (branch_taken) {
          goto L_089237B0;
      }
      goto L_08923794;
    }
L_08923794:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 19997u);
      if (branch_taken) {
          goto L_089237B0;
      }
      goto L_0892379C;
    }
L_0892379C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 39989u);
      if (branch_taken) {
          goto L_089237B0;
      }
      goto L_089237A4;
    }
L_089237A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089237B0;
      }
      goto L_089237AC;
    }
L_089237AC:
    aot_gpr[2] = (0u | 241u);
    goto L_089237B0;
L_089237B0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089237B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089237C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_089237FC;
      }
      goto L_089237D4;
    }
L_089237D4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_089237FC;
      }
      goto L_089237DC;
    }
L_089237DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089237FCu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089237FCu) goto L_089237FC;
    return;
L_089237FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08923808:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    aot_gpr[18] = (aot_gpr[8] & 255u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[21] = (2216u << 16u);
      if (branch_taken) {
          goto L_08923938;
      }
      goto L_08923854;
    }
L_08923854:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08923864u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x08923864u) goto L_08923864;
    return;
L_08923864:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923930;
      }
      goto L_0892387C;
    }
L_0892387C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08923888u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_089235D8;
L_08923888:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08923894u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08923894u) goto L_08923894;
    return;
L_08923894:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0892391C;
      }
      goto L_0892389C;
    }
L_0892389C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[20] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[8]) >> 31u));
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089238F0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 75u, 0x08A3E668u>(ctx, &aot_mem) && ctx.pc == 0x089238F0u) goto L_089238F0;
    return;
L_089238F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_08923984;
      }
      goto L_0892391C;
    }
L_0892391C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892387C;
      }
      goto L_08923930;
    }
L_08923930:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_08923984;
      }
      goto L_08923938;
    }
L_08923938:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25940)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25944)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08923968u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 146u, 0x08933840u>(ctx, &aot_mem) && ctx.pc == 0x08923968u) goto L_08923968;
    return;
L_08923968:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[31] = (0x08923974u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x08923974u) goto L_08923974;
    return;
L_08923974:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x08923980u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x08923980u) goto L_08923980;
    return;
L_08923980:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
    goto L_08923984;
L_08923984:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 64u);
    aot_gpr[31] = (0x08923994u);
    aot_gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x08923994u) goto L_08923994;
    return;
L_08923994:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (0u | 2048u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x089239BCu);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x089239BCu) goto L_089239BC;
    return;
L_089239BC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (41946u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31158));
    aot_gpr[19] = (aot_gpr[19] ^ aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089239EC;
      }
      goto L_089239E4;
    }
L_089239E4:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    goto L_089239EC;
L_089239EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[19] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (aot_gpr[19] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_08923A2C;
      }
      goto L_08923A1C;
    }
L_08923A1C:
    aot_gpr[6] = (aot_gpr[19] >> 11u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[6] << 11u);
    aot_gpr[19] = (0u + aot_gpr[19]);
    goto L_08923A2C;
L_08923A2C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923A70;
      }
      goto L_08923A34;
    }
L_08923A34:
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 128u);
    aot_gpr[31] = (0x08923A48u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x08923A48u) goto L_08923A48;
    return;
L_08923A48:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[7] << 4u);
      if (branch_taken) {
          goto L_08923AA8;
      }
      goto L_08923A70;
    }
L_08923A70:
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 128u);
    aot_gpr[31] = (0x08923A84u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08923A84u) goto L_08923A84;
    return;
L_08923A84:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (aot_gpr[7] << 4u);
    goto L_08923AA8;
L_08923AA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[19] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923ADC;
      }
      goto L_08923AC0;
    }
L_08923AC0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08923AD4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08923AD4u) goto L_08923AD4;
    return;
L_08923AD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08923B40;
      }
      goto L_08923ADC;
    }
L_08923ADC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08923AF0u);
    aot_gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08923AF0u) goto L_08923AF0;
    return;
L_08923AF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25932)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25936)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(-2048));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2048));
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08923B3Cu);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x08923B3Cu) goto L_08923B3C;
    return;
L_08923B3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08923B40;
L_08923B40:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923B7C;
      }
      goto L_08923B54;
    }
L_08923B54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08923B58;
L_08923B58:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(20))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] ^ 197u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08923B58;
    }
    goto L_08923B7C;
L_08923B7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923BB8;
      }
      goto L_08923B90;
    }
L_08923B90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08923B94;
L_08923B94:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] ^ 181u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08923B94;
    }
    goto L_08923BB8;
L_08923BB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08923BC4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08923BC4u) goto L_08923BC4;
    return;
L_08923BC4:
    aot_gpr[31] = (0x08923BCCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08923704;
L_08923BCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[21] = (aot_gpr[2] << 2u);
      if (branch_taken) {
          goto L_08923BF8;
      }
      goto L_08923BDC;
    }
L_08923BDC:
    aot_gpr[31] = (0x08923BE4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x08923BE4u) goto L_08923BE4;
    return;
L_08923BE4:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[21] << 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08923C10;
      }
      goto L_08923BF8;
    }
L_08923BF8:
    aot_gpr[31] = (0x08923C00u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08923C00u) goto L_08923C00;
    return;
L_08923C00:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[21] << 2u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08923C10;
L_08923C10:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08923C1Cu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08923C1Cu) goto L_08923C1C;
    return;
L_08923C1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923CC0;
      }
      goto L_08923C30;
    }
L_08923C30:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08923C3Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_089235D8;
L_08923C3C:
    aot_gpr[31] = (0x08923C44u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08923500;
L_08923C44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (ctx.hi);
    aot_gpr[8] = (aot_gpr[7] << 2u);
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] == aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08923CA8;
      }
      goto L_08923C6C;
    }
L_08923C6C:
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[6] = (ctx.lo);
    goto L_08923C74;
L_08923C74:
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[7] = (ctx.hi);
    aot_gpr[8] = (aot_gpr[7] << 2u);
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08923C74;
      }
      goto L_08923CA8;
    }
L_08923CA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923C30;
      }
      goto L_08923CC0;
    }
L_08923CC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08923CE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08923D04u);
    aot_gpr[5] = (0u | 0u);
    goto L_08923808;
L_08923D04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08923D10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08923D34u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08923D34u) goto L_08923D34;
    return;
L_08923D34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08923D40u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08923D40u) goto L_08923D40;
    return;
L_08923D40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923D54;
      }
      goto L_08923D4C;
    }
L_08923D4C:
    aot_gpr[31] = (0x08923D54u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x08923D54u) goto L_08923D54;
    return;
L_08923D54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08923D68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08923DACu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_089235F4;
L_08923DAC:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_08923E14;
      }
      goto L_08923DB8;
    }
L_08923DB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (aot_gpr[22] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[23]) >> 31u));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08923DE4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 145u, 0x08A3EBDCu>(ctx, &aot_mem) && ctx.pc == 0x08923DE4u) goto L_08923DE4;
    return;
L_08923DE4:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25940)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25944)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[30] = (aot_gpr[19] & 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08923E1C;
      }
      goto L_08923E04;
    }
L_08923E04:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08923E1C;
      }
      goto L_08923E0C;
    }
L_08923E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923E4C;
      }
      goto L_08923E14;
    }
L_08923E14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 1u, 0x08924000u>(ctx, &aot_mem); return;
      }
      goto L_08923E1C;
    }
L_08923E1C:
    aot_gpr[7] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[21] - aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[4]);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[23]) >> 31u));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    goto L_08923E4C;
L_08923E4C:
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923E60;
      }
      goto L_08923E54;
    }
L_08923E54:
    aot_gpr[4] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29060)));
      if (branch_taken) {
          goto L_08923E68;
      }
      goto L_08923E60;
    }
L_08923E60:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    goto L_08923E68;
L_08923E68:
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923EC4;
      }
      goto L_08923E70;
    }
L_08923E70:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08923E84u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x08923E84u) goto L_08923E84;
    return;
L_08923E84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 31u));
    aot_gpr[5] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[11]);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08923F64;
      }
      goto L_08923EC4;
    }
L_08923EC4:
    aot_gpr[5] = (aot_gpr[19] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923F1C;
      }
      goto L_08923ED0;
    }
L_08923ED0:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08923EDCu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x08923EDCu) goto L_08923EDC;
    return;
L_08923EDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 31u));
    aot_gpr[5] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[11]);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08923F64;
      }
      goto L_08923F1C;
    }
L_08923F1C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08923F28u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08923F28u) goto L_08923F28;
    return;
L_08923F28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 31u));
    aot_gpr[5] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[11]);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    goto L_08923F64;
L_08923F64:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08923F78u);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x08923F78u) goto L_08923F78;
    return;
L_08923F78:
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923FE8;
      }
      goto L_08923F80;
    }
L_08923F80:
    aot_gpr[4] = (aot_gpr[19] & 2u);
    aot_gpr[19] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29060)));
      if (branch_taken) {
          goto L_08923FAC;
      }
      goto L_08923F90;
    }
L_08923F90:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08923FA0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x08923FA0u) goto L_08923FA0;
    return;
L_08923FA0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08923FC4;
      }
      goto L_08923FAC;
    }
L_08923FAC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08923FBCu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08923FBCu) goto L_08923FBC;
    return;
L_08923FBC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08923FC4;
L_08923FC4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08923FD4u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08923FD4u) goto L_08923FD4;
    return;
L_08923FD4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08923FE4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08923FE4u) goto L_08923FE4;
    return;
L_08923FE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_08923FE8;
L_08923FE8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 1u, 0x08924000u>(ctx, &aot_mem); return;
      }
      goto L_08923FF0;
    }
L_08923FF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    ctx.pc = 0x08924000u; return;
}

void recomp_unit_0287(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0287_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_287(Runtime &runtime) {
    runtime.register_generated_unit(287u, 0x08923000u, 4096u, &recomp_unit_0287, &recomp_unit_0287_entry);
    runtime.register_function(0x08923000u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892300Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923014u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923030u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923040u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892304Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923074u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923090u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892309Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089230B4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089230BCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089230CCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089230D4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089230DCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089230F0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089230F8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923100u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923104u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923114u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923124u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892312Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923138u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923140u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923148u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923158u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923164u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892316Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923174u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923180u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892318Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089231A0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089231B0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089231C0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089231D0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089231D8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089231F4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923200u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923204u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923210u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923224u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923228u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923280u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923290u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089232A0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089232B0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089232BCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089232CCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089232E4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089232ECu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923304u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923308u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923330u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892334Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923364u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923370u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923390u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089233A4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089233C0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089233DCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089233F8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923418u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923424u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892342Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923434u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923444u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923454u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923474u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892347Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923480u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923494u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892349Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089234A4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089234ACu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089234B4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089234BCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089234C4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089234D4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089234DCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089234E4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089234E8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923500u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892353Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923544u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923550u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923564u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892356Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892357Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923584u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923588u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892359Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089235A8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089235B0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089235D8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089235F4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923624u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892364Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923654u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892365Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923660u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923668u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923674u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892367Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089236C0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089236CCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089236D4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089236DCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089236E0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923704u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923718u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923724u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923730u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892373Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923748u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923754u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923760u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892376Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923774u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892377Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923784u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892378Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923794u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892379Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089237A4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089237ACu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089237B0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089237B8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089237C4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089237D4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089237DCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089237FCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923808u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923854u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923864u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892387Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923888u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923894u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892389Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089238F0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x0892391Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923930u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923938u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923968u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923974u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923980u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923984u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923994u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089239BCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089239E4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x089239ECu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923A1Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923A2Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923A34u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923A48u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923A70u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923A84u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923AA8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923AC0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923AD4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923ADCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923AF0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923B3Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923B40u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923B54u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923B58u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923B7Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923B90u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923B94u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923BB8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923BC4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923BCCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923BDCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923BE4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923BF8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923C00u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923C10u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923C1Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923C30u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923C3Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923C44u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923C6Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923C74u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923CA8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923CC0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923CE8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923D04u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923D10u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923D34u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923D40u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923D4Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923D54u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923D68u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923DACu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923DB8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923DE4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923E04u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923E0Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923E14u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923E1Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923E4Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923E54u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923E60u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923E68u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923E70u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923E84u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923EC4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923ED0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923EDCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923F1Cu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923F28u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923F64u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923F78u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923F80u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923F90u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923FA0u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923FACu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923FBCu, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923FC4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923FD4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923FE4u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923FE8u, &recomp_unit_0287, "recomp_unit_0287");
    runtime.register_function(0x08923FF0u, &recomp_unit_0287, "recomp_unit_0287");
}
} // namespace psprecomp
