#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0541[1019] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 8, 0,
    9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0,
    16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32,
    0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 42,
    0, 43, 0, 44, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 50, 0, 0, 0, 0, 51, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0,
    67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0,
    86, 0, 0, 0, 87, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94,
    0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0,
    105, 0, 0, 106, 107, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0,
    113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121,
    0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154,
    0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172,
    0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 186, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 205, 0, 0,
    206, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 213, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
};
void recomp_unit_0541_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A21000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0541[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A21000;
    case 2u: goto L_08A2100C;
    case 3u: goto L_08A21014;
    case 4u: goto L_08A21038;
    case 5u: goto L_08A21054;
    case 6u: goto L_08A21068;
    case 7u: goto L_08A21074;
    case 8u: goto L_08A21078;
    case 9u: goto L_08A21080;
    case 10u: goto L_08A21088;
    case 11u: goto L_08A210AC;
    case 12u: goto L_08A210C8;
    case 13u: goto L_08A210DC;
    case 14u: goto L_08A210E4;
    case 15u: goto L_08A210F0;
    case 16u: goto L_08A21100;
    case 17u: goto L_08A21108;
    case 18u: goto L_08A2112C;
    case 19u: goto L_08A21148;
    case 20u: goto L_08A2115C;
    case 21u: goto L_08A21178;
    case 22u: goto L_08A211AC;
    case 23u: goto L_08A211C0;
    case 24u: goto L_08A211C4;
    case 25u: goto L_08A211CC;
    case 26u: goto L_08A211DC;
    case 27u: goto L_08A21200;
    case 28u: goto L_08A21214;
    case 29u: goto L_08A21228;
    case 30u: goto L_08A2126C;
    case 31u: goto L_08A21274;
    case 32u: goto L_08A2127C;
    case 33u: goto L_08A2128C;
    case 34u: goto L_08A2129C;
    case 35u: goto L_08A212A4;
    case 36u: goto L_08A212B4;
    case 37u: goto L_08A212BC;
    case 38u: goto L_08A212CC;
    case 39u: goto L_08A212D4;
    case 40u: goto L_08A212E4;
    case 41u: goto L_08A212EC;
    case 42u: goto L_08A212FC;
    case 43u: goto L_08A21304;
    case 44u: goto L_08A2130C;
    case 45u: goto L_08A21310;
    case 46u: goto L_08A21320;
    case 47u: goto L_08A21344;
    case 48u: goto L_08A21358;
    case 49u: goto L_08A21360;
    case 50u: goto L_08A21364;
    case 51u: goto L_08A21378;
    case 52u: goto L_08A21380;
    case 53u: goto L_08A213A4;
    case 54u: goto L_08A213C8;
    case 55u: goto L_08A213D0;
    case 56u: goto L_08A213D8;
    case 57u: goto L_08A213F4;
    case 58u: goto L_08A21418;
    case 59u: goto L_08A21424;
    case 60u: goto L_08A2142C;
    case 61u: goto L_08A21434;
    case 62u: goto L_08A21440;
    case 63u: goto L_08A2144C;
    case 64u: goto L_08A21454;
    case 65u: goto L_08A2145C;
    case 66u: goto L_08A21468;
    case 67u: goto L_08A21480;
    case 68u: goto L_08A21488;
    case 69u: goto L_08A214A4;
    case 70u: goto L_08A214C8;
    case 71u: goto L_08A214D0;
    case 72u: goto L_08A214E8;
    case 73u: goto L_08A214F0;
    case 74u: goto L_08A21514;
    case 75u: goto L_08A2151C;
    case 76u: goto L_08A21534;
    case 77u: goto L_08A2153C;
    case 78u: goto L_08A21560;
    case 79u: goto L_08A215A4;
    case 80u: goto L_08A215B4;
    case 81u: goto L_08A215C8;
    case 82u: goto L_08A215D4;
    case 83u: goto L_08A215E4;
    case 84u: goto L_08A215F0;
    case 85u: goto L_08A215F8;
    case 86u: goto L_08A21600;
    case 87u: goto L_08A21610;
    case 88u: goto L_08A21614;
    case 89u: goto L_08A21620;
    case 90u: goto L_08A21634;
    case 91u: goto L_08A21644;
    case 92u: goto L_08A21658;
    case 93u: goto L_08A2166C;
    case 94u: goto L_08A2167C;
    case 95u: goto L_08A21690;
    case 96u: goto L_08A216A0;
    case 97u: goto L_08A216B4;
    case 98u: goto L_08A216C0;
    case 99u: goto L_08A216C8;
    case 100u: goto L_08A216D0;
    case 101u: goto L_08A216DC;
    case 102u: goto L_08A216E4;
    case 103u: goto L_08A216F0;
    case 104u: goto L_08A216F8;
    case 105u: goto L_08A21700;
    case 106u: goto L_08A2170C;
    case 107u: goto L_08A21710;
    case 108u: goto L_08A21720;
    case 109u: goto L_08A21734;
    case 110u: goto L_08A21744;
    case 111u: goto L_08A21758;
    case 112u: goto L_08A2176C;
    case 113u: goto L_08A21780;
    case 114u: goto L_08A21790;
    case 115u: goto L_08A217A4;
    case 116u: goto L_08A217AC;
    case 117u: goto L_08A217BC;
    case 118u: goto L_08A217D0;
    case 119u: goto L_08A217D8;
    case 120u: goto L_08A217E8;
    case 121u: goto L_08A217FC;
    case 122u: goto L_08A2180C;
    case 123u: goto L_08A21820;
    case 124u: goto L_08A21834;
    case 125u: goto L_08A21840;
    case 126u: goto L_08A21854;
    case 127u: goto L_08A21878;
    case 128u: goto L_08A218A8;
    case 129u: goto L_08A218C4;
    case 130u: goto L_08A218E4;
    case 131u: goto L_08A218EC;
    case 132u: goto L_08A2190C;
    case 133u: goto L_08A21914;
    case 134u: goto L_08A21934;
    case 135u: goto L_08A2193C;
    case 136u: goto L_08A2195C;
    case 137u: goto L_08A21964;
    case 138u: goto L_08A21984;
    case 139u: goto L_08A2198C;
    case 140u: goto L_08A219AC;
    case 141u: goto L_08A219B4;
    case 142u: goto L_08A219D4;
    case 143u: goto L_08A219DC;
    case 144u: goto L_08A219FC;
    case 145u: goto L_08A21A04;
    case 146u: goto L_08A21A24;
    case 147u: goto L_08A21A38;
    case 148u: goto L_08A21A68;
    case 149u: goto L_08A21A84;
    case 150u: goto L_08A21AA8;
    case 151u: goto L_08A21AD4;
    case 152u: goto L_08A21AE0;
    case 153u: goto L_08A21AEC;
    case 154u: goto L_08A21AFC;
    case 155u: goto L_08A21B0C;
    case 156u: goto L_08A21B24;
    case 157u: goto L_08A21B38;
    case 158u: goto L_08A21B4C;
    case 159u: goto L_08A21B5C;
    case 160u: goto L_08A21B7C;
    case 161u: goto L_08A21B88;
    case 162u: goto L_08A21B90;
    case 163u: goto L_08A21BA0;
    case 164u: goto L_08A21BD0;
    case 165u: goto L_08A21BD8;
    case 166u: goto L_08A21BE8;
    case 167u: goto L_08A21BFC;
    case 168u: goto L_08A21C14;
    case 169u: goto L_08A21C40;
    case 170u: goto L_08A21C54;
    case 171u: goto L_08A21C68;
    case 172u: goto L_08A21C7C;
    case 173u: goto L_08A21C8C;
    case 174u: goto L_08A21C9C;
    case 175u: goto L_08A21CA8;
    case 176u: goto L_08A21CB4;
    case 177u: goto L_08A21CC8;
    case 178u: goto L_08A21CDC;
    case 179u: goto L_08A21CF0;
    case 180u: goto L_08A21D04;
    case 181u: goto L_08A21D0C;
    case 182u: goto L_08A21D14;
    case 183u: goto L_08A21D1C;
    case 184u: goto L_08A21D28;
    case 185u: goto L_08A21D30;
    case 186u: goto L_08A21D38;
    case 187u: goto L_08A21D44;
    case 188u: goto L_08A21D50;
    case 189u: goto L_08A21D58;
    case 190u: goto L_08A21D6C;
    case 191u: goto L_08A21D80;
    case 192u: goto L_08A21D8C;
    case 193u: goto L_08A21D9C;
    case 194u: goto L_08A21DB0;
    case 195u: goto L_08A21DBC;
    case 196u: goto L_08A21DC4;
    case 197u: goto L_08A21DD0;
    case 198u: goto L_08A21DE0;
    case 199u: goto L_08A21E08;
    case 200u: goto L_08A21E48;
    case 201u: goto L_08A21E50;
    case 202u: goto L_08A21E5C;
    case 203u: goto L_08A21E64;
    case 204u: goto L_08A21E70;
    case 205u: goto L_08A21E74;
    case 206u: goto L_08A21E80;
    case 207u: goto L_08A21E88;
    case 208u: goto L_08A21E98;
    case 209u: goto L_08A21EA0;
    case 210u: goto L_08A21EB0;
    case 211u: goto L_08A21EB8;
    case 212u: goto L_08A21EC8;
    case 213u: goto L_08A21ED0;
    case 214u: goto L_08A21ED4;
    case 215u: goto L_08A21EE4;
    case 216u: goto L_08A21F04;
    case 217u: goto L_08A21F24;
    case 218u: goto L_08A21F60;
    case 219u: goto L_08A21F70;
    case 220u: goto L_08A21F7C;
    case 221u: goto L_08A21FA4;
    case 222u: goto L_08A21FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A21000:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(688));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_08A2100C;
