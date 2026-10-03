#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0118[1020] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 71, 72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79,
    0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96,
    0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0,
    105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0,
    115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179,
};
void recomp_unit_0118_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0887A000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0118[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0887A000;
    case 2u: goto L_0887A014;
    case 3u: goto L_0887A038;
    case 4u: goto L_0887A058;
    case 5u: goto L_0887A078;
    case 6u: goto L_0887A098;
    case 7u: goto L_0887A0B8;
    case 8u: goto L_0887A0D8;
    case 9u: goto L_0887A0F8;
    case 10u: goto L_0887A10C;
    case 11u: goto L_0887A118;
    case 12u: goto L_0887A120;
    case 13u: goto L_0887A140;
    case 14u: goto L_0887A164;
    case 15u: goto L_0887A184;
    case 16u: goto L_0887A1AC;
    case 17u: goto L_0887A1CC;
    case 18u: goto L_0887A1EC;
    case 19u: goto L_0887A20C;
    case 20u: goto L_0887A22C;
    case 21u: goto L_0887A24C;
    case 22u: goto L_0887A260;
    case 23u: goto L_0887A280;
    case 24u: goto L_0887A2A4;
    case 25u: goto L_0887A2CC;
    case 26u: goto L_0887A2EC;
    case 27u: goto L_0887A30C;
    case 28u: goto L_0887A32C;
    case 29u: goto L_0887A34C;
    case 30u: goto L_0887A36C;
    case 31u: goto L_0887A38C;
    case 32u: goto L_0887A3A0;
    case 33u: goto L_0887A3B0;
    case 34u: goto L_0887A3C8;
    case 35u: goto L_0887A3D4;
    case 36u: goto L_0887A3E0;
    case 37u: goto L_0887A3F0;
    case 38u: goto L_0887A400;
    case 39u: goto L_0887A410;
    case 40u: goto L_0887A420;
    case 41u: goto L_0887A430;
    case 42u: goto L_0887A440;
    case 43u: goto L_0887A450;
    case 44u: goto L_0887A468;
    case 45u: goto L_0887A478;
    case 46u: goto L_0887A490;
    case 47u: goto L_0887A4F8;
    case 48u: goto L_0887A504;
    case 49u: goto L_0887A514;
    case 50u: goto L_0887A52C;
    case 51u: goto L_0887A534;
    case 52u: goto L_0887A544;
    case 53u: goto L_0887A550;
    case 54u: goto L_0887A560;
    case 55u: goto L_0887A580;
    case 56u: goto L_0887A590;
    case 57u: goto L_0887A5A4;
    case 58u: goto L_0887A5AC;
    case 59u: goto L_0887A5B4;
    case 60u: goto L_0887A5C0;
    case 61u: goto L_0887A5CC;
    case 62u: goto L_0887A5E0;
    case 63u: goto L_0887A604;
    case 64u: goto L_0887A60C;
    case 65u: goto L_0887A620;
    case 66u: goto L_0887A630;
    case 67u: goto L_0887A63C;
    case 68u: goto L_0887A64C;
    case 69u: goto L_0887A654;
    case 70u: goto L_0887A678;
    case 71u: goto L_0887A690;
    case 72u: goto L_0887A694;
    case 73u: goto L_0887A6A8;
    case 74u: goto L_0887A6B4;
    case 75u: goto L_0887A6C8;
    case 76u: goto L_0887A6E0;
    case 77u: goto L_0887A6EC;
    case 78u: goto L_0887A6F4;
    case 79u: goto L_0887A6FC;
    case 80u: goto L_0887A704;
    case 81u: goto L_0887A710;
    case 82u: goto L_0887A718;
    case 83u: goto L_0887A72C;
    case 84u: goto L_0887A734;
    case 85u: goto L_0887A744;
    case 86u: goto L_0887A74C;
    case 87u: goto L_0887A764;
    case 88u: goto L_0887A788;
    case 89u: goto L_0887A798;
    case 90u: goto L_0887A7A0;
    case 91u: goto L_0887A7B4;
    case 92u: goto L_0887A7C0;
    case 93u: goto L_0887A7D0;
    case 94u: goto L_0887A7D8;
    case 95u: goto L_0887A7F0;
    case 96u: goto L_0887A7FC;
    case 97u: goto L_0887A804;
    case 98u: goto L_0887A814;
    case 99u: goto L_0887A834;
    case 100u: goto L_0887A83C;
    case 101u: goto L_0887A84C;
    case 102u: goto L_0887A854;
    case 103u: goto L_0887A86C;
    case 104u: goto L_0887A878;
    case 105u: goto L_0887A880;
    case 106u: goto L_0887A88C;
    case 107u: goto L_0887A898;
    case 108u: goto L_0887A8A4;
    case 109u: goto L_0887A8AC;
    case 110u: goto L_0887A8B8;
    case 111u: goto L_0887A8CC;
    case 112u: goto L_0887A8D4;
    case 113u: goto L_0887A8DC;
    case 114u: goto L_0887A8F8;
    case 115u: goto L_0887A900;
    case 116u: goto L_0887A910;
    case 117u: goto L_0887A918;
    case 118u: goto L_0887A94C;
    case 119u: goto L_0887A96C;
    case 120u: goto L_0887A990;
    case 121u: goto L_0887A9A4;
    case 122u: goto L_0887A9C4;
    case 123u: goto L_0887A9E0;
    case 124u: goto L_0887A9FC;
    case 125u: goto L_0887AA18;
    case 126u: goto L_0887AA34;
    case 127u: goto L_0887AA50;
    case 128u: goto L_0887AA6C;
    case 129u: goto L_0887AA88;
    case 130u: goto L_0887AAA4;
    case 131u: goto L_0887AAC0;
    case 132u: goto L_0887AADC;
    case 133u: goto L_0887AAF8;
    case 134u: goto L_0887AB14;
    case 135u: goto L_0887AB30;
    case 136u: goto L_0887AB4C;
    case 137u: goto L_0887AB68;
    case 138u: goto L_0887AB84;
    case 139u: goto L_0887ABA0;
    case 140u: goto L_0887ABBC;
    case 141u: goto L_0887ABD8;
    case 142u: goto L_0887ABF4;
    case 143u: goto L_0887AC10;
    case 144u: goto L_0887AC2C;
    case 145u: goto L_0887AC48;
    case 146u: goto L_0887AC64;
    case 147u: goto L_0887AC80;
    case 148u: goto L_0887ACA0;
    case 149u: goto L_0887ACC8;
    case 150u: goto L_0887ACDC;
    case 151u: goto L_0887AD00;
    case 152u: goto L_0887AD1C;
    case 153u: goto L_0887AD38;
    case 154u: goto L_0887AD54;
    case 155u: goto L_0887AD70;
    case 156u: goto L_0887AD8C;
    case 157u: goto L_0887ADA8;
    case 158u: goto L_0887ADC4;
    case 159u: goto L_0887ADE0;
    case 160u: goto L_0887ADFC;
    case 161u: goto L_0887AE18;
    case 162u: goto L_0887AE34;
    case 163u: goto L_0887AE50;
    case 164u: goto L_0887AE6C;
    case 165u: goto L_0887AE88;
    case 166u: goto L_0887AEA4;
    case 167u: goto L_0887AEC0;
    case 168u: goto L_0887AEDC;
    case 169u: goto L_0887AEF8;
    case 170u: goto L_0887AF14;
    case 171u: goto L_0887AF30;
    case 172u: goto L_0887AF4C;
    case 173u: goto L_0887AF68;
    case 174u: goto L_0887AF84;
    case 175u: goto L_0887AFA0;
    case 176u: goto L_0887AFB8;
    case 177u: goto L_0887AFCC;
    case 178u: goto L_0887AFE4;
    case 179u: goto L_0887AFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0887A000:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A014u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8516));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A014u) goto L_0887A014;
    return;
