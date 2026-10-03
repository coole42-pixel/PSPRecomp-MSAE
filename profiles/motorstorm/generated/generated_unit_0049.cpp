#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0049[1022] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23,
    0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0,
    42, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0,
    52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    66, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0,
    78, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84,
    0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0,
    92, 0, 93, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 107,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0,
    0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0,
    135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141,
    0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159,
    0, 0, 160, 161, 0, 162, 0, 0, 163, 0, 164, 165, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0,
    188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 192, 193, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213,
};
void recomp_unit_0049_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08835004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0049[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08835004;
    case 2u: goto L_08835020;
    case 3u: goto L_0883503C;
    case 4u: goto L_08835058;
    case 5u: goto L_08835074;
    case 6u: goto L_08835090;
    case 7u: goto L_088350AC;
    case 8u: goto L_088350C8;
    case 9u: goto L_088350E4;
    case 10u: goto L_08835100;
    case 11u: goto L_0883511C;
    case 12u: goto L_08835138;
    case 13u: goto L_08835154;
    case 14u: goto L_08835170;
    case 15u: goto L_0883518C;
    case 16u: goto L_088351A8;
    case 17u: goto L_088351C0;
    case 18u: goto L_088351C8;
    case 19u: goto L_088351D4;
    case 20u: goto L_088351DC;
    case 21u: goto L_088351E8;
    case 22u: goto L_088351F4;
    case 23u: goto L_08835200;
    case 24u: goto L_08835214;
    case 25u: goto L_0883521C;
    case 26u: goto L_08835228;
    case 27u: goto L_08835230;
    case 28u: goto L_08835240;
    case 29u: goto L_0883524C;
    case 30u: goto L_08835254;
    case 31u: goto L_08835260;
    case 32u: goto L_08835268;
    case 33u: goto L_08835278;
    case 34u: goto L_08835280;
    case 35u: goto L_08835294;
    case 36u: goto L_088352B4;
    case 37u: goto L_088352C0;
    case 38u: goto L_088352C8;
    case 39u: goto L_088352D4;
    case 40u: goto L_088352E4;
    case 41u: goto L_088352F8;
    case 42u: goto L_08835304;
    case 43u: goto L_08835314;
    case 44u: goto L_0883531C;
    case 45u: goto L_08835324;
    case 46u: goto L_08835330;
    case 47u: goto L_0883534C;
    case 48u: goto L_08835360;
    case 49u: goto L_0883536C;
    case 50u: goto L_08835374;
    case 51u: goto L_0883537C;
    case 52u: goto L_08835384;
    case 53u: goto L_08835390;
    case 54u: goto L_088353C4;
    case 55u: goto L_088353D8;
    case 56u: goto L_088353E4;
    case 57u: goto L_088353EC;
    case 58u: goto L_08835414;
    case 59u: goto L_08835424;
    case 60u: goto L_08835438;
    case 61u: goto L_08835444;
    case 62u: goto L_0883544C;
    case 63u: goto L_08835454;
    case 64u: goto L_0883545C;
    case 65u: goto L_08835470;
    case 66u: goto L_08835484;
    case 67u: goto L_0883548C;
    case 68u: goto L_088354A0;
    case 69u: goto L_088354B0;
    case 70u: goto L_088354C4;
    case 71u: goto L_088354CC;
    case 72u: goto L_088354D4;
    case 73u: goto L_088354DC;
    case 74u: goto L_088354E4;
    case 75u: goto L_088354EC;
    case 76u: goto L_088354F4;
    case 77u: goto L_088354FC;
    case 78u: goto L_08835504;
    case 79u: goto L_0883550C;
    case 80u: goto L_08835518;
    case 81u: goto L_08835520;
    case 82u: goto L_08835528;
    case 83u: goto L_08835568;
    case 84u: goto L_08835580;
    case 85u: goto L_08835588;
    case 86u: goto L_08835590;
    case 87u: goto L_088355AC;
    case 88u: goto L_088355D8;
    case 89u: goto L_088355E0;
    case 90u: goto L_088355F4;
    case 91u: goto L_088355FC;
    case 92u: goto L_08835604;
    case 93u: goto L_0883560C;
    case 94u: goto L_08835610;
    case 95u: goto L_0883562C;
    case 96u: goto L_08835650;
    case 97u: goto L_08835694;
    case 98u: goto L_088356A8;
    case 99u: goto L_088356B0;
    case 100u: goto L_088356B8;
    case 101u: goto L_088356C4;
    case 102u: goto L_088356CC;
    case 103u: goto L_088356D4;
    case 104u: goto L_088356DC;
    case 105u: goto L_088356EC;
    case 106u: goto L_088356F4;
    case 107u: goto L_08835700;
    case 108u: goto L_08835714;
    case 109u: goto L_08835738;
    case 110u: goto L_08835758;
    case 111u: goto L_08835760;
    case 112u: goto L_08835794;
    case 113u: goto L_088357AC;
    case 114u: goto L_088357BC;
    case 115u: goto L_088357E0;
    case 116u: goto L_088357FC;
    case 117u: goto L_0883581C;
    case 118u: goto L_0883582C;
    case 119u: goto L_08835834;
    case 120u: goto L_0883584C;
    case 121u: goto L_0883586C;
    case 122u: goto L_088358C4;
    case 123u: goto L_088358E0;
    case 124u: goto L_088358F0;
    case 125u: goto L_088358FC;
    case 126u: goto L_08835908;
    case 127u: goto L_08835914;
    case 128u: goto L_0883591C;
    case 129u: goto L_08835924;
    case 130u: goto L_0883592C;
    case 131u: goto L_0883593C;
    case 132u: goto L_08835948;
    case 133u: goto L_08835968;
    case 134u: goto L_0883597C;
    case 135u: goto L_08835984;
    case 136u: goto L_08835998;
    case 137u: goto L_088359A4;
    case 138u: goto L_088359C4;
    case 139u: goto L_088359E8;
    case 140u: goto L_088359F0;
    case 141u: goto L_08835A00;
    case 142u: goto L_08835A0C;
    case 143u: goto L_08835A18;
    case 144u: goto L_08835A24;
    case 145u: goto L_08835A30;
    case 146u: goto L_08835A48;
    case 147u: goto L_08835A58;
    case 148u: goto L_08835A60;
    case 149u: goto L_08835A6C;
    case 150u: goto L_08835A8C;
    case 151u: goto L_08835AC8;
    case 152u: goto L_08835AD0;
    case 153u: goto L_08835B20;
    case 154u: goto L_08835B40;
    case 155u: goto L_08835B58;
    case 156u: goto L_08835B64;
    case 157u: goto L_08835BBC;
    case 158u: goto L_08835BF4;
    case 159u: goto L_08835C00;
    case 160u: goto L_08835C0C;
    case 161u: goto L_08835C10;
    case 162u: goto L_08835C18;
    case 163u: goto L_08835C24;
    case 164u: goto L_08835C2C;
    case 165u: goto L_08835C30;
    case 166u: goto L_08835C34;
    case 167u: goto L_08835C54;
    case 168u: goto L_08835C78;
    case 169u: goto L_08835CAC;
    case 170u: goto L_08835CDC;
    case 171u: goto L_08835D00;
    case 172u: goto L_08835D08;
    case 173u: goto L_08835D24;
    case 174u: goto L_08835D48;
    case 175u: goto L_08835D64;
    case 176u: goto L_08835D74;
    case 177u: goto L_08835DAC;
    case 178u: goto L_08835DC0;
    case 179u: goto L_08835DCC;
    case 180u: goto L_08835DEC;
    case 181u: goto L_08835DFC;
    case 182u: goto L_08835E0C;
    case 183u: goto L_08835E28;
    case 184u: goto L_08835E44;
    case 185u: goto L_08835E5C;
    case 186u: goto L_08835E6C;
    case 187u: goto L_08835E7C;
    case 188u: goto L_08835E84;
    case 189u: goto L_08835E8C;
    case 190u: goto L_08835E94;
    case 191u: goto L_08835E9C;
    case 192u: goto L_08835EAC;
    case 193u: goto L_08835EB0;
    case 194u: goto L_08835EB8;
    case 195u: goto L_08835EC4;
    case 196u: goto L_08835ED0;
    case 197u: goto L_08835ED8;
    case 198u: goto L_08835EE0;
    case 199u: goto L_08835EEC;
    case 200u: goto L_08835EF4;
    case 201u: goto L_08835F0C;
    case 202u: goto L_08835F24;
    case 203u: goto L_08835F40;
    case 204u: goto L_08835F5C;
    case 205u: goto L_08835F6C;
    case 206u: goto L_08835F98;
    case 207u: goto L_08835FA0;
    case 208u: goto L_08835FAC;
    case 209u: goto L_08835FC4;
    case 210u: goto L_08835FD0;
    case 211u: goto L_08835FE8;
    case 212u: goto L_08835FF0;
    case 213u: goto L_08835FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08835004:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08835020u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835020u) goto L_08835020;
    return;