L_08A2100C:
    aot_gpr[31] = (0x08A21014u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 123u, 0x08A466ECu>(ctx, &aot_mem) && ctx.pc == 0x08A21014u) goto L_08A21014;
    return;
L_08A21014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21038u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21038u) goto L_08A21038;
    return;
L_08A21038:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A21054u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0540_entry, 540u, 55u, 0x08A204BCu>(ctx, &aot_mem) && ctx.pc == 0x08A21054u) goto L_08A21054;
    return;
L_08A21054:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[18] = (2215u << 16u);
        goto L_08A21078;
    }
    goto L_08A21068;
L_08A21068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2100C;
      }
      goto L_08A21074;
    }
L_08A21074:
    aot_gpr[18] = (2215u << 16u);
    goto L_08A21078;
L_08A21078:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(764));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
    goto L_08A21080;
L_08A21080:
    aot_gpr[31] = (0x08A21088u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 123u, 0x08A466ECu>(ctx, &aot_mem) && ctx.pc == 0x08A21088u) goto L_08A21088;
    return;
L_08A21088:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(880), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A210ACu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A210ACu) goto L_08A210AC;
    return;
L_08A210AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A210C8u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0540_entry, 540u, 55u, 0x08A204BCu>(ctx, &aot_mem) && ctx.pc == 0x08A210C8u) goto L_08A210C8;
    return;
