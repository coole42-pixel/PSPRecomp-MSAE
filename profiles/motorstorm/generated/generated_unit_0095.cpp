#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0095[1023] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19,
    0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28,
    0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 61,
    0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 66, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 77, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 90, 0,
    0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 105, 106, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    149, 150, 0, 0, 151, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 158, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 188,
};
void recomp_unit_0095_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08863000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0095[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08863000;
    case 2u: goto L_08863010;
    case 3u: goto L_08863018;
    case 4u: goto L_08863058;
    case 5u: goto L_08863064;
    case 6u: goto L_08863074;
    case 7u: goto L_0886307C;
    case 8u: goto L_088630A0;
    case 9u: goto L_088630DC;
    case 10u: goto L_08863104;
    case 11u: goto L_08863120;
    case 12u: goto L_08863128;
    case 13u: goto L_08863134;
    case 14u: goto L_08863138;
    case 15u: goto L_08863148;
    case 16u: goto L_0886315C;
    case 17u: goto L_08863168;
    case 18u: goto L_08863174;
    case 19u: goto L_0886317C;
    case 20u: goto L_08863184;
    case 21u: goto L_08863194;
    case 22u: goto L_088631A4;
    case 23u: goto L_088631C4;
    case 24u: goto L_088631CC;
    case 25u: goto L_088631D4;
    case 26u: goto L_088631DC;
    case 27u: goto L_088631E8;
    case 28u: goto L_088631FC;
    case 29u: goto L_0886320C;
    case 30u: goto L_0886321C;
    case 31u: goto L_0886322C;
    case 32u: goto L_08863234;
    case 33u: goto L_0886323C;
    case 34u: goto L_08863248;
    case 35u: goto L_08863250;
    case 36u: goto L_0886325C;
    case 37u: goto L_0886327C;
    case 38u: goto L_08863288;
    case 39u: goto L_08863294;
    case 40u: goto L_088632A0;
    case 41u: goto L_088632B0;
    case 42u: goto L_088632B8;
    case 43u: goto L_088632C0;
    case 44u: goto L_088632C4;
    case 45u: goto L_088632CC;
    case 46u: goto L_088632F0;
    case 47u: goto L_0886331C;
    case 48u: goto L_0886332C;
    case 49u: goto L_08863334;
    case 50u: goto L_08863340;
    case 51u: goto L_0886335C;
    case 52u: goto L_08863368;
    case 53u: goto L_088633A0;
    case 54u: goto L_088633A8;
    case 55u: goto L_088633B0;
    case 56u: goto L_088633B8;
    case 57u: goto L_088633C4;
    case 58u: goto L_088633D0;
    case 59u: goto L_088633F0;
    case 60u: goto L_088633F4;
    case 61u: goto L_088633FC;
    case 62u: goto L_08863414;
    case 63u: goto L_0886341C;
    case 64u: goto L_08863434;
    case 65u: goto L_08863460;
    case 66u: goto L_08863464;
    case 67u: goto L_08863480;
    case 68u: goto L_08863498;
    case 69u: goto L_088634A4;
    case 70u: goto L_088634AC;
    case 71u: goto L_088634B4;
    case 72u: goto L_088634C4;
    case 73u: goto L_08863500;
    case 74u: goto L_0886350C;
    case 75u: goto L_08863518;
    case 76u: goto L_08863528;
    case 77u: goto L_0886352C;
    case 78u: goto L_08863530;
    case 79u: goto L_08863548;
    case 80u: goto L_08863560;
    case 81u: goto L_08863568;
    case 82u: goto L_08863574;
    case 83u: goto L_08863590;
    case 84u: goto L_088635A4;
    case 85u: goto L_088635A8;
    case 86u: goto L_088635B8;
    case 87u: goto L_088635DC;
    case 88u: goto L_088635E4;
    case 89u: goto L_088635F0;
    case 90u: goto L_088635F8;
    case 91u: goto L_0886360C;
    case 92u: goto L_08863618;
    case 93u: goto L_08863624;
    case 94u: goto L_08863640;
    case 95u: goto L_08863654;
    case 96u: goto L_0886365C;
    case 97u: goto L_08863670;
    case 98u: goto L_08863678;
    case 99u: goto L_08863694;
    case 100u: goto L_088636A8;
    case 101u: goto L_088636B4;
    case 102u: goto L_088636C0;
    case 103u: goto L_088636CC;
    case 104u: goto L_088636D4;
    case 105u: goto L_088636E4;
    case 106u: goto L_088636E8;
    case 107u: goto L_088636F0;
    case 108u: goto L_08863714;
    case 109u: goto L_08863738;
    case 110u: goto L_08863744;
    case 111u: goto L_08863778;
    case 112u: goto L_0886379C;
    case 113u: goto L_088637A8;
    case 114u: goto L_088637C0;
    case 115u: goto L_088637DC;
    case 116u: goto L_088637F8;
    case 117u: goto L_0886382C;
    case 118u: goto L_08863834;
    case 119u: goto L_08863838;
    case 120u: goto L_08863844;
    case 121u: goto L_0886387C;
    case 122u: goto L_0886388C;
    case 123u: goto L_08863894;
    case 124u: goto L_088638BC;
    case 125u: goto L_088638D4;
    case 126u: goto L_0886390C;
    case 127u: goto L_08863924;
    case 128u: goto L_08863934;
    case 129u: goto L_08863954;
    case 130u: goto L_08863960;
    case 131u: goto L_08863978;
    case 132u: goto L_08863988;
    case 133u: goto L_088639AC;
    case 134u: goto L_088639D8;
    case 135u: goto L_08863A1C;
    case 136u: goto L_08863A28;
    case 137u: goto L_08863A60;
    case 138u: goto L_08863A74;
    case 139u: goto L_08863A88;
    case 140u: goto L_08863A98;
    case 141u: goto L_08863AB0;
    case 142u: goto L_08863C04;
    case 143u: goto L_08863C1C;
    case 144u: goto L_08863C24;
    case 145u: goto L_08863C34;
    case 146u: goto L_08863C3C;
    case 147u: goto L_08863C48;
    case 148u: goto L_08863C68;
    case 149u: goto L_08863C80;
    case 150u: goto L_08863C84;
    case 151u: goto L_08863C90;
    case 152u: goto L_08863C94;
    case 153u: goto L_08863C9C;
    case 154u: goto L_08863CB4;
    case 155u: goto L_08863CC4;
    case 156u: goto L_08863CCC;
    case 157u: goto L_08863CEC;
    case 158u: goto L_08863CF0;
    case 159u: goto L_08863D08;
    case 160u: goto L_08863D18;
    case 161u: goto L_08863D1C;
    case 162u: goto L_08863D3C;
    case 163u: goto L_08863D5C;
    case 164u: goto L_08863D6C;
    case 165u: goto L_08863D8C;
    case 166u: goto L_08863DB0;
    case 167u: goto L_08863DDC;
    case 168u: goto L_08863DFC;
    case 169u: goto L_08863E14;
    case 170u: goto L_08863E34;
    case 171u: goto L_08863E54;
    case 172u: goto L_08863E74;
    case 173u: goto L_08863E84;
    case 174u: goto L_08863E8C;
    case 175u: goto L_08863E94;
    case 176u: goto L_08863EA0;
    case 177u: goto L_08863ED0;
    case 178u: goto L_08863EE4;
    case 179u: goto L_08863EFC;
    case 180u: goto L_08863F14;
    case 181u: goto L_08863F30;
    case 182u: goto L_08863F38;
    case 183u: goto L_08863F58;
    case 184u: goto L_08863FBC;
    case 185u: goto L_08863FC8;
    case 186u: goto L_08863FE0;
    case 187u: goto L_08863FE8;
    case 188u: goto L_08863FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08863000:
    aot_gpr[5] = (aot_gpr[6] | 52429u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5360)));
    aot_gpr[31] = (0x08863010u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_08863F58;
L_08863010:
    aot_gpr[31] = (0x08863018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 115u, 0x0892C864u>(ctx, &aot_mem) && ctx.pc == 0x08863018u) goto L_08863018;
    return;
L_08863018:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24864), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24865), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5368), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (16204u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24876), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08863058u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24880), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 211u, 0x08862F38u>(ctx, &aot_mem) && ctx.pc == 0x08863058u) goto L_08863058;
    return;