L_0887A014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A038u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8540));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A038u) goto L_0887A038;
    return;
L_0887A038:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A058u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8564));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A058u) goto L_0887A058;
    return;
L_0887A058:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A078u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8588));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A078u) goto L_0887A078;
    return;
L_0887A078:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A098u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8616));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A098u) goto L_0887A098;
    return;
L_0887A098:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A0B8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8644));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A0B8u) goto L_0887A0B8;
    return;
L_0887A0B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A0D8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8668));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A0D8u) goto L_0887A0D8;
    return;
L_0887A0D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A0F8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8692));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A0F8u) goto L_0887A0F8;
    return;
L_0887A0F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0887A3B0;
      }
      goto L_0887A10C;
    }
L_0887A10C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887A260;
      }
      goto L_0887A118;
    }
L_0887A118:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A3A0;
      }
      goto L_0887A120;
    }
L_0887A120:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[23]);
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A140u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8496));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A140u) goto L_0887A140;
    return;
L_0887A140:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A164u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8516));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A164u) goto L_0887A164;
    return;
L_0887A164:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A184u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8540));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A184u) goto L_0887A184;
    return;
L_0887A184:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A1ACu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8564));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A1ACu) goto L_0887A1AC;
    return;
L_0887A1AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A1CCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8588));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A1CCu) goto L_0887A1CC;
    return;