L_08835020:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883503Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883503Cu) goto L_0883503C;
    return;
L_0883503C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08835058u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835058u) goto L_08835058;
    return;
L_08835058:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08835074u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835074u) goto L_08835074;
    return;
L_08835074:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08835090u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835090u) goto L_08835090;
    return;
L_08835090:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088350ACu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088350ACu) goto L_088350AC;
    return;
L_088350AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088350C8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088350C8u) goto L_088350C8;
    return;
L_088350C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088350E4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088350E4u) goto L_088350E4;
    return;
L_088350E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08835100u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835100u) goto L_08835100;
    return;
L_08835100:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883511Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883511Cu) goto L_0883511C;
    return;
L_0883511C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08835138u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835138u) goto L_08835138;
    return;
L_08835138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08835154u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835154u) goto L_08835154;
    return;
L_08835154:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08835170u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835170u) goto L_08835170;
    return;
L_08835170:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883518Cu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883518Cu) goto L_0883518C;
    return;
L_0883518C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088351A8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088351A8u) goto L_088351A8;
    return;
L_088351A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[19]));
      if (branch_taken) {
          goto L_08835390;
      }
      goto L_088351C0;
    }
L_088351C0:
    aot_gpr[31] = (0x088351C8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088351C8u) goto L_088351C8;
    return;