L_08863058:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863064:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08863074u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 194u, 0x08862E70u>(ctx, &aot_mem) && ctx.pc == 0x08863074u) goto L_08863074;
    return;
L_08863074:
    aot_gpr[31] = (0x0886307Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 118u, 0x088659B4u>(ctx, &aot_mem) && ctx.pc == 0x0886307Cu) goto L_0886307C;
    return;
L_0886307C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5356), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5368), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088630A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24880), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 218u, 0x08862FD0u>(ctx, &aot_mem) && ctx.pc == 0x088630A0u) goto L_088630A0;
    return;
L_088630A0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(24862), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (16204u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24876), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24872), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088630DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5304));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863138;
      }
      goto L_08863104;
    }
L_08863104:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5316));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08863120u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 169u, 0x08864FB0u>(ctx, &aot_mem) && ctx.pc == 0x08863120u) goto L_08863120;
    return;
L_08863120:
    aot_gpr[31] = (0x08863128u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 16u, 0x08865110u>(ctx, &aot_mem) && ctx.pc == 0x08863128u) goto L_08863128;
    return;
L_08863128:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08863134u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x08863134u) goto L_08863134;
    return;
L_08863134:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08863138;
L_08863138:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863148:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863194;
      }
      goto L_0886315C;
    }
L_0886315C:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(5304));
    goto L_08863168;