L_0887A1CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A1ECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8616));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A1ECu) goto L_0887A1EC;
    return;
L_0887A1EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A20Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8644));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A20Cu) goto L_0887A20C;
    return;
L_0887A20C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A22Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8668));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A22Cu) goto L_0887A22C;
    return;
L_0887A22C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A24Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8692));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A24Cu) goto L_0887A24C;
    return;
L_0887A24C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0887A3B0;
      }
      goto L_0887A260;
    }
L_0887A260:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[23]);
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A280u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8496));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A280u) goto L_0887A280;
    return;
L_0887A280:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A2A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8516));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A2A4u) goto L_0887A2A4;
    return;
L_0887A2A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A2CCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8540));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A2CCu) goto L_0887A2CC;
    return;
L_0887A2CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A2ECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8564));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A2ECu) goto L_0887A2EC;
    return;
L_0887A2EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A30Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8588));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A30Cu) goto L_0887A30C;
    return;
L_0887A30C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A32Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8616));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A32Cu) goto L_0887A32C;
    return;
L_0887A32C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A34Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8644));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A34Cu) goto L_0887A34C;
    return;
L_0887A34C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A36Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8668));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A36Cu) goto L_0887A36C;
    return;
L_0887A36C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A38Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8692));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A38Cu) goto L_0887A38C;
    return;
L_0887A38C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0887A3B0;
      }
      goto L_0887A3A0;
    }
L_0887A3A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[20]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    goto L_0887A3B0;
L_0887A3B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887A3C8u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A3C8u) goto L_0887A3C8;
    return;
L_0887A3C8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887A3D4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0887A3D4u) goto L_0887A3D4;
    return;
L_0887A3D4:
    aot_gpr[4] = (0u | 77u);
    aot_gpr[31] = (0x0887A3E0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887A3E0u) goto L_0887A3E0;
    return;
L_0887A3E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[2]);
    aot_gpr[4] = (0u | 73u);
    aot_gpr[31] = (0x0887A3F0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887A3F0u) goto L_0887A3F0;
    return;
L_0887A3F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[2]);
    aot_gpr[4] = (0u | 76u);
    aot_gpr[31] = (0x0887A400u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887A400u) goto L_0887A400;
    return;
L_0887A400:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[2]);
    aot_gpr[4] = (0u | 79u);
    aot_gpr[31] = (0x0887A410u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887A410u) goto L_0887A410;
    return;
L_0887A410:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[2]);
    aot_gpr[4] = (0u | 74u);
    aot_gpr[31] = (0x0887A420u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887A420u) goto L_0887A420;
    return;
L_0887A420:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[2]);
    aot_gpr[4] = (0u | 78u);
    aot_gpr[31] = (0x0887A430u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887A430u) goto L_0887A430;
    return;
L_0887A430:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[2]);
    aot_gpr[4] = (0u | 75u);
    aot_gpr[31] = (0x0887A440u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887A440u) goto L_0887A440;
    return;