L_08A210C8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
        goto L_08A21080;
    }
    goto L_08A210DC;
L_08A210DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2115C;
      }
      goto L_08A210E4;
    }
L_08A210E4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A210F0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 123u, 0x08A466ECu>(ctx, &aot_mem) && ctx.pc == 0x08A210F0u) goto L_08A210F0;
    return;
L_08A210F0:
    aot_gpr[18] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(840));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
    goto L_08A21100;
L_08A21100:
    aot_gpr[31] = (0x08A21108u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 123u, 0x08A466ECu>(ctx, &aot_mem) && ctx.pc == 0x08A21108u) goto L_08A21108;
    return;
L_08A21108:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(880), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A2112Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2112Cu) goto L_08A2112C;
    return;
L_08A2112C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A21148u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0540_entry, 540u, 55u, 0x08A204BCu>(ctx, &aot_mem) && ctx.pc == 0x08A21148u) goto L_08A21148;
    return;
L_08A21148:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
        goto L_08A21100;
    }
    goto L_08A2115C;
L_08A2115C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21178:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A211ACu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A211ACu) goto L_08A211AC;
    return;
L_08A211AC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
      if (branch_taken) {
          goto L_08A21214;
      }
      goto L_08A211C0;
    }
L_08A211C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    goto L_08A211C4;
L_08A211C4:
    aot_gpr[31] = (0x08A211CCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 130u, 0x08A46754u>(ctx, &aot_mem) && ctx.pc == 0x08A211CCu) goto L_08A211CC;
    return;
L_08A211CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[2]);
    aot_gpr[31] = (0x08A211DCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 130u, 0x08A46754u>(ctx, &aot_mem) && ctx.pc == 0x08A211DCu) goto L_08A211DC;
    return;
L_08A211DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(880), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A21200u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21200u) goto L_08A21200;
    return;
L_08A21200:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
        goto L_08A211C4;
    }
    goto L_08A21214;
L_08A21214:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21228:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2126Cu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2126Cu) goto L_08A2126C;
    return;
L_08A2126C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A213A4;
      }
      goto L_08A21274;
    }