L_088351C8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088351D4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 120u, 0x08833A5Cu>(ctx, &aot_mem) && ctx.pc == 0x088351D4u) goto L_088351D4;
    return;
L_088351D4:
    aot_gpr[31] = (0x088351DCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088351DCu) goto L_088351DC;
    return;
L_088351DC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088351E8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 8u, 0x088340A4u>(ctx, &aot_mem) && ctx.pc == 0x088351E8u) goto L_088351E8;
    return;
L_088351E8:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088351F4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088351F4u) goto L_088351F4;
    return;
L_088351F4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08835200u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x08835200u) goto L_08835200;
    return;
L_08835200:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2204), aot_gpr[4]);
    aot_gpr[31] = (0x08835214u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835214u) goto L_08835214;
    return;
L_08835214:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[21] = (2218u << 16u);
      if (branch_taken) {
          goto L_08835240;
      }
      goto L_0883521C;
    }
L_0883521C:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08835228u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08835228u) goto L_08835228;
    return;
L_08835228:
    { const bool branch_taken = aot_gpr[22] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835240;
      }
      goto L_08835230;
    }
L_08835230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2228)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08835240u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 57u, 0x08816878u>(ctx, &aot_mem) && ctx.pc == 0x08835240u) goto L_08835240;
    return;
L_08835240:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835278;
      }
      goto L_0883524C;
    }
L_0883524C:
    aot_gpr[31] = (0x08835254u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835254u) goto L_08835254;
    return;
L_08835254:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08835260u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08835260u) goto L_08835260;
    return;
L_08835260:
    { const bool branch_taken = aot_gpr[22] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835278;
      }
      goto L_08835268;
    }
L_08835268:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2228)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08835278u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 57u, 0x08816878u>(ctx, &aot_mem) && ctx.pc == 0x08835278u) goto L_08835278;
    return;