L_0887A440:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[2]);
    aot_gpr[4] = (0u | 80u);
    aot_gpr[31] = (0x0887A450u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887A450u) goto L_0887A450;
    return;
L_0887A450:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[30] = (aot_gpr[29] | 0u);
    goto L_0887A468;
L_0887A468:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0887A60C;
      }
      goto L_0887A478;
    }
L_0887A478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0887A534;
      }
      goto L_0887A490;
    }
L_0887A490:
    aot_gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (0u | 1000u);
    aot_gpr[9] = (0u | 60000u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[8] = (0u | 60u);
    aot_gpr[10] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[10]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_gpr[18] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[17] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887A504;
      }
      goto L_0887A4F8;
    }
L_0887A4F8:
    aot_gpr[18] = (0u | 99u);
    aot_gpr[17] = (0u | 59u);
    aot_gpr[16] = (aot_gpr[18] | 0u);
    goto L_0887A504;
L_0887A504:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[7]);
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x0887A514u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887A514u) goto L_0887A514;
    return;
L_0887A514:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887A52Cu);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0887A52Cu) goto L_0887A52C;
    return;
L_0887A52C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A550;
      }
      goto L_0887A534;
    }
L_0887A534:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[7]);
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x0887A544u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887A544u) goto L_0887A544;
    return;
L_0887A544:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0887A550u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0887A550u) goto L_0887A550;
    return;
L_0887A550:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0887A560u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0887A560u) goto L_0887A560;
    return;
L_0887A560:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[23]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0887A580u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0887A580u) goto L_0887A580;
    return;
L_0887A580:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0887A590u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0887A590u) goto L_0887A590;
    return;
L_0887A590:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[31] = (0x0887A5A4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A5A4u) goto L_0887A5A4;
    return;
L_0887A5A4:
    aot_gpr[31] = (0x0887A5ACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0887A5ACu) goto L_0887A5AC;
    return;
L_0887A5AC:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0887A604;
      }
      goto L_0887A5B4;
    }
L_0887A5B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0887A604;
      }
      goto L_0887A5C0;
    }
L_0887A5C0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887A5CCu);
    aot_gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0887A5CCu) goto L_0887A5CC;
    return;
L_0887A5CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(212)));
    aot_gpr[31] = (0x0887A5E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 204u, 0x08893DACu>(ctx, &aot_mem) && ctx.pc == 0x0887A5E0u) goto L_0887A5E0;
    return;
L_0887A5E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0887A604u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 106u, 0x0888C608u>(ctx, &aot_mem) && ctx.pc == 0x0887A604u) goto L_0887A604;
    return;
L_0887A604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A64C;
      }
      goto L_0887A60C;
    }
L_0887A60C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0887A620u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0887A620u) goto L_0887A620;
    return;
L_0887A620:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887A630u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0887A630u) goto L_0887A630;
    return;
L_0887A630:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x0887A63Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0887A63Cu) goto L_0887A63C;
    return;
L_0887A63C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0887A64Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0887A64Cu) goto L_0887A64C;
    return;
L_0887A64C:
    aot_gpr[31] = (0x0887A654u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A654u) goto L_0887A654;
    return;
L_0887A654:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[21] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887A468;
      }
      goto L_0887A678;
    }
L_0887A678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_0887A694;
      }
      goto L_0887A690;
    }
L_0887A690:
    aot_gpr[4] = (0u | 0u);
    goto L_0887A694;
L_0887A694:
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0887A6A8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A6A8u) goto L_0887A6A8;
    return;
L_0887A6A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887A6B4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 123u, 0x0888C790u>(ctx, &aot_mem) && ctx.pc == 0x0887A6B4u) goto L_0887A6B4;
    return;
L_0887A6B4:
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (2218u << 16u);
      if (branch_taken) {
          goto L_0887A6EC;
      }
      goto L_0887A6C8;
    }
L_0887A6C8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0887A6E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8720));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0887A6E0u) goto L_0887A6E0;
    return;
L_0887A6E0:
    aot_gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887A6F4;
      }
      goto L_0887A6EC;
    }