L_08A21274:
    aot_gpr[31] = (0x08A2127Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A2127Cu) goto L_08A2127C;
    return;
L_08A2127C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A21418;
      }
      goto L_08A2128C;
    }
L_08A2128C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A2129Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2129Cu) goto L_08A2129C;
    return;
L_08A2129C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A21310;
      }
      goto L_08A212A4;
    }
L_08A212A4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A212B4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A212B4u) goto L_08A212B4;
    return;
L_08A212B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A21310;
      }
      goto L_08A212BC;
    }
L_08A212BC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A212CCu);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A212CCu) goto L_08A212CC;
    return;
L_08A212CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A21310;
      }
      goto L_08A212D4;
    }
L_08A212D4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A212E4u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A212E4u) goto L_08A212E4;
    return;
L_08A212E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A21310;
      }
      goto L_08A212EC;
    }
L_08A212EC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A212FCu);
    aot_gpr[6] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A212FCu) goto L_08A212FC;
    return;
L_08A212FC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
        goto L_08A21344;
    }
    goto L_08A21304;
L_08A21304:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_08A21364;
      }
      goto L_08A2130C;
    }
L_08A2130C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A21310;
L_08A21310:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A21320u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21320u) goto L_08A21320;
    return;
L_08A21320:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
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
L_08A21344:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A21358u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21358u) goto L_08A21358;
    return;
L_08A21358:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A213C8;
      }
      goto L_08A21360;
    }
L_08A21360:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    goto L_08A21364;
L_08A21364:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A21378u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21378u) goto L_08A21378;
    return;
L_08A21378:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A213A4;
      }
      goto L_08A21380;
    }
L_08A21380:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(184));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A213A4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A213A4u) goto L_08A213A4;
    return;
L_08A213A4:
    aot_gpr[2] = (0u | 1u);
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
L_08A213C8:
    aot_gpr[31] = (0x08A213D0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 189u, 0x089FEB88u>(ctx, &aot_mem) && ctx.pc == 0x08A213D0u) goto L_08A213D0;
    return;
L_08A213D0:
    aot_gpr[31] = (0x08A213D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A213D8u) goto L_08A213D8;
    return;
L_08A213D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(232)));
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(104));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A213F4u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A213F4u) goto L_08A213F4;
    return;
L_08A213F4:
    aot_gpr[2] = (0u | 0u);
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
L_08A21418:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A21424u);
    aot_gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A21424u) goto L_08A21424;
    return;
L_08A21424:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21514;
      }
      goto L_08A2142C;
    }
L_08A2142C:
    aot_gpr[31] = (0x08A21434u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 220u, 0x089FEE00u>(ctx, &aot_mem) && ctx.pc == 0x08A21434u) goto L_08A21434;
    return;
L_08A21434:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A21514;
      }
      goto L_08A21440;
    }
L_08A21440:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A2144Cu);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2144Cu) goto L_08A2144C;
    return;
L_08A2144C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A214C8;
      }
      goto L_08A21454;
    }
L_08A21454:
    aot_gpr[31] = (0x08A2145Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 220u, 0x089FEE00u>(ctx, &aot_mem) && ctx.pc == 0x08A2145Cu) goto L_08A2145C;
    return;
L_08A2145C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A214C8;
      }
      goto L_08A21468;
    }
L_08A21468:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A21480u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21480u) goto L_08A21480;
    return;
L_08A21480:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A213A4;
      }
      goto L_08A21488;
    }
L_08A21488:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A214A4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A214A4u) goto L_08A214A4;
    return;
L_08A214A4:
    aot_gpr[2] = (0u | 0u);
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
L_08A214C8:
    aot_gpr[31] = (0x08A214D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A214D0u) goto L_08A214D0;
    return;
L_08A214D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A214E8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A214E8u) goto L_08A214E8;
    return;
L_08A214E8:
    aot_gpr[31] = (0x08A214F0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 211u, 0x089FED3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A214F0u) goto L_08A214F0;
    return;
L_08A214F0:
    aot_gpr[2] = (0u | 0u);
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
L_08A21514:
    aot_gpr[31] = (0x08A2151Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A2151Cu) goto L_08A2151C;
    return;
L_08A2151C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A21534u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21534u) goto L_08A21534;
    return;
L_08A21534:
    aot_gpr[31] = (0x08A2153Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 216u, 0x089FEDB4u>(ctx, &aot_mem) && ctx.pc == 0x08A2153Cu) goto L_08A2153C;
    return;