L_08835278:
    aot_gpr[31] = (0x08835280u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835280u) goto L_08835280;
    return;
L_08835280:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x08835294u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835294u) goto L_08835294;
    return;
L_08835294:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835314;
      }
      goto L_088352B4;
    }
L_088352B4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088352D4;
      }
      goto L_088352C0;
    }
L_088352C0:
    aot_gpr[31] = (0x088352C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 209u, 0x088DADA0u>(ctx, &aot_mem) && ctx.pc == 0x088352C8u) goto L_088352C8;
    return;
L_088352C8:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08835314;
      }
      goto L_088352D4;
    }
L_088352D4:
    aot_gpr[16] = (0u | 1u);
    aot_gpr[4] = (0u | 309u);
    aot_gpr[31] = (0x088352E4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088352E4u) goto L_088352E4;
    return;
L_088352E4:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088352F8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088352F8u) goto L_088352F8;
    return;
L_088352F8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08835304u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 110u, 0x08833908u>(ctx, &aot_mem) && ctx.pc == 0x08835304u) goto L_08835304;
    return;
L_08835304:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2196), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[16]));
      if (branch_taken) {
          goto L_08835390;
      }
      goto L_08835314;
    }
L_08835314:
    aot_gpr[31] = (0x0883531Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 120u, 0x08888C48u>(ctx, &aot_mem) && ctx.pc == 0x0883531Cu) goto L_0883531C;
    return;
L_0883531C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835374;
      }
      goto L_08835324;
    }
L_08835324:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(19))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835374;
      }
      goto L_08835330;
    }
L_08835330:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2196), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x0883534Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883534Cu) goto L_0883534C;
    return;
L_0883534C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08835360u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08835360u) goto L_08835360;
    return;
L_08835360:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0883536Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 110u, 0x08833908u>(ctx, &aot_mem) && ctx.pc == 0x0883536Cu) goto L_0883536C;
    return;
L_0883536C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835390;
      }
      goto L_08835374;
    }
L_08835374:
    aot_gpr[31] = (0x0883537Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 120u, 0x08888C48u>(ctx, &aot_mem) && ctx.pc == 0x0883537Cu) goto L_0883537C;
    return;
L_0883537C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835390;
      }
      goto L_08835384;
    }
L_08835384:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2201), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    goto L_08835390;
L_08835390:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088353C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088353D8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x088353D8u) goto L_088353D8;
    return;
L_088353D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08835414;
      }
      goto L_088353E4;
    }
L_088353E4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08835414;
      }
      goto L_088353EC;
    }
L_088353EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2201), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08835414u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 110u, 0x08833908u>(ctx, &aot_mem) && ctx.pc == 0x08835414u) goto L_08835414;
    return;
L_08835414:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835424:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08835438u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08835438u) goto L_08835438;
    return;
L_08835438:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08835454;
    }
    goto L_08835444;
L_08835444:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088354A0;
      }
      goto L_0883544C;
    }
L_0883544C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883548C;
      }
      goto L_08835454;
    }
L_08835454:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088354A0;
      }
      goto L_0883545C;
    }
L_0883545C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08835470u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 209u, 0x088DADA0u>(ctx, &aot_mem) && ctx.pc == 0x08835470u) goto L_08835470;
    return;
L_08835470:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08835484u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 110u, 0x08833908u>(ctx, &aot_mem) && ctx.pc == 0x08835484u) goto L_08835484;
    return;
L_08835484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088354A0;
      }
      goto L_0883548C;
    }
L_0883548C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088354A0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 110u, 0x08833908u>(ctx, &aot_mem) && ctx.pc == 0x088354A0u) goto L_088354A0;
    return;
L_088354A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088354B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088354DC;
      }
      goto L_088354C4;
    }
L_088354C4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0883550C;
      }
      goto L_088354CC;
    }
L_088354CC:
    aot_gpr[31] = (0x088354D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 133u, 0x08834BE8u>(ctx, &aot_mem) && ctx.pc == 0x088354D4u) goto L_088354D4;
    return;