L_08863168:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08863184;
      }
      goto L_08863174;
    }
L_08863174:
    aot_gpr[31] = (0x0886317Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_088630DC;
L_0886317C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08863194;
      }
      goto L_08863184;
    }
L_08863184:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08863168;
      }
      goto L_08863194;
    }
L_08863194:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088631A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(5304));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088631C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 218u, 0x08862FD0u>(ctx, &aot_mem) && ctx.pc == 0x088631C4u) goto L_088631C4;
    return;
L_088631C4:
    aot_gpr[31] = (0x088631CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 122u, 0x08865A04u>(ctx, &aot_mem) && ctx.pc == 0x088631CCu) goto L_088631CC;
    return;
L_088631CC:
    aot_gpr[17] = (0u | 2u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088631D4;
L_088631D4:
    aot_gpr[31] = (0x088631DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08863148;
L_088631DC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) > 0;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_088631D4;
      }
      goto L_088631E8;
    }
L_088631E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088631FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886320Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 22u, 0x0892E160u>(ctx, &aot_mem) && ctx.pc == 0x0886320Cu) goto L_0886320C;
    return;
L_0886320C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5368)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863234;
      }
      goto L_0886321C;
    }
L_0886321C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5360)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886323C;
      }
      goto L_0886322C;
    }
L_0886322C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863250;
      }
      goto L_08863234;
    }
L_08863234:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5368), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08863250;
      }
      goto L_0886323C;
    }
L_0886323C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-3951)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863250;
      }
      goto L_08863248;
    }
L_08863248:
    aot_gpr[31] = (0x08863250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 111u, 0x08864A18u>(ctx, &aot_mem) && ctx.pc == 0x08863250u) goto L_08863250;
    return;
L_08863250:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886325C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24876)));
    aot_gpr[4] = (2215u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24872), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5372), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886327C:
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24872)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863288:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5304));
    aot_gpr[2] = (0u | 0u);
    goto L_08863294;
L_08863294:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088632B8;
      }
      goto L_088632A0;
    }
L_088632A0:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08863294;
      }
      goto L_088632B0;
    }
L_088632B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088632C0;
      }
      goto L_088632B8;
    }
L_088632B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088632C4;
      }
      goto L_088632C0;
    }
L_088632C0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088632C4;
L_088632C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088632CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_08863334;
      }
      goto L_088632F0;
    }