L_08A2153C:
    aot_gpr[2] = (0u | 0u);
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
L_08A21560:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(200));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A215A4u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A215A4u) goto L_08A215A4;
    return;
L_08A215A4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(852));
    aot_gpr[31] = (0x08A215B4u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A215B4u) goto L_08A215B4;
    return;
L_08A215B4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A215C8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A215C8u) goto L_08A215C8;
    return;
L_08A215C8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A215D4u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(924));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A215D4u) goto L_08A215D4;
    return;
L_08A215D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A215E4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A215E4u) goto L_08A215E4;
    return;
L_08A215E4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A21614;
      }
      goto L_08A215F0;
    }
L_08A215F0:
    aot_gpr[31] = (0x08A215F8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A215F8u) goto L_08A215F8;
    return;
L_08A215F8:
    aot_gpr[31] = (0x08A21600u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A21600u) goto L_08A21600;
    return;
L_08A21600:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A21610u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0540_entry, 540u, 170u, 0x08A20E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21610u) goto L_08A21610;
    return;
L_08A21610:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A21614;
L_08A21614:
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(872));
    aot_gpr[31] = (0x08A21620u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(932));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21620u) goto L_08A21620;
    return;
L_08A21620:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21634u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21634u) goto L_08A21634;
    return;
L_08A21634:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(872)));
    aot_gpr[4] = (0u | 0u);
    if (static_cast<std::int32_t>(aot_gpr[5]) > 0) {
    aot_gpr[4] = (aot_gpr[5] | 0u);
        goto L_08A21644;
    }
    goto L_08A21644;
L_08A21644:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(872), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(900));
    aot_gpr[31] = (0x08A21658u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(944));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21658u) goto L_08A21658;
    return;
L_08A21658:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A2166Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2166Cu) goto L_08A2166C;
    return;
L_08A2166C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x08A2167Cu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(956));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2167Cu) goto L_08A2167C;
    return;
L_08A2167C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21690u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21690u) goto L_08A21690;
    return;
L_08A21690:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x08A216A0u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(968));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A216A0u) goto L_08A216A0;
    return;
L_08A216A0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A216B4u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A216B4u) goto L_08A216B4;
    return;
L_08A216B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A216E4;
      }
      goto L_08A216C0;
    }
L_08A216C0:
    aot_gpr[31] = (0x08A216C8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(980));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A216C8u) goto L_08A216C8;
    return;
L_08A216C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A216DC;
      }
      goto L_08A216D0;
    }
L_08A216D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(844), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A21710;
      }
      goto L_08A216DC;
    }
L_08A216DC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(844), 0u);
      if (branch_taken) {
          goto L_08A21710;
      }
      goto L_08A216E4;
    }
L_08A216E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A21710;
      }
      goto L_08A216F0;
    }
L_08A216F0:
    aot_gpr[31] = (0x08A216F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(988));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A216F8u) goto L_08A216F8;
    return;
L_08A216F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2170C;
      }
      goto L_08A21700;
    }
L_08A21700:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(844), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A21710;
      }
      goto L_08A2170C;
    }
L_08A2170C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(844), 0u);
    goto L_08A21710;
L_08A21710:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08A21720u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21720u) goto L_08A21720;
    return;
L_08A21720:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21734u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21734u) goto L_08A21734;
    return;
L_08A21734:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(136));
    aot_gpr[31] = (0x08A21744u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21744u) goto L_08A21744;
    return;
L_08A21744:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21758u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21758u) goto L_08A21758;
    return;
L_08A21758:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(140));
    aot_gpr[31] = (0x08A2176Cu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(1028));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2176Cu) goto L_08A2176C;
    return;
L_08A2176C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21780u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21780u) goto L_08A21780;
    return;
L_08A21780:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(904));
    aot_gpr[31] = (0x08A21790u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1048));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21790u) goto L_08A21790;
    return;
L_08A21790:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A217A4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A217A4u) goto L_08A217A4;
    return;
L_08A217A4:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(904), 0u);
        goto L_08A217AC;
    }
    goto L_08A217AC;
L_08A217AC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(908));
    aot_gpr[31] = (0x08A217BCu);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1068));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A217BCu) goto L_08A217BC;
    return;
L_08A217BC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A217D0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A217D0u) goto L_08A217D0;
    return;
L_08A217D0:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(908), 0u);
        goto L_08A217D8;
    }
    goto L_08A217D8;