L_0887A6EC:
    aot_gpr[4] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0887A6F4;
L_0887A6F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A880;
      }
      goto L_0887A6FC;
    }
L_0887A6FC:
    aot_gpr[31] = (0x0887A704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x0887A704u) goto L_0887A704;
    return;
L_0887A704:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_0887A72C;
    }
    goto L_0887A710;
L_0887A710:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887A744;
      }
      goto L_0887A718;
    }
L_0887A718:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887A744;
      }
      goto L_0887A72C;
    }
L_0887A72C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A744;
      }
      goto L_0887A734;
    }
L_0887A734:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0887A744;
L_0887A744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A880;
      }
      goto L_0887A74C;
    }
L_0887A74C:
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8484));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A764u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A764u) goto L_0887A764;
    return;
L_0887A764:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A804;
      }
      goto L_0887A788;
    }
L_0887A788:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A798u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A798u) goto L_0887A798;
    return;
L_0887A798:
    aot_gpr[31] = (0x0887A7A0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x0887A7A0u) goto L_0887A7A0;
    return;
L_0887A7A0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A7FC;
      }
      goto L_0887A7B4;
    }
L_0887A7B4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0887A7C0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 121u, 0x08879990u>(ctx, &aot_mem) && ctx.pc == 0x0887A7C0u) goto L_0887A7C0;
    return;
L_0887A7C0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A7D0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A7D0u) goto L_0887A7D0;
    return;
L_0887A7D0:
    aot_gpr[31] = (0x0887A7D8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0887A7D8u) goto L_0887A7D8;
    return;
L_0887A7D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(308), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(312), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0887A7F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8764));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0887A7F0u) goto L_0887A7F0;
    return;
L_0887A7F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_0887A7FC;
L_0887A7FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A880;
      }
      goto L_0887A804;
    }
L_0887A804:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A814u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A814u) goto L_0887A814;
    return;
L_0887A814:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A880;
      }
      goto L_0887A834;
    }
L_0887A834:
    aot_gpr[31] = (0x0887A83Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x0887A83Cu) goto L_0887A83C;
    return;
L_0887A83C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0887A86C;
      }
      goto L_0887A84C;
    }
L_0887A84C:
    aot_gpr[31] = (0x0887A854u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x0887A854u) goto L_0887A854;
    return;
L_0887A854:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887A880;
      }
      goto L_0887A86C;
    }
L_0887A86C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[4]);
    aot_gpr[31] = (0x0887A878u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 118u, 0x08879954u>(ctx, &aot_mem) && ctx.pc == 0x0887A878u) goto L_0887A878;
    return;
L_0887A878:
    aot_gpr[31] = (0x0887A880u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 85u, 0x08893694u>(ctx, &aot_mem) && ctx.pc == 0x0887A880u) goto L_0887A880;
    return;
L_0887A880:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887A8DC;
      }
      goto L_0887A88C;
    }
L_0887A88C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_0887A8B8;
      }
      goto L_0887A898;
    }
L_0887A898:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A8A4u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A8A4u) goto L_0887A8A4;
    return;
L_0887A8A4:
    aot_gpr[31] = (0x0887A8ACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0887A8ACu) goto L_0887A8AC;
    return;
L_0887A8AC:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887A8DC;
      }
      goto L_0887A8B8;
    }
L_0887A8B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A8CCu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A8CCu) goto L_0887A8CC;
    return;
L_0887A8CC:
    aot_gpr[31] = (0x0887A8D4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0887A8D4u) goto L_0887A8D4;
    return;
L_0887A8D4:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0887A900;
      }
      goto L_0887A8DC;
    }
L_0887A8DC:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(8484));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0887A8F8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A8F8u) goto L_0887A8F8;
    return;
L_0887A8F8:
    aot_gpr[31] = (0x0887A900u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0887A900u) goto L_0887A900;
    return;
L_0887A900:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887A910u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A910u) goto L_0887A910;
    return;
L_0887A910:
    aot_gpr[31] = (0x0887A918u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0887A918u) goto L_0887A918;
    return;