L_088632F0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (28787u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28767));
    aot_gpr[6] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[31] = (0x0886331Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0886331Cu) goto L_0886331C;
    return;
L_0886331C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0886332Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4764));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0886332Cu) goto L_0886332C;
    return;
L_0886332C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863340;
      }
      goto L_08863334;
    }
L_08863334:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08863340u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08863340u) goto L_08863340;
    return;
L_08863340:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0886335Cu);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x0886335Cu) goto L_0886335C;
    return;
L_0886335C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08863368u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08863368u) goto L_08863368;
    return;
L_08863368:
    aot_gpr[4] = (0u | 80u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 67u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-7), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 77u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-6), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088633A0u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x088633A0u) goto L_088633A0;
    return;
L_088633A0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08863460;
      }
      goto L_088633A8;
    }
L_088633A8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863460;
      }
      goto L_088633B0;
    }
L_088633B0:
    aot_gpr[31] = (0x088633B8u);
    // nop
    goto L_08863288;
L_088633B8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08863460;
      }
      goto L_088633C4;
    }
L_088633C4:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088633F4;
      }
      goto L_088633D0;
    }
L_088633D0:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088633F0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 144u, 0x08864D84u>(ctx, &aot_mem) && ctx.pc == 0x088633F0u) goto L_088633F0;
    return;
L_088633F0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_088633F4;
L_088633F4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0886341C;
      }
      goto L_088633FC;
    }
L_088633FC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7288)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08863414u);
    aot_gpr[7] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 20u, 0x0886517Cu>(ctx, &aot_mem) && ctx.pc == 0x08863414u) goto L_08863414;
    return;
L_08863414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863434;
      }
      goto L_0886341C;
    }
L_0886341C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08863434u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4752));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 20u, 0x0886517Cu>(ctx, &aot_mem) && ctx.pc == 0x08863434u) goto L_08863434;
    return;
L_08863434:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5304));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(5316));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08863464;
      }
      goto L_08863460;
    }
L_08863460:
    aot_gpr[2] = (0u | 0u);
    goto L_08863464;
L_08863464:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863480:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08863498u);
    aot_gpr[5] = (0u | 0u);
    goto L_088632CC;
L_08863498:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088634B4;
      }
      goto L_088634A4;
    }
L_088634A4:
    aot_gpr[31] = (0x088634ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 168u, 0x08864FA8u>(ctx, &aot_mem) && ctx.pc == 0x088634ACu) goto L_088634AC;
    return;
L_088634AC:
    aot_gpr[31] = (0x088634B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 12u, 0x088650A4u>(ctx, &aot_mem) && ctx.pc == 0x088634B4u) goto L_088634B4;
    return;
L_088634B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088634C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(5360), 0u);
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08863500u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(5364));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x08863500u) goto L_08863500;
    return;
L_08863500:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863530;
      }
      goto L_0886350C;
    }
L_0886350C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0886352C;
      }
      goto L_08863518;
    }
L_08863518:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5364)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08863528u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 12u, 0x088640D4u>(ctx, &aot_mem) && ctx.pc == 0x08863528u) goto L_08863528;
    return;
L_08863528:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_0886352C;
L_0886352C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(5360), aot_gpr[5]);
    goto L_08863530;
L_08863530:
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
L_08863548:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863568;
      }
      goto L_08863560;
    }
L_08863560:
    aot_gpr[31] = (0x08863568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 19u, 0x08864130u>(ctx, &aot_mem) && ctx.pc == 0x08863568u) goto L_08863568;
    return;
L_08863568:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863574:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088635A8;
      }
      goto L_08863590;
    }
L_08863590:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5364)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088635A4u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x088635A4u) goto L_088635A4;
    return;
L_088635A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(5360), 0u);
    goto L_088635A8;
L_088635A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088635B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5304));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088635E4;
      }
      goto L_088635DC;
    }
L_088635DC:
    aot_gpr[31] = (0x088635E4u);
    // nop
    goto L_08863148;
L_088635E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088635F0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886365C;
      }
      goto L_088635F8;
    }
L_088635F8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863654;
      }
      goto L_0886360C;
    }