L_08A217D8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A217E8u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1084));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A217E8u) goto L_08A217E8;
    return;
L_08A217E8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A217FCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A217FCu) goto L_08A217FC;
    return;
L_08A217FC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A2180Cu);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1092));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2180Cu) goto L_08A2180C;
    return;
L_08A2180C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21820u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21820u) goto L_08A21820;
    return;
L_08A21820:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(208));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A21834u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21834u) goto L_08A21834;
    return;
L_08A21834:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A21840u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21840u) goto L_08A21840;
    return;
L_08A21840:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21854u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21854u) goto L_08A21854;
    return;
L_08A21854:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21878:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-129));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (aot_gpr[7] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A21A24;
      }
      goto L_08A218A8;
    }
L_08A218A8:
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[8]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(1104)));
    jump_target = aot_gpr[1];
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(292)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A218C4:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(224));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A218E4u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A218E4u) goto L_08A218E4;
    return;
L_08A218E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A24;
      }
      goto L_08A218EC;
    }
L_08A218EC:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(232));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A2190Cu);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2190Cu) goto L_08A2190C;
    return;
L_08A2190C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A24;
      }
      goto L_08A21914;
    }
L_08A21914:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(240));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A21934u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21934u) goto L_08A21934;
    return;
L_08A21934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A24;
      }
      goto L_08A2193C;
    }
L_08A2193C:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(248));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A2195Cu);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2195Cu) goto L_08A2195C;
    return;
L_08A2195C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A24;
      }
      goto L_08A21964;
    }
L_08A21964:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(256));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A21984u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21984u) goto L_08A21984;
    return;
L_08A21984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A24;
      }
      goto L_08A2198C;
    }
L_08A2198C:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(272));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A219ACu);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A219ACu) goto L_08A219AC;
    return;
L_08A219AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A24;
      }
      goto L_08A219B4;
    }
L_08A219B4:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(264));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A219D4u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A219D4u) goto L_08A219D4;
    return;
L_08A219D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A24;
      }
      goto L_08A219DC;
    }
L_08A219DC:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(288));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A219FCu);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A219FCu) goto L_08A219FC;
    return;
L_08A219FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A24;
      }
      goto L_08A21A04;
    }
L_08A21A04:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(280));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A21A24u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21A24u) goto L_08A21A24;
    return;
L_08A21A24:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21A38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A21A68u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0540_entry, 540u, 59u, 0x08A2051Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21A68u) goto L_08A21A68;
    return;
L_08A21A68:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17592));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A21A84u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A21560;
L_08A21A84:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(844), aot_gpr[19]);
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
L_08A21AA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-528));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[31]);
    aot_gpr[31] = (0x08A21AD4u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21AD4u) goto L_08A21AD4;
    return;
L_08A21AD4:
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(332));
    aot_gpr[31] = (0x08A21AE0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A21AE0u) goto L_08A21AE0;
    return;
L_08A21AE0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A21AECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 177u, 0x08A46AE8u>(ctx, &aot_mem) && ctx.pc == 0x08A21AECu) goto L_08A21AEC;
    return;
L_08A21AEC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 42u);
    aot_gpr[31] = (0x08A21AFCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21AFCu) goto L_08A21AFC;
    return;
L_08A21AFC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A21B0Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0540_entry, 540u, 92u, 0x08A20830u>(ctx, &aot_mem) && ctx.pc == 0x08A21B0Cu) goto L_08A21B0C;
    return;
L_08A21B0C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21B24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A21B38u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0540_entry, 540u, 73u, 0x08A20620u>(ctx, &aot_mem) && ctx.pc == 0x08A21B38u) goto L_08A21B38;
    return;
L_08A21B38:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    aot_gpr[31] = (0x08A21B4Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1144));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A21B4Cu) goto L_08A21B4C;
    return;
L_08A21B4C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21B5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A21B7Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 158u, 0x08A12ADCu>(ctx, &aot_mem) && ctx.pc == 0x08A21B7Cu) goto L_08A21B7C;
    return;
L_08A21B7C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A21B90;
      }
      goto L_08A21B88;
    }
L_08A21B88:
    aot_gpr[31] = (0x08A21B90u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 157u, 0x08A22A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21B90u) goto L_08A21B90;
    return;
L_08A21B90:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21BA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-528));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[31]);
    aot_gpr[31] = (0x08A21BD0u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21BD0u) goto L_08A21BD0;
    return;
L_08A21BD0:
    aot_gpr[31] = (0x08A21BD8u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A21BD8u) goto L_08A21BD8;
    return;