L_088354D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883550C;
      }
      goto L_088354DC;
    }
L_088354DC:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088354F4;
      }
      goto L_088354E4;
    }
L_088354E4:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835504;
      }
      goto L_088354EC;
    }
L_088354EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883550C;
      }
      goto L_088354F4;
    }
L_088354F4:
    aot_gpr[31] = (0x088354FCu);
    // nop
    goto L_088353C4;
L_088354FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883550C;
      }
      goto L_08835504;
    }
L_08835504:
    aot_gpr[31] = (0x0883550Cu);
    // nop
    goto L_08835424;
L_0883550C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835518:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835520:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835528:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08835568u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835568u) goto L_08835568;
    return;
L_08835568:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08835580u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9752));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835580u) goto L_08835580;
    return;
L_08835580:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0883562C;
      }
      goto L_08835588;
    }
L_08835588:
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088355AC;
      }
      goto L_08835590;
    }
L_08835590:
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_0883562C;
      }
      goto L_088355AC;
    }
L_088355AC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (57344u << 16u);
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x088355D8u);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088355D8u) goto L_088355D8;
    return;
L_088355D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883562C;
      }
      goto L_088355E0;
    }
L_088355E0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 5u);
    aot_gpr[31] = (0x088355F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9732));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088355F4u) goto L_088355F4;
    return;
L_088355F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883560C;
      }
      goto L_088355FC;
    }
L_088355FC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[16]);
      if (branch_taken) {
          goto L_0883560C;
      }
      goto L_08835604;
    }
L_08835604:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08835610;
      }
      goto L_0883560C;
    }
L_0883560C:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
    goto L_08835610;
L_08835610:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[16]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883562Cu);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883562Cu) goto L_0883562C;
    return;
L_0883562C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835650:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08835694u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835694u) goto L_08835694;
    return;
L_08835694:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088356A8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088356A8u) goto L_088356A8;
    return;
L_088356A8:
    aot_gpr[31] = (0x088356B0u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 186u, 0x08872DB0u>(ctx, &aot_mem) && ctx.pc == 0x088356B0u) goto L_088356B0;
    return;
L_088356B0:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08835714;
      }
      goto L_088356B8;
    }
L_088356B8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088356C4u);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088356C4u) goto L_088356C4;
    return;
L_088356C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835714;
      }
      goto L_088356CC;
    }
L_088356CC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088356F4;
      }
      goto L_088356D4;
    }
L_088356D4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088356F4;
      }
      goto L_088356DC;
    }
L_088356DC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088356ECu);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 110u, 0x08A329CCu>(ctx, &aot_mem) && ctx.pc == 0x088356ECu) goto L_088356EC;
    return;
L_088356EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835700;
      }
      goto L_088356F4;
    }
L_088356F4:
    aot_gpr[4] = (0u | 88u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08835700;
L_08835700:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08835714u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x08835714u) goto L_08835714;
    return;
L_08835714:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835738:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23656), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835758:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835760:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-9712));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08835794u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9688));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835794u) goto L_08835794;
    return;
L_08835794:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088357ACu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9668));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088357ACu) goto L_088357AC;
    return;
L_088357AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088357BCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088357BCu) goto L_088357BC;
    return;
L_088357BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[7] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (16384u << 16u);
    aot_gpr[7] = (aot_gpr[7] ^ aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088357FC;
      }
      goto L_088357E0;
    }
L_088357E0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883582C;
      }
      goto L_088357FC;
    }
L_088357FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0883581Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 139u, 0x088DA8DCu>(ctx, &aot_mem) && ctx.pc == 0x0883581Cu) goto L_0883581C;
    return;
L_0883581C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2197), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08835834;
      }
      goto L_0883582C;
    }
L_0883582C:
    aot_gpr[31] = (0x08835834u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 16u, 0x08836114u>(ctx, &aot_mem) && ctx.pc == 0x08835834u) goto L_08835834;
    return;
L_08835834:
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
L_0883584C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23664), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883586C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2194), static_cast<std::uint8_t>(0u));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-9648));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088358C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9624));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088358C4u) goto L_088358C4;
    return;