L_0886360C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    goto L_08863618;
L_08863618:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08863640;
      }
      goto L_08863624;
    }
L_08863624:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5320));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08863670;
      }
      goto L_08863640;
    }
L_08863640:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08863618;
      }
      goto L_08863654;
    }
L_08863654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863670;
      }
      goto L_0886365C;
    }
L_0886365C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5320));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08863670;
L_08863670:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863678:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5320));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088636E4;
      }
      goto L_08863694;
    }
L_08863694:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088636E4;
      }
      goto L_088636A8;
    }
L_088636A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    goto L_088636B4;
L_088636B4:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088636D4;
      }
      goto L_088636C0;
    }
L_088636C0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088636D4;
      }
      goto L_088636CC;
    }
L_088636CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088636E8;
      }
      goto L_088636D4;
    }
L_088636D4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_088636B4;
      }
      goto L_088636E4;
    }
L_088636E4:
    aot_gpr[2] = (0u | 0u);
    goto L_088636E8;
L_088636E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088636F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[8] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[8];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08863738;
      }
      goto L_08863714;
    }
L_08863714:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (15232u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x08863738u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0297_entry, 297u, 41u, 0x0892D20Cu>(ctx, &aot_mem) && ctx.pc == 0x08863738u) goto L_08863738;
    return;
L_08863738:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863744:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[5] = (aot_gpr[8] & 255u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088637C0;
      }
      goto L_08863778;
    }
L_08863778:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (15232u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x0886379Cu);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0297_entry, 297u, 41u, 0x0892D20Cu>(ctx, &aot_mem) && ctx.pc == 0x0886379Cu) goto L_0886379C;
    return;
L_0886379C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088637C0;
      }
      goto L_088637A8;
    }
L_088637A8:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[17] << 6u);
    aot_gpr[31] = (0x088637C0u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 101u, 0x0892A7E0u>(ctx, &aot_mem) && ctx.pc == 0x088637C0u) goto L_088637C0;
    return;
L_088637C0:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088637DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[8] & 65535u);
      if (branch_taken) {
          goto L_08863834;
      }
      goto L_088637F8;
    }
L_088637F8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (aot_gpr[6] >> 8u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    aot_gpr[31] = (0x0886382Cu);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    goto L_08863744;
L_0886382C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863838;
      }
      goto L_08863834;
    }
L_08863834:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08863838;
L_08863838:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863844:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[18];
    aot_gpr[16] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_088638BC;
      }
      goto L_0886387C;
    }
L_0886387C:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0886388Cu);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0297_entry, 297u, 63u, 0x0892D3CCu>(ctx, &aot_mem) && ctx.pc == 0x0886388Cu) goto L_0886388C;
    return;
L_0886388C:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088638BC;
      }
      goto L_08863894;
    }
L_08863894:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[2] << 6u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[16]);
    goto L_088638BC;
L_088638BC:
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
L_088638D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08863988;
      }
      goto L_0886390C;
    }
L_0886390C:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08863924u);
    aot_gpr[9] = (0u | 0u);
    goto L_08863844;
L_08863924:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08863988;
      }
      goto L_08863934;
    }
L_08863934:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7472)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[17] << 6u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
      if (branch_taken) {
          goto L_08863960;
      }
      goto L_08863954;
    }
L_08863954:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08863960;
L_08863960:
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (15231u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 38692u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[31] = (0x08863978u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x08863978u) goto L_08863978;
    return;
L_08863978:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[31] = (0x08863988u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 101u, 0x0892A7E0u>(ctx, &aot_mem) && ctx.pc == 0x08863988u) goto L_08863988;
    return;
L_08863988:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088639AC:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[4]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    jump_target = aot_gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088639D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5392)));
    aot_gpr[6] = (aot_gpr[5] << 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (16243u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[7] = (aot_gpr[7] | 13107u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08863A1Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 173u, 0x0892AD98u>(ctx, &aot_mem) && ctx.pc == 0x08863A1Cu) goto L_08863A1C;
    return;
L_08863A1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863A28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-352));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[18]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[31]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[17] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08863C34;
      }
      goto L_08863A60;
    }