L_08A21BD8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 42u);
    aot_gpr[31] = (0x08A21BE8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21BE8u) goto L_08A21BE8;
    return;
L_08A21BE8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A21BFCu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0540_entry, 540u, 85u, 0x08A20788u>(ctx, &aot_mem) && ctx.pc == 0x08A21BFCu) goto L_08A21BFC;
    return;
L_08A21BFC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21C14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A21C40u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A21C40u) goto L_08A21C40;
    return;
L_08A21C40:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17888));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A21C54u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 4u, 0x08A2202Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21C54u) goto L_08A21C54;
    return;
L_08A21C54:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A21C68u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1168));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21C68u) goto L_08A21C68;
    return;
L_08A21C68:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21C7Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21C7Cu) goto L_08A21C7C;
    return;
L_08A21C7C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A21C8Cu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1180));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21C8Cu) goto L_08A21C8C;
    return;
L_08A21C8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A21C9Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21C9Cu) goto L_08A21C9C;
    return;
L_08A21C9C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(328));
      if (branch_taken) {
          goto L_08A21CB4;
      }
      goto L_08A21CA8;
    }
L_08A21CA8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A21CB4u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(428));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A21CB4u) goto L_08A21CB4;
    return;
L_08A21CB4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A21CC8u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(1188));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21CC8u) goto L_08A21CC8;
    return;
L_08A21CC8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21CDCu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21CDCu) goto L_08A21CDC;
    return;
L_08A21CDC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08A21CF0u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(1196));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21CF0u) goto L_08A21CF0;
    return;
L_08A21CF0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21D04u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21D04u) goto L_08A21D04;
    return;
L_08A21D04:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A21D14;
      }
      goto L_08A21D0C;
    }
L_08A21D0C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08A21D14;
L_08A21D14:
    aot_gpr[31] = (0x08A21D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21D1Cu) goto L_08A21D1C;
    return;
L_08A21D1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A21D28u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21D28u) goto L_08A21D28;
    return;
L_08A21D28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21D50;
      }
      goto L_08A21D30;
    }
L_08A21D30:
    aot_gpr[31] = (0x08A21D38u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21D38u) goto L_08A21D38;
    return;
L_08A21D38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A21D44u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21D44u) goto L_08A21D44;
    return;
L_08A21D44:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A21D50u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A21D50u) goto L_08A21D50;
    return;
L_08A21D50:
    aot_gpr[31] = (0x08A21D58u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A21D58u) goto L_08A21D58;
    return;
L_08A21D58:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(532));
    aot_gpr[31] = (0x08A21D6Cu);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1208));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21D6Cu) goto L_08A21D6C;
    return;
L_08A21D6C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21D80u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21D80u) goto L_08A21D80;
    return;
L_08A21D80:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(532), 0u);
        goto L_08A21D8C;
    }
    goto L_08A21D8C;
L_08A21D8C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(536));
    aot_gpr[31] = (0x08A21D9Cu);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1228));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21D9Cu) goto L_08A21D9C;
    return;
L_08A21D9C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A21DB0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21DB0u) goto L_08A21DB0;
    return;
L_08A21DB0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(536), 0u);
        goto L_08A21DBC;
    }
    goto L_08A21DBC;
L_08A21DBC:
    aot_gpr[31] = (0x08A21DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A21DC4u) goto L_08A21DC4;
    return;
L_08A21DC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A21DD0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21DD0u) goto L_08A21DD0;
    return;
L_08A21DD0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A21DE0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 8u, 0x08A22098u>(ctx, &aot_mem) && ctx.pc == 0x08A21DE0u) goto L_08A21DE0;
    return;
L_08A21DE0:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A21E08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A21E48u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21E48u) goto L_08A21E48;
    return;
L_08A21E48:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A21F04;
      }
      goto L_08A21E50;
    }
L_08A21E50:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A21E5Cu);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A21E5Cu) goto L_08A21E5C;
    return;
L_08A21E5C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A21E74;
      }
      goto L_08A21E64;
    }
L_08A21E64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(528)));
    aot_gpr[31] = (0x08A21E70u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 172u, 0x08A22B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21E70u) goto L_08A21E70;
    return;
L_08A21E70:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A21E74;
L_08A21E74:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A21E80u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A21E80u) goto L_08A21E80;
    return;
L_08A21E80:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A21ED4;
      }
      goto L_08A21E88;
    }