L_088358C4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9604));
    aot_gpr[31] = (0x088358E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9588));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088358E0u) goto L_088358E0;
    return;
L_088358E0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088358F0u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088358F0u) goto L_088358F0;
    return;
L_088358F0:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883591C;
      }
      goto L_088358FC;
    }
L_088358FC:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08835908u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835908u) goto L_08835908;
    return;
L_08835908:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08835914u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x08835914u) goto L_08835914;
    return;
L_08835914:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(4))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0883591C;
L_0883591C:
    aot_gpr[31] = (0x08835924u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835924u) goto L_08835924;
    return;
L_08835924:
    aot_gpr[31] = (0x0883592Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 136u, 0x0885A864u>(ctx, &aot_mem) && ctx.pc == 0x0883592Cu) goto L_0883592C;
    return;
L_0883592C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x0883593Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883593Cu) goto L_0883593C;
    return;
L_0883593C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08835948u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x08835948u) goto L_08835948;
    return;
L_08835948:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883597C;
      }
      goto L_08835968;
    }
L_08835968:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 7u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08835984;
      }
      goto L_0883597C;
    }
L_0883597C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08835984;
L_08835984:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08835998u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9572));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835998u) goto L_08835998;
    return;
L_08835998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08835A00;
      }
      goto L_088359A4;
    }
L_088359A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[31] = (0x088359C4u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1430))))));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088359C4u) goto L_088359C4;
    return;
L_088359C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1424))))));
    aot_gpr[31] = (0x088359E8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x088359E8u) goto L_088359E8;
    return;
L_088359E8:
    aot_gpr[31] = (0x088359F0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088359F0u) goto L_088359F0;
    return;
L_088359F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08835A24;
      }
      goto L_08835A00;
    }
L_08835A00:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08835A0Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08835A0Cu) goto L_08835A0C;
    return;
L_08835A0C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08835A18u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08835A18u) goto L_08835A18;
    return;
L_08835A18:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08835A24;
L_08835A24:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08835A30u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 212u, 0x088D8E24u>(ctx, &aot_mem) && ctx.pc == 0x08835A30u) goto L_08835A30;
    return;
L_08835A30:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08835A48u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9548));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835A48u) goto L_08835A48;
    return;
L_08835A48:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x08835A58u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08835A58u) goto L_08835A58;
    return;
L_08835A58:
    aot_gpr[31] = (0x08835A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 25u, 0x08A4C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08835A60u) goto L_08835A60;
    return;
L_08835A60:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08835A6Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08835A6Cu) goto L_08835A6C;
    return;
L_08835A6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[31] = (0x08835A8Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08835A8Cu) goto L_08835A8C;
    return;
L_08835A8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835AC8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835AD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9604));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x08835B20u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9588));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835B20u) goto L_08835B20;
    return;
L_08835B20:
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[22] + static_cast<std::uint32_t>(-9648));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08835B40u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9572));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835B40u) goto L_08835B40;
    return;
L_08835B40:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08835B58u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9504));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835B58u) goto L_08835B58;
    return;
L_08835B58:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08835B64u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835B64u) goto L_08835B64;
    return;
L_08835B64:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2224), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2216));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[12]));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[14]));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08835BBCu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 61u, 0x0888C31Cu>(ctx, &aot_mem) && ctx.pc == 0x08835BBCu) goto L_08835BBC;
    return;
L_08835BBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16281u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x08835BF4u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 76u, 0x08834694u>(ctx, &aot_mem) && ctx.pc == 0x08835BF4u) goto L_08835BF4;
    return;
L_08835BF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08835C10;
      }
      goto L_08835C00;
    }
L_08835C00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835C10;
      }
      goto L_08835C0C;
    }
L_08835C0C:
    aot_gpr[18] = (0u | 1u);
    goto L_08835C10;
L_08835C10:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08835C30;
      }
      goto L_08835C18;
    }
L_08835C18:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x08835C24u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08835C24u) goto L_08835C24;
    return;