L_08863A60:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[9] = (16128u << 16u);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(5392)));
    goto L_08863A74;
L_08863A74:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(736)));
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863C04;
      }
      goto L_08863A88;
    }
L_08863A88:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(736)));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(47))))));
    { const bool branch_taken = aot_gpr[11] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08863C04;
      }
      goto L_08863A98;
    }
L_08863A98:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(44)));
    aot_gpr[11] = (aot_gpr[11] & 2u);
    aot_gpr[11] = (0u < aot_gpr[11] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863C04;
      }
      goto L_08863AB0;
    }
L_08863AB0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(736)));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(47))))));
    aot_gpr[10] = (aot_gpr[10] << 7u);
    aot_gpr[10] = (aot_gpr[7] + aot_gpr[10]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(32)));
    aot_gpr[11] = (aot_gpr[10] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[2]);
    aot_gpr[12] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[12]);
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[2]);
    aot_gpr[12] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[12]);
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(32)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[2]);
    aot_gpr[12] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[12]);
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[2]);
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(aot_gpr[11]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(116)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(120)));
    aot_fpr[13] = aot_fpr[14] + aot_fpr[13];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(12));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    goto L_08863C04;
L_08863C04:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(44)));
    aot_gpr[9] = (aot_gpr[9] & 2u);
    aot_gpr[9] = (0u < aot_gpr[9] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863C24;
      }
      goto L_08863C1C;
    }
L_08863C1C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(736)));
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(47))))));
    goto L_08863C24;
L_08863C24:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08863A74;
      }
      goto L_08863C34;
    }
L_08863C34:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_08863C68;
      }
      goto L_08863C3C;
    }
L_08863C3C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08863C48u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08863F14;
L_08863C48:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (2182u << 16u);
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08863C68u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16148));
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 69u, 0x08A4D5B8u>(ctx, &aot_mem) && ctx.pc == 0x08863C68u) goto L_08863C68;
    return;
L_08863C68:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(24865)));
      if (branch_taken) {
          goto L_08863C84;
      }
      goto L_08863C80;
    }
L_08863C80:
    aot_gpr[4] = (0u | 5u);
    goto L_08863C84;
L_08863C84:
    aot_gpr[6] = (17154u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_08863C94;
      }
      goto L_08863C90;
    }
L_08863C90:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08863C94;
L_08863C94:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08863CB4;
      }
      goto L_08863C9C;
    }
L_08863C9C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[6] = (aot_gpr[17] << 7u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_08863CB4;
L_08863CB4:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u | 4u);
      if (branch_taken) {
          goto L_08863D08;
      }
      goto L_08863CC4;
    }
L_08863CC4:
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (2218u << 16u);
    goto L_08863CCC;
L_08863CCC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(5392)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(736)));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(47))))));
    aot_gpr[8] = (aot_gpr[8] << 7u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[8]);
      if (branch_taken) {
          goto L_08863CF0;
      }
      goto L_08863CEC;
    }
L_08863CEC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(124)));
    goto L_08863CF0;
L_08863CF0:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08863CCC;
      }
      goto L_08863D08;
    }
L_08863D08:
    aot_gpr[5] = (0u | 5u);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08863D6C;
      }
      goto L_08863D18;
    }
L_08863D18:
    aot_gpr[4] = (2218u << 16u);
    goto L_08863D1C;
L_08863D1C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] & 2u);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863D5C;
      }
      goto L_08863D3C;
    }
L_08863D3C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(736)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(47))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5392)));
    aot_gpr[7] = (aot_gpr[7] << 7u);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08863D5C;
L_08863D5C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08863D1C;
      }
      goto L_08863D6C;
    }
L_08863D6C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863D8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(5356)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863E34;
      }
      goto L_08863DB0;
    }
L_08863DB0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(5320));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 255u);
    aot_gpr[31] = (0x08863DDCu);
    aot_gpr[7] = (0u | 255u);
    goto L_088637DC;
L_08863DDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 255u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08863DFCu);
    aot_gpr[7] = (0u | 255u);
    goto L_088637DC;