L_08A21E88:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A21E98u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A21E98u) goto L_08A21E98;
    return;
L_08A21E98:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A21ED4;
      }
      goto L_08A21EA0;
    }
L_08A21EA0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A21EB0u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A21EB0u) goto L_08A21EB0;
    return;
L_08A21EB0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A21ED4;
      }
      goto L_08A21EB8;
    }
L_08A21EB8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A21EC8u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A21EC8u) goto L_08A21EC8;
    return;
L_08A21EC8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21F04;
      }
      goto L_08A21ED0;
    }
L_08A21ED0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A21ED4;
L_08A21ED4:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A21EE4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21EE4u) goto L_08A21EE4;
    return;
L_08A21EE4:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
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
L_08A21F04:
    aot_gpr[2] = (0u | 1u);
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
L_08A21F24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A21F70;
      }
      goto L_08A21F60;
    }
L_08A21F60:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_08A21F7C;
      }
      goto L_08A21F70;
    }
L_08A21F70:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    goto L_08A21F7C;
L_08A21F7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[30] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    aot_gpr[31] = (0x08A21FA4u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A21FA4u) goto L_08A21FA4;
    return;
L_08A21FA4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[12] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[10] = (aot_gpr[20] | 0u);
    aot_gpr[11] = (aot_gpr[23] | 0u);
    jump_target = aot_gpr[13];
    aot_gpr[31] = (0x08A21FE8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[12]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A21FE8u) goto L_08A21FE8;
    return;
L_08A21FE8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.pc = 0x08A22000u; return;
}

void recomp_unit_0541(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0541_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_541(Runtime &runtime) {
    runtime.register_generated_unit(541u, 0x08A21000u, 4096u, &recomp_unit_0541, &recomp_unit_0541_entry);
    runtime.register_function(0x08A21000u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2100Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21014u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21038u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21054u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21068u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21074u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21078u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21080u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21088u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A210ACu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A210C8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A210DCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A210E4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A210F0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21100u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21108u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2112Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21148u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2115Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21178u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A211ACu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A211C0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A211C4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A211CCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A211DCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21200u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21214u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21228u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2126Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21274u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2127Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2128Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2129Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A212A4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A212B4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A212BCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A212CCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A212D4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A212E4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A212ECu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A212FCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21304u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2130Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21310u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21320u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21344u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21358u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21360u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21364u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21378u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21380u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A213A4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A213C8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A213D0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A213D8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A213F4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21418u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21424u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2142Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21434u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21440u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2144Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21454u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2145Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21468u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21480u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21488u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A214A4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A214C8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A214D0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A214E8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A214F0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21514u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2151Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21534u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2153Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21560u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A215A4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A215B4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A215C8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A215D4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A215E4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A215F0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A215F8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21600u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21610u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21614u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21620u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21634u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21644u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21658u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2166Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2167Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21690u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A216A0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A216B4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A216C0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A216C8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A216D0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A216DCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A216E4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A216F0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A216F8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21700u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2170Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21710u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21720u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21734u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21744u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21758u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2176Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21780u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21790u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A217A4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A217ACu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A217BCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A217D0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A217D8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A217E8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A217FCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2180Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21820u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21834u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21840u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21854u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21878u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A218A8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A218C4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A218E4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A218ECu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2190Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21914u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21934u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2193Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2195Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21964u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21984u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A2198Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A219ACu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A219B4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A219D4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A219DCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A219FCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21A04u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21A24u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21A38u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21A68u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21A84u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21AA8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21AD4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21AE0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21AECu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21AFCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21B0Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21B24u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21B38u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21B4Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21B5Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21B7Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21B88u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21B90u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21BA0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21BD0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21BD8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21BE8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21BFCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21C14u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21C40u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21C54u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21C68u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21C7Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21C8Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21C9Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21CA8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21CB4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21CC8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21CDCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21CF0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D04u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D0Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D14u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D1Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D28u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D30u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D38u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D44u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D50u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D58u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D6Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D80u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D8Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21D9Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21DB0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21DBCu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21DC4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21DD0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21DE0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21E08u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21E48u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21E50u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21E5Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21E64u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21E70u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21E74u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21E80u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21E88u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21E98u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21EA0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21EB0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21EB8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21EC8u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21ED0u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21ED4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21EE4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21F04u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21F24u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21F60u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21F70u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21F7Cu, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21FA4u, &recomp_unit_0541, "recomp_unit_0541");
    runtime.register_function(0x08A21FE8u, &recomp_unit_0541, "recomp_unit_0541");
}
} // namespace psprecomp