L_08835C24:
    { const bool branch_taken = aot_gpr[23] == aot_gpr[2];
    aot_gpr[8] = (aot_gpr[17] & 255u);
      if (branch_taken) {
          goto L_08835C34;
      }
      goto L_08835C2C;
    }
L_08835C2C:
    aot_gpr[17] = (0u | 1u);
    goto L_08835C30;
L_08835C30:
    aot_gpr[8] = (aot_gpr[17] & 255u);
    goto L_08835C34;
L_08835C34:
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_gpr[7] = (aot_gpr[18] & 255u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08835C54u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 85u, 0x088347A4u>(ctx, &aot_mem) && ctx.pc == 0x08835C54u) goto L_08835C54;
    return;
L_08835C54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[8] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(-9648));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08835C78u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9492));
    goto L_08835528;
L_08835C78:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835CAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08835CDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 154u, 0x088C5AB8u>(ctx, &aot_mem) && ctx.pc == 0x08835CDCu) goto L_08835CDC;
    return;
L_08835CDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08835D00u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 233u, 0x088D8F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08835D00u) goto L_08835D00;
    return;
L_08835D00:
    aot_gpr[31] = (0x08835D08u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 158u, 0x088C5AF8u>(ctx, &aot_mem) && ctx.pc == 0x08835D08u) goto L_08835D08;
    return;
L_08835D08:
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
L_08835D24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08835D48u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 179u, 0x0885AADCu>(ctx, &aot_mem) && ctx.pc == 0x08835D48u) goto L_08835D48;
    return;
L_08835D48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08835D64u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 220u, 0x088D8E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08835D64u) goto L_08835D64;
    return;
L_08835D64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835D74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08835DACu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08835AD0;
L_08835DAC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835E8C;
      }
      goto L_08835DC0;
    }
L_08835DC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835E84;
      }
      goto L_08835DCC;
    }
L_08835DCC:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-9604));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08835DECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9588));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835DECu) goto L_08835DEC;
    return;
L_08835DEC:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08835DFCu);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835DFCu) goto L_08835DFC;
    return;
L_08835DFC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08835E0Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 25u, 0x088DA1D8u>(ctx, &aot_mem) && ctx.pc == 0x08835E0Cu) goto L_08835E0C;
    return;
L_08835E0C:
    aot_gpr[5] = (16204u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16128u << 16u);
    aot_gpr[31] = (0x08835E28u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 100u, 0x0885A63Cu>(ctx, &aot_mem) && ctx.pc == 0x08835E28u) goto L_08835E28;
    return;
L_08835E28:
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-9648));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08835E44u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9572));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835E44u) goto L_08835E44;
    return;
L_08835E44:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08835E5Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9548));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835E5Cu) goto L_08835E5C;
    return;
L_08835E5C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[31] = (0x08835E6Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835E6Cu) goto L_08835E6C;
    return;
L_08835E6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (49152u << 16u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[30] = (16384u << 16u);
      if (branch_taken) {
          goto L_08835E94;
      }
      goto L_08835E7C;
    }
L_08835E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835EB0;
      }
      goto L_08835E84;
    }
L_08835E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 13u, 0x088360D0u>(ctx, &aot_mem); return;
      }
      goto L_08835E8C;
    }
L_08835E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 13u, 0x088360D0u>(ctx, &aot_mem); return;
      }
      goto L_08835E94;
    }
L_08835E94:
    aot_gpr[31] = (0x08835E9Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835E9Cu) goto L_08835E9C;
    return;
L_08835E9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(53)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08835EACu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08835CAC;
L_08835EAC:
    aot_gpr[22] = (0u | 1u);
    goto L_08835EB0;
L_08835EB0:
    aot_gpr[31] = (0x08835EB8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835EB8u) goto L_08835EB8;
    return;
L_08835EB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[31] = (0x08835EC4u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835EC4u) goto L_08835EC4;
    return;
L_08835EC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08835ED8;
      }
      goto L_08835ED0;
    }
L_08835ED0:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835EEC;
      }
      goto L_08835ED8;
    }
L_08835ED8:
    aot_gpr[31] = (0x08835EE0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835EE0u) goto L_08835EE0;
    return;