L_0887A918:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A94C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25608), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A96C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0887A990u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8824));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0887A990u) goto L_0887A990;
    return;
L_0887A990:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887A9A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887A9A4u) goto L_0887A9A4;
    return;
L_0887A9A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887A9C4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8856));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887A9C4u) goto L_0887A9C4;
    return;
L_0887A9C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887A9E0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8880));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887A9E0u) goto L_0887A9E0;
    return;
L_0887A9E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887A9FCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8904));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887A9FCu) goto L_0887A9FC;
    return;
L_0887A9FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AA18u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8928));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AA18u) goto L_0887AA18;
    return;
L_0887AA18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AA34u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8944));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AA34u) goto L_0887AA34;
    return;
L_0887AA34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AA50u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8964));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AA50u) goto L_0887AA50;
    return;
L_0887AA50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AA6Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8984));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AA6Cu) goto L_0887AA6C;
    return;
L_0887AA6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AA88u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9000));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AA88u) goto L_0887AA88;
    return;
L_0887AA88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AAA4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9016));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AAA4u) goto L_0887AAA4;
    return;
L_0887AAA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AAC0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9028));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AAC0u) goto L_0887AAC0;
    return;
L_0887AAC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AADCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9040));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AADCu) goto L_0887AADC;
    return;
L_0887AADC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AAF8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9060));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AAF8u) goto L_0887AAF8;
    return;
L_0887AAF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AB14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9076));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AB14u) goto L_0887AB14;
    return;
L_0887AB14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AB30u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9088));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AB30u) goto L_0887AB30;
    return;
L_0887AB30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AB4Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9100));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AB4Cu) goto L_0887AB4C;
    return;
L_0887AB4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AB68u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9112));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AB68u) goto L_0887AB68;
    return;
L_0887AB68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AB84u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9128));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AB84u) goto L_0887AB84;
    return;
L_0887AB84:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887ABA0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9140));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887ABA0u) goto L_0887ABA0;
    return;
L_0887ABA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887ABBCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9152));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887ABBCu) goto L_0887ABBC;
    return;
L_0887ABBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887ABD8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9168));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887ABD8u) goto L_0887ABD8;
    return;
L_0887ABD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887ABF4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9188));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887ABF4u) goto L_0887ABF4;
    return;
L_0887ABF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AC10u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9204));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AC10u) goto L_0887AC10;
    return;
L_0887AC10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AC2Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9216));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AC2Cu) goto L_0887AC2C;
    return;
L_0887AC2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AC48u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9232));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AC48u) goto L_0887AC48;
    return;
L_0887AC48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AC64u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9252));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AC64u) goto L_0887AC64;
    return;
L_0887AC64:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AC80u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9268));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AC80u) goto L_0887AC80;
    return;
L_0887AC80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887ACA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0887ACC8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8824));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0887ACC8u) goto L_0887ACC8;
    return;
L_0887ACC8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887ACDCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887ACDCu) goto L_0887ACDC;
    return;
L_0887ACDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887AD00u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8856));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AD00u) goto L_0887AD00;
    return;
L_0887AD00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AD1Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8880));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AD1Cu) goto L_0887AD1C;
    return;
L_0887AD1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AD38u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8904));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AD38u) goto L_0887AD38;
    return;
L_0887AD38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AD54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8928));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AD54u) goto L_0887AD54;
    return;
L_0887AD54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AD70u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8944));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AD70u) goto L_0887AD70;
    return;
L_0887AD70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AD8Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8964));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AD8Cu) goto L_0887AD8C;
    return;
L_0887AD8C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887ADA8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8984));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887ADA8u) goto L_0887ADA8;
    return;
L_0887ADA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887ADC4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9000));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887ADC4u) goto L_0887ADC4;
    return;
L_0887ADC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887ADE0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9016));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887ADE0u) goto L_0887ADE0;
    return;
L_0887ADE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887ADFCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9028));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887ADFCu) goto L_0887ADFC;
    return;
L_0887ADFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AE18u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9040));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AE18u) goto L_0887AE18;
    return;
L_0887AE18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AE34u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9060));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AE34u) goto L_0887AE34;
    return;