L_08863DFC:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08863E14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24880), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 208u, 0x08862F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08863E14u) goto L_08863E14;
    return;
L_08863E14:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (16000u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08863E34u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 5u, 0x08866050u>(ctx, &aot_mem) && ctx.pc == 0x08863E34u) goto L_08863E34;
    return;
L_08863E34:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5356), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863E54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863E8C;
      }
      goto L_08863E74;
    }
L_08863E74:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08863E84u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 125u, 0x0886B98Cu>(ctx, &aot_mem) && ctx.pc == 0x08863E84u) goto L_08863E84;
    return;
L_08863E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863E94;
      }
      goto L_08863E8C;
    }
L_08863E8C:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_08863E94;
L_08863E94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863EA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08863EFC;
      }
      goto L_08863ED0;
    }
L_08863ED0:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08863EE4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 84u, 0x08867668u>(ctx, &aot_mem) && ctx.pc == 0x08863EE4u) goto L_08863EE4;
    return;
L_08863EE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_08863ED0;
      }
      goto L_08863EFC;
    }
L_08863EFC:
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
L_08863F14:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_08863F30;
    }
    goto L_08863F30;
L_08863F30:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863F38:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24856), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863F58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (16736u << 16u);
    aot_gpr[19] = (0u | 3u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[16] | 0u);
    aot_gpr[18] = (2218u << 16u);
    goto L_08863FBC;
L_08863FBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x08863FC8u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08863FC8u) goto L_08863FC8;
    return;
L_08863FC8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = aot_fpr[20] - aot_fpr[13];
      if (branch_taken) {
          goto L_08863FE8;
      }
      goto L_08863FE0;
    }
L_08863FE0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08863FF8;
      }
      goto L_08863FE8;
    }
L_08863FE8:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
        goto L_08863FF8;
    }
    goto L_08863FF8;
L_08863FF8:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = aot_gpr[17] != aot_gpr[19];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 2u, 0x0886400Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 1u, 0x08864004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0095(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0095_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_95(Runtime &runtime) {
    runtime.register_generated_unit(95u, 0x08863000u, 4096u, &recomp_unit_0095, &recomp_unit_0095_entry);
    runtime.register_function(0x08863000u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863010u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863018u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863058u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863064u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863074u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886307Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088630A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088630DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863104u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863120u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863128u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863134u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863138u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863148u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886315Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863168u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863174u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886317Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863184u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863194u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088631A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088631C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088631CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088631D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088631DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088631E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088631FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886320Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886321Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886322Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863234u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886323Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863248u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863250u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886325Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886327Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863288u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863294u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088632A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088632B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088632B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088632C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088632C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088632CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088632F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886331Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886332Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863334u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863340u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886335Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863368u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088633A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088633A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088633B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088633B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088633C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088633D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088633F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088633F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088633FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863414u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886341Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863434u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863460u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863464u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863480u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863498u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088634A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088634ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088634B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088634C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863500u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886350Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863518u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863528u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886352Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863530u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863548u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863560u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863568u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863574u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863590u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088635A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088635A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088635B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088635DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088635E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088635F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088635F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886360Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863618u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863624u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863640u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863654u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886365Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863670u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863678u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863694u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088636A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088636B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088636C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088636CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088636D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088636E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088636E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088636F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863714u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863738u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863744u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863778u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886379Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088637A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088637C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088637DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088637F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886382Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863834u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863838u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863844u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886387Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886388Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863894u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088638BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088638D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0886390Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863924u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863934u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863954u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863960u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863978u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863988u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088639ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x088639D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863A1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863A28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863A60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863A74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863A88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863A98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863AB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863C9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863CB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863CC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863CCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863CECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863CF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863D08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863D18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863D1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863D3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863D5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863D6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863D8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863DB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863DDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863DFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863E14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863E34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863E54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863E74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863E84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863E8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863E94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863EA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863ED0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863EE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863EFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863F30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863F38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863F58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863FBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863FC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863FE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863FE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08863FF8u, &recomp_unit_0095, "recomp_unit_0095");
}
} // namespace psprecomp