L_08835EE0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08835EECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08835D24;
L_08835EEC:
    aot_gpr[31] = (0x08835EF4u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08835EF4u) goto L_08835EF4;
    return;
L_08835EF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08835F0Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9624));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835F0Cu) goto L_08835F0C;
    return;
L_08835F0C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08835F24u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9524));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08835F24u) goto L_08835F24;
    return;
L_08835F24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08835F5C;
      }
      goto L_08835F40;
    }
L_08835F40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 13u, 0x088360D0u>(ctx, &aot_mem); return;
      }
      goto L_08835F5C;
    }
L_08835F5C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08835F6Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08835F6Cu) goto L_08835F6C;
    return;
L_08835F6C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_08835FF0;
      }
      goto L_08835F98;
    }
L_08835F98:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08835FF0;
      }
      goto L_08835FA0;
    }
L_08835FA0:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08835FACu);
    aot_gpr[5] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08835FACu) goto L_08835FAC;
    return;
L_08835FAC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x08835FC4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08835FC4u) goto L_08835FC4;
    return;
L_08835FC4:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08835FD0u);
    aot_gpr[5] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08835FD0u) goto L_08835FD0;
    return;
L_08835FD0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08835FE8u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08835FE8u) goto L_08835FE8;
    return;
L_08835FE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 13u, 0x088360D0u>(ctx, &aot_mem); return;
      }
      goto L_08835FF0;
    }
L_08835FF0:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 3u, 0x08836024u>(ctx, &aot_mem); return;
      }
      goto L_08835FF8;
    }
L_08835FF8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08836004u);
    aot_gpr[5] = (0u | 3u);
    (void)rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0049(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0049_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_49(Runtime &runtime) {
    runtime.register_generated_unit(49u, 0x08835000u, 4096u, &recomp_unit_0049, &recomp_unit_0049_entry);
    runtime.register_function(0x08835004u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835020u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883503Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835058u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835074u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835090u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088350ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088350C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088350E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835100u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883511Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835138u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835154u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835170u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883518Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088351A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088351C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088351C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088351D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088351DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088351E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088351F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835200u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835214u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883521Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835228u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835230u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835240u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883524Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835254u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835260u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835268u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835278u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835280u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835294u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088352B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088352C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088352C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088352D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088352E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088352F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835304u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835314u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883531Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835324u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835330u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883534Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835360u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883536Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835374u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883537Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835384u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835390u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088353C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088353D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088353E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088353ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835414u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835424u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835438u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835444u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883544Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835454u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883545Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835470u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835484u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883548Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088354A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088354B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088354C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088354CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088354D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088354DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088354E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088354ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088354F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088354FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835504u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883550Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835518u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835520u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835528u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835568u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835580u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835588u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835590u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088355ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088355D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088355E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088355F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088355FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835604u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883560Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835610u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883562Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835650u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835694u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088356A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088356B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088356B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088356C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088356CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088356D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088356DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088356ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088356F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835700u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835714u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835738u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835758u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835760u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835794u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088357ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088357BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088357E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088357FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883581Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883582Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835834u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883584Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883586Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088358C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088358E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088358F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088358FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835908u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835914u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883591Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835924u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883592Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883593Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835948u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835968u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x0883597Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835984u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835998u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088359A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088359C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088359E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088359F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835A00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835A0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835A18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835A24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835A30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835A48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835A58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835A60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835A6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835A8Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835AC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835AD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835B20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835B40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835B58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835B64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835BBCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835BF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835C00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835C0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835C10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835C18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835C24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835C2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835C30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835C34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835C54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835C78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835CACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835CDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835D00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835D08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835D24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835D48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835D64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835D74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835DACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835DC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835DCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835DECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835DFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835E0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835E28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835E44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835E5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835E6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835E7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835E84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835E8Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835E94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835E9Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835EACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835EB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835EB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835EC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835ED0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835ED8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835EE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835EECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835EF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835F0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835F24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835F40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835F5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835F6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835F98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835FA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835FACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835FC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835FD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835FE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835FF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x08835FF8u, &recomp_unit_0049, "recomp_unit_0049");
}
} // namespace psprecomp