L_0887AE34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AE50u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9076));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AE50u) goto L_0887AE50;
    return;
L_0887AE50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AE6Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9088));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AE6Cu) goto L_0887AE6C;
    return;
L_0887AE6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AE88u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9100));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AE88u) goto L_0887AE88;
    return;
L_0887AE88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AEA4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9112));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AEA4u) goto L_0887AEA4;
    return;
L_0887AEA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AEC0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9140));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AEC0u) goto L_0887AEC0;
    return;
L_0887AEC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AEDCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9168));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AEDCu) goto L_0887AEDC;
    return;
L_0887AEDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AEF8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9188));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AEF8u) goto L_0887AEF8;
    return;
L_0887AEF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AF14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9204));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AF14u) goto L_0887AF14;
    return;
L_0887AF14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AF30u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9216));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AF30u) goto L_0887AF30;
    return;
L_0887AF30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AF4Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9232));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AF4Cu) goto L_0887AF4C;
    return;
L_0887AF4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AF68u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9252));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AF68u) goto L_0887AF68;
    return;
L_0887AF68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AF84u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9268));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AF84u) goto L_0887AF84;
    return;
L_0887AF84:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0887AFA0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9152));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AFA0u) goto L_0887AFA0;
    return;
L_0887AFA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0887AFB8u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0887AFB8u) goto L_0887AFB8;
    return;
L_0887AFB8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887AFCCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9128));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0887AFCCu) goto L_0887AFCC;
    return;
L_0887AFCC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0887AFE4u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0887AFE4u) goto L_0887AFE4;
    return;
L_0887AFE4:
    aot_gpr[31] = (0x0887AFECu);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 128u, 0x089438FCu>(ctx, &aot_mem) && ctx.pc == 0x0887AFECu) goto L_0887AFEC;
    return;
L_0887AFEC:
    aot_gpr[4] = (17191u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17168u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 2u, 0x0887B00Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 1u, 0x0887B000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0118(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0118_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_118(Runtime &runtime) {
    runtime.register_generated_unit(118u, 0x0887A000u, 4096u, &recomp_unit_0118, &recomp_unit_0118_entry);
    runtime.register_function(0x0887A000u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A014u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A038u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A058u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A078u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A098u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A0B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A0D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A0F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A10Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A118u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A120u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A140u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A164u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A184u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A1ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A1CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A1ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A20Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A22Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A24Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A260u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A280u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A2A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A2CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A2ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A30Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A32Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A34Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A36Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A38Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A3A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A3B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A3C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A3D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A3E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A3F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A400u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A410u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A420u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A430u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A440u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A450u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A468u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A478u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A490u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A4F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A504u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A514u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A52Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A534u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A544u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A550u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A560u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A580u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A590u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A5A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A5ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A5B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A5C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A5CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A5E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A604u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A60Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A620u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A630u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A63Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A64Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A654u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A678u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A690u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A694u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A6A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A6B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A6C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A6E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A6ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A6F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A6FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A704u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A710u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A718u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A72Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A734u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A744u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A74Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A764u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A788u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A798u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A7A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A7B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A7C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A7D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A7D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A7F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A7FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A804u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A814u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A834u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A83Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A84Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A854u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A86Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A878u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A880u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A88Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A898u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A8A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A8ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A8B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A8CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A8D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A8DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A8F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A900u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A910u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A918u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A94Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A96Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A990u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A9A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A9C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A9E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887A9FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AA18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AA34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AA50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AA6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AA88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AAA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AAC0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AADCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AAF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AB14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AB30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AB4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AB68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AB84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887ABA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887ABBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887ABD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887ABF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AC10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AC2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AC48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AC64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AC80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887ACA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887ACC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887ACDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AD00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AD1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AD38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AD54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AD70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AD8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887ADA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887ADC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887ADE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887ADFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AE18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AE34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AE50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AE6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AE88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AEA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AEC0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AEDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AEF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AF14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AF30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AF4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AF68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AF84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AFA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AFB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AFCCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AFE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x0887AFECu, &recomp_unit_0118, "recomp_unit_0118");
}
} // namespace psprecomp
